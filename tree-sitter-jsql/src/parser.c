#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 256
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 114
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
  sym_sql_where_clause = 91,
  sym_sql_order_by_clause = 92,
  sym_sql_order_by_expression = 93,
  sym_sql_group_by_clause = 94,
  sym_sql_group_by_expression = 95,
  sym_sql_limit_clause = 96,
  sym__sql_expr = 97,
  sym_sql_string = 98,
  sym_sql_binary_expr = 99,
  sym_sql_boolean_expr = 100,
  sym_sql_alias = 101,
  sym_sql_fn = 102,
  sym_sql_arg_list = 103,
  sym_sql_table_name = 104,
  sym_sql_dotted_identifier = 105,
  aux_sym_source_file_repeat1 = 106,
  aux_sym_jinja_argument_list_repeat1 = 107,
  aux_sym_jinja_list_repeat1 = 108,
  aux_sym_jinja_dict_repeat1 = 109,
  aux_sym_sql_with_clause_repeat1 = 110,
  aux_sym_sql_column_list_repeat1 = 111,
  aux_sym_sql_from_clause_repeat1 = 112,
  aux_sym_sql_order_by_expression_repeat1 = 113,
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
  [aux_sym_sql_from_clause_repeat1] = "sql_from_clause_repeat1",
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
  [aux_sym_sql_from_clause_repeat1] = aux_sym_sql_from_clause_repeat1,
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
  [aux_sym_sql_from_clause_repeat1] = {
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
      if (lookahead == '#') ADVANCE(275);
      if (lookahead == '%') ADVANCE(267);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '<') ADVANCE(276);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(280);
      if (lookahead == 'F') ADVANCE(129);
      if (lookahead == 'T') ADVANCE(134);
      if (lookahead == '[') ADVANCE(122);
      if (lookahead == '\\') SKIP(77)
      if (lookahead == ']') ADVANCE(123);
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == '{') ADVANCE(125);
      if (lookahead == '|') ADVANCE(273);
      if (lookahead == '}') ADVANCE(126);
      if (lookahead == '~') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(158);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(192);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(177);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(154);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(167);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('C' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(193);
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
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '%') ADVANCE(266);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == '<') ADVANCE(276);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(280);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == '|') ADVANCE(273);
      if (lookahead == '~') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(62);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(89);
      if (lookahead == '%') ADVANCE(87);
      if (lookahead == '{') ADVANCE(85);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(94);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(261);
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(263);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '~') ADVANCE(283);
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
          lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 31:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
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
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 39:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(198);
      END_STATE();
    case 41:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(36);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 43:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 44:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 45:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 46:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(45);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 47:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 48:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(249);
      END_STATE();
    case 49:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(44);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 51:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(31);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      END_STATE();
    case 52:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 53:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 55:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 57:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      END_STATE();
    case 58:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 63:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 64:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 65:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 66:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(39);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      END_STATE();
    case 69:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      END_STATE();
    case 70:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      END_STATE();
    case 71:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(40);
      END_STATE();
    case 72:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 73:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 75:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(252);
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
      if (lookahead == '#') ADVANCE(274);
      if (lookahead == '%') ADVANCE(266);
      if (lookahead == '&') ADVANCE(270);
      if (lookahead == '(') ADVANCE(91);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == '*') ADVANCE(248);
      if (lookahead == '+') ADVANCE(271);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(272);
      if (lookahead == '.') ADVANCE(291);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == '<') ADVANCE(276);
      if (lookahead == '=') ADVANCE(128);
      if (lookahead == '>') ADVANCE(280);
      if (lookahead == '\\') SKIP(79)
      if (lookahead == '^') ADVANCE(264);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '|') ADVANCE(273);
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '~') ADVANCE(282);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(46);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(75);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(60);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(64);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(34);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(53);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == ')') ADVANCE(93);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(234);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(245);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(229);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(215);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(222);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(214);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(247);
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
      if (lookahead == '\'') ADVANCE(295);
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
      if (lookahead == '"') ADVANCE(295);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
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
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(159);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_sql_union_statement_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_sql_union_statement_token2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_sql_intersect_statement_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_sql_except_statement_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_sql_with_clause_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_sql_cte_recursive_name_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_sql_select_clause_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_sql_where_clause_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token1);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token2);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_sql_group_by_clause_token1);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\r') ADVANCE(256);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(259);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(261);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead != 0) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '*') ADVANCE(263);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == '\\') ADVANCE(255);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(259);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '-') ADVANCE(257);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead != 0) ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead == '/') ADVANCE(261);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(262);
      if (lookahead != 0) ADVANCE(263);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '}') ADVANCE(88);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(295);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(268);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '>') ADVANCE(278);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == '>') ADVANCE(269);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(284);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      if (lookahead == '*') ADVANCE(285);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE_STAR);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token1);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token2);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(38);
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
      if (lookahead == '\'') ADVANCE(257);
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
  [18] = {.lex_state = 11},
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
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 82},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 82},
  [38] = {.lex_state = 82},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 82},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 82},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 82},
  [59] = {.lex_state = 82},
  [60] = {.lex_state = 83},
  [61] = {.lex_state = 14},
  [62] = {.lex_state = 14},
  [63] = {.lex_state = 82},
  [64] = {.lex_state = 82},
  [65] = {.lex_state = 82},
  [66] = {.lex_state = 82},
  [67] = {.lex_state = 14},
  [68] = {.lex_state = 14},
  [69] = {.lex_state = 82},
  [70] = {.lex_state = 82},
  [71] = {.lex_state = 82},
  [72] = {.lex_state = 14},
  [73] = {.lex_state = 82},
  [74] = {.lex_state = 82},
  [75] = {.lex_state = 14},
  [76] = {.lex_state = 14},
  [77] = {.lex_state = 14},
  [78] = {.lex_state = 14},
  [79] = {.lex_state = 14},
  [80] = {.lex_state = 14},
  [81] = {.lex_state = 14},
  [82] = {.lex_state = 82},
  [83] = {.lex_state = 14},
  [84] = {.lex_state = 82},
  [85] = {.lex_state = 14},
  [86] = {.lex_state = 14},
  [87] = {.lex_state = 82},
  [88] = {.lex_state = 14},
  [89] = {.lex_state = 14},
  [90] = {.lex_state = 14},
  [91] = {.lex_state = 14},
  [92] = {.lex_state = 82},
  [93] = {.lex_state = 14},
  [94] = {.lex_state = 14},
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
  [115] = {.lex_state = 12},
  [116] = {.lex_state = 82},
  [117] = {.lex_state = 82},
  [118] = {.lex_state = 82},
  [119] = {.lex_state = 12},
  [120] = {.lex_state = 82},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 12},
  [123] = {.lex_state = 12},
  [124] = {.lex_state = 12},
  [125] = {.lex_state = 12},
  [126] = {.lex_state = 12},
  [127] = {.lex_state = 12},
  [128] = {.lex_state = 12},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 82},
  [138] = {.lex_state = 82},
  [139] = {.lex_state = 21},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 82},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 82},
  [145] = {.lex_state = 82},
  [146] = {.lex_state = 82},
  [147] = {.lex_state = 21},
  [148] = {.lex_state = 82},
  [149] = {.lex_state = 82},
  [150] = {.lex_state = 82},
  [151] = {.lex_state = 82},
  [152] = {.lex_state = 82},
  [153] = {.lex_state = 82},
  [154] = {.lex_state = 82},
  [155] = {.lex_state = 82},
  [156] = {.lex_state = 82},
  [157] = {.lex_state = 82},
  [158] = {.lex_state = 82},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 82},
  [161] = {.lex_state = 22},
  [162] = {.lex_state = 82},
  [163] = {.lex_state = 22},
  [164] = {.lex_state = 82},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 82},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 82},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 82},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 22},
  [194] = {.lex_state = 22},
  [195] = {.lex_state = 22},
  [196] = {.lex_state = 82},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 82},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 82},
  [202] = {.lex_state = 0},
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
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 82},
  [219] = {.lex_state = 82},
  [220] = {.lex_state = 259},
  [221] = {.lex_state = 82},
  [222] = {.lex_state = 22},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 82},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 22},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 22},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 22},
  [238] = {.lex_state = 22},
  [239] = {.lex_state = 12},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 12},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 22},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 82},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 115},
  [249] = {.lex_state = 82},
  [250] = {.lex_state = 22},
  [251] = {.lex_state = 102},
  [252] = {.lex_state = 102},
  [253] = {.lex_state = 115},
  [254] = {.lex_state = 259},
  [255] = {.lex_state = 22},
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
    [anon_sym_DOT] = ACTIONS(1),
    [sym_sql_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(242),
    [sym_jinja_expression] = STATE(35),
    [sym_jinja_statement] = STATE(35),
    [sym_jinja_comment] = STATE(35),
    [sym_sql_statement] = STATE(158),
    [sym_sql_union_statement] = STATE(157),
    [sym_sql_intersect_statement] = STATE(157),
    [sym_sql_except_statement] = STATE(157),
    [sym_sql_select_statement] = STATE(157),
    [sym_sql_with_clause] = STATE(189),
    [sym_sql_select_clause] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(35),
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
    ACTIONS(19), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
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
  [50] = 14,
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
    STATE(59), 1,
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
  [117] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_DOT,
    ACTIONS(49), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(47), 29,
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
  [164] = 6,
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
    ACTIONS(55), 6,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(53), 23,
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
  [214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(57), 29,
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
  [258] = 11,
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
    ACTIONS(63), 1,
      aux_sym_sql_boolean_expr_token3,
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
    ACTIONS(61), 12,
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
  [318] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(35), 1,
      anon_sym_SLASH,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      aux_sym_sql_boolean_expr_token3,
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
    ACTIONS(61), 13,
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
  [376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
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
  [420] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
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
  [464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(53), 29,
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
  [508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_CARET,
    ACTIONS(55), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(53), 28,
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
  [554] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
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
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
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
  [642] = 8,
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
    ACTIONS(55), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(53), 20,
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
  [696] = 12,
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
    ACTIONS(81), 11,
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
  [758] = 12,
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
    ACTIONS(83), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [817] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_DOT,
    ACTIONS(19), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(15), 21,
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
  [858] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(109), 1,
      aux_sym_sql_boolean_expr_token3,
    STATE(173), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(101), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(105), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(95), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(91), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [916] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(93), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(109), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(111), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(101), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(105), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(95), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(91), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [974] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(49), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(47), 21,
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
  [1012] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(109), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(101), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(105), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(95), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(91), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(57), 21,
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
  [1100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(73), 21,
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
  [1135] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(107), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(101), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(61), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(105), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(95), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(91), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(77), 21,
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
  [1219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(55), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(53), 20,
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
  [1256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(65), 21,
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
  [1291] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(101), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(55), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(95), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(53), 12,
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
  [1336] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(53), 21,
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
  [1371] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(69), 21,
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
  [1406] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(103), 1,
      anon_sym_DASH,
    ACTIONS(101), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(105), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(61), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(95), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(91), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1453] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_CARET,
    ACTIONS(99), 1,
      anon_sym_SLASH,
    ACTIONS(55), 5,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(95), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(53), 15,
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
  [1494] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      sym_jinja_identifier,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(179), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1532] = 11,
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
    STATE(37), 1,
      sym_sql_select_clause,
    STATE(160), 1,
      sym_sql_statement,
    STATE(189), 1,
      sym_sql_with_clause,
    STATE(101), 4,
      sym_jinja_expression,
      sym_jinja_statement,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
    STATE(157), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [1572] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      sym_jinja_identifier,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(185), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1610] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(139), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(143), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(51), 1,
      sym_sql_from_clause,
    STATE(70), 1,
      sym_sql_where_clause,
    STATE(99), 1,
      sym_sql_group_by_clause,
    STATE(114), 1,
      sym_sql_order_by_clause,
    STATE(153), 1,
      sym_sql_limit_clause,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [1651] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(139), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(143), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(58), 1,
      sym_sql_from_clause,
    STATE(69), 1,
      sym_sql_where_clause,
    STATE(98), 1,
      sym_sql_group_by_clause,
    STATE(116), 1,
      sym_sql_order_by_clause,
    STATE(145), 1,
      sym_sql_limit_clause,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [1692] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      sym_jinja_identifier,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1727] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(176), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 15,
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
  [1785] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(159), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(171), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1822] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      sym_jinja_identifier,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1857] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      sym_jinja_identifier,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1892] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      sym_jinja_identifier,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1927] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(187), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1961] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(129), 1,
      sym_jinja_identifier,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(206), 7,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
      sym_jinja_kwarg,
  [1993] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(187), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2027] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(187), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2061] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(187), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2095] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(143), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(69), 1,
      sym_sql_where_clause,
    STATE(98), 1,
      sym_sql_group_by_clause,
    STATE(116), 1,
      sym_sql_order_by_clause,
    STATE(145), 1,
      sym_sql_limit_clause,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2130] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(241), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2161] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(239), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2192] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(187), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2223] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_SQUOTE,
    ACTIONS(179), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_LBRACE,
    ACTIONS(187), 1,
      sym_jinja_identifier,
    ACTIONS(181), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(209), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2254] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(246), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2285] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_LBRACK,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(123), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(211), 6,
      sym__jinja_expr,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2316] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(143), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(71), 1,
      sym_sql_where_clause,
    STATE(106), 1,
      sym_sql_group_by_clause,
    STATE(112), 1,
      sym_sql_order_by_clause,
    STATE(149), 1,
      sym_sql_limit_clause,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(191), 10,
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
  [2373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(197), 1,
      sym_sql_identifier,
    ACTIONS(193), 10,
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
  [2395] = 7,
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
    STATE(84), 1,
      sym_sql_column_list,
    STATE(3), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2423] = 7,
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
    STATE(247), 1,
      sym_sql_column_list,
    STATE(19), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(81), 10,
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
  [2473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(216), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(220), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2515] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(225), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(245), 1,
      sym_sql_arg_list,
    STATE(20), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2561] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(240), 1,
      sym_sql_arg_list,
    STATE(20), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2586] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(143), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(106), 1,
      sym_sql_group_by_clause,
    STATE(112), 1,
      sym_sql_order_by_clause,
    STATE(149), 1,
      sym_sql_limit_clause,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2615] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(143), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(98), 1,
      sym_sql_group_by_clause,
    STATE(116), 1,
      sym_sql_order_by_clause,
    STATE(145), 1,
      sym_sql_limit_clause,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2644] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(143), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(102), 1,
      sym_sql_group_by_clause,
    STATE(117), 1,
      sym_sql_order_by_clause,
    STATE(150), 1,
      sym_sql_limit_clause,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2673] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(12), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2695] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(229), 1,
      aux_sym_sql_union_statement_token2,
    STATE(37), 1,
      sym_sql_select_clause,
    STATE(156), 1,
      sym_sql_statement,
    STATE(189), 1,
      sym_sql_with_clause,
    STATE(157), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [2723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 10,
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
  [2739] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(11), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2761] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(5), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2783] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(8), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2805] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(7), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2827] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(33), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2849] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(32), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2871] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(15), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2893] = 2,
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
  [2909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(10), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 10,
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
  [2947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(29), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2969] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(16), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2991] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(235), 1,
      aux_sym_sql_union_statement_token2,
    STATE(37), 1,
      sym_sql_select_clause,
    STATE(148), 1,
      sym_sql_statement,
    STATE(189), 1,
      sym_sql_with_clause,
    STATE(157), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3019] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(27), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3041] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_SQUOTE,
    ACTIONS(201), 1,
      sym_sql_identifier,
    ACTIONS(205), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(17), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3063] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(25), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3085] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(30), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3107] = 2,
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
  [3123] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(22), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3145] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_SQUOTE,
    ACTIONS(209), 1,
      sym_sql_identifier,
    ACTIONS(211), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(31), 7,
      sym__sql_expr,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3167] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(239), 1,
      aux_sym_sql_union_statement_token2,
    STATE(37), 1,
      sym_sql_select_clause,
    STATE(155), 1,
      sym_sql_statement,
    STATE(189), 1,
      sym_sql_with_clause,
    STATE(157), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 10,
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
  [3211] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(37), 1,
      sym_sql_select_clause,
    STATE(152), 1,
      sym_sql_statement,
    STATE(189), 1,
      sym_sql_with_clause,
    STATE(157), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3236] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(112), 1,
      sym_sql_order_by_clause,
    STATE(149), 1,
      sym_sql_limit_clause,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3259] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(116), 1,
      sym_sql_order_by_clause,
    STATE(145), 1,
      sym_sql_limit_clause,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(241), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 1,
      anon_sym_LBRACE_PERCENT,
    ACTIONS(251), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(254), 2,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
    STATE(101), 4,
      sym_jinja_expression,
      sym_jinja_statement,
      sym_jinja_comment,
      aux_sym_source_file_repeat1,
  [3324] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(113), 1,
      sym_sql_order_by_clause,
    STATE(138), 1,
      sym_sql_limit_clause,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(258), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3366] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(37), 1,
      sym_sql_select_clause,
    STATE(154), 1,
      sym_sql_statement,
    STATE(189), 1,
      sym_sql_with_clause,
    STATE(157), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3391] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(37), 1,
      sym_sql_select_clause,
    STATE(151), 1,
      sym_sql_statement,
    STATE(189), 1,
      sym_sql_with_clause,
    STATE(157), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(117), 1,
      sym_sql_order_by_clause,
    STATE(150), 1,
      sym_sql_limit_clause,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3439] = 4,
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
  [3458] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(37), 1,
      sym_sql_select_clause,
    STATE(162), 1,
      sym_sql_statement,
    STATE(189), 1,
      sym_sql_with_clause,
    STATE(157), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3483] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(265), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [3501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(267), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [3519] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(150), 1,
      sym_sql_limit_clause,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3550] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(137), 1,
      sym_sql_limit_clause,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(145), 1,
      sym_sql_limit_clause,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 7,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(149), 1,
      sym_sql_limit_clause,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(138), 1,
      sym_sql_limit_clause,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3644] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [3668] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(172), 1,
      sym_jinja_pair,
    STATE(225), 1,
      sym_jinja_lit_string,
  [3690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3726] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3774] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(297), 1,
      anon_sym_COMMA,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_jinja_pair,
    STATE(225), 1,
      sym_jinja_lit_string,
  [3796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 6,
      anon_sym_RBRACE_RBRACE,
      anon_sym_PERCENT_RBRACE,
      anon_sym_POUND_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3868] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_jinja_pair,
    STATE(225), 1,
      sym_jinja_lit_string,
  [3887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3898] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3909] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(319), 1,
      sym_sql_identifier,
    STATE(201), 1,
      sym_sql_cte,
    STATE(224), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [3926] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_jinja_pair,
    STATE(225), 1,
      sym_jinja_lit_string,
  [3945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 5,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
  [3956] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_jinja_pair,
    STATE(225), 1,
      sym_jinja_lit_string,
  [3975] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    ACTIONS(327), 1,
      anon_sym_RBRACE,
    STATE(208), 1,
      sym_jinja_pair,
    STATE(225), 1,
      sym_jinja_lit_string,
  [3994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 5,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_PERCENT,
      anon_sym_LBRACE_POUND,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
  [4005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(319), 1,
      sym_sql_identifier,
    STATE(174), 1,
      sym_sql_cte,
    STATE(224), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [4044] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(333), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4079] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(337), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(341), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4127] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(343), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [4162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(353), 1,
      aux_sym_sql_except_statement_token1,
  [4178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_SQUOTE,
    ACTIONS(121), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym_jinja_pair,
    STATE(225), 1,
      sym_jinja_lit_string,
  [4194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(351), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(353), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(355), 1,
      ts_builtin_sym_end,
  [4210] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      sym_sql_identifier,
    STATE(66), 2,
      sym_jinja_expression,
      sym_sql_table_name,
  [4224] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(351), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(353), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(359), 1,
      anon_sym_RPAREN,
  [4240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      sym_sql_identifier,
    STATE(96), 2,
      sym_jinja_expression,
      sym_sql_table_name,
  [4254] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(363), 1,
      aux_sym_sql_select_clause_token1,
    STATE(183), 1,
      aux_sym_sql_with_clause_repeat1,
  [4267] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      anon_sym_COMMA,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      aux_sym_jinja_dict_repeat1,
  [4280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_sql_column_list_repeat1,
  [4293] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_sql_column_list_repeat1,
  [4306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4319] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_COMMA,
    ACTIONS(379), 1,
      anon_sym_RBRACE,
    STATE(169), 1,
      aux_sym_jinja_dict_repeat1,
  [4332] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(170), 1,
      aux_sym_jinja_list_repeat1,
  [4345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_jinja_list_repeat1,
  [4358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(182), 1,
      aux_sym_jinja_dict_repeat1,
  [4371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_COMMA,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_sql_column_list_repeat1,
  [4384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    ACTIONS(394), 1,
      aux_sym_sql_select_clause_token1,
    STATE(164), 1,
      aux_sym_sql_with_clause_repeat1,
  [4397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_jinja_list_repeat1,
  [4423] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_jinja_list_repeat1,
  [4436] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4449] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_COMMA,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4462] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      anon_sym_RBRACE,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_jinja_dict_repeat1,
  [4475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    ACTIONS(415), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_jinja_list_repeat1,
  [4488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_jinja_dict_repeat1,
  [4501] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      anon_sym_COMMA,
    ACTIONS(422), 1,
      aux_sym_sql_select_clause_token1,
    STATE(183), 1,
      aux_sym_sql_with_clause_repeat1,
  [4514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
    ACTIONS(426), 1,
      anon_sym_EQ,
    STATE(130), 1,
      sym_jinja_argument_list,
  [4527] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
    STATE(178), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_jinja_argument_list,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      aux_sym_sql_select_clause_token1,
    STATE(38), 1,
      sym_sql_select_clause,
  [4576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_sql_identifier,
    STATE(226), 1,
      sym_sql_cte_name,
  [4610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym_sql_identifier,
    STATE(118), 1,
      sym_sql_group_by_expression,
  [4620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      sym_sql_identifier,
    STATE(120), 1,
      sym_sql_order_by_expression,
  [4630] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [4638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      sym_jinja_argument_list,
  [4648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 2,
      anon_sym_LPAREN,
      aux_sym_sql_cte_token1,
  [4656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4664] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4672] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [4680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4712] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
  [4791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_DQUOTE,
  [4798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_SQUOTE,
  [4805] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_sql_integer,
  [4812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      aux_sym_sql_order_by_clause_token2,
  [4819] = 2,
    ACTIONS(454), 1,
      aux_sym_sql_string_token1,
    ACTIONS(456), 1,
      sym_comment,
  [4826] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      aux_sym_sql_order_by_clause_token2,
  [4833] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      sym_sql_identifier,
  [4840] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
  [4847] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      aux_sym_sql_cte_token1,
  [4854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_COLON,
  [4861] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
  [4868] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
  [4875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_SQUOTE,
  [4882] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_SQUOTE,
  [4889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      anon_sym_DQUOTE,
  [4896] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RBRACK,
  [4903] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_sql_identifier,
  [4910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_RBRACE,
  [4917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      sym_sql_identifier,
  [4924] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_RPAREN,
  [4931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_SQUOTE,
  [4938] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      sym_sql_identifier,
  [4945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      sym_sql_identifier,
  [4952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_POUND_RBRACE,
  [4959] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_RPAREN,
  [4966] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_PERCENT_RBRACE,
  [4973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
  [4980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
  [4987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      sym_sql_identifier,
  [4994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [5001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACE_RBRACE,
  [5008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
  [5015] = 2,
    ACTIONS(456), 1,
      sym_comment,
    ACTIONS(500), 1,
      aux_sym_jinja_lit_string_token2,
  [5022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      aux_sym_sql_cte_token1,
  [5029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 1,
      sym_sql_identifier,
  [5036] = 2,
    ACTIONS(456), 1,
      sym_comment,
    ACTIONS(506), 1,
      aux_sym_jinja_lit_string_token1,
  [5043] = 2,
    ACTIONS(456), 1,
      sym_comment,
    ACTIONS(508), 1,
      aux_sym_jinja_lit_string_token1,
  [5050] = 2,
    ACTIONS(456), 1,
      sym_comment,
    ACTIONS(510), 1,
      aux_sym_jinja_lit_string_token2,
  [5057] = 2,
    ACTIONS(456), 1,
      sym_comment,
    ACTIONS(512), 1,
      aux_sym_sql_string_token1,
  [5064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      sym_sql_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 117,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 258,
  [SMALL_STATE(8)] = 318,
  [SMALL_STATE(9)] = 376,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 464,
  [SMALL_STATE(12)] = 508,
  [SMALL_STATE(13)] = 554,
  [SMALL_STATE(14)] = 598,
  [SMALL_STATE(15)] = 642,
  [SMALL_STATE(16)] = 696,
  [SMALL_STATE(17)] = 758,
  [SMALL_STATE(18)] = 817,
  [SMALL_STATE(19)] = 858,
  [SMALL_STATE(20)] = 916,
  [SMALL_STATE(21)] = 974,
  [SMALL_STATE(22)] = 1012,
  [SMALL_STATE(23)] = 1065,
  [SMALL_STATE(24)] = 1100,
  [SMALL_STATE(25)] = 1135,
  [SMALL_STATE(26)] = 1184,
  [SMALL_STATE(27)] = 1219,
  [SMALL_STATE(28)] = 1256,
  [SMALL_STATE(29)] = 1291,
  [SMALL_STATE(30)] = 1336,
  [SMALL_STATE(31)] = 1371,
  [SMALL_STATE(32)] = 1406,
  [SMALL_STATE(33)] = 1453,
  [SMALL_STATE(34)] = 1494,
  [SMALL_STATE(35)] = 1532,
  [SMALL_STATE(36)] = 1572,
  [SMALL_STATE(37)] = 1610,
  [SMALL_STATE(38)] = 1651,
  [SMALL_STATE(39)] = 1692,
  [SMALL_STATE(40)] = 1727,
  [SMALL_STATE(41)] = 1764,
  [SMALL_STATE(42)] = 1785,
  [SMALL_STATE(43)] = 1822,
  [SMALL_STATE(44)] = 1857,
  [SMALL_STATE(45)] = 1892,
  [SMALL_STATE(46)] = 1927,
  [SMALL_STATE(47)] = 1961,
  [SMALL_STATE(48)] = 1993,
  [SMALL_STATE(49)] = 2027,
  [SMALL_STATE(50)] = 2061,
  [SMALL_STATE(51)] = 2095,
  [SMALL_STATE(52)] = 2130,
  [SMALL_STATE(53)] = 2161,
  [SMALL_STATE(54)] = 2192,
  [SMALL_STATE(55)] = 2223,
  [SMALL_STATE(56)] = 2254,
  [SMALL_STATE(57)] = 2285,
  [SMALL_STATE(58)] = 2316,
  [SMALL_STATE(59)] = 2351,
  [SMALL_STATE(60)] = 2373,
  [SMALL_STATE(61)] = 2395,
  [SMALL_STATE(62)] = 2423,
  [SMALL_STATE(63)] = 2451,
  [SMALL_STATE(64)] = 2473,
  [SMALL_STATE(65)] = 2494,
  [SMALL_STATE(66)] = 2515,
  [SMALL_STATE(67)] = 2536,
  [SMALL_STATE(68)] = 2561,
  [SMALL_STATE(69)] = 2586,
  [SMALL_STATE(70)] = 2615,
  [SMALL_STATE(71)] = 2644,
  [SMALL_STATE(72)] = 2673,
  [SMALL_STATE(73)] = 2695,
  [SMALL_STATE(74)] = 2723,
  [SMALL_STATE(75)] = 2739,
  [SMALL_STATE(76)] = 2761,
  [SMALL_STATE(77)] = 2783,
  [SMALL_STATE(78)] = 2805,
  [SMALL_STATE(79)] = 2827,
  [SMALL_STATE(80)] = 2849,
  [SMALL_STATE(81)] = 2871,
  [SMALL_STATE(82)] = 2893,
  [SMALL_STATE(83)] = 2909,
  [SMALL_STATE(84)] = 2931,
  [SMALL_STATE(85)] = 2947,
  [SMALL_STATE(86)] = 2969,
  [SMALL_STATE(87)] = 2991,
  [SMALL_STATE(88)] = 3019,
  [SMALL_STATE(89)] = 3041,
  [SMALL_STATE(90)] = 3063,
  [SMALL_STATE(91)] = 3085,
  [SMALL_STATE(92)] = 3107,
  [SMALL_STATE(93)] = 3123,
  [SMALL_STATE(94)] = 3145,
  [SMALL_STATE(95)] = 3167,
  [SMALL_STATE(96)] = 3195,
  [SMALL_STATE(97)] = 3211,
  [SMALL_STATE(98)] = 3236,
  [SMALL_STATE(99)] = 3259,
  [SMALL_STATE(100)] = 3282,
  [SMALL_STATE(101)] = 3301,
  [SMALL_STATE(102)] = 3324,
  [SMALL_STATE(103)] = 3347,
  [SMALL_STATE(104)] = 3366,
  [SMALL_STATE(105)] = 3391,
  [SMALL_STATE(106)] = 3416,
  [SMALL_STATE(107)] = 3439,
  [SMALL_STATE(108)] = 3458,
  [SMALL_STATE(109)] = 3483,
  [SMALL_STATE(110)] = 3501,
  [SMALL_STATE(111)] = 3519,
  [SMALL_STATE(112)] = 3533,
  [SMALL_STATE(113)] = 3550,
  [SMALL_STATE(114)] = 3567,
  [SMALL_STATE(115)] = 3584,
  [SMALL_STATE(116)] = 3597,
  [SMALL_STATE(117)] = 3614,
  [SMALL_STATE(118)] = 3631,
  [SMALL_STATE(119)] = 3644,
  [SMALL_STATE(120)] = 3656,
  [SMALL_STATE(121)] = 3668,
  [SMALL_STATE(122)] = 3690,
  [SMALL_STATE(123)] = 3702,
  [SMALL_STATE(124)] = 3714,
  [SMALL_STATE(125)] = 3726,
  [SMALL_STATE(126)] = 3738,
  [SMALL_STATE(127)] = 3750,
  [SMALL_STATE(128)] = 3762,
  [SMALL_STATE(129)] = 3774,
  [SMALL_STATE(130)] = 3796,
  [SMALL_STATE(131)] = 3808,
  [SMALL_STATE(132)] = 3820,
  [SMALL_STATE(133)] = 3832,
  [SMALL_STATE(134)] = 3844,
  [SMALL_STATE(135)] = 3856,
  [SMALL_STATE(136)] = 3868,
  [SMALL_STATE(137)] = 3887,
  [SMALL_STATE(138)] = 3898,
  [SMALL_STATE(139)] = 3909,
  [SMALL_STATE(140)] = 3926,
  [SMALL_STATE(141)] = 3945,
  [SMALL_STATE(142)] = 3956,
  [SMALL_STATE(143)] = 3975,
  [SMALL_STATE(144)] = 3994,
  [SMALL_STATE(145)] = 4005,
  [SMALL_STATE(146)] = 4016,
  [SMALL_STATE(147)] = 4027,
  [SMALL_STATE(148)] = 4044,
  [SMALL_STATE(149)] = 4057,
  [SMALL_STATE(150)] = 4068,
  [SMALL_STATE(151)] = 4079,
  [SMALL_STATE(152)] = 4092,
  [SMALL_STATE(153)] = 4103,
  [SMALL_STATE(154)] = 4114,
  [SMALL_STATE(155)] = 4127,
  [SMALL_STATE(156)] = 4140,
  [SMALL_STATE(157)] = 4151,
  [SMALL_STATE(158)] = 4162,
  [SMALL_STATE(159)] = 4178,
  [SMALL_STATE(160)] = 4194,
  [SMALL_STATE(161)] = 4210,
  [SMALL_STATE(162)] = 4224,
  [SMALL_STATE(163)] = 4240,
  [SMALL_STATE(164)] = 4254,
  [SMALL_STATE(165)] = 4267,
  [SMALL_STATE(166)] = 4280,
  [SMALL_STATE(167)] = 4293,
  [SMALL_STATE(168)] = 4306,
  [SMALL_STATE(169)] = 4319,
  [SMALL_STATE(170)] = 4332,
  [SMALL_STATE(171)] = 4345,
  [SMALL_STATE(172)] = 4358,
  [SMALL_STATE(173)] = 4371,
  [SMALL_STATE(174)] = 4384,
  [SMALL_STATE(175)] = 4397,
  [SMALL_STATE(176)] = 4410,
  [SMALL_STATE(177)] = 4423,
  [SMALL_STATE(178)] = 4436,
  [SMALL_STATE(179)] = 4449,
  [SMALL_STATE(180)] = 4462,
  [SMALL_STATE(181)] = 4475,
  [SMALL_STATE(182)] = 4488,
  [SMALL_STATE(183)] = 4501,
  [SMALL_STATE(184)] = 4514,
  [SMALL_STATE(185)] = 4527,
  [SMALL_STATE(186)] = 4540,
  [SMALL_STATE(187)] = 4550,
  [SMALL_STATE(188)] = 4558,
  [SMALL_STATE(189)] = 4566,
  [SMALL_STATE(190)] = 4576,
  [SMALL_STATE(191)] = 4584,
  [SMALL_STATE(192)] = 4592,
  [SMALL_STATE(193)] = 4600,
  [SMALL_STATE(194)] = 4610,
  [SMALL_STATE(195)] = 4620,
  [SMALL_STATE(196)] = 4630,
  [SMALL_STATE(197)] = 4638,
  [SMALL_STATE(198)] = 4648,
  [SMALL_STATE(199)] = 4656,
  [SMALL_STATE(200)] = 4664,
  [SMALL_STATE(201)] = 4672,
  [SMALL_STATE(202)] = 4680,
  [SMALL_STATE(203)] = 4688,
  [SMALL_STATE(204)] = 4696,
  [SMALL_STATE(205)] = 4704,
  [SMALL_STATE(206)] = 4712,
  [SMALL_STATE(207)] = 4720,
  [SMALL_STATE(208)] = 4728,
  [SMALL_STATE(209)] = 4736,
  [SMALL_STATE(210)] = 4744,
  [SMALL_STATE(211)] = 4752,
  [SMALL_STATE(212)] = 4760,
  [SMALL_STATE(213)] = 4768,
  [SMALL_STATE(214)] = 4776,
  [SMALL_STATE(215)] = 4784,
  [SMALL_STATE(216)] = 4791,
  [SMALL_STATE(217)] = 4798,
  [SMALL_STATE(218)] = 4805,
  [SMALL_STATE(219)] = 4812,
  [SMALL_STATE(220)] = 4819,
  [SMALL_STATE(221)] = 4826,
  [SMALL_STATE(222)] = 4833,
  [SMALL_STATE(223)] = 4840,
  [SMALL_STATE(224)] = 4847,
  [SMALL_STATE(225)] = 4854,
  [SMALL_STATE(226)] = 4861,
  [SMALL_STATE(227)] = 4868,
  [SMALL_STATE(228)] = 4875,
  [SMALL_STATE(229)] = 4882,
  [SMALL_STATE(230)] = 4889,
  [SMALL_STATE(231)] = 4896,
  [SMALL_STATE(232)] = 4903,
  [SMALL_STATE(233)] = 4910,
  [SMALL_STATE(234)] = 4917,
  [SMALL_STATE(235)] = 4924,
  [SMALL_STATE(236)] = 4931,
  [SMALL_STATE(237)] = 4938,
  [SMALL_STATE(238)] = 4945,
  [SMALL_STATE(239)] = 4952,
  [SMALL_STATE(240)] = 4959,
  [SMALL_STATE(241)] = 4966,
  [SMALL_STATE(242)] = 4973,
  [SMALL_STATE(243)] = 4980,
  [SMALL_STATE(244)] = 4987,
  [SMALL_STATE(245)] = 4994,
  [SMALL_STATE(246)] = 5001,
  [SMALL_STATE(247)] = 5008,
  [SMALL_STATE(248)] = 5015,
  [SMALL_STATE(249)] = 5022,
  [SMALL_STATE(250)] = 5029,
  [SMALL_STATE(251)] = 5036,
  [SMALL_STATE(252)] = 5043,
  [SMALL_STATE(253)] = 5050,
  [SMALL_STATE(254)] = 5057,
  [SMALL_STATE(255)] = 5064,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sql_expr, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__sql_expr, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_fn, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_fn, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_alias, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_alias, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_where_clause, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expression, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(86),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2), SHIFT_REPEAT(163),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_clause, 2),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 5),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2), SHIFT_REPEAT(244),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 6),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_clause, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 7),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_comment, 3),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_statement, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 3),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(93),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(159),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(54),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 2),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(47),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2), SHIFT_REPEAT(139),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 5),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 4),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [490] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_recursive_name, 5),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
