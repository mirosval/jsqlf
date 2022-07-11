#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 214
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 92
#define ALIAS_COUNT 0
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_LBRACE_LBRACE = 1,
  anon_sym_RBRACE_RBRACE = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_SQUOTE = 6,
  aux_sym_jinja_lit_string_token1 = 7,
  anon_sym_DQUOTE = 8,
  aux_sym_jinja_lit_string_token2 = 9,
  anon_sym_True = 10,
  anon_sym_False = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_COLON = 16,
  anon_sym_EQ = 17,
  sym_jinja_identifier = 18,
  aux_sym_sql_with_clause_token1 = 19,
  aux_sym_sql_cte_token1 = 20,
  aux_sym_sql_select_clause_token1 = 21,
  sym_sql_identifier = 22,
  anon_sym_STAR = 23,
  aux_sym_sql_from_clause_token1 = 24,
  aux_sym_sql_where_clause_token1 = 25,
  aux_sym_sql_order_by_clause_token1 = 26,
  aux_sym_sql_order_by_clause_token2 = 27,
  aux_sym_sql_limit_clause_token1 = 28,
  aux_sym_sql_string_token1 = 29,
  anon_sym_CARET = 30,
  anon_sym_SLASH = 31,
  anon_sym_PERCENT = 32,
  anon_sym_LT_LT = 33,
  anon_sym_GT_GT = 34,
  anon_sym_AMP = 35,
  anon_sym_PLUS = 36,
  anon_sym_DASH = 37,
  anon_sym_PIPE = 38,
  anon_sym_POUND = 39,
  anon_sym_LT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_LT_GT = 42,
  anon_sym_BANG_EQ = 43,
  anon_sym_GT = 44,
  anon_sym_GT_EQ = 45,
  anon_sym_TILDE = 46,
  anon_sym_BANG_TILDE = 47,
  anon_sym_TILDE_STAR = 48,
  anon_sym_BANG_TILDE_STAR = 49,
  aux_sym_sql_boolean_expr_token1 = 50,
  aux_sym_sql_boolean_expr_token2 = 51,
  aux_sym_sql_boolean_expr_token3 = 52,
  sym_sql_integer = 53,
  sym_comment = 54,
  sym_source_file = 55,
  sym_jinja_block = 56,
  sym_jinja_expr = 57,
  sym_jinja_fn_call = 58,
  sym_jinja_argument_list = 59,
  sym_jinja_lit_string = 60,
  sym_jinja_bool = 61,
  sym_jinja_list = 62,
  sym_jinja_dict = 63,
  sym_jinja_pair = 64,
  sym_jinja_kwarg = 65,
  sym_sql_select_statement = 66,
  sym_sql_with_clause = 67,
  sym_sql_cte = 68,
  sym_sql_cte_name = 69,
  sym_sql_select_clause = 70,
  sym_sql_column_list = 71,
  sym_sql_from_clause = 72,
  sym_sql_where_clause = 73,
  sym_sql_order_by_clause = 74,
  sym_sql_order_by_expression = 75,
  sym_sql_limit_clause = 76,
  sym_sql_expr = 77,
  sym_sql_string = 78,
  sym_sql_binary_expr = 79,
  sym_sql_boolean_expr = 80,
  sym_sql_alias = 81,
  sym_sql_fn = 82,
  sym_sql_arg_list = 83,
  sym_sql_table_name = 84,
  aux_sym_jinja_argument_list_repeat1 = 85,
  aux_sym_jinja_list_repeat1 = 86,
  aux_sym_jinja_dict_repeat1 = 87,
  aux_sym_sql_with_clause_repeat1 = 88,
  aux_sym_sql_column_list_repeat1 = 89,
  aux_sym_sql_from_clause_repeat1 = 90,
  aux_sym_sql_order_by_expression_repeat1 = 91,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
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
  [aux_sym_sql_with_clause_token1] = "with",
  [aux_sym_sql_cte_token1] = "as",
  [aux_sym_sql_select_clause_token1] = "select",
  [sym_sql_identifier] = "sql_identifier",
  [anon_sym_STAR] = "*",
  [aux_sym_sql_from_clause_token1] = "from",
  [aux_sym_sql_where_clause_token1] = "where",
  [aux_sym_sql_order_by_clause_token1] = "order",
  [aux_sym_sql_order_by_clause_token2] = "by",
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
  [sym_sql_integer] = "sql_integer",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_jinja_block] = "jinja_block",
  [sym_jinja_expr] = "jinja_expr",
  [sym_jinja_fn_call] = "jinja_fn_call",
  [sym_jinja_argument_list] = "jinja_argument_list",
  [sym_jinja_lit_string] = "jinja_lit_string",
  [sym_jinja_bool] = "jinja_bool",
  [sym_jinja_list] = "jinja_list",
  [sym_jinja_dict] = "jinja_dict",
  [sym_jinja_pair] = "jinja_pair",
  [sym_jinja_kwarg] = "jinja_kwarg",
  [sym_sql_select_statement] = "sql_select_statement",
  [sym_sql_with_clause] = "sql_with_clause",
  [sym_sql_cte] = "sql_cte",
  [sym_sql_cte_name] = "sql_cte_name",
  [sym_sql_select_clause] = "sql_select_clause",
  [sym_sql_column_list] = "sql_column_list",
  [sym_sql_from_clause] = "sql_from_clause",
  [sym_sql_where_clause] = "sql_where_clause",
  [sym_sql_order_by_clause] = "sql_order_by_clause",
  [sym_sql_order_by_expression] = "sql_order_by_expression",
  [sym_sql_limit_clause] = "sql_limit_clause",
  [sym_sql_expr] = "sql_expr",
  [sym_sql_string] = "sql_string",
  [sym_sql_binary_expr] = "sql_binary_expr",
  [sym_sql_boolean_expr] = "sql_boolean_expr",
  [sym_sql_alias] = "sql_alias",
  [sym_sql_fn] = "sql_fn",
  [sym_sql_arg_list] = "sql_arg_list",
  [sym_sql_table_name] = "sql_table_name",
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
  [aux_sym_sql_with_clause_token1] = aux_sym_sql_with_clause_token1,
  [aux_sym_sql_cte_token1] = aux_sym_sql_cte_token1,
  [aux_sym_sql_select_clause_token1] = aux_sym_sql_select_clause_token1,
  [sym_sql_identifier] = sym_sql_identifier,
  [anon_sym_STAR] = anon_sym_STAR,
  [aux_sym_sql_from_clause_token1] = aux_sym_sql_from_clause_token1,
  [aux_sym_sql_where_clause_token1] = aux_sym_sql_where_clause_token1,
  [aux_sym_sql_order_by_clause_token1] = aux_sym_sql_order_by_clause_token1,
  [aux_sym_sql_order_by_clause_token2] = aux_sym_sql_order_by_clause_token2,
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
  [sym_sql_integer] = sym_sql_integer,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_jinja_block] = sym_jinja_block,
  [sym_jinja_expr] = sym_jinja_expr,
  [sym_jinja_fn_call] = sym_jinja_fn_call,
  [sym_jinja_argument_list] = sym_jinja_argument_list,
  [sym_jinja_lit_string] = sym_jinja_lit_string,
  [sym_jinja_bool] = sym_jinja_bool,
  [sym_jinja_list] = sym_jinja_list,
  [sym_jinja_dict] = sym_jinja_dict,
  [sym_jinja_pair] = sym_jinja_pair,
  [sym_jinja_kwarg] = sym_jinja_kwarg,
  [sym_sql_select_statement] = sym_sql_select_statement,
  [sym_sql_with_clause] = sym_sql_with_clause,
  [sym_sql_cte] = sym_sql_cte,
  [sym_sql_cte_name] = sym_sql_cte_name,
  [sym_sql_select_clause] = sym_sql_select_clause,
  [sym_sql_column_list] = sym_sql_column_list,
  [sym_sql_from_clause] = sym_sql_from_clause,
  [sym_sql_where_clause] = sym_sql_where_clause,
  [sym_sql_order_by_clause] = sym_sql_order_by_clause,
  [sym_sql_order_by_expression] = sym_sql_order_by_expression,
  [sym_sql_limit_clause] = sym_sql_limit_clause,
  [sym_sql_expr] = sym_sql_expr,
  [sym_sql_string] = sym_sql_string,
  [sym_sql_binary_expr] = sym_sql_binary_expr,
  [sym_sql_boolean_expr] = sym_sql_boolean_expr,
  [sym_sql_alias] = sym_sql_alias,
  [sym_sql_fn] = sym_sql_fn,
  [sym_sql_arg_list] = sym_sql_arg_list,
  [sym_sql_table_name] = sym_sql_table_name,
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
  [aux_sym_sql_with_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_cte_token1] = {
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
  [sym_jinja_block] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_expr] = {
    .visible = true,
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
  [sym_sql_limit_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_expr] = {
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
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '&') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '\\') SKIP(48)
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(123);
      if (lookahead == '{') ADVANCE(92);
      if (lookahead == '|') ADVANCE(174);
      if (lookahead == '}') ADVANCE(93);
      if (lookahead == '~') ADVANCE(182);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(118);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(129);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(113);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(119);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(106);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('C' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '&') ADVANCE(171);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(166);
      if (lookahead == '|') ADVANCE(174);
      if (lookahead == '~') ADVANCE(182);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(97);
      if (lookahead == 'T') ADVANCE(101);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '{') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(61);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(163);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(165);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(179);
      if (lookahead == '~') ADVANCE(183);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(56);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 25:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      END_STATE();
    case 30:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 35:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 38:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 39:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      END_STATE();
    case 44:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      END_STATE();
    case 45:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(155);
      END_STATE();
    case 47:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 48:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(47)
      END_STATE();
    case 49:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(53)
      END_STATE();
    case 50:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(53)
      if (lookahead == '\r') SKIP(49)
      END_STATE();
    case 51:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(54)
      END_STATE();
    case 52:
      if (eof) ADVANCE(55);
      if (lookahead == '\n') SKIP(54)
      if (lookahead == '\r') SKIP(51)
      END_STATE();
    case 53:
      if (eof) ADVANCE(55);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '&') ADVANCE(171);
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == '<') ADVANCE(176);
      if (lookahead == '=') ADVANCE(95);
      if (lookahead == '>') ADVANCE(180);
      if (lookahead == '\\') SKIP(50)
      if (lookahead == ']') ADVANCE(90);
      if (lookahead == '^') ADVANCE(166);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(174);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '~') ADVANCE(182);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(46);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(39);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(41);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(25);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(53)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == ')') ADVANCE(60);
      if (lookahead == ',') ADVANCE(59);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(52)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(146);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(144);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(54)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\r') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '\'') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(67);
      if (lookahead == '*') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\r') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(86);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead == '"') ADVANCE(194);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(85);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '/') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(80);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == '\\') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(56);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(109);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(105);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_sql_with_clause_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_sql_select_clause_token1);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_sql_where_clause_token1);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\r') ADVANCE(158);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(161);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(163);
      if (lookahead == '\'') ADVANCE(193);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '*') ADVANCE(165);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '/') ADVANCE(160);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(161);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '-') ADVANCE(159);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(164);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(194);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(169);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(178);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(181);
      if (lookahead == '>') ADVANCE(170);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(184);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      if (lookahead == '*') ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE_STAR);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token2);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_sql_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 53},
  [2] = {.lex_state = 53},
  [3] = {.lex_state = 53},
  [4] = {.lex_state = 53},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 53},
  [8] = {.lex_state = 53},
  [9] = {.lex_state = 53},
  [10] = {.lex_state = 53},
  [11] = {.lex_state = 53},
  [12] = {.lex_state = 53},
  [13] = {.lex_state = 53},
  [14] = {.lex_state = 53},
  [15] = {.lex_state = 53},
  [16] = {.lex_state = 53},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 9},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 10},
  [41] = {.lex_state = 10},
  [42] = {.lex_state = 10},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 10},
  [45] = {.lex_state = 10},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 53},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 53},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 54},
  [71] = {.lex_state = 53},
  [72] = {.lex_state = 53},
  [73] = {.lex_state = 53},
  [74] = {.lex_state = 53},
  [75] = {.lex_state = 53},
  [76] = {.lex_state = 53},
  [77] = {.lex_state = 53},
  [78] = {.lex_state = 53},
  [79] = {.lex_state = 53},
  [80] = {.lex_state = 53},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 53},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 53},
  [85] = {.lex_state = 53},
  [86] = {.lex_state = 53},
  [87] = {.lex_state = 53},
  [88] = {.lex_state = 53},
  [89] = {.lex_state = 53},
  [90] = {.lex_state = 53},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 53},
  [95] = {.lex_state = 53},
  [96] = {.lex_state = 53},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 53},
  [99] = {.lex_state = 53},
  [100] = {.lex_state = 53},
  [101] = {.lex_state = 53},
  [102] = {.lex_state = 53},
  [103] = {.lex_state = 18},
  [104] = {.lex_state = 53},
  [105] = {.lex_state = 53},
  [106] = {.lex_state = 53},
  [107] = {.lex_state = 18},
  [108] = {.lex_state = 53},
  [109] = {.lex_state = 53},
  [110] = {.lex_state = 53},
  [111] = {.lex_state = 53},
  [112] = {.lex_state = 53},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 53},
  [115] = {.lex_state = 53},
  [116] = {.lex_state = 53},
  [117] = {.lex_state = 53},
  [118] = {.lex_state = 53},
  [119] = {.lex_state = 53},
  [120] = {.lex_state = 53},
  [121] = {.lex_state = 53},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 53},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 18},
  [127] = {.lex_state = 53},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 18},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 53},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 53},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 53},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 53},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 18},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 53},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 53},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 53},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 53},
  [184] = {.lex_state = 53},
  [185] = {.lex_state = 161},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 18},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 18},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 82},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 69},
  [199] = {.lex_state = 53},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 18},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 69},
  [211] = {.lex_state = 82},
  [212] = {.lex_state = 161},
  [213] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
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
    [aux_sym_sql_with_clause_token1] = ACTIONS(1),
    [aux_sym_sql_cte_token1] = ACTIONS(1),
    [aux_sym_sql_select_clause_token1] = ACTIONS(1),
    [sym_sql_identifier] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_sql_from_clause_token1] = ACTIONS(1),
    [aux_sym_sql_where_clause_token1] = ACTIONS(1),
    [aux_sym_sql_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_sql_order_by_clause_token2] = ACTIONS(1),
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
    [sym_sql_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(213),
    [sym_jinja_block] = STATE(90),
    [sym_sql_select_statement] = STATE(207),
    [sym_sql_with_clause] = STATE(152),
    [sym_sql_select_clause] = STATE(49),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [aux_sym_sql_with_clause_token1] = ACTIONS(7),
    [aux_sym_sql_select_clause_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(11), 25,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
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
  [43] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(23), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(27), 1,
      anon_sym_CARET,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(39), 1,
      aux_sym_sql_boolean_expr_token3,
    STATE(74), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(31), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
    ACTIONS(21), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [106] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(27), 1,
      anon_sym_CARET,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(39), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(31), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(21), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(43), 25,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
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
  [204] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_CARET,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(49), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(31), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(21), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [260] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_CARET,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(49), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(31), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(21), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(47), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      aux_sym_sql_boolean_expr_token2,
  [314] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_CARET,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(53), 6,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(51), 19,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
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
  [360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(51), 25,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
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
  [400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(55), 25,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
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
  [440] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_CARET,
    ACTIONS(53), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(51), 24,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
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
  [482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(59), 25,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
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
  [522] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_CARET,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(31), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(53), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(51), 16,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
      aux_sym_sql_boolean_expr_token2,
  [572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(63), 25,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
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
    ACTIONS(15), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(11), 25,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      aux_sym_sql_cte_token1,
      anon_sym_STAR,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
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
  [652] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(27), 1,
      anon_sym_CARET,
    ACTIONS(29), 1,
      anon_sym_SLASH,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(39), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(31), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(35), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
    ACTIONS(25), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(21), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [707] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(79), 1,
      anon_sym_CARET,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(91), 1,
      aux_sym_sql_boolean_expr_token3,
    STATE(134), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(83), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(73), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(11), 21,
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
  [803] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(11), 21,
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
  [838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(51), 21,
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
  [873] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_CARET,
    ACTIONS(53), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(51), 20,
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
  [910] = 3,
    ACTIONS(3), 1,
      sym_comment,
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
  [945] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_CARET,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(83), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(53), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(51), 12,
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
  [990] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(79), 1,
      anon_sym_CARET,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(91), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(41), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(83), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(73), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1043] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(43), 21,
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
  [1078] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_CARET,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(89), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(83), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(47), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(73), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1127] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_CARET,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(85), 1,
      anon_sym_DASH,
    ACTIONS(83), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(47), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(73), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1174] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_CARET,
    ACTIONS(81), 1,
      anon_sym_SLASH,
    ACTIONS(53), 5,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(51), 15,
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
  [1215] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(63), 21,
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
  [1250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(55), 21,
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
  [1285] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_COMMA,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      sym_jinja_identifier,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(128), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1325] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      sym_jinja_identifier,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(123), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1365] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RBRACK,
    ACTIONS(119), 1,
      sym_jinja_identifier,
    STATE(144), 1,
      sym_jinja_expr,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1404] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      sym_jinja_identifier,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(177), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1441] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_jinja_identifier,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RBRACK,
    STATE(137), 1,
      sym_jinja_expr,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1480] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      sym_jinja_identifier,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(177), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1517] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      sym_jinja_identifier,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(177), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1554] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      sym_jinja_identifier,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(177), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1591] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_jinja_identifier,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_jinja_expr,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1627] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_jinja_identifier,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_jinja_expr,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1663] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(109), 1,
      sym_jinja_identifier,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(177), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1697] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_jinja_identifier,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_jinja_expr,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1733] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_jinja_identifier,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    STATE(168), 1,
      sym_jinja_expr,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1769] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_SQUOTE,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_LBRACK,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      sym_jinja_identifier,
    STATE(148), 1,
      sym_jinja_expr,
    ACTIONS(145), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(151), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1802] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_jinja_identifier,
    STATE(181), 1,
      sym_jinja_expr,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1835] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_jinja_identifier,
    STATE(168), 1,
      sym_jinja_expr,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1868] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    ACTIONS(107), 1,
      anon_sym_LBRACE,
    ACTIONS(119), 1,
      sym_jinja_identifier,
    STATE(174), 1,
      sym_jinja_expr,
    ACTIONS(103), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(114), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1901] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(3), 1,
      sym_sql_expr,
    STATE(86), 1,
      sym_sql_column_list,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [1930] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(165), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(72), 1,
      sym_sql_from_clause,
    STATE(88), 1,
      sym_sql_where_clause,
    STATE(110), 1,
      sym_sql_order_by_clause,
    STATE(159), 1,
      sym_sql_limit_clause,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1962] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(17), 1,
      sym_sql_expr,
    STATE(204), 1,
      sym_sql_arg_list,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [1988] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(165), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(73), 1,
      sym_sql_from_clause,
    STATE(80), 1,
      sym_sql_where_clause,
    STATE(101), 1,
      sym_sql_order_by_clause,
    STATE(154), 1,
      sym_sql_limit_clause,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2020] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(17), 1,
      sym_sql_expr,
    STATE(208), 1,
      sym_sql_arg_list,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2046] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(23), 1,
      sym_sql_expr,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2069] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(30), 1,
      sym_sql_expr,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(26), 1,
      sym_sql_expr,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(4), 1,
      sym_sql_expr,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2138] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(13), 1,
      sym_sql_expr,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2161] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(27), 1,
      sym_sql_expr,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2184] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(11), 1,
      sym_sql_expr,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2207] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(9), 1,
      sym_sql_expr,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2230] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(8), 1,
      sym_sql_expr,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2253] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(7), 1,
      sym_sql_expr,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(6), 1,
      sym_sql_expr,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2299] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(28), 1,
      sym_sql_expr,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(16), 1,
      sym_sql_expr,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2345] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_SQUOTE,
    ACTIONS(155), 1,
      sym_sql_identifier,
    ACTIONS(159), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(10), 1,
      sym_sql_expr,
    STATE(15), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2368] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(24), 1,
      sym_sql_expr,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2391] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(20), 1,
      sym_sql_expr,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2414] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      sym_sql_identifier,
    ACTIONS(175), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(21), 1,
      sym_sql_expr,
    STATE(19), 5,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
  [2437] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(183), 1,
      sym_sql_identifier,
    ACTIONS(179), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2473] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(80), 1,
      sym_sql_where_clause,
    STATE(101), 1,
      sym_sql_order_by_clause,
    STATE(154), 1,
      sym_sql_limit_clause,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2499] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(167), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(87), 1,
      sym_sql_where_clause,
    STATE(104), 1,
      sym_sql_order_by_clause,
    STATE(149), 1,
      sym_sql_limit_clause,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(190), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2574] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2591] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2620] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(104), 1,
      sym_sql_order_by_clause,
    STATE(149), 1,
      sym_sql_limit_clause,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2640] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(136), 1,
      sym_jinja_pair,
    STATE(194), 1,
      sym_jinja_lit_string,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2674] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_jinja_pair,
    STATE(194), 1,
      sym_jinja_lit_string,
  [2696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2732] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(112), 1,
      sym_sql_order_by_clause,
    STATE(158), 1,
      sym_sql_limit_clause,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2752] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(101), 1,
      sym_sql_order_by_clause,
    STATE(154), 1,
      sym_sql_limit_clause,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2772] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [2787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(49), 1,
      sym_sql_select_clause,
    STATE(152), 1,
      sym_sql_with_clause,
    STATE(188), 1,
      sym_sql_select_statement,
  [2806] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_jinja_pair,
    STATE(194), 1,
      sym_jinja_lit_string,
  [2825] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_jinja_pair,
    STATE(194), 1,
      sym_jinja_lit_string,
  [2844] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_jinja_pair,
    STATE(194), 1,
      sym_jinja_lit_string,
  [2863] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [2874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(233), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [2889] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(235), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [2904] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(153), 1,
      sym_jinja_pair,
    STATE(194), 1,
      sym_jinja_lit_string,
  [2923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(49), 1,
      sym_sql_select_clause,
    STATE(152), 1,
      sym_sql_with_clause,
    STATE(201), 1,
      sym_sql_select_statement,
  [2942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2962] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(149), 1,
      sym_sql_limit_clause,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2986] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 1,
      sym_sql_identifier,
    STATE(76), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [3000] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(158), 1,
      sym_sql_limit_clause,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3024] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(248), 1,
      sym_sql_identifier,
    STATE(82), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [3048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(154), 1,
      sym_sql_limit_clause,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3092] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(162), 1,
      sym_sql_limit_clause,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3106] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_SQUOTE,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym_jinja_pair,
    STATE(194), 1,
      sym_jinja_lit_string,
  [3122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3192] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RBRACK,
    STATE(122), 1,
      aux_sym_jinja_list_repeat1,
  [3215] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [3237] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3250] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_sql_identifier,
    STATE(141), 1,
      sym_sql_cte,
    STATE(184), 1,
      sym_sql_cte_name,
  [3263] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      aux_sym_sql_select_clause_token1,
    STATE(145), 1,
      aux_sym_sql_with_clause_repeat1,
  [3276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(125), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_jinja_dict_repeat1,
  [3302] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    STATE(130), 1,
      aux_sym_jinja_dict_repeat1,
  [3315] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      sym_sql_identifier,
    STATE(160), 1,
      sym_sql_cte,
    STATE(184), 1,
      sym_sql_cte_name,
  [3328] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3341] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(308), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_jinja_list_repeat1,
  [3354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_sql_column_list_repeat1,
  [3367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_COMMA,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    STATE(140), 1,
      aux_sym_jinja_dict_repeat1,
  [3380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      aux_sym_jinja_dict_repeat1,
  [3393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_jinja_list_repeat1,
  [3406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    ACTIONS(324), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_jinja_list_repeat1,
  [3419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(326), 1,
      anon_sym_COMMA,
    STATE(139), 1,
      aux_sym_sql_column_list_repeat1,
  [3432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_jinja_dict_repeat1,
  [3445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      aux_sym_sql_select_clause_token1,
    STATE(127), 1,
      aux_sym_sql_with_clause_repeat1,
  [3458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(142), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    ACTIONS(340), 1,
      anon_sym_EQ,
    STATE(121), 1,
      sym_jinja_argument_list,
  [3484] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
    STATE(138), 1,
      aux_sym_jinja_list_repeat1,
  [3497] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(349), 1,
      aux_sym_sql_select_clause_token1,
    STATE(145), 1,
      aux_sym_sql_with_clause_repeat1,
  [3510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3518] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(51), 1,
      sym_sql_select_clause,
  [3568] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3600] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3608] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [3632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_jinja_argument_list,
  [3642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      sym_sql_identifier,
    STATE(124), 1,
      sym_sql_order_by_expression,
  [3660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3684] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3692] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [3700] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [3732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3756] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_LPAREN,
    STATE(121), 1,
      sym_jinja_argument_list,
  [3766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3782] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      aux_sym_sql_order_by_clause_token2,
  [3789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_SQUOTE,
  [3796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      anon_sym_RBRACE_RBRACE,
  [3803] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
  [3810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      aux_sym_sql_cte_token1,
  [3817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      aux_sym_sql_cte_token1,
  [3824] = 2,
    ACTIONS(375), 1,
      aux_sym_sql_string_token1,
    ACTIONS(377), 1,
      sym_comment,
  [3831] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
  [3838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      sym_sql_identifier,
  [3845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [3852] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
  [3859] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_DQUOTE,
  [3866] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
  [3873] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      sym_sql_identifier,
  [3880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
  [3887] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_COLON,
  [3894] = 2,
    ACTIONS(377), 1,
      sym_comment,
    ACTIONS(389), 1,
      aux_sym_jinja_lit_string_token2,
  [3901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LPAREN,
  [3908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_sql_identifier,
  [3915] = 2,
    ACTIONS(377), 1,
      sym_comment,
    ACTIONS(395), 1,
      aux_sym_jinja_lit_string_token1,
  [3922] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_sql_integer,
  [3929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_SQUOTE,
  [3936] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_RPAREN,
  [3943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
  [3950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_DQUOTE,
  [3957] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
  [3964] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_RBRACK,
  [3971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_sql_identifier,
  [3978] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      ts_builtin_sym_end,
  [3985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SQUOTE,
  [3999] = 2,
    ACTIONS(377), 1,
      sym_comment,
    ACTIONS(413), 1,
      aux_sym_jinja_lit_string_token1,
  [4006] = 2,
    ACTIONS(377), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_jinja_lit_string_token2,
  [4013] = 2,
    ACTIONS(377), 1,
      sym_comment,
    ACTIONS(417), 1,
      aux_sym_sql_string_token1,
  [4020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 204,
  [SMALL_STATE(7)] = 260,
  [SMALL_STATE(8)] = 314,
  [SMALL_STATE(9)] = 360,
  [SMALL_STATE(10)] = 400,
  [SMALL_STATE(11)] = 440,
  [SMALL_STATE(12)] = 482,
  [SMALL_STATE(13)] = 522,
  [SMALL_STATE(14)] = 572,
  [SMALL_STATE(15)] = 612,
  [SMALL_STATE(16)] = 652,
  [SMALL_STATE(17)] = 707,
  [SMALL_STATE(18)] = 765,
  [SMALL_STATE(19)] = 803,
  [SMALL_STATE(20)] = 838,
  [SMALL_STATE(21)] = 873,
  [SMALL_STATE(22)] = 910,
  [SMALL_STATE(23)] = 945,
  [SMALL_STATE(24)] = 990,
  [SMALL_STATE(25)] = 1043,
  [SMALL_STATE(26)] = 1078,
  [SMALL_STATE(27)] = 1127,
  [SMALL_STATE(28)] = 1174,
  [SMALL_STATE(29)] = 1215,
  [SMALL_STATE(30)] = 1250,
  [SMALL_STATE(31)] = 1285,
  [SMALL_STATE(32)] = 1325,
  [SMALL_STATE(33)] = 1365,
  [SMALL_STATE(34)] = 1404,
  [SMALL_STATE(35)] = 1441,
  [SMALL_STATE(36)] = 1480,
  [SMALL_STATE(37)] = 1517,
  [SMALL_STATE(38)] = 1554,
  [SMALL_STATE(39)] = 1591,
  [SMALL_STATE(40)] = 1627,
  [SMALL_STATE(41)] = 1663,
  [SMALL_STATE(42)] = 1697,
  [SMALL_STATE(43)] = 1733,
  [SMALL_STATE(44)] = 1769,
  [SMALL_STATE(45)] = 1802,
  [SMALL_STATE(46)] = 1835,
  [SMALL_STATE(47)] = 1868,
  [SMALL_STATE(48)] = 1901,
  [SMALL_STATE(49)] = 1930,
  [SMALL_STATE(50)] = 1962,
  [SMALL_STATE(51)] = 1988,
  [SMALL_STATE(52)] = 2020,
  [SMALL_STATE(53)] = 2046,
  [SMALL_STATE(54)] = 2069,
  [SMALL_STATE(55)] = 2092,
  [SMALL_STATE(56)] = 2115,
  [SMALL_STATE(57)] = 2138,
  [SMALL_STATE(58)] = 2161,
  [SMALL_STATE(59)] = 2184,
  [SMALL_STATE(60)] = 2207,
  [SMALL_STATE(61)] = 2230,
  [SMALL_STATE(62)] = 2253,
  [SMALL_STATE(63)] = 2276,
  [SMALL_STATE(64)] = 2299,
  [SMALL_STATE(65)] = 2322,
  [SMALL_STATE(66)] = 2345,
  [SMALL_STATE(67)] = 2368,
  [SMALL_STATE(68)] = 2391,
  [SMALL_STATE(69)] = 2414,
  [SMALL_STATE(70)] = 2437,
  [SMALL_STATE(71)] = 2455,
  [SMALL_STATE(72)] = 2473,
  [SMALL_STATE(73)] = 2499,
  [SMALL_STATE(74)] = 2525,
  [SMALL_STATE(75)] = 2543,
  [SMALL_STATE(76)] = 2557,
  [SMALL_STATE(77)] = 2574,
  [SMALL_STATE(78)] = 2591,
  [SMALL_STATE(79)] = 2608,
  [SMALL_STATE(80)] = 2620,
  [SMALL_STATE(81)] = 2640,
  [SMALL_STATE(82)] = 2662,
  [SMALL_STATE(83)] = 2674,
  [SMALL_STATE(84)] = 2696,
  [SMALL_STATE(85)] = 2708,
  [SMALL_STATE(86)] = 2720,
  [SMALL_STATE(87)] = 2732,
  [SMALL_STATE(88)] = 2752,
  [SMALL_STATE(89)] = 2772,
  [SMALL_STATE(90)] = 2787,
  [SMALL_STATE(91)] = 2806,
  [SMALL_STATE(92)] = 2825,
  [SMALL_STATE(93)] = 2844,
  [SMALL_STATE(94)] = 2863,
  [SMALL_STATE(95)] = 2874,
  [SMALL_STATE(96)] = 2889,
  [SMALL_STATE(97)] = 2904,
  [SMALL_STATE(98)] = 2923,
  [SMALL_STATE(99)] = 2942,
  [SMALL_STATE(100)] = 2952,
  [SMALL_STATE(101)] = 2962,
  [SMALL_STATE(102)] = 2976,
  [SMALL_STATE(103)] = 2986,
  [SMALL_STATE(104)] = 3000,
  [SMALL_STATE(105)] = 3014,
  [SMALL_STATE(106)] = 3024,
  [SMALL_STATE(107)] = 3034,
  [SMALL_STATE(108)] = 3048,
  [SMALL_STATE(109)] = 3058,
  [SMALL_STATE(110)] = 3068,
  [SMALL_STATE(111)] = 3082,
  [SMALL_STATE(112)] = 3092,
  [SMALL_STATE(113)] = 3106,
  [SMALL_STATE(114)] = 3122,
  [SMALL_STATE(115)] = 3132,
  [SMALL_STATE(116)] = 3142,
  [SMALL_STATE(117)] = 3152,
  [SMALL_STATE(118)] = 3162,
  [SMALL_STATE(119)] = 3172,
  [SMALL_STATE(120)] = 3182,
  [SMALL_STATE(121)] = 3192,
  [SMALL_STATE(122)] = 3202,
  [SMALL_STATE(123)] = 3215,
  [SMALL_STATE(124)] = 3228,
  [SMALL_STATE(125)] = 3237,
  [SMALL_STATE(126)] = 3250,
  [SMALL_STATE(127)] = 3263,
  [SMALL_STATE(128)] = 3276,
  [SMALL_STATE(129)] = 3289,
  [SMALL_STATE(130)] = 3302,
  [SMALL_STATE(131)] = 3315,
  [SMALL_STATE(132)] = 3328,
  [SMALL_STATE(133)] = 3341,
  [SMALL_STATE(134)] = 3354,
  [SMALL_STATE(135)] = 3367,
  [SMALL_STATE(136)] = 3380,
  [SMALL_STATE(137)] = 3393,
  [SMALL_STATE(138)] = 3406,
  [SMALL_STATE(139)] = 3419,
  [SMALL_STATE(140)] = 3432,
  [SMALL_STATE(141)] = 3445,
  [SMALL_STATE(142)] = 3458,
  [SMALL_STATE(143)] = 3471,
  [SMALL_STATE(144)] = 3484,
  [SMALL_STATE(145)] = 3497,
  [SMALL_STATE(146)] = 3510,
  [SMALL_STATE(147)] = 3518,
  [SMALL_STATE(148)] = 3526,
  [SMALL_STATE(149)] = 3534,
  [SMALL_STATE(150)] = 3542,
  [SMALL_STATE(151)] = 3550,
  [SMALL_STATE(152)] = 3558,
  [SMALL_STATE(153)] = 3568,
  [SMALL_STATE(154)] = 3576,
  [SMALL_STATE(155)] = 3584,
  [SMALL_STATE(156)] = 3592,
  [SMALL_STATE(157)] = 3600,
  [SMALL_STATE(158)] = 3608,
  [SMALL_STATE(159)] = 3616,
  [SMALL_STATE(160)] = 3624,
  [SMALL_STATE(161)] = 3632,
  [SMALL_STATE(162)] = 3642,
  [SMALL_STATE(163)] = 3650,
  [SMALL_STATE(164)] = 3660,
  [SMALL_STATE(165)] = 3668,
  [SMALL_STATE(166)] = 3676,
  [SMALL_STATE(167)] = 3684,
  [SMALL_STATE(168)] = 3692,
  [SMALL_STATE(169)] = 3700,
  [SMALL_STATE(170)] = 3708,
  [SMALL_STATE(171)] = 3716,
  [SMALL_STATE(172)] = 3724,
  [SMALL_STATE(173)] = 3732,
  [SMALL_STATE(174)] = 3740,
  [SMALL_STATE(175)] = 3748,
  [SMALL_STATE(176)] = 3756,
  [SMALL_STATE(177)] = 3766,
  [SMALL_STATE(178)] = 3774,
  [SMALL_STATE(179)] = 3782,
  [SMALL_STATE(180)] = 3789,
  [SMALL_STATE(181)] = 3796,
  [SMALL_STATE(182)] = 3803,
  [SMALL_STATE(183)] = 3810,
  [SMALL_STATE(184)] = 3817,
  [SMALL_STATE(185)] = 3824,
  [SMALL_STATE(186)] = 3831,
  [SMALL_STATE(187)] = 3838,
  [SMALL_STATE(188)] = 3845,
  [SMALL_STATE(189)] = 3852,
  [SMALL_STATE(190)] = 3859,
  [SMALL_STATE(191)] = 3866,
  [SMALL_STATE(192)] = 3873,
  [SMALL_STATE(193)] = 3880,
  [SMALL_STATE(194)] = 3887,
  [SMALL_STATE(195)] = 3894,
  [SMALL_STATE(196)] = 3901,
  [SMALL_STATE(197)] = 3908,
  [SMALL_STATE(198)] = 3915,
  [SMALL_STATE(199)] = 3922,
  [SMALL_STATE(200)] = 3929,
  [SMALL_STATE(201)] = 3936,
  [SMALL_STATE(202)] = 3943,
  [SMALL_STATE(203)] = 3950,
  [SMALL_STATE(204)] = 3957,
  [SMALL_STATE(205)] = 3964,
  [SMALL_STATE(206)] = 3971,
  [SMALL_STATE(207)] = 3978,
  [SMALL_STATE(208)] = 3985,
  [SMALL_STATE(209)] = 3992,
  [SMALL_STATE(210)] = 3999,
  [SMALL_STATE(211)] = 4006,
  [SMALL_STATE(212)] = 4013,
  [SMALL_STATE(213)] = 4020,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_expr, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_expr, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_alias, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_alias, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_fn, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_fn, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_where_clause, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(56),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2), SHIFT_REPEAT(107),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_clause, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2), SHIFT_REPEAT(192),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expr, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(46),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 3),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(113),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(67),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 2),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(41),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [346] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2), SHIFT_REPEAT(131),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 4),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 6),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 4),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [419] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
