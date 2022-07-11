const PREC = {
  primary: 8,
  unary: 7,
  exp: 6,
  multiplicative: 5,
  additive: 4,
  comparative: 3,
  and: 2,
  or: 1,
};
const multiplicative_operators = ["*", "/", "%", "<<", ">>", "&"];
const additive_operators = ["+", "-", "|", "#"];
const comparative_operators = [
  "<",
  "<=",
  "<>",
  "!=",
  "=",
  ">",
  ">=",
  "~",
  "!~",
  "~*",
  "!~*",
];

function sql_kw(word) {
    //return word // when debuging
    return alias(reserved(caseInsensitive(word)), word)
}

function reserved(regex) {
    return token(prec(1, new RegExp(regex)))
}

function caseInsensitive(word) {
    return word.split('')
        .map(letter => `[${letter}${letter.toUpperCase()}]`)
        .join('')
}

function commaSep1(rule) {
    return sep1(rule, ',');
}

function sep1(rule, separator) {
    return seq(rule, repeat(seq(separator, rule)))
}

module.exports = grammar({
  name: 'jsql', 

  extras: $ => [$.comment, /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/],
  externals: $ => [
    // $._dollar_quoted_string_tag,
    // $._dollar_quoted_string_content,
    // $._dollar_quoted_string_end_tag,
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => choice(
      seq(
        $.jinja_block,
        $.sql_select_statement,
      ),
      $.sql_select_statement,
    ),

    jinja_block: $ => seq(
      '{{',
      $.jinja_expr,
      '}}'
    ),

    jinja_expr: $ => choice(
        $.jinja_fn_call,
        $.jinja_list,
        $.jinja_dict,
        $.jinja_lit_string,
        $.jinja_bool,
    ),

    jinja_fn_call: $ => seq(
      field('jinja_fn_name', $.jinja_identifier),
      field('jinja_argument_list', $.jinja_argument_list)
    ),

    jinja_argument_list: $ => seq(
        '(',
        optional(commaSep1(
            choice(
                $.jinja_expr,
                $.jinja_kwarg
            )
        )),
        optional(','),
        ')'
    ),

    jinja_lit_string: $ => choice(
        seq(
            "'",            // single quote string start
            /([^']|\\')*/,  // either not a `'` or a `\` followed by a `'` zero or more times
            "'",            // single quote string start
        ),
        seq(
            '"',            // double quote string start
            /([^"]|\\")*/,  // either not a `"` or a `\` followed by a `"` zero or more times
            '"',            // double quote string start
        )
    ),

    jinja_bool: $ => choice(
        'True',
        'False'
    ),

    jinja_list: $ => seq(
        '[',
        optional(commaSep1($.jinja_expr)),
        optional(','),
        ']'
    ),

    jinja_dict: $ => seq(
        '{',
        optional(commaSep1($.jinja_pair)),
        optional(','),
        '}'
    ),

    jinja_pair: $ => seq(
        field('key', $.jinja_lit_string),
        ':',
        field('value', $.jinja_expr)
    ),

    jinja_kwarg: $ => seq(
        field("key", $.jinja_identifier),
        '=',
        field("value", $.jinja_expr),
    ),

    // This regex is fine until we allow user-named variables and functions. 
    // Once we do that we may want to allow Unicode identifiers like python does: /[_\p{XID_Start}][_\p{XID_Continue}]*/
    jinja_identifier: $ => token(new RegExp(
        '[a-zA-Z_]'     + // starts with a lower or upper letter or an underscore
        '[a-zA-Z0-9_]*'   // all following characters must be a lower or upper letter, digit, or underscore.
    )),

    sql_select_statement: $ => seq(
      optional($.sql_with_clause),
      $.sql_select_clause,
      optional($.sql_from_clause),
      optional($.sql_where_clause),
      optional($.sql_order_by_clause),
      optional($.sql_limit_clause),
    ),

    sql_with_clause: $ => seq(
      sql_kw('with'),
      $.sql_cte,
      repeat(
        seq(
          ',',
          $.sql_cte
        )
      )
    ),

    sql_cte: $ => seq(
      $.sql_cte_name,
      sql_kw('as'),
      '(',
      $.sql_select_statement,
      ')',
    ),

    sql_cte_name: $ => $.sql_identifier,

    sql_select_clause: $ => prec.right(
      seq(
        sql_kw('select'),
        $.sql_column_list,
      ),
    ),

    sql_identifier: $ => token(new RegExp(
        '[a-zA-Z_]'     + // starts with a lower or upper letter or an underscore
        '[a-zA-Z0-9_]*'   // all following characters must be a lower or upper letter, digit, or underscore.
    )),

    sql_column_list: $ => choice(
      '*',
      seq(
        $.sql_expr,
        repeat(
          seq(
            ',',
            $.sql_expr,
          )
        )
      )
    ),

    sql_from_clause: $ => seq(
      sql_kw('from'),
      choice(
        $.jinja_block,
        $.sql_table_name,
      ),
      repeat(
        seq(
          ',',
          choice(
            $.jinja_block,
            $.sql_table_name,
          ),
        )
      )
    ),

    sql_where_clause: $ => seq(
      sql_kw('where'),
      $.sql_expr,
    ),

    sql_order_by_clause: $ => seq(
      sql_kw('order'),
      sql_kw('by'),
      $.sql_order_by_expression,
    ),

    sql_order_by_expression: $ => seq(
      $.sql_identifier,
      repeat(
        seq(',', $.sql_identifier)
      )
    ),

    sql_limit_clause: $ => seq(
      sql_kw('limit'),
      $.sql_integer,
    ),

    sql_expr: $ => choice(
      $.sql_identifier,
      $.sql_alias,
      $.sql_fn,
      $.sql_string,
      $.sql_binary_expr,
      $.sql_boolean_expr,
    ),

    sql_string: $ => //choice(
      seq("'", field("content", alias(/(''|[^'])*/, $.content)), "'"),
    //   seq(
    //     $._dollar_quoted_string_tag,
    //     field("content", alias($._dollar_quoted_string_content, $.content)),
    //     $._dollar_quoted_string_end_tag,
    //   ),
    // ),

    sql_binary_expr: $ => {
      const table = [
        [PREC.exp, "^"],
        [PREC.multiplicative, choice(...multiplicative_operators)],
        [PREC.additive, choice(...additive_operators)],
        [PREC.comparative, choice(...comparative_operators)],
      ];

      return choice(
        ...table.map(([precedence, operator]) =>
          prec.left(
            precedence,
            seq(
              field("left", $.sql_expr),
              field("operator", operator),
              field("right", $.sql_expr),
            ),
          ),
        ),
      );
    },

    sql_boolean_expr: $ => choice(
      prec.left(PREC.unary, seq(sql_kw('not'), $.sql_expr)),
      prec.left(PREC.and, seq($.sql_expr, sql_kw('and'), $.sql_expr)),
      prec.left(PREC.or, seq($.sql_expr, sql_kw('or'), $.sql_expr)),
    ),

    sql_alias: $ => seq(
      $.sql_expr,
      sql_kw('as'),
      $.sql_identifier
    ),

    sql_fn: $ => seq(
      $.sql_identifier,
      '(',
      $.sql_arg_list,
      ')',
    ),

    sql_arg_list: $ => seq(
      $.sql_expr,
      repeat(
        seq(
          ',',
          $.sql_expr
        )
      )
    ),

    sql_table_name: $ => seq(
      $.sql_identifier,
      optional(
        seq(
          optional(sql_kw('as')),
          $.sql_identifier,
        )
      )
    ),

    sql_identifier: $ => /[a-zA-Z0-9_]+/,

    sql_integer: $ => /[0-9]+/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(
      choice(seq("--", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
    ),
  }
});
