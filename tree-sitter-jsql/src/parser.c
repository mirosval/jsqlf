#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 265
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
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
  aux_sym_sql_order_by_clause_token2 = 36,
  aux_sym_sql_group_by_clause_token1 = 37,
  aux_sym_sql_limit_clause_token1 = 38,
  aux_sym_sql_string_token1 = 39,
  anon_sym_CARET = 40,
  anon_sym_SLASH = 41,
  anon_sym_PERCENT = 42,
  anon_sym_LT_LT = 43,
  anon_sym_GT_GT = 44,
  anon_sym_AMP = 45,
  anon_sym_PLUS = 46,
  anon_sym_DASH = 47,
  anon_sym_PIPE = 48,
  anon_sym_POUND = 49,
  anon_sym_LT = 50,
  anon_sym_LT_EQ = 51,
  anon_sym_LT_GT = 52,
  anon_sym_BANG_EQ = 53,
  anon_sym_GT = 54,
  anon_sym_GT_EQ = 55,
  anon_sym_TILDE = 56,
  anon_sym_BANG_TILDE = 57,
  anon_sym_TILDE_STAR = 58,
  anon_sym_BANG_TILDE_STAR = 59,
  aux_sym_sql_boolean_expr_token1 = 60,
  aux_sym_sql_boolean_expr_token2 = 61,
  aux_sym_sql_boolean_expr_token3 = 62,
  aux_sym_sql_in_expr_token1 = 63,
  anon_sym_DOT = 64,
  sym_sql_integer = 65,
  sym_comment = 66,
  sym_source_file = 67,
  sym_jinja_expression = 68,
  sym_jinja_statement = 69,
  sym_jinja_comment = 70,
  sym__jinja_expr = 71,
  sym_jinja_fn_call = 72,
  sym_jinja_argument_list = 73,
  sym_jinja_lit_string = 74,
  sym_jinja_bool = 75,
  sym_jinja_list = 76,
  sym_jinja_dict = 77,
  sym_jinja_pair = 78,
  sym_jinja_kwarg = 79,
  sym_sql_statement = 80,
  sym_sql_union_statement = 81,
  sym_sql_intersect_statement = 82,
  sym_sql_except_statement = 83,
  sym_sql_select_statement = 84,
  sym_sql_with_clause = 85,
  sym_sql_cte = 86,
  sym_sql_cte_recursive_name = 87,
  sym_sql_cte_name = 88,
  sym_sql_select_clause = 89,
  sym_sql_column_list = 90,
  sym_sql_from_clause = 91,
  sym_sql_table_list = 92,
  sym_sql_where_clause = 93,
  sym_sql_order_by_clause = 94,
  sym_sql_order_by_expression = 95,
  sym_sql_group_by_clause = 96,
  sym_sql_group_by_expression = 97,
  sym_sql_limit_clause = 98,
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
  [aux_sym_sql_order_by_clause_token1] = "order",
  [aux_sym_sql_order_by_clause_token2] = "by",
  [aux_sym_sql_group_by_clause_token1] = "group",
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
  [aux_sym_sql_order_by_clause_token2] = aux_sym_sql_order_by_clause_token2,
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
  [aux_sym_sql_order_by_clause_token2] = {
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
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '%') ADVANCE(266);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '+') ADVANCE(270);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == 'F') ADVANCE(129);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == '\\') SKIP(77)
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == '^') ADVANCE(263);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == '{') ADVANCE(125);
      if (lookahead == '|') ADVANCE(272);
      if (lookahead == '}') ADVANCE(126);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(191);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(190);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(166);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(172);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(146);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(145);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(165);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      if (('C' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(22)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(22)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '%') ADVANCE(265);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '+') ADVANCE(270);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(263);
      if (lookahead == '|') ADVANCE(272);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '%') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == 'F') ADVANCE(130);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '{') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
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
          lookahead == 65279) SKIP(14)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(260);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(262);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(297);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
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
          lookahead == 65279) SKIP(21)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(22)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '~') ADVANCE(282);
      END_STATE();
    case 24:
      if (lookahead == '{') ADVANCE(85);
      END_STATE();
    case 25:
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == '}') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == '}') ADVANCE(86);
      END_STATE();
    case 28:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(197);
      END_STATE();
    case 41:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 45:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 47:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      END_STATE();
    case 49:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(290);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 54:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 58:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 59:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 64:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      END_STATE();
    case 65:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 66:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      END_STATE();
    case 69:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 70:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 71:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      END_STATE();
    case 72:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 75:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      END_STATE();
    case 76:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 77:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(76)
      END_STATE();
    case 78:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(82)
      END_STATE();
    case 79:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(82)
      if (lookahead == '\r') SKIP(78)
      END_STATE();
    case 80:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(83)
      END_STATE();
    case 81:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') SKIP(83)
      if (lookahead == '\r') SKIP(80)
      END_STATE();
    case 82:
      if (eof) ADVANCE(84);
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(273);
      if (lookahead == '%') ADVANCE(265);
      if (lookahead == '&') ADVANCE(269);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(247);
      if (lookahead == '+') ADVANCE(270);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(271);
      if (lookahead == '.') ADVANCE(293);
      if (lookahead == '/') ADVANCE(264);
      if (lookahead == '<') ADVANCE(275);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(279);
      if (lookahead == '\\') SKIP(79)
      if (lookahead == '^') ADVANCE(263);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(272);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '~') ADVANCE(281);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(61);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(65);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(64);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(82)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(233);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(244);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(220);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(214);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(228);
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
          lookahead == 65279) SKIP(83)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PERCENT_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(104);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\'') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(19);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(105);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '*') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead == '\\') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(100);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(119);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(115);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead == '"') ADVANCE(297);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '/') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(118);
      if (lookahead != 0) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(116);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(113);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '{') ADVANCE(85);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(147);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_sql_union_statement_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_sql_union_statement_token2);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_sql_intersect_statement_token1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_sql_except_statement_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_sql_with_clause_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_sql_cte_recursive_name_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_sql_select_clause_token1);
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
          lookahead == 'e') ADVANCE(199);
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
          lookahead == 'e') ADVANCE(232);
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
          lookahead == 'e') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
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
          lookahead == 'n') ADVANCE(193);
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
          lookahead == 'p') ADVANCE(252);
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
          lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(198);
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
          lookahead == 't') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(246);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
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
          lookahead == 'u') ADVANCE(231);
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
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_sql_group_by_clause_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\r') ADVANCE(255);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(258);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(260);
      if (lookahead == '\'') ADVANCE(296);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '/') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(254);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(258);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '-') ADVANCE(256);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(261);
      if (lookahead == '/') ADVANCE(260);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(261);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(88);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(297);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '=') ADVANCE(276);
      if (lookahead == '>') ADVANCE(277);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '>') ADVANCE(268);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(283);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      if (lookahead == '*') ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE_STAR);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token1);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token2);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_sql_in_expr_token1);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_sql_in_expr_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_sql_in_expr_token1);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_sql_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(297);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 82},
  [6] = {.lex_state = 82},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 82},
  [9] = {.lex_state = 82},
  [10] = {.lex_state = 82},
  [11] = {.lex_state = 82},
  [12] = {.lex_state = 82},
  [13] = {.lex_state = 82},
  [14] = {.lex_state = 82},
  [15] = {.lex_state = 82},
  [16] = {.lex_state = 82},
  [17] = {.lex_state = 82},
  [18] = {.lex_state = 82},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 82},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 82},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 82},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 82},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 82},
  [57] = {.lex_state = 82},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 83},
  [64] = {.lex_state = 82},
  [65] = {.lex_state = 82},
  [66] = {.lex_state = 14},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 14},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 14},
  [74] = {.lex_state = 14},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 82},
  [79] = {.lex_state = 82},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 82},
  [82] = {.lex_state = 14},
  [83] = {.lex_state = 82},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 82},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 82},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 82},
  [92] = {.lex_state = 82},
  [93] = {.lex_state = 82},
  [94] = {.lex_state = 82},
  [95] = {.lex_state = 82},
  [96] = {.lex_state = 82},
  [97] = {.lex_state = 82},
  [98] = {.lex_state = 82},
  [99] = {.lex_state = 82},
  [100] = {.lex_state = 82},
  [101] = {.lex_state = 82},
  [102] = {.lex_state = 82},
  [103] = {.lex_state = 82},
  [104] = {.lex_state = 82},
  [105] = {.lex_state = 82},
  [106] = {.lex_state = 82},
  [107] = {.lex_state = 82},
  [108] = {.lex_state = 82},
  [109] = {.lex_state = 82},
  [110] = {.lex_state = 82},
  [111] = {.lex_state = 82},
  [112] = {.lex_state = 82},
  [113] = {.lex_state = 82},
  [114] = {.lex_state = 82},
  [115] = {.lex_state = 82},
  [116] = {.lex_state = 82},
  [117] = {.lex_state = 82},
  [118] = {.lex_state = 12},
  [119] = {.lex_state = 82},
  [120] = {.lex_state = 82},
  [121] = {.lex_state = 82},
  [122] = {.lex_state = 82},
  [123] = {.lex_state = 82},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 12},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 82},
  [141] = {.lex_state = 82},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 22},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 82},
  [147] = {.lex_state = 82},
  [148] = {.lex_state = 21},
  [149] = {.lex_state = 82},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 82},
  [152] = {.lex_state = 82},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 82},
  [155] = {.lex_state = 82},
  [156] = {.lex_state = 82},
  [157] = {.lex_state = 82},
  [158] = {.lex_state = 82},
  [159] = {.lex_state = 82},
  [160] = {.lex_state = 82},
  [161] = {.lex_state = 82},
  [162] = {.lex_state = 82},
  [163] = {.lex_state = 82},
  [164] = {.lex_state = 82},
  [165] = {.lex_state = 82},
  [166] = {.lex_state = 22},
  [167] = {.lex_state = 82},
  [168] = {.lex_state = 82},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 82},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 82},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 82},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 82},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 82},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 22},
  [199] = {.lex_state = 82},
  [200] = {.lex_state = 82},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 22},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 82},
  [218] = {.lex_state = 22},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 82},
  [223] = {.lex_state = 22},
  [224] = {.lex_state = 258},
  [225] = {.lex_state = 82},
  [226] = {.lex_state = 12},
  [227] = {.lex_state = 12},
  [228] = {.lex_state = 22},
  [229] = {.lex_state = 82},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 22},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 82},
  [241] = {.lex_state = 115},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 82},
  [244] = {.lex_state = 22},
  [245] = {.lex_state = 102},
  [246] = {.lex_state = 82},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 22},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 22},
  [254] = {.lex_state = 22},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 22},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 102},
  [260] = {.lex_state = 115},
  [261] = {.lex_state = 258},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
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
    [aux_sym_sql_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_sql_order_by_clause_token2] = ACTIONS(1),
    [aux_sym_sql_group_by_clause_token1] = ACTIONS(1),
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
    [sym_sql_statement] = STATE(164),
    [sym_sql_union_statement] = STATE(155),
    [sym_sql_intersect_statement] = STATE(155),
    [sym_sql_except_statement] = STATE(155),
    [sym_sql_select_statement] = STATE(155),
    [sym_sql_with_clause] = STATE(200),
    [sym_sql_select_clause] = STATE(47),
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
    STATE(65), 1,
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
  [214] = 6,
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
  [265] = 3,
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
  [310] = 4,
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
  [357] = 3,
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
  [402] = 8,
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
  [457] = 13,
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
  [522] = 3,
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
  [567] = 3,
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
  [612] = 3,
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
  [657] = 3,
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
  [702] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_CARET,
    ACTIONS(41), 1,
      anon_sym_SLASH,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(87), 2,
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
    ACTIONS(85), 13,
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
  [761] = 11,
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
    ACTIONS(87), 2,
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
    ACTIONS(85), 12,
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
    STATE(174), 1,
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
  [987] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
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
  [1026] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
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
    STATE(177), 1,
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
  [1087] = 3,
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
  [1123] = 3,
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
  [1159] = 9,
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
    ACTIONS(85), 6,
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
  [1207] = 6,
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
  [1249] = 3,
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
  [1285] = 4,
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
  [1323] = 3,
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
  [1359] = 8,
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
  [1405] = 13,
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
    ACTIONS(67), 2,
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
  [1461] = 3,
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
  [1497] = 3,
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
  [1533] = 3,
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
  [1569] = 10,
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
    ACTIONS(85), 5,
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
    STATE(171), 7,
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
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(168), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(100), 4,
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
    STATE(187), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1735] = 9,
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
    ACTIONS(143), 1,
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
  [1770] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(149), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(153), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(56), 1,
      sym_sql_from_clause,
    STATE(87), 1,
      sym_sql_where_clause,
    STATE(108), 1,
      sym_sql_group_by_clause,
    STATE(122), 1,
      sym_sql_order_by_clause,
    STATE(160), 1,
      sym_sql_limit_clause,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [1811] = 9,
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
    ACTIONS(157), 1,
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
  [1846] = 9,
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
    ACTIONS(159), 1,
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
  [1881] = 9,
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
    ACTIONS(161), 1,
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
  [1916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 15,
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
  [1937] = 10,
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
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    ACTIONS(169), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(190), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1974] = 10,
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
    ACTIONS(169), 1,
      sym_jinja_identifier,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
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
  [2011] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(149), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(153), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(57), 1,
      sym_sql_from_clause,
    STATE(89), 1,
      sym_sql_where_clause,
    STATE(113), 1,
      sym_sql_group_by_clause,
    STATE(119), 1,
      sym_sql_order_by_clause,
    STATE(141), 1,
      sym_sql_limit_clause,
    ACTIONS(175), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2052] = 9,
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
    ACTIONS(169), 1,
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
  [2086] = 8,
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
    ACTIONS(169), 1,
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
    ACTIONS(169), 1,
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
    ACTIONS(169), 1,
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
  [2220] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_LBRACK,
    ACTIONS(193), 1,
      anon_sym_LBRACE,
    ACTIONS(195), 1,
      sym_jinja_identifier,
    ACTIONS(189), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(204), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2251] = 8,
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
    ACTIONS(169), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(227), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2282] = 8,
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
    ACTIONS(169), 1,
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
  [2313] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(153), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(78), 1,
      sym_sql_where_clause,
    STATE(99), 1,
      sym_sql_group_by_clause,
    STATE(123), 1,
      sym_sql_order_by_clause,
    STATE(152), 1,
      sym_sql_limit_clause,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2348] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(153), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(87), 1,
      sym_sql_where_clause,
    STATE(108), 1,
      sym_sql_group_by_clause,
    STATE(122), 1,
      sym_sql_order_by_clause,
    STATE(160), 1,
      sym_sql_limit_clause,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2383] = 8,
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
    ACTIONS(169), 1,
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
  [2414] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(203), 1,
      anon_sym_STAR,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(233), 1,
      sym_sql_column_list,
    STATE(22), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2443] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_STAR,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(96), 1,
      sym_sql_column_list,
    STATE(4), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
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
    ACTIONS(169), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(216), 6,
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
    ACTIONS(169), 1,
      sym_jinja_identifier,
    ACTIONS(131), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(226), 6,
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
    ACTIONS(219), 1,
      anon_sym_COMMA,
    STATE(64), 1,
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
  [2578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(222), 10,
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
  [2600] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(251), 1,
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
  [2626] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(255), 1,
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
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
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
  [2675] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(31), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2698] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(11), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2721] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
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
  [2744] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
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
  [2767] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
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
  [2790] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
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
  [2813] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
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
  [2836] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(16), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2859] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
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
  [2882] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(153), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(106), 1,
      sym_sql_group_by_clause,
    STATE(121), 1,
      sym_sql_order_by_clause,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2911] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_sql_table_list_repeat1,
    ACTIONS(226), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2932] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
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
  [2955] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    STATE(81), 1,
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
  [2976] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
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
  [2999] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    STATE(81), 1,
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
  [3020] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
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
  [3043] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(28), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3066] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(27), 8,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_in_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3089] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(153), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(99), 1,
      sym_sql_group_by_clause,
    STATE(123), 1,
      sym_sql_order_by_clause,
    STATE(152), 1,
      sym_sql_limit_clause,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
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
  [3141] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(153), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(108), 1,
      sym_sql_group_by_clause,
    STATE(122), 1,
      sym_sql_order_by_clause,
    STATE(160), 1,
      sym_sql_limit_clause,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3170] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
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
  [3225] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(239), 1,
      aux_sym_sql_union_statement_token2,
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(159), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3253] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(241), 1,
      aux_sym_sql_union_statement_token2,
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(158), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3281] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(243), 1,
      aux_sym_sql_union_statement_token2,
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(149), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 10,
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
  [3325] = 2,
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
  [3357] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(121), 1,
      sym_sql_order_by_clause,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3380] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(252), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(255), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(258), 2,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
    STATE(100), 4,
      sym_jinja_expression,
      sym_jinja_statement,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
  [3403] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(156), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3428] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(260), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3447] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(157), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3472] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(167), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3497] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(154), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(120), 1,
      sym_sql_order_by_clause,
    STATE(146), 1,
      sym_sql_limit_clause,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(266), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3564] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(123), 1,
      sym_sql_order_by_clause,
    STATE(152), 1,
      sym_sql_limit_clause,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3587] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(165), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3627] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(47), 1,
      sym_sql_select_clause,
    STATE(170), 1,
      sym_sql_statement,
    STATE(200), 1,
      sym_sql_with_clause,
    STATE(155), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3652] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3671] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(122), 1,
      sym_sql_order_by_clause,
    STATE(160), 1,
      sym_sql_limit_clause,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(115), 1,
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
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(107), 1,
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
    ACTIONS(266), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 7,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(160), 1,
      sym_sql_limit_clause,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(147), 1,
      sym_sql_limit_clause,
    ACTIONS(283), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(146), 1,
      sym_sql_limit_clause,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3821] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(152), 1,
      sym_sql_limit_clause,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
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
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
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
    STATE(178), 1,
      sym_jinja_pair,
    STATE(252), 1,
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
    STATE(183), 1,
      sym_jinja_pair,
    STATE(252), 1,
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
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [4079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(325), 1,
      sym_sql_identifier,
    STATE(199), 1,
      sym_sql_cte,
    STATE(225), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [4107] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(327), 1,
      sym_sql_identifier,
    STATE(110), 1,
      sym_sql_table_list,
    STATE(79), 2,
      sym_jinja_expression,
      sym_sql_table_name,
  [4124] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_jinja_pair,
    STATE(252), 1,
      sym_jinja_lit_string,
  [4143] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_jinja_pair,
    STATE(252), 1,
      sym_jinja_lit_string,
  [4162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(325), 1,
      sym_sql_identifier,
    STATE(173), 1,
      sym_sql_cte,
    STATE(225), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [4201] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(335), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(339), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_jinja_pair,
    STATE(252), 1,
      sym_jinja_lit_string,
  [4233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4255] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    STATE(205), 1,
      sym_jinja_pair,
    STATE(252), 1,
      sym_jinja_lit_string,
  [4274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(345), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4287] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(349), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4311] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4322] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(355), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4346] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 5,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
  [4379] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 5,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
  [4390] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(361), 1,
      ts_builtin_sym_end,
    ACTIONS(363), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(365), 1,
      aux_sym_sql_except_statement_token1,
  [4406] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(363), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(365), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
  [4422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(327), 1,
      sym_sql_identifier,
    STATE(91), 2,
      sym_jinja_expression,
      sym_sql_table_name,
  [4436] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(363), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(365), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
  [4452] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(363), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(365), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(371), 1,
      ts_builtin_sym_end,
  [4468] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_SQUOTE,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym_jinja_pair,
    STATE(252), 1,
      sym_jinja_lit_string,
  [4484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(363), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(365), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
  [4500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
    STATE(172), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4513] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4526] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      aux_sym_sql_select_clause_token1,
    STATE(176), 1,
      aux_sym_sql_with_clause_repeat1,
  [4539] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_sql_column_list_repeat1,
  [4552] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(387), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_sql_column_list_repeat1,
  [4565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(390), 1,
      aux_sym_sql_select_clause_token1,
    STATE(188), 1,
      aux_sym_sql_with_clause_repeat1,
  [4578] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_sql_column_list_repeat1,
  [4591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    STATE(192), 1,
      aux_sym_jinja_dict_repeat1,
  [4604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4617] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_jinja_list_repeat1,
  [4630] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      aux_sym_jinja_dict_repeat1,
  [4643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
    STATE(185), 1,
      aux_sym_jinja_list_repeat1,
  [4656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
    STATE(186), 1,
      aux_sym_jinja_dict_repeat1,
  [4669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RBRACK,
    STATE(184), 1,
      aux_sym_jinja_list_repeat1,
  [4682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_jinja_list_repeat1,
  [4695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      anon_sym_RBRACE,
    ACTIONS(423), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_jinja_dict_repeat1,
  [4708] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      anon_sym_COMMA,
    ACTIONS(432), 1,
      aux_sym_sql_select_clause_token1,
    STATE(188), 1,
      aux_sym_sql_with_clause_repeat1,
  [4734] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(179), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      aux_sym_jinja_list_repeat1,
  [4760] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    ACTIONS(442), 1,
      anon_sym_EQ,
    STATE(127), 1,
      sym_jinja_argument_list,
  [4773] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_jinja_dict_repeat1,
  [4786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4826] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      sym_sql_identifier,
    STATE(117), 1,
      sym_sql_group_by_expression,
  [4836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [4844] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(40), 1,
      sym_sql_select_clause,
  [4854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4862] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_sql_identifier,
    STATE(140), 1,
      sym_sql_order_by_expression,
  [4872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_jinja_argument_list,
  [4906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4930] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    STATE(127), 1,
      sym_jinja_argument_list,
  [4980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 2,
      anon_sym_LPAREN,
      aux_sym_sql_cte_token1,
  [4996] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_sql_identifier,
    STATE(230), 1,
      sym_sql_cte_name,
  [5006] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym_sql_order_by_clause_token2,
  [5037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_sql_identifier,
  [5044] = 2,
    ACTIONS(466), 1,
      aux_sym_sql_string_token1,
    ACTIONS(468), 1,
      sym_comment,
  [5051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      aux_sym_sql_cte_token1,
  [5058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_POUND_RBRACE,
  [5065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      anon_sym_PERCENT_RBRACE,
  [5072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_sql_identifier,
  [5079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RBRACE_RBRACE,
  [5086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_LPAREN,
  [5093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
  [5100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      sym_sql_identifier,
  [5107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
  [5114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_RBRACK,
  [5121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_SQUOTE,
  [5128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_DQUOTE,
  [5135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_RBRACK,
  [5142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_LPAREN,
  [5149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_RBRACE,
  [5156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      aux_sym_sql_cte_token1,
  [5163] = 2,
    ACTIONS(468), 1,
      sym_comment,
    ACTIONS(494), 1,
      aux_sym_jinja_lit_string_token2,
  [5170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
  [5177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      aux_sym_sql_order_by_clause_token2,
  [5184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      sym_sql_identifier,
  [5191] = 2,
    ACTIONS(468), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym_jinja_lit_string_token1,
  [5198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_sql_integer,
  [5205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SQUOTE,
  [5212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 1,
      anon_sym_LPAREN,
  [5219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
  [5226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      sym_sql_identifier,
  [5233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
  [5240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_COLON,
  [5247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      sym_sql_identifier,
  [5254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      sym_sql_identifier,
  [5261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
  [5268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_sql_identifier,
  [5275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
  [5282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_RPAREN,
  [5289] = 2,
    ACTIONS(468), 1,
      sym_comment,
    ACTIONS(524), 1,
      aux_sym_jinja_lit_string_token1,
  [5296] = 2,
    ACTIONS(468), 1,
      sym_comment,
    ACTIONS(526), 1,
      aux_sym_jinja_lit_string_token2,
  [5303] = 2,
    ACTIONS(468), 1,
      sym_comment,
    ACTIONS(528), 1,
      aux_sym_sql_string_token1,
  [5310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      ts_builtin_sym_end,
  [5317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_SQUOTE,
  [5324] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 99,
  [SMALL_STATE(5)] = 169,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 265,
  [SMALL_STATE(8)] = 310,
  [SMALL_STATE(9)] = 357,
  [SMALL_STATE(10)] = 402,
  [SMALL_STATE(11)] = 457,
  [SMALL_STATE(12)] = 522,
  [SMALL_STATE(13)] = 567,
  [SMALL_STATE(14)] = 612,
  [SMALL_STATE(15)] = 657,
  [SMALL_STATE(16)] = 702,
  [SMALL_STATE(17)] = 761,
  [SMALL_STATE(18)] = 822,
  [SMALL_STATE(19)] = 884,
  [SMALL_STATE(20)] = 926,
  [SMALL_STATE(21)] = 987,
  [SMALL_STATE(22)] = 1026,
  [SMALL_STATE(23)] = 1087,
  [SMALL_STATE(24)] = 1123,
  [SMALL_STATE(25)] = 1159,
  [SMALL_STATE(26)] = 1207,
  [SMALL_STATE(27)] = 1249,
  [SMALL_STATE(28)] = 1285,
  [SMALL_STATE(29)] = 1323,
  [SMALL_STATE(30)] = 1359,
  [SMALL_STATE(31)] = 1405,
  [SMALL_STATE(32)] = 1461,
  [SMALL_STATE(33)] = 1497,
  [SMALL_STATE(34)] = 1533,
  [SMALL_STATE(35)] = 1569,
  [SMALL_STATE(36)] = 1619,
  [SMALL_STATE(37)] = 1657,
  [SMALL_STATE(38)] = 1697,
  [SMALL_STATE(39)] = 1735,
  [SMALL_STATE(40)] = 1770,
  [SMALL_STATE(41)] = 1811,
  [SMALL_STATE(42)] = 1846,
  [SMALL_STATE(43)] = 1881,
  [SMALL_STATE(44)] = 1916,
  [SMALL_STATE(45)] = 1937,
  [SMALL_STATE(46)] = 1974,
  [SMALL_STATE(47)] = 2011,
  [SMALL_STATE(48)] = 2052,
  [SMALL_STATE(49)] = 2086,
  [SMALL_STATE(50)] = 2118,
  [SMALL_STATE(51)] = 2152,
  [SMALL_STATE(52)] = 2186,
  [SMALL_STATE(53)] = 2220,
  [SMALL_STATE(54)] = 2251,
  [SMALL_STATE(55)] = 2282,
  [SMALL_STATE(56)] = 2313,
  [SMALL_STATE(57)] = 2348,
  [SMALL_STATE(58)] = 2383,
  [SMALL_STATE(59)] = 2414,
  [SMALL_STATE(60)] = 2443,
  [SMALL_STATE(61)] = 2472,
  [SMALL_STATE(62)] = 2503,
  [SMALL_STATE(63)] = 2534,
  [SMALL_STATE(64)] = 2556,
  [SMALL_STATE(65)] = 2578,
  [SMALL_STATE(66)] = 2600,
  [SMALL_STATE(67)] = 2626,
  [SMALL_STATE(68)] = 2652,
  [SMALL_STATE(69)] = 2675,
  [SMALL_STATE(70)] = 2698,
  [SMALL_STATE(71)] = 2721,
  [SMALL_STATE(72)] = 2744,
  [SMALL_STATE(73)] = 2767,
  [SMALL_STATE(74)] = 2790,
  [SMALL_STATE(75)] = 2813,
  [SMALL_STATE(76)] = 2836,
  [SMALL_STATE(77)] = 2859,
  [SMALL_STATE(78)] = 2882,
  [SMALL_STATE(79)] = 2911,
  [SMALL_STATE(80)] = 2932,
  [SMALL_STATE(81)] = 2955,
  [SMALL_STATE(82)] = 2976,
  [SMALL_STATE(83)] = 2999,
  [SMALL_STATE(84)] = 3020,
  [SMALL_STATE(85)] = 3043,
  [SMALL_STATE(86)] = 3066,
  [SMALL_STATE(87)] = 3089,
  [SMALL_STATE(88)] = 3118,
  [SMALL_STATE(89)] = 3141,
  [SMALL_STATE(90)] = 3170,
  [SMALL_STATE(91)] = 3193,
  [SMALL_STATE(92)] = 3209,
  [SMALL_STATE(93)] = 3225,
  [SMALL_STATE(94)] = 3253,
  [SMALL_STATE(95)] = 3281,
  [SMALL_STATE(96)] = 3309,
  [SMALL_STATE(97)] = 3325,
  [SMALL_STATE(98)] = 3341,
  [SMALL_STATE(99)] = 3357,
  [SMALL_STATE(100)] = 3380,
  [SMALL_STATE(101)] = 3403,
  [SMALL_STATE(102)] = 3428,
  [SMALL_STATE(103)] = 3447,
  [SMALL_STATE(104)] = 3472,
  [SMALL_STATE(105)] = 3497,
  [SMALL_STATE(106)] = 3522,
  [SMALL_STATE(107)] = 3545,
  [SMALL_STATE(108)] = 3564,
  [SMALL_STATE(109)] = 3587,
  [SMALL_STATE(110)] = 3612,
  [SMALL_STATE(111)] = 3627,
  [SMALL_STATE(112)] = 3652,
  [SMALL_STATE(113)] = 3671,
  [SMALL_STATE(114)] = 3694,
  [SMALL_STATE(115)] = 3712,
  [SMALL_STATE(116)] = 3730,
  [SMALL_STATE(117)] = 3744,
  [SMALL_STATE(118)] = 3757,
  [SMALL_STATE(119)] = 3770,
  [SMALL_STATE(120)] = 3787,
  [SMALL_STATE(121)] = 3804,
  [SMALL_STATE(122)] = 3821,
  [SMALL_STATE(123)] = 3838,
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
  [SMALL_STATE(143)] = 4107,
  [SMALL_STATE(144)] = 4124,
  [SMALL_STATE(145)] = 4143,
  [SMALL_STATE(146)] = 4162,
  [SMALL_STATE(147)] = 4173,
  [SMALL_STATE(148)] = 4184,
  [SMALL_STATE(149)] = 4201,
  [SMALL_STATE(150)] = 4214,
  [SMALL_STATE(151)] = 4233,
  [SMALL_STATE(152)] = 4244,
  [SMALL_STATE(153)] = 4255,
  [SMALL_STATE(154)] = 4274,
  [SMALL_STATE(155)] = 4287,
  [SMALL_STATE(156)] = 4298,
  [SMALL_STATE(157)] = 4311,
  [SMALL_STATE(158)] = 4322,
  [SMALL_STATE(159)] = 4333,
  [SMALL_STATE(160)] = 4346,
  [SMALL_STATE(161)] = 4357,
  [SMALL_STATE(162)] = 4368,
  [SMALL_STATE(163)] = 4379,
  [SMALL_STATE(164)] = 4390,
  [SMALL_STATE(165)] = 4406,
  [SMALL_STATE(166)] = 4422,
  [SMALL_STATE(167)] = 4436,
  [SMALL_STATE(168)] = 4452,
  [SMALL_STATE(169)] = 4468,
  [SMALL_STATE(170)] = 4484,
  [SMALL_STATE(171)] = 4500,
  [SMALL_STATE(172)] = 4513,
  [SMALL_STATE(173)] = 4526,
  [SMALL_STATE(174)] = 4539,
  [SMALL_STATE(175)] = 4552,
  [SMALL_STATE(176)] = 4565,
  [SMALL_STATE(177)] = 4578,
  [SMALL_STATE(178)] = 4591,
  [SMALL_STATE(179)] = 4604,
  [SMALL_STATE(180)] = 4617,
  [SMALL_STATE(181)] = 4630,
  [SMALL_STATE(182)] = 4643,
  [SMALL_STATE(183)] = 4656,
  [SMALL_STATE(184)] = 4669,
  [SMALL_STATE(185)] = 4682,
  [SMALL_STATE(186)] = 4695,
  [SMALL_STATE(187)] = 4708,
  [SMALL_STATE(188)] = 4721,
  [SMALL_STATE(189)] = 4734,
  [SMALL_STATE(190)] = 4747,
  [SMALL_STATE(191)] = 4760,
  [SMALL_STATE(192)] = 4773,
  [SMALL_STATE(193)] = 4786,
  [SMALL_STATE(194)] = 4794,
  [SMALL_STATE(195)] = 4802,
  [SMALL_STATE(196)] = 4810,
  [SMALL_STATE(197)] = 4818,
  [SMALL_STATE(198)] = 4826,
  [SMALL_STATE(199)] = 4836,
  [SMALL_STATE(200)] = 4844,
  [SMALL_STATE(201)] = 4854,
  [SMALL_STATE(202)] = 4862,
  [SMALL_STATE(203)] = 4872,
  [SMALL_STATE(204)] = 4880,
  [SMALL_STATE(205)] = 4888,
  [SMALL_STATE(206)] = 4896,
  [SMALL_STATE(207)] = 4906,
  [SMALL_STATE(208)] = 4914,
  [SMALL_STATE(209)] = 4922,
  [SMALL_STATE(210)] = 4930,
  [SMALL_STATE(211)] = 4938,
  [SMALL_STATE(212)] = 4946,
  [SMALL_STATE(213)] = 4954,
  [SMALL_STATE(214)] = 4962,
  [SMALL_STATE(215)] = 4970,
  [SMALL_STATE(216)] = 4980,
  [SMALL_STATE(217)] = 4988,
  [SMALL_STATE(218)] = 4996,
  [SMALL_STATE(219)] = 5006,
  [SMALL_STATE(220)] = 5014,
  [SMALL_STATE(221)] = 5022,
  [SMALL_STATE(222)] = 5030,
  [SMALL_STATE(223)] = 5037,
  [SMALL_STATE(224)] = 5044,
  [SMALL_STATE(225)] = 5051,
  [SMALL_STATE(226)] = 5058,
  [SMALL_STATE(227)] = 5065,
  [SMALL_STATE(228)] = 5072,
  [SMALL_STATE(229)] = 5079,
  [SMALL_STATE(230)] = 5086,
  [SMALL_STATE(231)] = 5093,
  [SMALL_STATE(232)] = 5100,
  [SMALL_STATE(233)] = 5107,
  [SMALL_STATE(234)] = 5114,
  [SMALL_STATE(235)] = 5121,
  [SMALL_STATE(236)] = 5128,
  [SMALL_STATE(237)] = 5135,
  [SMALL_STATE(238)] = 5142,
  [SMALL_STATE(239)] = 5149,
  [SMALL_STATE(240)] = 5156,
  [SMALL_STATE(241)] = 5163,
  [SMALL_STATE(242)] = 5170,
  [SMALL_STATE(243)] = 5177,
  [SMALL_STATE(244)] = 5184,
  [SMALL_STATE(245)] = 5191,
  [SMALL_STATE(246)] = 5198,
  [SMALL_STATE(247)] = 5205,
  [SMALL_STATE(248)] = 5212,
  [SMALL_STATE(249)] = 5219,
  [SMALL_STATE(250)] = 5226,
  [SMALL_STATE(251)] = 5233,
  [SMALL_STATE(252)] = 5240,
  [SMALL_STATE(253)] = 5247,
  [SMALL_STATE(254)] = 5254,
  [SMALL_STATE(255)] = 5261,
  [SMALL_STATE(256)] = 5268,
  [SMALL_STATE(257)] = 5275,
  [SMALL_STATE(258)] = 5282,
  [SMALL_STATE(259)] = 5289,
  [SMALL_STATE(260)] = 5296,
  [SMALL_STATE(261)] = 5303,
  [SMALL_STATE(262)] = 5310,
  [SMALL_STATE(263)] = 5317,
  [SMALL_STATE(264)] = 5324,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sql_expr, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sql_expr, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_fn, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_fn, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_alias, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_alias, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_in_expr, 5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_in_expr, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_where_clause, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expression, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(70),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_list, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_table_list_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_table_list_repeat1, 2), SHIFT_REPEAT(166),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_list, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_clause, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 5),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2), SHIFT_REPEAT(228),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_clause, 3),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 6),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 3),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 7),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 4),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 4),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_comment, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_statement, 3),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 2),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(69),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 3),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(49),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(169),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(58),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2), SHIFT_REPEAT(142),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 5),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_recursive_name, 5),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [530] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
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
