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
const UNION_PREC = {
  UNION: 1,
  EXCEPT: 1,
  INTERSECT: 2,
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
    source_file: $ => seq(
      repeat(
        choice(
          $.jinja_expression,
          $.jinja_statement,
          $.jinja_comment,
        )
      ),
      $.sql_statement,
    ),

    jinja_expression: $ => seq(
      '{{',
      $._jinja_expr,
      '}}'
    ),

    jinja_statement: $ => seq(
      '{%',
      $._jinja_expr,
      '%}'
    ),

    jinja_comment: $ => seq(
      '{#',
      $._jinja_expr,
      '#}'
    ),

    _jinja_expr: $ => choice(
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
                $._jinja_expr,
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
        optional(commaSep1($._jinja_expr)),
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
        field('value', $._jinja_expr)
    ),

    jinja_kwarg: $ => seq(
        field("key", $.jinja_identifier),
        '=',
        field("value", $._jinja_expr),
    ),

    // This regex is fine until we allow user-named variables and functions. 
    // Once we do that we may want to allow Unicode identifiers like python does: /[_\p{XID_Start}][_\p{XID_Continue}]*/
    jinja_identifier: $ => token(new RegExp(
        '[a-zA-Z_]'     + // starts with a lower or upper letter or an underscore
        '[a-zA-Z0-9_]*'   // all following characters must be a lower or upper letter, digit, or underscore.
    )),

    sql_statement: $ => choice(
      $.sql_select_statement,
      $.sql_union_statement,
      $.sql_intersect_statement,
      $.sql_except_statement,
    ),

    sql_union_statement: $ => prec.left(
      UNION_PREC.UNION, 
      seq(
        $.sql_statement,
        sql_kw('union'),
        optional(sql_kw('all')),
        $.sql_statement,
      )
    ),

    sql_intersect_statement: $ => prec.left(
      UNION_PREC.INTERSECT,
      seq(
        $.sql_statement,
        sql_kw('intersect'),
        optional(sql_kw('all')),
        $.sql_statement,
      )
    ),

    sql_except_statement: $ => prec.left(
      UNION_PREC.EXCEPT,
      seq(
        $.sql_statement,
        sql_kw('except'),
        optional(sql_kw('all')),
        $.sql_statement,
      )
    ),

    sql_select_statement: $ => seq(
      optional($.sql_with_clause),
      $.sql_select_clause,
      optional($.sql_from_clause),
      optional($.sql_where_clause),
      optional($.sql_group_by_clause),
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
      choice(
        $.sql_cte_name,
        $.sql_cte_recursive_name,
      ),
      sql_kw('as'),
      '(',
      $.sql_statement,
      ')',
    ),

    sql_cte_recursive_name: $ => seq(
      sql_kw('recursive'),
      $.sql_cte_name,
      '(',
      $.sql_column_list,
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
        $._sql_expr,
        repeat(
          seq(
            ',',
            $._sql_expr,
          )
        )
      )
    ),

    sql_from_clause: $ => seq(
      sql_kw('from'),
      $.sql_table_list,
    ),

    sql_table_list: $ => seq(
      choice(
        $.jinja_expression,
        $.sql_table_name,
      ),
      repeat(
        seq(
          ',',
          choice(
            $.jinja_expression,
            $.sql_table_name,
          ),
        )
      )
    ),

    sql_where_clause: $ => seq(
      sql_kw('where'),
      $.sql_where_expression,
    ),

    sql_where_expression: $ => seq(
      $._sql_expr,
    ),

    sql_order_by_clause: $ => seq(
      sql_kw('order by'),
      $.sql_order_by_expression,
    ),

    sql_order_by_expression: $ => seq(
      $.sql_identifier,
      repeat(
        seq(',', $.sql_identifier)
      )
    ),

    sql_group_by_clause: $ => seq(
      sql_kw('group by'),
      $.sql_group_by_expression,
    ),

    sql_group_by_expression: $ => seq(
      $.sql_identifier,
      repeat(
        seq(',', $.sql_identifier)
      )
    ),

    sql_limit_clause: $ => seq(
      sql_kw('limit'),
      $.sql_limit_expression,
    ),

    sql_limit_expression: $ => choice(
      $.sql_integer,
    ),

    _sql_expr: $ => choice(
      $.sql_identifier,
      $.sql_dotted_identifier,
      $.sql_alias,
      $.sql_fn,
      $.sql_string,
      $.sql_binary_expr,
      $.sql_boolean_expr,
      $.sql_in_expr,
      $.sql_parens,
    ),

    sql_parens: $ => seq(
      '(',
      $._sql_expr,
      ')',
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
              field("left", $._sql_expr),
              field("operator", operator),
              field("right", $._sql_expr),
            ),
          ),
        ),
      );
    },

    sql_boolean_expr: $ => choice(
      prec.left(PREC.unary, seq(sql_kw('not'), $._sql_expr)),
      prec.left(PREC.and, seq($._sql_expr, sql_kw('and'), $._sql_expr)),
      prec.left(PREC.or, seq($._sql_expr, sql_kw('or'), $._sql_expr)),
    ),

    sql_in_expr: $ => seq(
      $._sql_expr,
      sql_kw('in'),
      '(',
      $.sql_statement,
      ')',
    ),

    sql_alias: $ => seq(
      $._sql_expr,
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
      $._sql_expr,
      repeat(
        seq(
          ',',
          $._sql_expr
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

    sql_dotted_identifier: $ => seq(
      $.sql_identifier,
      '.',
      $.sql_identifier,
      optional(seq('.',$.sql_identifier))
    ),

    sql_integer: $ => /[0-9]+/,

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(
      choice(seq("--", /.*/), seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
    ),
  }
});
