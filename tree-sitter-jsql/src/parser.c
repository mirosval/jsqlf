#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 264
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
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
  sym_sql_order_by_clause = 93,
  sym_sql_order_by_expression = 94,
  sym_sql_group_by_clause = 95,
  sym_sql_group_by_expression = 96,
  sym_sql_limit_clause = 97,
  sym_sql_limit_expression = 98,
  sym__sql_expr = 99,
  sym_sql_string = 100,
  sym_sql_binary_expr = 101,
  sym_sql_boolean_expr = 102,
  sym_sql_in_expr = 103,
  sym_sql_alias = 104,
  sym_sql_fn = 105,
  sym_sql_arg_list = 106,
  sym_sql_table_name = 107,
  sym_sql_dotted_identifier = 108,
  aux_sym_source_file_repeat1 = 109,
  aux_sym_jinja_argument_list_repeat1 = 110,
  aux_sym_jinja_list_repeat1 = 111,
  aux_sym_jinja_dict_repeat1 = 112,
  aux_sym_sql_with_clause_repeat1 = 113,
  aux_sym_sql_column_list_repeat1 = 114,
  aux_sym_sql_table_list_repeat1 = 115,
  aux_sym_sql_order_by_expression_repeat1 = 116,
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
  [sym_sql_order_by_clause] = "sql_order_by_clause",
  [sym_sql_order_by_expression] = "sql_order_by_expression",
  [sym_sql_group_by_clause] = "sql_group_by_clause",
  [sym_sql_group_by_expression] = "sql_group_by_expression",
  [sym_sql_limit_clause] = "sql_limit_clause",
  [sym_sql_limit_expression] = "sql_limit_expression",
  [sym__sql_expr] = "_sql_expr",
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
  [sym_sql_order_by_clause] = sym_sql_order_by_clause,
  [sym_sql_order_by_expression] = sym_sql_order_by_expression,
  [sym_sql_group_by_clause] = sym_sql_group_by_clause,
  [sym_sql_group_by_expression] = sym_sql_group_by_expression,
  [sym_sql_limit_clause] = sym_sql_limit_clause,
  [sym_sql_limit_expression] = sym_sql_limit_expression,
  [sym__sql_expr] = sym__sql_expr,
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
      if (lookahead == '{') ADVANCE(26);
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
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(210);
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
  [19] = {.lex_state = 13},
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
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 87},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 87},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 14},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 87},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 88},
  [64] = {.lex_state = 87},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 87},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 87},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 87},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 87},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 16},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 87},
  [86] = {.lex_state = 16},
  [87] = {.lex_state = 87},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 87},
  [90] = {.lex_state = 16},
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
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 87},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 14},
  [129] = {.lex_state = 14},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 14},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 14},
  [135] = {.lex_state = 14},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 14},
  [138] = {.lex_state = 14},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 14},
  [141] = {.lex_state = 87},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 87},
  [144] = {.lex_state = 87},
  [145] = {.lex_state = 87},
  [146] = {.lex_state = 23},
  [147] = {.lex_state = 87},
  [148] = {.lex_state = 87},
  [149] = {.lex_state = 87},
  [150] = {.lex_state = 24},
  [151] = {.lex_state = 87},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 87},
  [154] = {.lex_state = 87},
  [155] = {.lex_state = 87},
  [156] = {.lex_state = 24},
  [157] = {.lex_state = 87},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 87},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 87},
  [162] = {.lex_state = 87},
  [163] = {.lex_state = 87},
  [164] = {.lex_state = 87},
  [165] = {.lex_state = 87},
  [166] = {.lex_state = 87},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 87},
  [169] = {.lex_state = 87},
  [170] = {.lex_state = 23},
  [171] = {.lex_state = 87},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 87},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 87},
  [191] = {.lex_state = 87},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 87},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 87},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 87},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 23},
  [212] = {.lex_state = 23},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 87},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 87},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 23},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 257},
  [228] = {.lex_state = 87},
  [229] = {.lex_state = 14},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 14},
  [232] = {.lex_state = 87},
  [233] = {.lex_state = 23},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 23},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 23},
  [243] = {.lex_state = 23},
  [244] = {.lex_state = 120},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 23},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 23},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 107},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 87},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 23},
  [256] = {.lex_state = 23},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 107},
  [259] = {.lex_state = 120},
  [260] = {.lex_state = 257},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
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
    [sym_source_file] = STATE(262),
    [sym_jinja_expression] = STATE(37),
    [sym_jinja_statement] = STATE(37),
    [sym_jinja_comment] = STATE(37),
    [sym_sql_statement] = STATE(171),
    [sym_sql_union_statement] = STATE(155),
    [sym_sql_intersect_statement] = STATE(155),
    [sym_sql_except_statement] = STATE(155),
    [sym_sql_select_statement] = STATE(155),
    [sym_sql_with_clause] = STATE(215),
    [sym_sql_select_clause] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(37),
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
  [51] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(29), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(45), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(47), 1,
      aux_sym_sql_in_expr_token1,
    STATE(64), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(37), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(41), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(31), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(27), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(23), 10,
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
  [121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(51), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(49), 29,
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
  [214] = 3,
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
  [259] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(45), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(47), 1,
      aux_sym_sql_in_expr_token1,
    ACTIONS(37), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(41), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(31), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(27), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(63), 11,
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
  [324] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(37), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(31), 5,
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
  [379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(65), 29,
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
  [424] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
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
  [471] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 8,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(69), 29,
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
  [516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(31), 5,
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
  [567] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(75), 2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(37), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(41), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(31), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(27), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(73), 13,
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
  [626] = 3,
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
  [671] = 3,
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
  [716] = 3,
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
  [761] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(75), 2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(37), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(41), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(31), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(27), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(73), 12,
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
  [822] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(45), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(47), 1,
      aux_sym_sql_in_expr_token1,
    ACTIONS(37), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(41), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(31), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(27), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(89), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [884] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(93), 1,
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
  [926] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(101), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(105), 1,
      anon_sym_CARET,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(117), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(119), 1,
      aux_sym_sql_in_expr_token1,
    STATE(189), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(113), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(103), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(99), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [987] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(105), 1,
      anon_sym_CARET,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(117), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(119), 1,
      aux_sym_sql_in_expr_token1,
    STATE(181), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(113), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(103), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(99), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1048] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_DOT,
    ACTIONS(51), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(49), 22,
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
  [1087] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_CARET,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(113), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(73), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(103), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(99), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1137] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_CARET,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(113), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(103), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(73), 6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
      aux_sym_sql_in_expr_token1,
    ACTIONS(99), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1185] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_CARET,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(61), 5,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(103), 5,
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
  [1227] = 3,
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
  [1263] = 3,
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
  [1299] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(69), 22,
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
  [1335] = 3,
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
  [1371] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(105), 1,
      anon_sym_CARET,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(115), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(117), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(119), 1,
      aux_sym_sql_in_expr_token1,
    ACTIONS(63), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(113), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(103), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(99), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1427] = 3,
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
  [1463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
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
  [1501] = 3,
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
  [1537] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(65), 22,
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
  [1573] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_CARET,
    ACTIONS(107), 1,
      anon_sym_SLASH,
    ACTIONS(111), 1,
      anon_sym_DASH,
    ACTIONS(109), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(61), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(103), 5,
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
  [1619] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(172), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1657] = 11,
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
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(165), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(110), 4,
      sym_jinja_expression,
      sym_jinja_statement,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [1697] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_jinja_identifier,
    ACTIONS(139), 1,
      anon_sym_COMMA,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(188), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1735] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(182), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1772] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_jinja_identifier,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(213), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1807] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(183), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1844] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_jinja_identifier,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(213), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1879] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(161), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(165), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(56), 1,
      sym_sql_from_clause,
    STATE(81), 1,
      sym_sql_where_clause,
    STATE(100), 1,
      sym_sql_group_by_clause,
    STATE(122), 1,
      sym_sql_order_by_clause,
    STATE(148), 1,
      sym_sql_limit_clause,
    ACTIONS(157), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [1920] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(161), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(165), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(54), 1,
      sym_sql_from_clause,
    STATE(87), 1,
      sym_sql_where_clause,
    STATE(102), 1,
      sym_sql_group_by_clause,
    STATE(121), 1,
      sym_sql_order_by_clause,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [1961] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_jinja_identifier,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(213), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 15,
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
  [2017] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_jinja_identifier,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(213), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [2052] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(213), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [2084] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(203), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2118] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(203), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2152] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(203), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2186] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(203), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2220] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(94), 1,
      sym_sql_column_list,
    STATE(3), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2249] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(165), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(72), 1,
      sym_sql_where_clause,
    STATE(112), 1,
      sym_sql_group_by_clause,
    STATE(117), 1,
      sym_sql_order_by_clause,
    STATE(143), 1,
      sym_sql_limit_clause,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2284] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(203), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2315] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(165), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(87), 1,
      sym_sql_where_clause,
    STATE(102), 1,
      sym_sql_group_by_clause,
    STATE(121), 1,
      sym_sql_order_by_clause,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2350] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SQUOTE,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(201), 1,
      anon_sym_LBRACK,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
    ACTIONS(205), 1,
      sym_jinja_identifier,
    ACTIONS(199), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(198), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2381] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_STAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(257), 1,
      sym_sql_column_list,
    STATE(21), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2410] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2441] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(232), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2472] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(229), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2503] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_LBRACK,
    ACTIONS(135), 1,
      anon_sym_LBRACE,
    ACTIONS(147), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(231), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2534] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(217), 1,
      sym_sql_identifier,
    ACTIONS(213), 10,
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
  [2556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(219), 10,
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
  [2578] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(250), 1,
      sym_sql_arg_list,
    STATE(20), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(63), 10,
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
  [2626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(261), 1,
      sym_sql_arg_list,
    STATE(20), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2652] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(7), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(26), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2698] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_sql_table_list_repeat1,
    ACTIONS(224), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2719] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(8), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2742] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(165), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(109), 1,
      sym_sql_group_by_clause,
    STATE(118), 1,
      sym_sql_order_by_clause,
    STATE(163), 1,
      sym_sql_limit_clause,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2771] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(10), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2794] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(6), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2817] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(12), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2840] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(13), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2863] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(17), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2886] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(15), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(33), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      sym_sql_identifier,
    ACTIONS(191), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(18), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2955] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(165), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(102), 1,
      sym_sql_group_by_clause,
    STATE(121), 1,
      sym_sql_order_by_clause,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2984] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(23), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3007] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(24), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3030] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(25), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3053] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_sql_table_list_repeat1,
    ACTIONS(230), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3074] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(30), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3097] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(165), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(112), 1,
      sym_sql_group_by_clause,
    STATE(117), 1,
      sym_sql_order_by_clause,
    STATE(143), 1,
      sym_sql_limit_clause,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(32), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3149] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_sql_table_list_repeat1,
    ACTIONS(235), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(35), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 10,
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
  [3209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 10,
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
  [3225] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 10,
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
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 10,
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
  [3257] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(241), 1,
      aux_sym_sql_union_statement_token2,
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(164), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3285] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(243), 1,
      aux_sym_sql_union_statement_token2,
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(145), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3313] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(245), 1,
      aux_sym_sql_union_statement_token2,
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(162), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 10,
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
  [3357] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(168), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3382] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(121), 1,
      sym_sql_order_by_clause,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(249), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3424] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(117), 1,
      sym_sql_order_by_clause,
    STATE(143), 1,
      sym_sql_limit_clause,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3447] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(154), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3491] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(166), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3516] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(258), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3550] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(169), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3575] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(119), 1,
      sym_sql_order_by_clause,
    STATE(159), 1,
      sym_sql_limit_clause,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3598] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(267), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(270), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(273), 2,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
    STATE(110), 4,
      sym_jinja_expression,
      sym_jinja_statement,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
  [3621] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(141), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3646] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(118), 1,
      sym_sql_order_by_clause,
    STATE(163), 1,
      sym_sql_limit_clause,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3669] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(43), 1,
      sym_sql_select_clause,
    STATE(147), 1,
      sym_sql_statement,
    STATE(215), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(275), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [3712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [3730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(163), 1,
      sym_sql_limit_clause,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(159), 1,
      sym_sql_limit_clause,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(157), 1,
      sym_sql_limit_clause,
    ACTIONS(279), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3808] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(143), 1,
      sym_sql_limit_clause,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3842] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 7,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [3879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3927] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(193), 1,
      sym_jinja_pair,
    STATE(239), 1,
      sym_jinja_lit_string,
  [3949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3961] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(303), 1,
      anon_sym_COMMA,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      sym_jinja_pair,
    STATE(239), 1,
      sym_jinja_lit_string,
  [3983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4090] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(239), 1,
      sym_jinja_lit_string,
  [4109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      sym_sql_identifier,
    STATE(107), 1,
      sym_sql_table_list,
    STATE(89), 2,
      sym_jinja_expression,
      sym_sql_table_name,
  [4159] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(333), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(341), 1,
      sym_sql_identifier,
    STATE(178), 1,
      sym_sql_cte,
    STATE(228), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [4211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 5,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
  [4222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(239), 1,
      sym_jinja_lit_string,
  [4241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 5,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
  [4252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(349), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4276] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(341), 1,
      sym_sql_identifier,
    STATE(199), 1,
      sym_sql_cte,
    STATE(228), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4304] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(239), 1,
      sym_jinja_lit_string,
  [4323] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4334] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(239), 1,
      sym_jinja_lit_string,
  [4353] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(359), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4377] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4388] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(361), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(363), 1,
      ts_builtin_sym_end,
    ACTIONS(365), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(367), 1,
      aux_sym_sql_except_statement_token1,
  [4417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(365), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(367), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [4433] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(239), 1,
      sym_jinja_lit_string,
  [4449] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(365), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(367), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
  [4465] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(365), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(367), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [4481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      sym_sql_identifier,
    STATE(91), 2,
      sym_jinja_expression,
      sym_sql_table_name,
  [4495] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(365), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(367), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(375), 1,
      ts_builtin_sym_end,
  [4511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACE,
    STATE(173), 1,
      aux_sym_jinja_dict_repeat1,
  [4537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    ACTIONS(388), 1,
      anon_sym_EQ,
    STATE(140), 1,
      sym_jinja_argument_list,
  [4550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_sql_column_list_repeat1,
  [4563] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(393), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_jinja_dict_repeat1,
  [4576] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    ACTIONS(395), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_jinja_list_repeat1,
  [4589] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      aux_sym_sql_select_clause_token1,
    STATE(191), 1,
      aux_sym_sql_with_clause_repeat1,
  [4602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_jinja_list_repeat1,
  [4615] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4628] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_sql_column_list_repeat1,
  [4641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_jinja_list_repeat1,
  [4654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      aux_sym_jinja_list_repeat1,
  [4667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_jinja_dict_repeat1,
  [4680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(176), 1,
      aux_sym_jinja_dict_repeat1,
  [4706] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    ACTIONS(427), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_jinja_list_repeat1,
  [4719] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4732] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_sql_column_list_repeat1,
  [4745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      aux_sym_sql_select_clause_token1,
    STATE(190), 1,
      aux_sym_sql_with_clause_repeat1,
  [4758] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      aux_sym_sql_select_clause_token1,
    STATE(190), 1,
      aux_sym_sql_with_clause_repeat1,
  [4771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
    STATE(184), 1,
      aux_sym_jinja_dict_repeat1,
  [4797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
    STATE(140), 1,
      sym_jinja_argument_list,
  [4815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4823] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_sql_integer,
    STATE(144), 1,
      sym_sql_limit_expression,
  [4833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [4849] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      sym_jinja_argument_list,
  [4867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [4875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4891] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4915] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4923] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4939] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_sql_identifier,
    STATE(120), 1,
      sym_sql_group_by_expression,
  [4949] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_sql_identifier,
    STATE(125), 1,
      sym_sql_order_by_expression,
  [4959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(44), 1,
      sym_sql_select_clause,
  [4985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_LPAREN,
      aux_sym_sql_cte_token1,
  [5017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5041] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_sql_identifier,
    STATE(240), 1,
      sym_sql_cte_name,
  [5051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
  [5058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RBRACK,
  [5065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_SQUOTE,
  [5072] = 2,
    ACTIONS(468), 1,
      aux_sym_sql_string_token1,
    ACTIONS(470), 1,
      sym_comment,
  [5079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      aux_sym_sql_cte_token1,
  [5086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_POUND_RBRACE,
  [5093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_DQUOTE,
  [5100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_PERCENT_RBRACE,
  [5107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RBRACE_RBRACE,
  [5114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_sql_identifier,
  [5121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SQUOTE,
  [5128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
  [5135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_RBRACK,
  [5142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_sql_identifier,
  [5149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_RBRACE,
  [5156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON,
  [5163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_LPAREN,
  [5170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_SQUOTE,
  [5177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_sql_identifier,
  [5184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_sql_identifier,
  [5191] = 2,
    ACTIONS(470), 1,
      sym_comment,
    ACTIONS(496), 1,
      aux_sym_jinja_lit_string_token2,
  [5198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LPAREN,
  [5205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_SQUOTE,
  [5212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      sym_sql_identifier,
  [5219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_RPAREN,
  [5226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_sql_identifier,
  [5233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
  [5240] = 2,
    ACTIONS(470), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_jinja_lit_string_token1,
  [5247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_LPAREN,
  [5254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_sql_cte_token1,
  [5261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(431), 1,
      anon_sym_RPAREN,
  [5268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym_sql_identifier,
  [5275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_sql_identifier,
  [5282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
  [5289] = 2,
    ACTIONS(470), 1,
      sym_comment,
    ACTIONS(520), 1,
      aux_sym_jinja_lit_string_token1,
  [5296] = 2,
    ACTIONS(470), 1,
      sym_comment,
    ACTIONS(522), 1,
      aux_sym_jinja_lit_string_token2,
  [5303] = 2,
    ACTIONS(470), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_sql_string_token1,
  [5310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
  [5317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
  [5324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 121,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 324,
  [SMALL_STATE(9)] = 379,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 471,
  [SMALL_STATE(12)] = 516,
  [SMALL_STATE(13)] = 567,
  [SMALL_STATE(14)] = 626,
  [SMALL_STATE(15)] = 671,
  [SMALL_STATE(16)] = 716,
  [SMALL_STATE(17)] = 761,
  [SMALL_STATE(18)] = 822,
  [SMALL_STATE(19)] = 884,
  [SMALL_STATE(20)] = 926,
  [SMALL_STATE(21)] = 987,
  [SMALL_STATE(22)] = 1048,
  [SMALL_STATE(23)] = 1087,
  [SMALL_STATE(24)] = 1137,
  [SMALL_STATE(25)] = 1185,
  [SMALL_STATE(26)] = 1227,
  [SMALL_STATE(27)] = 1263,
  [SMALL_STATE(28)] = 1299,
  [SMALL_STATE(29)] = 1335,
  [SMALL_STATE(30)] = 1371,
  [SMALL_STATE(31)] = 1427,
  [SMALL_STATE(32)] = 1463,
  [SMALL_STATE(33)] = 1501,
  [SMALL_STATE(34)] = 1537,
  [SMALL_STATE(35)] = 1573,
  [SMALL_STATE(36)] = 1619,
  [SMALL_STATE(37)] = 1657,
  [SMALL_STATE(38)] = 1697,
  [SMALL_STATE(39)] = 1735,
  [SMALL_STATE(40)] = 1772,
  [SMALL_STATE(41)] = 1807,
  [SMALL_STATE(42)] = 1844,
  [SMALL_STATE(43)] = 1879,
  [SMALL_STATE(44)] = 1920,
  [SMALL_STATE(45)] = 1961,
  [SMALL_STATE(46)] = 1996,
  [SMALL_STATE(47)] = 2017,
  [SMALL_STATE(48)] = 2052,
  [SMALL_STATE(49)] = 2084,
  [SMALL_STATE(50)] = 2118,
  [SMALL_STATE(51)] = 2152,
  [SMALL_STATE(52)] = 2186,
  [SMALL_STATE(53)] = 2220,
  [SMALL_STATE(54)] = 2249,
  [SMALL_STATE(55)] = 2284,
  [SMALL_STATE(56)] = 2315,
  [SMALL_STATE(57)] = 2350,
  [SMALL_STATE(58)] = 2381,
  [SMALL_STATE(59)] = 2410,
  [SMALL_STATE(60)] = 2441,
  [SMALL_STATE(61)] = 2472,
  [SMALL_STATE(62)] = 2503,
  [SMALL_STATE(63)] = 2534,
  [SMALL_STATE(64)] = 2556,
  [SMALL_STATE(65)] = 2578,
  [SMALL_STATE(66)] = 2604,
  [SMALL_STATE(67)] = 2626,
  [SMALL_STATE(68)] = 2652,
  [SMALL_STATE(69)] = 2675,
  [SMALL_STATE(70)] = 2698,
  [SMALL_STATE(71)] = 2719,
  [SMALL_STATE(72)] = 2742,
  [SMALL_STATE(73)] = 2771,
  [SMALL_STATE(74)] = 2794,
  [SMALL_STATE(75)] = 2817,
  [SMALL_STATE(76)] = 2840,
  [SMALL_STATE(77)] = 2863,
  [SMALL_STATE(78)] = 2886,
  [SMALL_STATE(79)] = 2909,
  [SMALL_STATE(80)] = 2932,
  [SMALL_STATE(81)] = 2955,
  [SMALL_STATE(82)] = 2984,
  [SMALL_STATE(83)] = 3007,
  [SMALL_STATE(84)] = 3030,
  [SMALL_STATE(85)] = 3053,
  [SMALL_STATE(86)] = 3074,
  [SMALL_STATE(87)] = 3097,
  [SMALL_STATE(88)] = 3126,
  [SMALL_STATE(89)] = 3149,
  [SMALL_STATE(90)] = 3170,
  [SMALL_STATE(91)] = 3193,
  [SMALL_STATE(92)] = 3209,
  [SMALL_STATE(93)] = 3225,
  [SMALL_STATE(94)] = 3241,
  [SMALL_STATE(95)] = 3257,
  [SMALL_STATE(96)] = 3285,
  [SMALL_STATE(97)] = 3313,
  [SMALL_STATE(98)] = 3341,
  [SMALL_STATE(99)] = 3357,
  [SMALL_STATE(100)] = 3382,
  [SMALL_STATE(101)] = 3405,
  [SMALL_STATE(102)] = 3424,
  [SMALL_STATE(103)] = 3447,
  [SMALL_STATE(104)] = 3472,
  [SMALL_STATE(105)] = 3491,
  [SMALL_STATE(106)] = 3516,
  [SMALL_STATE(107)] = 3535,
  [SMALL_STATE(108)] = 3550,
  [SMALL_STATE(109)] = 3575,
  [SMALL_STATE(110)] = 3598,
  [SMALL_STATE(111)] = 3621,
  [SMALL_STATE(112)] = 3646,
  [SMALL_STATE(113)] = 3669,
  [SMALL_STATE(114)] = 3694,
  [SMALL_STATE(115)] = 3712,
  [SMALL_STATE(116)] = 3730,
  [SMALL_STATE(117)] = 3744,
  [SMALL_STATE(118)] = 3761,
  [SMALL_STATE(119)] = 3778,
  [SMALL_STATE(120)] = 3795,
  [SMALL_STATE(121)] = 3808,
  [SMALL_STATE(122)] = 3825,
  [SMALL_STATE(123)] = 3842,
  [SMALL_STATE(124)] = 3855,
  [SMALL_STATE(125)] = 3867,
  [SMALL_STATE(126)] = 3879,
  [SMALL_STATE(127)] = 3891,
  [SMALL_STATE(128)] = 3903,
  [SMALL_STATE(129)] = 3915,
  [SMALL_STATE(130)] = 3927,
  [SMALL_STATE(131)] = 3949,
  [SMALL_STATE(132)] = 3961,
  [SMALL_STATE(133)] = 3983,
  [SMALL_STATE(134)] = 3995,
  [SMALL_STATE(135)] = 4007,
  [SMALL_STATE(136)] = 4019,
  [SMALL_STATE(137)] = 4031,
  [SMALL_STATE(138)] = 4043,
  [SMALL_STATE(139)] = 4055,
  [SMALL_STATE(140)] = 4067,
  [SMALL_STATE(141)] = 4079,
  [SMALL_STATE(142)] = 4090,
  [SMALL_STATE(143)] = 4109,
  [SMALL_STATE(144)] = 4120,
  [SMALL_STATE(145)] = 4131,
  [SMALL_STATE(146)] = 4142,
  [SMALL_STATE(147)] = 4159,
  [SMALL_STATE(148)] = 4172,
  [SMALL_STATE(149)] = 4183,
  [SMALL_STATE(150)] = 4194,
  [SMALL_STATE(151)] = 4211,
  [SMALL_STATE(152)] = 4222,
  [SMALL_STATE(153)] = 4241,
  [SMALL_STATE(154)] = 4252,
  [SMALL_STATE(155)] = 4265,
  [SMALL_STATE(156)] = 4276,
  [SMALL_STATE(157)] = 4293,
  [SMALL_STATE(158)] = 4304,
  [SMALL_STATE(159)] = 4323,
  [SMALL_STATE(160)] = 4334,
  [SMALL_STATE(161)] = 4353,
  [SMALL_STATE(162)] = 4364,
  [SMALL_STATE(163)] = 4377,
  [SMALL_STATE(164)] = 4388,
  [SMALL_STATE(165)] = 4401,
  [SMALL_STATE(166)] = 4417,
  [SMALL_STATE(167)] = 4433,
  [SMALL_STATE(168)] = 4449,
  [SMALL_STATE(169)] = 4465,
  [SMALL_STATE(170)] = 4481,
  [SMALL_STATE(171)] = 4495,
  [SMALL_STATE(172)] = 4511,
  [SMALL_STATE(173)] = 4524,
  [SMALL_STATE(174)] = 4537,
  [SMALL_STATE(175)] = 4550,
  [SMALL_STATE(176)] = 4563,
  [SMALL_STATE(177)] = 4576,
  [SMALL_STATE(178)] = 4589,
  [SMALL_STATE(179)] = 4602,
  [SMALL_STATE(180)] = 4615,
  [SMALL_STATE(181)] = 4628,
  [SMALL_STATE(182)] = 4641,
  [SMALL_STATE(183)] = 4654,
  [SMALL_STATE(184)] = 4667,
  [SMALL_STATE(185)] = 4680,
  [SMALL_STATE(186)] = 4693,
  [SMALL_STATE(187)] = 4706,
  [SMALL_STATE(188)] = 4719,
  [SMALL_STATE(189)] = 4732,
  [SMALL_STATE(190)] = 4745,
  [SMALL_STATE(191)] = 4758,
  [SMALL_STATE(192)] = 4771,
  [SMALL_STATE(193)] = 4784,
  [SMALL_STATE(194)] = 4797,
  [SMALL_STATE(195)] = 4805,
  [SMALL_STATE(196)] = 4815,
  [SMALL_STATE(197)] = 4823,
  [SMALL_STATE(198)] = 4833,
  [SMALL_STATE(199)] = 4841,
  [SMALL_STATE(200)] = 4849,
  [SMALL_STATE(201)] = 4857,
  [SMALL_STATE(202)] = 4867,
  [SMALL_STATE(203)] = 4875,
  [SMALL_STATE(204)] = 4883,
  [SMALL_STATE(205)] = 4891,
  [SMALL_STATE(206)] = 4899,
  [SMALL_STATE(207)] = 4907,
  [SMALL_STATE(208)] = 4915,
  [SMALL_STATE(209)] = 4923,
  [SMALL_STATE(210)] = 4931,
  [SMALL_STATE(211)] = 4939,
  [SMALL_STATE(212)] = 4949,
  [SMALL_STATE(213)] = 4959,
  [SMALL_STATE(214)] = 4967,
  [SMALL_STATE(215)] = 4975,
  [SMALL_STATE(216)] = 4985,
  [SMALL_STATE(217)] = 4993,
  [SMALL_STATE(218)] = 5001,
  [SMALL_STATE(219)] = 5009,
  [SMALL_STATE(220)] = 5017,
  [SMALL_STATE(221)] = 5025,
  [SMALL_STATE(222)] = 5033,
  [SMALL_STATE(223)] = 5041,
  [SMALL_STATE(224)] = 5051,
  [SMALL_STATE(225)] = 5058,
  [SMALL_STATE(226)] = 5065,
  [SMALL_STATE(227)] = 5072,
  [SMALL_STATE(228)] = 5079,
  [SMALL_STATE(229)] = 5086,
  [SMALL_STATE(230)] = 5093,
  [SMALL_STATE(231)] = 5100,
  [SMALL_STATE(232)] = 5107,
  [SMALL_STATE(233)] = 5114,
  [SMALL_STATE(234)] = 5121,
  [SMALL_STATE(235)] = 5128,
  [SMALL_STATE(236)] = 5135,
  [SMALL_STATE(237)] = 5142,
  [SMALL_STATE(238)] = 5149,
  [SMALL_STATE(239)] = 5156,
  [SMALL_STATE(240)] = 5163,
  [SMALL_STATE(241)] = 5170,
  [SMALL_STATE(242)] = 5177,
  [SMALL_STATE(243)] = 5184,
  [SMALL_STATE(244)] = 5191,
  [SMALL_STATE(245)] = 5198,
  [SMALL_STATE(246)] = 5205,
  [SMALL_STATE(247)] = 5212,
  [SMALL_STATE(248)] = 5219,
  [SMALL_STATE(249)] = 5226,
  [SMALL_STATE(250)] = 5233,
  [SMALL_STATE(251)] = 5240,
  [SMALL_STATE(252)] = 5247,
  [SMALL_STATE(253)] = 5254,
  [SMALL_STATE(254)] = 5261,
  [SMALL_STATE(255)] = 5268,
  [SMALL_STATE(256)] = 5275,
  [SMALL_STATE(257)] = 5282,
  [SMALL_STATE(258)] = 5289,
  [SMALL_STATE(259)] = 5296,
  [SMALL_STATE(260)] = 5303,
  [SMALL_STATE(261)] = 5310,
  [SMALL_STATE(262)] = 5317,
  [SMALL_STATE(263)] = 5324,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sql_expr, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sql_expr, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_fn, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_fn, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_alias, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_alias, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_in_expr, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_in_expr, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_where_clause, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expression, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(68),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_list, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_table_list_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_table_list_repeat1, 2), SHIFT_REPEAT(170),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_list, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_clause, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2), SHIFT_REPEAT(237),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 5),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [267] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 6),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_clause, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 4),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_expression, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_statement, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_comment, 3),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 7),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(167),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(86),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 2),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(55),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(48),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 2),
  [435] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2), SHIFT_REPEAT(156),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 3),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 4),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 5),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 4),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_recursive_name, 5),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [528] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
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
