#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 271
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 119
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_LBRACE_PERCENT = 3,
  anon_sym_PERCENT_RBRACE = 4,
  anon_sym_LBRACE_POUND = 5,
  anon_sym_POUND_RBRACE = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_jinja_lit_string_token1 = 11,
  anon_sym_DQUOTE = 12,
  aux_sym_jinja_lit_string_token2 = 13,
  anon_sym_True = 14,
  anon_sym_False = 15,
  anon_sym_LBRACK = 16,
  anon_sym_RBRACK = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_COLON = 20,
  anon_sym_EQ = 21,
  sym_jinja_identifier = 22,
  aux_sym_sql_union_statement_token1 = 23,
  aux_sym_sql_union_statement_token2 = 24,
  aux_sym_sql_intersect_statement_token1 = 25,
  aux_sym_sql_except_statement_token1 = 26,
  aux_sym_sql_with_clause_token1 = 27,
  aux_sym_sql_cte_token1 = 28,
  aux_sym_sql_cte_recursive_name_token1 = 29,
  aux_sym_sql_select_clause_token1 = 30,
  sym_sql_identifier = 31,
  anon_sym_STAR = 32,
  aux_sym_sql_from_clause_token1 = 33,
  aux_sym_sql_where_clause_token1 = 34,
  aux_sym_sql_order_by_clause_token1 = 35,
  aux_sym_sql_group_by_clause_token1 = 36,
  aux_sym_sql_limit_clause_token1 = 37,
  aux_sym_sql_string_token1 = 38,
  anon_sym_CARET = 39,
  anon_sym_SLASH = 40,
  anon_sym_PERCENT = 41,
  anon_sym_LT_LT = 42,
  anon_sym_GT_GT = 43,
  anon_sym_AMP = 44,
  anon_sym_PLUS = 45,
  anon_sym_DASH = 46,
  anon_sym_PIPE = 47,
  anon_sym_POUND = 48,
  anon_sym_LT = 49,
  anon_sym_LT_EQ = 50,
  anon_sym_LT_GT = 51,
  anon_sym_BANG_EQ = 52,
  anon_sym_GT = 53,
  anon_sym_GT_EQ = 54,
  anon_sym_TILDE = 55,
  anon_sym_BANG_TILDE = 56,
  anon_sym_TILDE_STAR = 57,
  anon_sym_BANG_TILDE_STAR = 58,
  aux_sym_sql_boolean_expr_token1 = 59,
  aux_sym_sql_boolean_expr_token2 = 60,
  aux_sym_sql_boolean_expr_token3 = 61,
  aux_sym_sql_in_expr_token1 = 62,
  anon_sym_DOT = 63,
  sym_sql_integer = 64,
  sym_comment = 65,
  sym_source_file = 66,
  sym_jinja_expression = 67,
  sym_jinja_statement = 68,
  sym_jinja_comment = 69,
  sym__jinja_expr = 70,
  sym_jinja_fn_call = 71,
  sym_jinja_argument_list = 72,
  sym_jinja_lit_string = 73,
  sym_jinja_bool = 74,
  sym_jinja_list = 75,
  sym_jinja_dict = 76,
  sym_jinja_pair = 77,
  sym_jinja_kwarg = 78,
  sym_sql_statement = 79,
  sym_sql_union_statement = 80,
  sym_sql_intersect_statement = 81,
  sym_sql_except_statement = 82,
  sym_sql_select_statement = 83,
  sym_sql_with_clause = 84,
  sym_sql_cte = 85,
  sym_sql_cte_recursive_name = 86,
  sym_sql_cte_name = 87,
  sym_sql_select_clause = 88,
  sym_sql_column_list = 89,
  sym_sql_from_clause = 90,
  sym_sql_table_list = 91,
  sym_sql_where_clause = 92,
  sym_sql_where_expression = 93,
  sym_sql_order_by_clause = 94,
  sym_sql_order_by_expression = 95,
  sym_sql_group_by_clause = 96,
  sym_sql_group_by_expression = 97,
  sym_sql_limit_clause = 98,
  sym_sql_limit_expression = 99,
  sym__sql_expr = 100,
  sym_sql_parens = 101,
  sym_sql_string = 102,
  sym_sql_binary_expr = 103,
  sym_sql_boolean_expr = 104,
  sym_sql_in_expr = 105,
  sym_sql_alias = 106,
  sym_sql_fn = 107,
  sym_sql_arg_list = 108,
  sym_sql_table_name = 109,
  sym_sql_dotted_identifier = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym_jinja_argument_list_repeat1 = 112,
  aux_sym_jinja_list_repeat1 = 113,
  aux_sym_jinja_dict_repeat1 = 114,
  aux_sym_sql_with_clause_repeat1 = 115,
  aux_sym_sql_column_list_repeat1 = 116,
  aux_sym_sql_table_list_repeat1 = 117,
  aux_sym_sql_order_by_expression_repeat1 = 118,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_PERCENT_RBRACE] = "%}",
  [anon_sym_LBRACE_POUND] = "{#",
  [anon_sym_POUND_RBRACE] = "#}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_jinja_lit_string_token1] = "jinja_lit_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_jinja_lit_string_token2] = "jinja_lit_string_token2",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [sym_jinja_identifier] = "jinja_identifier",
  [aux_sym_sql_union_statement_token1] = "union",
  [aux_sym_sql_union_statement_token2] = "all",
  [aux_sym_sql_intersect_statement_token1] = "intersect",
  [aux_sym_sql_except_statement_token1] = "except",
  [aux_sym_sql_with_clause_token1] = "with",
  [aux_sym_sql_cte_token1] = "as",
  [aux_sym_sql_cte_recursive_name_token1] = "recursive",
  [aux_sym_sql_select_clause_token1] = "select",
  [sym_sql_identifier] = "sql_identifier",
  [anon_sym_STAR] = "*",
  [aux_sym_sql_from_clause_token1] = "from",
  [aux_sym_sql_where_clause_token1] = "where",
  [aux_sym_sql_order_by_clause_token1] = "order by",
  [aux_sym_sql_group_by_clause_token1] = "group by",
  [aux_sym_sql_limit_clause_token1] = "limit",
  [aux_sym_sql_string_token1] = "content",
  [anon_sym_CARET] = "^",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = "|",
  [anon_sym_POUND] = "#",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_TILDE] = "~",
  [anon_sym_BANG_TILDE] = "!~",
  [anon_sym_TILDE_STAR] = "~*",
  [anon_sym_BANG_TILDE_STAR] = "!~*",
  [aux_sym_sql_boolean_expr_token1] = "not",
  [aux_sym_sql_boolean_expr_token2] = "and",
  [aux_sym_sql_boolean_expr_token3] = "or",
  [aux_sym_sql_in_expr_token1] = "in",
  [anon_sym_DOT] = ".",
  [sym_sql_integer] = "sql_integer",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_jinja_expression] = "jinja_expression",
  [sym_jinja_statement] = "jinja_statement",
  [sym_jinja_comment] = "jinja_comment",
  [sym__jinja_expr] = "_jinja_expr",
  [sym_jinja_fn_call] = "jinja_fn_call",
  [sym_jinja_argument_list] = "jinja_argument_list",
  [sym_jinja_lit_string] = "jinja_lit_string",
  [sym_jinja_bool] = "jinja_bool",
  [sym_jinja_list] = "jinja_list",
  [sym_jinja_dict] = "jinja_dict",
  [sym_jinja_pair] = "jinja_pair",
  [sym_jinja_kwarg] = "jinja_kwarg",
  [sym_sql_statement] = "sql_statement",
  [sym_sql_union_statement] = "sql_union_statement",
  [sym_sql_intersect_statement] = "sql_intersect_statement",
  [sym_sql_except_statement] = "sql_except_statement",
  [sym_sql_select_statement] = "sql_select_statement",
  [sym_sql_with_clause] = "sql_with_clause",
  [sym_sql_cte] = "sql_cte",
  [sym_sql_cte_recursive_name] = "sql_cte_recursive_name",
  [sym_sql_cte_name] = "sql_cte_name",
  [sym_sql_select_clause] = "sql_select_clause",
  [sym_sql_column_list] = "sql_column_list",
  [sym_sql_from_clause] = "sql_from_clause",
  [sym_sql_table_list] = "sql_table_list",
  [sym_sql_where_clause] = "sql_where_clause",
  [sym_sql_where_expression] = "sql_where_expression",
  [sym_sql_order_by_clause] = "sql_order_by_clause",
  [sym_sql_order_by_expression] = "sql_order_by_expression",
  [sym_sql_group_by_clause] = "sql_group_by_clause",
  [sym_sql_group_by_expression] = "sql_group_by_expression",
  [sym_sql_limit_clause] = "sql_limit_clause",
  [sym_sql_limit_expression] = "sql_limit_expression",
  [sym__sql_expr] = "_sql_expr",
  [sym_sql_parens] = "sql_parens",
  [sym_sql_string] = "sql_string",
  [sym_sql_binary_expr] = "sql_binary_expr",
  [sym_sql_boolean_expr] = "sql_boolean_expr",
  [sym_sql_in_expr] = "sql_in_expr",
  [sym_sql_alias] = "sql_alias",
  [sym_sql_fn] = "sql_fn",
  [sym_sql_arg_list] = "sql_arg_list",
  [sym_sql_table_name] = "sql_table_name",
  [sym_sql_dotted_identifier] = "sql_dotted_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_jinja_argument_list_repeat1] = "jinja_argument_list_repeat1",
  [aux_sym_jinja_list_repeat1] = "jinja_list_repeat1",
  [aux_sym_jinja_dict_repeat1] = "jinja_dict_repeat1",
  [aux_sym_sql_with_clause_repeat1] = "sql_with_clause_repeat1",
  [aux_sym_sql_column_list_repeat1] = "sql_column_list_repeat1",
  [aux_sym_sql_table_list_repeat1] = "sql_table_list_repeat1",
  [aux_sym_sql_order_by_expression_repeat1] = "sql_order_by_expression_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_PERCENT_RBRACE] = anon_sym_PERCENT_RBRACE,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_jinja_lit_string_token1] = aux_sym_jinja_lit_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_jinja_lit_string_token2] = aux_sym_jinja_lit_string_token2,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_jinja_identifier] = sym_jinja_identifier,
  [aux_sym_sql_union_statement_token1] = aux_sym_sql_union_statement_token1,
  [aux_sym_sql_union_statement_token2] = aux_sym_sql_union_statement_token2,
  [aux_sym_sql_intersect_statement_token1] = aux_sym_sql_intersect_statement_token1,
  [aux_sym_sql_except_statement_token1] = aux_sym_sql_except_statement_token1,
  [aux_sym_sql_with_clause_token1] = aux_sym_sql_with_clause_token1,
  [aux_sym_sql_cte_token1] = aux_sym_sql_cte_token1,
  [aux_sym_sql_cte_recursive_name_token1] = aux_sym_sql_cte_recursive_name_token1,
  [aux_sym_sql_select_clause_token1] = aux_sym_sql_select_clause_token1,
  [sym_sql_identifier] = sym_sql_identifier,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_sql_from_clause_token1] = aux_sym_sql_from_clause_token1,
  [aux_sym_sql_where_clause_token1] = aux_sym_sql_where_clause_token1,
  [aux_sym_sql_order_by_clause_token1] = aux_sym_sql_order_by_clause_token1,
  [aux_sym_sql_group_by_clause_token1] = aux_sym_sql_group_by_clause_token1,
  [aux_sym_sql_limit_clause_token1] = aux_sym_sql_limit_clause_token1,
  [aux_sym_sql_string_token1] = aux_sym_sql_string_token1,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BANG_TILDE] = anon_sym_BANG_TILDE,
  [anon_sym_TILDE_STAR] = anon_sym_TILDE_STAR,
  [anon_sym_BANG_TILDE_STAR] = anon_sym_BANG_TILDE_STAR,
  [aux_sym_sql_boolean_expr_token1] = aux_sym_sql_boolean_expr_token1,
  [aux_sym_sql_boolean_expr_token2] = aux_sym_sql_boolean_expr_token2,
  [aux_sym_sql_boolean_expr_token3] = aux_sym_sql_boolean_expr_token3,
  [aux_sym_sql_in_expr_token1] = aux_sym_sql_in_expr_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_sql_integer] = sym_sql_integer,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_jinja_expression] = sym_jinja_expression,
  [sym_jinja_statement] = sym_jinja_statement,
  [sym_jinja_comment] = sym_jinja_comment,
  [sym__jinja_expr] = sym__jinja_expr,
  [sym_jinja_fn_call] = sym_jinja_fn_call,
  [sym_jinja_argument_list] = sym_jinja_argument_list,
  [sym_jinja_lit_string] = sym_jinja_lit_string,
  [sym_jinja_bool] = sym_jinja_bool,
  [sym_jinja_list] = sym_jinja_list,
  [sym_jinja_dict] = sym_jinja_dict,
  [sym_jinja_pair] = sym_jinja_pair,
  [sym_jinja_kwarg] = sym_jinja_kwarg,
  [sym_sql_statement] = sym_sql_statement,
  [sym_sql_union_statement] = sym_sql_union_statement,
  [sym_sql_intersect_statement] = sym_sql_intersect_statement,
  [sym_sql_except_statement] = sym_sql_except_statement,
  [sym_sql_select_statement] = sym_sql_select_statement,
  [sym_sql_with_clause] = sym_sql_with_clause,
  [sym_sql_cte] = sym_sql_cte,
  [sym_sql_cte_recursive_name] = sym_sql_cte_recursive_name,
  [sym_sql_cte_name] = sym_sql_cte_name,
  [sym_sql_select_clause] = sym_sql_select_clause,
  [sym_sql_column_list] = sym_sql_column_list,
  [sym_sql_from_clause] = sym_sql_from_clause,
  [sym_sql_table_list] = sym_sql_table_list,
  [sym_sql_where_clause] = sym_sql_where_clause,
  [sym_sql_where_expression] = sym_sql_where_expression,
  [sym_sql_order_by_clause] = sym_sql_order_by_clause,
  [sym_sql_order_by_expression] = sym_sql_order_by_expression,
  [sym_sql_group_by_clause] = sym_sql_group_by_clause,
  [sym_sql_group_by_expression] = sym_sql_group_by_expression,
  [sym_sql_limit_clause] = sym_sql_limit_clause,
  [sym_sql_limit_expression] = sym_sql_limit_expression,
  [sym__sql_expr] = sym__sql_expr,
  [sym_sql_parens] = sym_sql_parens,
  [sym_sql_string] = sym_sql_string,
  [sym_sql_binary_expr] = sym_sql_binary_expr,
  [sym_sql_boolean_expr] = sym_sql_boolean_expr,
  [sym_sql_in_expr] = sym_sql_in_expr,
  [sym_sql_alias] = sym_sql_alias,
  [sym_sql_fn] = sym_sql_fn,
  [sym_sql_arg_list] = sym_sql_arg_list,
  [sym_sql_table_name] = sym_sql_table_name,
  [sym_sql_dotted_identifier] = sym_sql_dotted_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_jinja_argument_list_repeat1] = aux_sym_jinja_argument_list_repeat1,
  [aux_sym_jinja_list_repeat1] = aux_sym_jinja_list_repeat1,
  [aux_sym_jinja_dict_repeat1] = aux_sym_jinja_dict_repeat1,
  [aux_sym_sql_with_clause_repeat1] = aux_sym_sql_with_clause_repeat1,
  [aux_sym_sql_column_list_repeat1] = aux_sym_sql_column_list_repeat1,
  [aux_sym_sql_table_list_repeat1] = aux_sym_sql_table_list_repeat1,
  [aux_sym_sql_order_by_expression_repeat1] = aux_sym_sql_order_by_expression_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_jinja_lit_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_jinja_lit_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_jinja_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sql_union_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_union_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_intersect_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_except_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_with_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_cte_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_cte_recursive_name_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_select_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_sql_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_from_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_where_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_order_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_group_by_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_limit_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_string_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_TILDE_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_boolean_expr_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_boolean_expr_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_boolean_expr_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_in_expr_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_sql_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__jinja_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_jinja_fn_call] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_lit_string] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_list] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_kwarg] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_union_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_intersect_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_except_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_select_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_with_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_cte] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_cte_recursive_name] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_cte_name] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_select_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_column_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_from_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_table_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_where_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_order_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_order_by_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_group_by_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_group_by_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_limit_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__sql_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_sql_parens] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_string] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_boolean_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_in_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_fn] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_arg_list] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_table_name] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_dotted_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jinja_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jinja_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jinja_dict_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sql_with_clause_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sql_column_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sql_table_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sql_order_by_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_content = 1,
  field_jinja_argument_list = 2,
  field_jinja_fn_name = 3,
  field_key = 4,
  field_left = 5,
  field_operator = 6,
  field_right = 7,
  field_value = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_jinja_argument_list] = "jinja_argument_list",
  [field_jinja_fn_name] = "jinja_fn_name",
  [field_key] = "key",
  [field_left] = "left",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 3},
  [4] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_jinja_argument_list, 1},
    {field_jinja_fn_name, 0},
  [2] =
    {field_content, 1},
  [3] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [6] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '%') ADVANCE(265);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == '<') ADVANCE(274);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == 'F') ADVANCE(134);
      if (lookahead == 'T') ADVANCE(139);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == '\\') SKIP(82)
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == '^') ADVANCE(262);
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '~') ADVANCE(280);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(162);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(189);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(167);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(158);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(170);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('B' <= lookahead && lookahead <= '_') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(23)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(23)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(24)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(24)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == '<') ADVANCE(274);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(262);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '~') ADVANCE(280);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(55);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(112);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '%') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(132);
      if (lookahead == 'F') ADVANCE(135);
      if (lookahead == 'T') ADVANCE(139);
      if (lookahead == '[') ADVANCE(127);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(128);
      if (lookahead == '{') ADVANCE(129);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(99);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(222);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(259);
      END_STATE();
    case 18:
      if (lookahead == '\'') ADVANCE(261);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == '*') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(23)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '{') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(24)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '~') ADVANCE(281);
      END_STATE();
    case 26:
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(95);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(91);
      END_STATE();
    case 30:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 31:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(195);
      END_STATE();
    case 45:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(40);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 47:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(49);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 51:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 52:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 53:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 55:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(35);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      END_STATE();
    case 56:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 57:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 58:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 59:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 60:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 61:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 62:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 63:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      END_STATE();
    case 65:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 66:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 67:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 68:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 69:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 70:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 71:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      END_STATE();
    case 73:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 74:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      END_STATE();
    case 75:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      END_STATE();
    case 76:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(44);
      END_STATE();
    case 77:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 79:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      END_STATE();
    case 80:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(250);
      END_STATE();
    case 81:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 82:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(81)
      END_STATE();
    case 83:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 84:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') SKIP(83)
      END_STATE();
    case 85:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 86:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(85)
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '!') ADVANCE(25);
      if (lookahead == '#') ADVANCE(272);
      if (lookahead == '%') ADVANCE(264);
      if (lookahead == '&') ADVANCE(268);
      if (lookahead == '(') ADVANCE(96);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '+') ADVANCE(269);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '-') ADVANCE(270);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == '<') ADVANCE(274);
      if (lookahead == '=') ADVANCE(133);
      if (lookahead == '>') ADVANCE(278);
      if (lookahead == '\\') SKIP(84)
      if (lookahead == '^') ADVANCE(262);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '|') ADVANCE(271);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '~') ADVANCE(280);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(50);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(65);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(68);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(66);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(38);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(87)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == ')') ADVANCE(98);
      if (lookahead == ',') ADVANCE(97);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\\') SKIP(86)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(227);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(221);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(88)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\r') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(111);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(109);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\'') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(103);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(109);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(108);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(105);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(120);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead == '"') ADVANCE(295);
      if (lookahead == '\\') ADVANCE(116);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(123);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(121);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead == '\\') ADVANCE(113);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(118);
      if (lookahead == '*') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(94);
      if (lookahead == '%') ADVANCE(92);
      if (lookahead == '{') ADVANCE(90);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(138);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(152);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(163);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_sql_union_statement_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_sql_union_statement_token2);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_sql_intersect_statement_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_sql_except_statement_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_sql_with_clause_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_sql_cte_recursive_name_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_sql_select_clause_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == ' ') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == ' ') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_sql_where_clause_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_sql_group_by_clause_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\r') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead != 0) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '*') ADVANCE(261);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '/') ADVANCE(256);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(257);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '-') ADVANCE(255);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead != 0) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead == '/') ADVANCE(259);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '*') ADVANCE(260);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(21);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(93);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '}') ADVANCE(95);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(266);
      if (lookahead == '=') ADVANCE(275);
      if (lookahead == '>') ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(267);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(282);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      if (lookahead == '*') ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE_STAR);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token1);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token2);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_sql_in_expr_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_sql_in_expr_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(154);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_sql_in_expr_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(41);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_sql_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(295);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 87},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 87},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 13},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 13},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 13},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 13},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 14},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 87},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 14},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 14},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 14},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 87},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 16},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 87},
  [88] = {.lex_state = 88},
  [89] = {.lex_state = 87},
  [90] = {.lex_state = 87},
  [91] = {.lex_state = 87},
  [92] = {.lex_state = 87},
  [93] = {.lex_state = 87},
  [94] = {.lex_state = 87},
  [95] = {.lex_state = 87},
  [96] = {.lex_state = 87},
  [97] = {.lex_state = 87},
  [98] = {.lex_state = 87},
  [99] = {.lex_state = 87},
  [100] = {.lex_state = 87},
  [101] = {.lex_state = 87},
  [102] = {.lex_state = 87},
  [103] = {.lex_state = 87},
  [104] = {.lex_state = 87},
  [105] = {.lex_state = 87},
  [106] = {.lex_state = 87},
  [107] = {.lex_state = 87},
  [108] = {.lex_state = 87},
  [109] = {.lex_state = 87},
  [110] = {.lex_state = 87},
  [111] = {.lex_state = 87},
  [112] = {.lex_state = 87},
  [113] = {.lex_state = 87},
  [114] = {.lex_state = 87},
  [115] = {.lex_state = 87},
  [116] = {.lex_state = 87},
  [117] = {.lex_state = 87},
  [118] = {.lex_state = 87},
  [119] = {.lex_state = 87},
  [120] = {.lex_state = 87},
  [121] = {.lex_state = 87},
  [122] = {.lex_state = 87},
  [123] = {.lex_state = 87},
  [124] = {.lex_state = 87},
  [125] = {.lex_state = 87},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 87},
  [128] = {.lex_state = 87},
  [129] = {.lex_state = 87},
  [130] = {.lex_state = 87},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 14},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 14},
  [142] = {.lex_state = 14},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 14},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 87},
  [147] = {.lex_state = 14},
  [148] = {.lex_state = 87},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 87},
  [151] = {.lex_state = 87},
  [152] = {.lex_state = 87},
  [153] = {.lex_state = 87},
  [154] = {.lex_state = 87},
  [155] = {.lex_state = 87},
  [156] = {.lex_state = 87},
  [157] = {.lex_state = 23},
  [158] = {.lex_state = 87},
  [159] = {.lex_state = 87},
  [160] = {.lex_state = 87},
  [161] = {.lex_state = 87},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 23},
  [164] = {.lex_state = 87},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 87},
  [167] = {.lex_state = 24},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 87},
  [170] = {.lex_state = 87},
  [171] = {.lex_state = 87},
  [172] = {.lex_state = 87},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 87},
  [175] = {.lex_state = 87},
  [176] = {.lex_state = 87},
  [177] = {.lex_state = 87},
  [178] = {.lex_state = 24},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 87},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 87},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 87},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 87},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 87},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 87},
  [217] = {.lex_state = 24},
  [218] = {.lex_state = 24},
  [219] = {.lex_state = 87},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 87},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 24},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 24},
  [232] = {.lex_state = 120},
  [233] = {.lex_state = 14},
  [234] = {.lex_state = 14},
  [235] = {.lex_state = 87},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 87},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 257},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 87},
  [245] = {.lex_state = 24},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 24},
  [249] = {.lex_state = 24},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 24},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 107},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 24},
  [261] = {.lex_state = 24},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 107},
  [265] = {.lex_state = 120},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 257},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 24},
  [270] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_jinja_identifier] = ACTIONS(1),
    [aux_sym_sql_union_statement_token1] = ACTIONS(1),
    [aux_sym_sql_union_statement_token2] = ACTIONS(1),
    [aux_sym_sql_intersect_statement_token1] = ACTIONS(1),
    [aux_sym_sql_except_statement_token1] = ACTIONS(1),
    [aux_sym_sql_with_clause_token1] = ACTIONS(1),
    [aux_sym_sql_cte_token1] = ACTIONS(1),
    [aux_sym_sql_cte_recursive_name_token1] = ACTIONS(1),
    [aux_sym_sql_select_clause_token1] = ACTIONS(1),
    [sym_sql_identifier] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_sql_from_clause_token1] = ACTIONS(1),
    [aux_sym_sql_where_clause_token1] = ACTIONS(1),
    [aux_sym_sql_limit_clause_token1] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BANG_TILDE] = ACTIONS(1),
    [anon_sym_TILDE_STAR] = ACTIONS(1),
    [anon_sym_BANG_TILDE_STAR] = ACTIONS(1),
    [aux_sym_sql_boolean_expr_token1] = ACTIONS(1),
    [aux_sym_sql_boolean_expr_token2] = ACTIONS(1),
    [aux_sym_sql_boolean_expr_token3] = ACTIONS(1),
    [aux_sym_sql_in_expr_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_sql_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(268),
    [sym_jinja_expression] = STATE(40),
    [sym_jinja_statement] = STATE(40),
    [sym_jinja_comment] = STATE(40),
    [sym_sql_statement] = STATE(177),
    [sym_sql_union_statement] = STATE(160),
    [sym_sql_intersect_statement] = STATE(160),
    [sym_sql_except_statement] = STATE(160),
    [sym_sql_select_statement] = STATE(160),
    [sym_sql_with_clause] = STATE(207),
    [sym_sql_select_clause] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(40),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [aux_sym_sql_with_clause_token1] = ACTIONS(11),
    [aux_sym_sql_select_clause_token1] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DOT,
    ACTIONS(19), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(15), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [51] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_DOT,
    ACTIONS(25), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(23), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [99] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(51), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(53), 1,
      aux_sym_sql_in_expr_token1,
    STATE(90), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(43), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(37), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(33), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(29), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [169] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(55), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(61), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(59), 28,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(63), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [306] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(43), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(37), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(61), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(59), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [361] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(51), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(53), 1,
      aux_sym_sql_in_expr_token1,
    ACTIONS(43), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(37), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(33), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(67), 11,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [426] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(71), 2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(43), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(37), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(33), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(69), 12,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [487] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(73), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [532] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(71), 2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(43), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(37), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(33), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(69), 13,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      aux_sym_sql_boolean_expr_token2,
  [591] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(77), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(81), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(85), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(59), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [771] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(37), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(61), 7,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(59), 23,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [822] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(89), 29,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [867] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(51), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(53), 1,
      aux_sym_sql_in_expr_token1,
    ACTIONS(43), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(47), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(37), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(33), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(93), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [929] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOT,
    ACTIONS(19), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(15), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [971] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(121), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(123), 1,
      aux_sym_sql_in_expr_token1,
    STATE(182), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(113), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(103), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1032] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(121), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(123), 1,
      aux_sym_sql_in_expr_token1,
    STATE(179), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(113), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(103), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1093] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(25), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(23), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1132] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(77), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1168] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(113), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(69), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(103), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1216] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(61), 5,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(59), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1258] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(59), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(61), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(59), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(55), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(63), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1404] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(85), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1440] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(81), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1476] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(113), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(69), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(103), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1526] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(113), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(61), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(59), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(89), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1608] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(121), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(123), 1,
      aux_sym_sql_in_expr_token1,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(113), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(103), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(73), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
  [1700] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(121), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(123), 1,
      aux_sym_sql_in_expr_token1,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(103), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1755] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(109), 1,
      anon_sym_CARET,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(119), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(121), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(123), 1,
      aux_sym_sql_in_expr_token1,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(113), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(107), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(103), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1810] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(174), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(106), 4,
      sym_jinja_expression,
      sym_jinja_statement,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [1850] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_jinja_identifier,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(198), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1888] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_jinja_identifier,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(184), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1926] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_jinja_identifier,
    ACTIONS(151), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(215), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1961] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(157), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(161), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(87), 1,
      sym_sql_from_clause,
    STATE(91), 1,
      sym_sql_where_clause,
    STATE(108), 1,
      sym_sql_group_by_clause,
    STATE(125), 1,
      sym_sql_order_by_clause,
    STATE(156), 1,
      sym_sql_limit_clause,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2002] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(157), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(161), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(82), 1,
      sym_sql_from_clause,
    STATE(92), 1,
      sym_sql_where_clause,
    STATE(119), 1,
      sym_sql_group_by_clause,
    STATE(128), 1,
      sym_sql_order_by_clause,
    STATE(158), 1,
      sym_sql_limit_clause,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2043] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(200), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2080] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_jinja_identifier,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(215), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [2115] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_jinja_identifier,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(215), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [2150] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(191), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2187] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(102), 1,
      sym_sql_column_list,
    STATE(4), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2220] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(237), 1,
      sym_sql_column_list,
    STATE(22), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2253] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 15,
      ts_builtin_sym_end,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2274] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_jinja_identifier,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(215), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [2309] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2343] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(256), 1,
      sym_sql_arg_list,
    STATE(21), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2373] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(121), 1,
      sym_sql_where_expression,
    STATE(19), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2403] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2437] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(207), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2471] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(252), 1,
      sym_sql_arg_list,
    STATE(21), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2501] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACK,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2535] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      sym_jinja_identifier,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(215), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [2567] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(33), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2594] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(6), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2621] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(234), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2652] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(233), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2683] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(38), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2710] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2741] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(24), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2768] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(235), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2799] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_LBRACK,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(171), 1,
      sym_jinja_identifier,
    ACTIONS(139), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(210), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2830] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(36), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2857] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(9), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2884] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(8), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2911] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(34), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2938] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(25), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2965] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(16), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2992] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(17), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3019] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(12), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3046] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(10), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(13), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3100] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(39), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3127] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(161), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(91), 1,
      sym_sql_where_clause,
    STATE(108), 1,
      sym_sql_group_by_clause,
    STATE(125), 1,
      sym_sql_order_by_clause,
    STATE(156), 1,
      sym_sql_limit_clause,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3162] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      anon_sym_SQUOTE,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      anon_sym_LBRACK,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
    ACTIONS(221), 1,
      sym_jinja_identifier,
    ACTIONS(215), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(208), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [3193] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(28), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3220] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(27), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3247] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_SQUOTE,
    ACTIONS(195), 1,
      sym_sql_identifier,
    ACTIONS(197), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(26), 9,
      sym__sql_expr,
      sym_sql_parens,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3274] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(161), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(95), 1,
      sym_sql_where_clause,
    STATE(114), 1,
      sym_sql_group_by_clause,
    STATE(127), 1,
      sym_sql_order_by_clause,
    STATE(155), 1,
      sym_sql_limit_clause,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(229), 1,
      sym_sql_identifier,
    ACTIONS(225), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(67), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(234), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3375] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(161), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(114), 1,
      sym_sql_group_by_clause,
    STATE(127), 1,
      sym_sql_order_by_clause,
    STATE(155), 1,
      sym_sql_limit_clause,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3404] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(161), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(108), 1,
      sym_sql_group_by_clause,
    STATE(125), 1,
      sym_sql_order_by_clause,
    STATE(156), 1,
      sym_sql_limit_clause,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_sql_table_list_repeat1,
    ACTIONS(236), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3454] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_sql_table_list_repeat1,
    ACTIONS(241), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3475] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(161), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(117), 1,
      sym_sql_group_by_clause,
    STATE(130), 1,
      sym_sql_order_by_clause,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3504] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_sql_table_list_repeat1,
    ACTIONS(247), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3525] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3541] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(249), 1,
      aux_sym_sql_union_statement_token2,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(171), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3569] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(251), 1,
      aux_sym_sql_union_statement_token2,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(151), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3597] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(253), 1,
      aux_sym_sql_union_statement_token2,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(150), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 10,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3689] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(175), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(264), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(267), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(270), 2,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
    STATE(106), 4,
      sym_jinja_expression,
      sym_jinja_statement,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
  [3737] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(176), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3762] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(127), 1,
      sym_sql_order_by_clause,
    STATE(155), 1,
      sym_sql_limit_clause,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3785] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(272), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3819] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(152), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3844] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3863] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(283), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3882] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(130), 1,
      sym_sql_order_by_clause,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3905] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(153), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3930] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(154), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3955] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(129), 1,
      sym_sql_order_by_clause,
    STATE(170), 1,
      sym_sql_limit_clause,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3978] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(45), 1,
      sym_sql_select_clause,
    STATE(172), 1,
      sym_sql_statement,
    STATE(207), 1,
      sym_sql_with_clause,
    STATE(160), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [4003] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(125), 1,
      sym_sql_order_by_clause,
    STATE(156), 1,
      sym_sql_limit_clause,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(287), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [4044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [4058] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(291), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [4076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [4090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [4103] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(155), 1,
      sym_sql_limit_clause,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 7,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4133] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4150] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(156), 1,
      sym_sql_limit_clause,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4167] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(159), 1,
      sym_sql_limit_clause,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4184] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(170), 1,
      sym_sql_limit_clause,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4213] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4273] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4297] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4321] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4345] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      sym_jinja_pair,
    STATE(250), 1,
      sym_jinja_lit_string,
  [4367] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4379] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      sym_jinja_pair,
    STATE(250), 1,
      sym_jinja_lit_string,
  [4401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [4413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
  [4436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      sym_jinja_pair,
    STATE(250), 1,
      sym_jinja_lit_string,
  [4455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(341), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4468] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(347), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(351), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(355), 1,
      sym_sql_identifier,
    STATE(197), 1,
      sym_sql_cte,
    STATE(238), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [4555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4599] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      sym_jinja_pair,
    STATE(250), 1,
      sym_jinja_lit_string,
  [4618] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(355), 1,
      sym_sql_identifier,
    STATE(221), 1,
      sym_sql_cte,
    STATE(238), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [4635] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4646] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      sym_jinja_pair,
    STATE(250), 1,
      sym_jinja_lit_string,
  [4665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(369), 1,
      sym_sql_identifier,
    STATE(110), 1,
      sym_sql_table_list,
    STATE(94), 2,
      sym_jinja_expression,
      sym_sql_table_name,
  [4693] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(209), 1,
      sym_jinja_pair,
    STATE(250), 1,
      sym_jinja_lit_string,
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 5,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
  [4723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(375), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4747] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(381), 1,
      aux_sym_sql_except_statement_token1,
  [4763] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    STATE(209), 1,
      sym_jinja_pair,
    STATE(250), 1,
      sym_jinja_lit_string,
  [4779] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(379), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(381), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(383), 1,
      ts_builtin_sym_end,
  [4795] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(379), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(381), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
  [4811] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(379), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(381), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
  [4827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(379), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(381), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(389), 1,
      ts_builtin_sym_end,
  [4843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(369), 1,
      sym_sql_identifier,
    STATE(97), 2,
      sym_jinja_expression,
      sym_sql_table_name,
  [4857] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_sql_column_list_repeat1,
  [4870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    ACTIONS(393), 1,
      anon_sym_EQ,
    STATE(131), 1,
      sym_jinja_argument_list,
  [4883] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_jinja_list_repeat1,
  [4896] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(194), 1,
      aux_sym_sql_column_list_repeat1,
  [4909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4922] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4935] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_jinja_dict_repeat1,
  [4948] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      aux_sym_sql_select_clause_token1,
    STATE(193), 1,
      aux_sym_sql_with_clause_repeat1,
  [4961] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    ACTIONS(414), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_jinja_list_repeat1,
  [4974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RBRACE,
    STATE(188), 1,
      aux_sym_jinja_dict_repeat1,
  [4987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(185), 1,
      aux_sym_jinja_dict_repeat1,
  [5000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_jinja_argument_list_repeat1,
  [5013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym_jinja_list_repeat1,
  [5026] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_RBRACK,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_jinja_list_repeat1,
  [5039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(439), 1,
      aux_sym_sql_select_clause_token1,
    STATE(193), 1,
      aux_sym_sql_with_clause_repeat1,
  [5052] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(441), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_sql_column_list_repeat1,
  [5065] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_jinja_dict_repeat1,
  [5078] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_jinja_argument_list_repeat1,
  [5091] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_COMMA,
    ACTIONS(450), 1,
      aux_sym_sql_select_clause_token1,
    STATE(186), 1,
      aux_sym_sql_with_clause_repeat1,
  [5104] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(196), 1,
      aux_sym_jinja_argument_list_repeat1,
  [5117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_jinja_dict_repeat1,
  [5130] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      aux_sym_jinja_list_repeat1,
  [5143] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_LPAREN,
      aux_sym_sql_cte_token1,
  [5151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5191] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(44), 1,
      sym_sql_select_clause,
  [5201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_sql_integer,
    STATE(166), 1,
      sym_sql_limit_expression,
  [5275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      sym_sql_identifier,
    STATE(124), 1,
      sym_sql_group_by_expression,
  [5285] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_sql_identifier,
    STATE(146), 1,
      sym_sql_order_by_expression,
  [5295] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [5303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_LPAREN,
    STATE(205), 1,
      sym_jinja_argument_list,
  [5313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [5321] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
    STATE(131), 1,
      sym_jinja_argument_list,
  [5331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5339] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      sym_sql_identifier,
    STATE(253), 1,
      sym_sql_cte_name,
  [5349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5365] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_sql_identifier,
  [5404] = 2,
    ACTIONS(482), 1,
      aux_sym_jinja_lit_string_token2,
    ACTIONS(484), 1,
      sym_comment,
  [5411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_POUND_RBRACE,
  [5418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_PERCENT_RBRACE,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACE_RBRACE,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_RBRACK,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym_sql_cte_token1,
  [5453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
  [5460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_RBRACK,
  [5474] = 2,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_sql_string_token1,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym_sql_cte_token1,
  [5495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym_sql_identifier,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      anon_sym_SQUOTE,
  [5516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_sql_identifier,
  [5523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      sym_sql_identifier,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_COLON,
  [5537] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      sym_sql_identifier,
  [5544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
  [5551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LPAREN,
  [5558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_RPAREN,
  [5565] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_LPAREN,
  [5572] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [5579] = 2,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(522), 1,
      aux_sym_jinja_lit_string_token1,
  [5586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
  [5593] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_SQUOTE,
  [5600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      sym_sql_identifier,
  [5607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_sql_identifier,
  [5614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_SQUOTE,
  [5621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
  [5628] = 2,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(534), 1,
      aux_sym_jinja_lit_string_token1,
  [5635] = 2,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(536), 1,
      aux_sym_jinja_lit_string_token2,
  [5642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_DQUOTE,
  [5649] = 2,
    ACTIONS(484), 1,
      sym_comment,
    ACTIONS(538), 1,
      aux_sym_sql_string_token1,
  [5656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      ts_builtin_sym_end,
  [5663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 1,
      sym_sql_identifier,
  [5670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 99,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 261,
  [SMALL_STATE(8)] = 306,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 426,
  [SMALL_STATE(11)] = 487,
  [SMALL_STATE(12)] = 532,
  [SMALL_STATE(13)] = 591,
  [SMALL_STATE(14)] = 636,
  [SMALL_STATE(15)] = 681,
  [SMALL_STATE(16)] = 726,
  [SMALL_STATE(17)] = 771,
  [SMALL_STATE(18)] = 822,
  [SMALL_STATE(19)] = 867,
  [SMALL_STATE(20)] = 929,
  [SMALL_STATE(21)] = 971,
  [SMALL_STATE(22)] = 1032,
  [SMALL_STATE(23)] = 1093,
  [SMALL_STATE(24)] = 1132,
  [SMALL_STATE(25)] = 1168,
  [SMALL_STATE(26)] = 1216,
  [SMALL_STATE(27)] = 1258,
  [SMALL_STATE(28)] = 1294,
  [SMALL_STATE(29)] = 1332,
  [SMALL_STATE(30)] = 1368,
  [SMALL_STATE(31)] = 1404,
  [SMALL_STATE(32)] = 1440,
  [SMALL_STATE(33)] = 1476,
  [SMALL_STATE(34)] = 1526,
  [SMALL_STATE(35)] = 1572,
  [SMALL_STATE(36)] = 1608,
  [SMALL_STATE(37)] = 1664,
  [SMALL_STATE(38)] = 1700,
  [SMALL_STATE(39)] = 1755,
  [SMALL_STATE(40)] = 1810,
  [SMALL_STATE(41)] = 1850,
  [SMALL_STATE(42)] = 1888,
  [SMALL_STATE(43)] = 1926,
  [SMALL_STATE(44)] = 1961,
  [SMALL_STATE(45)] = 2002,
  [SMALL_STATE(46)] = 2043,
  [SMALL_STATE(47)] = 2080,
  [SMALL_STATE(48)] = 2115,
  [SMALL_STATE(49)] = 2150,
  [SMALL_STATE(50)] = 2187,
  [SMALL_STATE(51)] = 2220,
  [SMALL_STATE(52)] = 2253,
  [SMALL_STATE(53)] = 2274,
  [SMALL_STATE(54)] = 2309,
  [SMALL_STATE(55)] = 2343,
  [SMALL_STATE(56)] = 2373,
  [SMALL_STATE(57)] = 2403,
  [SMALL_STATE(58)] = 2437,
  [SMALL_STATE(59)] = 2471,
  [SMALL_STATE(60)] = 2501,
  [SMALL_STATE(61)] = 2535,
  [SMALL_STATE(62)] = 2567,
  [SMALL_STATE(63)] = 2594,
  [SMALL_STATE(64)] = 2621,
  [SMALL_STATE(65)] = 2652,
  [SMALL_STATE(66)] = 2683,
  [SMALL_STATE(67)] = 2710,
  [SMALL_STATE(68)] = 2741,
  [SMALL_STATE(69)] = 2768,
  [SMALL_STATE(70)] = 2799,
  [SMALL_STATE(71)] = 2830,
  [SMALL_STATE(72)] = 2857,
  [SMALL_STATE(73)] = 2884,
  [SMALL_STATE(74)] = 2911,
  [SMALL_STATE(75)] = 2938,
  [SMALL_STATE(76)] = 2965,
  [SMALL_STATE(77)] = 2992,
  [SMALL_STATE(78)] = 3019,
  [SMALL_STATE(79)] = 3046,
  [SMALL_STATE(80)] = 3073,
  [SMALL_STATE(81)] = 3100,
  [SMALL_STATE(82)] = 3127,
  [SMALL_STATE(83)] = 3162,
  [SMALL_STATE(84)] = 3193,
  [SMALL_STATE(85)] = 3220,
  [SMALL_STATE(86)] = 3247,
  [SMALL_STATE(87)] = 3274,
  [SMALL_STATE(88)] = 3309,
  [SMALL_STATE(89)] = 3331,
  [SMALL_STATE(90)] = 3353,
  [SMALL_STATE(91)] = 3375,
  [SMALL_STATE(92)] = 3404,
  [SMALL_STATE(93)] = 3433,
  [SMALL_STATE(94)] = 3454,
  [SMALL_STATE(95)] = 3475,
  [SMALL_STATE(96)] = 3504,
  [SMALL_STATE(97)] = 3525,
  [SMALL_STATE(98)] = 3541,
  [SMALL_STATE(99)] = 3569,
  [SMALL_STATE(100)] = 3597,
  [SMALL_STATE(101)] = 3625,
  [SMALL_STATE(102)] = 3641,
  [SMALL_STATE(103)] = 3657,
  [SMALL_STATE(104)] = 3673,
  [SMALL_STATE(105)] = 3689,
  [SMALL_STATE(106)] = 3714,
  [SMALL_STATE(107)] = 3737,
  [SMALL_STATE(108)] = 3762,
  [SMALL_STATE(109)] = 3785,
  [SMALL_STATE(110)] = 3804,
  [SMALL_STATE(111)] = 3819,
  [SMALL_STATE(112)] = 3844,
  [SMALL_STATE(113)] = 3863,
  [SMALL_STATE(114)] = 3882,
  [SMALL_STATE(115)] = 3905,
  [SMALL_STATE(116)] = 3930,
  [SMALL_STATE(117)] = 3955,
  [SMALL_STATE(118)] = 3978,
  [SMALL_STATE(119)] = 4003,
  [SMALL_STATE(120)] = 4026,
  [SMALL_STATE(121)] = 4044,
  [SMALL_STATE(122)] = 4058,
  [SMALL_STATE(123)] = 4076,
  [SMALL_STATE(124)] = 4090,
  [SMALL_STATE(125)] = 4103,
  [SMALL_STATE(126)] = 4120,
  [SMALL_STATE(127)] = 4133,
  [SMALL_STATE(128)] = 4150,
  [SMALL_STATE(129)] = 4167,
  [SMALL_STATE(130)] = 4184,
  [SMALL_STATE(131)] = 4201,
  [SMALL_STATE(132)] = 4213,
  [SMALL_STATE(133)] = 4225,
  [SMALL_STATE(134)] = 4237,
  [SMALL_STATE(135)] = 4249,
  [SMALL_STATE(136)] = 4261,
  [SMALL_STATE(137)] = 4273,
  [SMALL_STATE(138)] = 4285,
  [SMALL_STATE(139)] = 4297,
  [SMALL_STATE(140)] = 4309,
  [SMALL_STATE(141)] = 4321,
  [SMALL_STATE(142)] = 4333,
  [SMALL_STATE(143)] = 4345,
  [SMALL_STATE(144)] = 4367,
  [SMALL_STATE(145)] = 4379,
  [SMALL_STATE(146)] = 4401,
  [SMALL_STATE(147)] = 4413,
  [SMALL_STATE(148)] = 4425,
  [SMALL_STATE(149)] = 4436,
  [SMALL_STATE(150)] = 4455,
  [SMALL_STATE(151)] = 4468,
  [SMALL_STATE(152)] = 4479,
  [SMALL_STATE(153)] = 4492,
  [SMALL_STATE(154)] = 4503,
  [SMALL_STATE(155)] = 4516,
  [SMALL_STATE(156)] = 4527,
  [SMALL_STATE(157)] = 4538,
  [SMALL_STATE(158)] = 4555,
  [SMALL_STATE(159)] = 4566,
  [SMALL_STATE(160)] = 4577,
  [SMALL_STATE(161)] = 4588,
  [SMALL_STATE(162)] = 4599,
  [SMALL_STATE(163)] = 4618,
  [SMALL_STATE(164)] = 4635,
  [SMALL_STATE(165)] = 4646,
  [SMALL_STATE(166)] = 4665,
  [SMALL_STATE(167)] = 4676,
  [SMALL_STATE(168)] = 4693,
  [SMALL_STATE(169)] = 4712,
  [SMALL_STATE(170)] = 4723,
  [SMALL_STATE(171)] = 4734,
  [SMALL_STATE(172)] = 4747,
  [SMALL_STATE(173)] = 4763,
  [SMALL_STATE(174)] = 4779,
  [SMALL_STATE(175)] = 4795,
  [SMALL_STATE(176)] = 4811,
  [SMALL_STATE(177)] = 4827,
  [SMALL_STATE(178)] = 4843,
  [SMALL_STATE(179)] = 4857,
  [SMALL_STATE(180)] = 4870,
  [SMALL_STATE(181)] = 4883,
  [SMALL_STATE(182)] = 4896,
  [SMALL_STATE(183)] = 4909,
  [SMALL_STATE(184)] = 4922,
  [SMALL_STATE(185)] = 4935,
  [SMALL_STATE(186)] = 4948,
  [SMALL_STATE(187)] = 4961,
  [SMALL_STATE(188)] = 4974,
  [SMALL_STATE(189)] = 4987,
  [SMALL_STATE(190)] = 5000,
  [SMALL_STATE(191)] = 5013,
  [SMALL_STATE(192)] = 5026,
  [SMALL_STATE(193)] = 5039,
  [SMALL_STATE(194)] = 5052,
  [SMALL_STATE(195)] = 5065,
  [SMALL_STATE(196)] = 5078,
  [SMALL_STATE(197)] = 5091,
  [SMALL_STATE(198)] = 5104,
  [SMALL_STATE(199)] = 5117,
  [SMALL_STATE(200)] = 5130,
  [SMALL_STATE(201)] = 5143,
  [SMALL_STATE(202)] = 5151,
  [SMALL_STATE(203)] = 5159,
  [SMALL_STATE(204)] = 5167,
  [SMALL_STATE(205)] = 5175,
  [SMALL_STATE(206)] = 5183,
  [SMALL_STATE(207)] = 5191,
  [SMALL_STATE(208)] = 5201,
  [SMALL_STATE(209)] = 5209,
  [SMALL_STATE(210)] = 5217,
  [SMALL_STATE(211)] = 5225,
  [SMALL_STATE(212)] = 5233,
  [SMALL_STATE(213)] = 5241,
  [SMALL_STATE(214)] = 5249,
  [SMALL_STATE(215)] = 5257,
  [SMALL_STATE(216)] = 5265,
  [SMALL_STATE(217)] = 5275,
  [SMALL_STATE(218)] = 5285,
  [SMALL_STATE(219)] = 5295,
  [SMALL_STATE(220)] = 5303,
  [SMALL_STATE(221)] = 5313,
  [SMALL_STATE(222)] = 5321,
  [SMALL_STATE(223)] = 5331,
  [SMALL_STATE(224)] = 5339,
  [SMALL_STATE(225)] = 5349,
  [SMALL_STATE(226)] = 5357,
  [SMALL_STATE(227)] = 5365,
  [SMALL_STATE(228)] = 5373,
  [SMALL_STATE(229)] = 5381,
  [SMALL_STATE(230)] = 5389,
  [SMALL_STATE(231)] = 5397,
  [SMALL_STATE(232)] = 5404,
  [SMALL_STATE(233)] = 5411,
  [SMALL_STATE(234)] = 5418,
  [SMALL_STATE(235)] = 5425,
  [SMALL_STATE(236)] = 5432,
  [SMALL_STATE(237)] = 5439,
  [SMALL_STATE(238)] = 5446,
  [SMALL_STATE(239)] = 5453,
  [SMALL_STATE(240)] = 5460,
  [SMALL_STATE(241)] = 5467,
  [SMALL_STATE(242)] = 5474,
  [SMALL_STATE(243)] = 5481,
  [SMALL_STATE(244)] = 5488,
  [SMALL_STATE(245)] = 5495,
  [SMALL_STATE(246)] = 5502,
  [SMALL_STATE(247)] = 5509,
  [SMALL_STATE(248)] = 5516,
  [SMALL_STATE(249)] = 5523,
  [SMALL_STATE(250)] = 5530,
  [SMALL_STATE(251)] = 5537,
  [SMALL_STATE(252)] = 5544,
  [SMALL_STATE(253)] = 5551,
  [SMALL_STATE(254)] = 5558,
  [SMALL_STATE(255)] = 5565,
  [SMALL_STATE(256)] = 5572,
  [SMALL_STATE(257)] = 5579,
  [SMALL_STATE(258)] = 5586,
  [SMALL_STATE(259)] = 5593,
  [SMALL_STATE(260)] = 5600,
  [SMALL_STATE(261)] = 5607,
  [SMALL_STATE(262)] = 5614,
  [SMALL_STATE(263)] = 5621,
  [SMALL_STATE(264)] = 5628,
  [SMALL_STATE(265)] = 5635,
  [SMALL_STATE(266)] = 5642,
  [SMALL_STATE(267)] = 5649,
  [SMALL_STATE(268)] = 5656,
  [SMALL_STATE(269)] = 5663,
  [SMALL_STATE(270)] = 5670,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sql_expr, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sql_expr, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_in_expr, 5),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_in_expr, 5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_alias, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_alias, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_fn, 4),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_fn, 4),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_parens, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_parens, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_where_expression, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expression, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [231] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(72),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_table_list_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_table_list_repeat1, 2), SHIFT_REPEAT(178),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_list, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_list, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_clause, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2), SHIFT_REPEAT(269),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 2),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 5),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_where_clause, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_clause, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 6),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_statement, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 7),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_expression, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_comment, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(67),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 3),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(173),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(61),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2), SHIFT_REPEAT(163),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(71),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 2),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 4),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 5),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [482] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [484] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_recursive_name, 5),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [540] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jsql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
