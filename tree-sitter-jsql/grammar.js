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
      repeat($.sql_cte),
      $.sql_select,
    ),

    sql_cte: $ => seq(
      sql_kw('with'),
      repeat(
        seq(
          $.sql_identifier,
          sql_kw('as'),
          '(',
          $.sql_select,
          ')',
          optional(',')
        )
      )
    ),

    sql_select: $ => seq(
      sql_kw('select'),
      $.sql_column_list,
      $.sql_from_clause,
    ),

    sql_identifier: $ => token(new RegExp(
        '[a-zA-Z_]'     + // starts with a lower or upper letter or an underscore
        '[a-zA-Z0-9_]*'   // all following characters must be a lower or upper letter, digit, or underscore.
    )),

    sql_column_list: $ => '*',

    sql_from_clause: $ => seq(
      sql_kw('from'),
      field('table', choice(
        $.jinja_block,
        $.sql_table_name,
      ))
    ),

    sql_table_name: $ => $.sql_identifier,

    sql_identifier: $ => /[a-zA-Z0-9_]+/,
  }
});
