#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 88
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
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
  sym_sql_integer = 50,
  sym_comment = 51,
  sym_source_file = 52,
  sym_jinja_block = 53,
  sym_jinja_expr = 54,
  sym_jinja_fn_call = 55,
  sym_jinja_argument_list = 56,
  sym_jinja_lit_string = 57,
  sym_jinja_bool = 58,
  sym_jinja_list = 59,
  sym_jinja_dict = 60,
  sym_jinja_pair = 61,
  sym_jinja_kwarg = 62,
  sym_sql_select_statement = 63,
  sym_sql_with_clause = 64,
  sym_sql_cte = 65,
  sym_sql_cte_name = 66,
  sym_sql_select_clause = 67,
  sym_sql_column_list = 68,
  sym_sql_from_clause = 69,
  sym_sql_where_clause = 70,
  sym_sql_order_by_clause = 71,
  sym_sql_order_by_expression = 72,
  sym_sql_limit_clause = 73,
  sym_sql_expr = 74,
  sym_sql_string = 75,
  sym_sql_binary_expression = 76,
  sym_sql_alias = 77,
  sym_sql_fn = 78,
  sym_sql_arg_list = 79,
  sym_sql_table_name = 80,
  aux_sym_jinja_argument_list_repeat1 = 81,
  aux_sym_jinja_list_repeat1 = 82,
  aux_sym_jinja_dict_repeat1 = 83,
  aux_sym_sql_with_clause_repeat1 = 84,
  aux_sym_sql_column_list_repeat1 = 85,
  aux_sym_sql_from_clause_repeat1 = 86,
  aux_sym_sql_order_by_expression_repeat1 = 87,
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
  [sym_sql_binary_expression] = "sql_binary_expression",
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
  [sym_sql_binary_expression] = sym_sql_binary_expression,
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
  [sym_sql_binary_expression] = {
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
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(160);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(165);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') SKIP(41)
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(112);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(86);
      if (lookahead == '~') ADVANCE(171);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(116);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(120);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(106);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('C' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'T') ADVANCE(94);
      if (lookahead == '[') ADVANCE(82);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(54);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(152);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(154);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(10);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(168);
      if (lookahead == '~') ADVANCE(172);
      END_STATE();
    case 14:
      if (lookahead == '{') ADVANCE(49);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 17:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(122);
      END_STATE();
    case 24:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(21);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 27:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
      END_STATE();
    case 29:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 33:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 34:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      END_STATE();
    case 36:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      END_STATE();
    case 37:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      END_STATE();
    case 38:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 39:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 40:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 41:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(40)
      END_STATE();
    case 42:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(46)
      END_STATE();
    case 43:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(46)
      if (lookahead == '\r') SKIP(42)
      END_STATE();
    case 44:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(47)
      END_STATE();
    case 45:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') SKIP(47)
      if (lookahead == '\r') SKIP(44)
      END_STATE();
    case 46:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '%') ADVANCE(157);
      if (lookahead == '&') ADVANCE(160);
      if (lookahead == '(') ADVANCE(51);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(165);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '>') ADVANCE(169);
      if (lookahead == '\\') SKIP(43)
      if (lookahead == ']') ADVANCE(83);
      if (lookahead == '^') ADVANCE(155);
      if (lookahead == '{') ADVANCE(14);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(15);
      if (lookahead == '~') ADVANCE(171);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(35);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(39);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(32);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(25);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(19);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(46)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == ')') ADVANCE(53);
      if (lookahead == ',') ADVANCE(52);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '\\') SKIP(45)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(130);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(134);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(47)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\r') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '\'') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '/') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(65);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '*') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(63);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(57);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(60);
      if (lookahead == '*') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\r') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(79);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '\\') ADVANCE(71);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '/') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(11);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(78);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(76);
      if (lookahead == '/') ADVANCE(74);
      if (lookahead == '\\') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(73);
      if (lookahead == '*') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(78);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(77);
      if (lookahead == '\\') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(49);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(102);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_sql_with_clause_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_sql_select_clause_token1);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_sql_where_clause_token1);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token1);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token2);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\r') ADVANCE(147);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(150);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(152);
      if (lookahead == '\'') ADVANCE(177);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '*') ADVANCE(154);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '-') ADVANCE(151);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(150);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(7);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead == '/') ADVANCE(152);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(153);
      if (lookahead != 0) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(178);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(158);
      if (lookahead == '=') ADVANCE(166);
      if (lookahead == '>') ADVANCE(167);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(170);
      if (lookahead == '>') ADVANCE(159);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      if (lookahead == '*') ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE_STAR);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_sql_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(178);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 46},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 46},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 46},
  [7] = {.lex_state = 46},
  [8] = {.lex_state = 46},
  [9] = {.lex_state = 46},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 46},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 46},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 46},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 46},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 47},
  [40] = {.lex_state = 46},
  [41] = {.lex_state = 46},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 46},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 46},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 46},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 46},
  [57] = {.lex_state = 46},
  [58] = {.lex_state = 46},
  [59] = {.lex_state = 46},
  [60] = {.lex_state = 46},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 46},
  [65] = {.lex_state = 46},
  [66] = {.lex_state = 46},
  [67] = {.lex_state = 46},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 46},
  [70] = {.lex_state = 46},
  [71] = {.lex_state = 46},
  [72] = {.lex_state = 46},
  [73] = {.lex_state = 46},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 46},
  [76] = {.lex_state = 46},
  [77] = {.lex_state = 46},
  [78] = {.lex_state = 46},
  [79] = {.lex_state = 46},
  [80] = {.lex_state = 46},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 46},
  [83] = {.lex_state = 46},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 46},
  [86] = {.lex_state = 46},
  [87] = {.lex_state = 46},
  [88] = {.lex_state = 46},
  [89] = {.lex_state = 46},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 46},
  [92] = {.lex_state = 46},
  [93] = {.lex_state = 46},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 46},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 46},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 46},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 46},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 46},
  [123] = {.lex_state = 46},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 46},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 46},
  [154] = {.lex_state = 46},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 46},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 75},
  [165] = {.lex_state = 150},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 46},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 75},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 62},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 62},
  [180] = {.lex_state = 46},
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
    [sym_sql_integer] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(178),
    [sym_jinja_block] = STATE(64),
    [sym_sql_select_statement] = STATE(176),
    [sym_sql_with_clause] = STATE(122),
    [sym_sql_select_clause] = STATE(33),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [aux_sym_sql_with_clause_token1] = ACTIONS(7),
    [aux_sym_sql_select_clause_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(23), 1,
      anon_sym_SLASH,
    ACTIONS(27), 1,
      anon_sym_DASH,
    STATE(41), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
    ACTIONS(15), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [57] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(31), 24,
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
  [98] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(23), 1,
      anon_sym_SLASH,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(39), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(37), 15,
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
  [146] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(41), 24,
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
  [184] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(31), 24,
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
  [222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(23), 1,
      anon_sym_SLASH,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(39), 5,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(37), 18,
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
  [266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(37), 24,
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
  [304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(45), 24,
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
  [342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(39), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(37), 23,
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
  [382] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(23), 1,
      anon_sym_SLASH,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(15), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [434] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
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
  [472] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(23), 1,
      anon_sym_SLASH,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(55), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(15), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [521] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(17), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(21), 1,
      anon_sym_CARET,
    ACTIONS(23), 1,
      anon_sym_SLASH,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    STATE(111), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(25), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(29), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(19), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(15), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [573] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_jinja_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(97), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [613] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_jinja_identifier,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(101), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [653] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(83), 1,
      sym_jinja_identifier,
    STATE(115), 1,
      sym_jinja_expr,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [692] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_jinja_identifier,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      sym_jinja_expr,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [731] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_jinja_identifier,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(134), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [768] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_jinja_identifier,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(134), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [805] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_jinja_identifier,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(134), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [842] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_jinja_identifier,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(134), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [879] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_jinja_identifier,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym_jinja_expr,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [915] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_jinja_identifier,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym_jinja_expr,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [951] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym_jinja_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(134), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [985] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_jinja_identifier,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym_jinja_expr,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1021] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_jinja_identifier,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym_jinja_expr,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1057] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_SQUOTE,
    ACTIONS(107), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_LBRACK,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    ACTIONS(115), 1,
      sym_jinja_identifier,
    STATE(127), 1,
      sym_jinja_expr,
    ACTIONS(109), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(143), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1090] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_jinja_identifier,
    STATE(167), 1,
      sym_jinja_expr,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1123] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_jinja_identifier,
    STATE(126), 1,
      sym_jinja_expr,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1156] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(83), 1,
      sym_jinja_identifier,
    STATE(132), 1,
      sym_jinja_expr,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(88), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1189] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(121), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(123), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(40), 1,
      sym_sql_from_clause,
    STATE(60), 1,
      sym_sql_where_clause,
    STATE(93), 1,
      sym_sql_order_by_clause,
    STATE(120), 1,
      sym_sql_limit_clause,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1221] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(121), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(123), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(37), 1,
      sym_sql_from_clause,
    STATE(59), 1,
      sym_sql_where_clause,
    STATE(85), 1,
      sym_sql_order_by_clause,
    STATE(133), 1,
      sym_sql_limit_clause,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1253] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym_sql_identifier,
    ACTIONS(133), 1,
      anon_sym_STAR,
    STATE(2), 1,
      sym_sql_expr,
    STATE(58), 1,
      sym_sql_column_list,
    STATE(6), 4,
      sym_sql_string,
      sym_sql_binary_expression,
      sym_sql_alias,
      sym_sql_fn,
  [1278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(49), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1310] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(123), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(60), 1,
      sym_sql_where_clause,
    STATE(93), 1,
      sym_sql_order_by_clause,
    STATE(120), 1,
      sym_sql_limit_clause,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym_sql_identifier,
    STATE(14), 1,
      sym_sql_expr,
    STATE(157), 1,
      sym_sql_arg_list,
    STATE(6), 4,
      sym_sql_string,
      sym_sql_binary_expression,
      sym_sql_alias,
      sym_sql_fn,
  [1358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(144), 1,
      sym_sql_identifier,
    ACTIONS(140), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1376] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(123), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(57), 1,
      sym_sql_where_clause,
    STATE(83), 1,
      sym_sql_order_by_clause,
    STATE(121), 1,
      sym_sql_limit_clause,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1402] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(148), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1420] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym_sql_identifier,
    STATE(7), 1,
      sym_sql_expr,
    STATE(6), 4,
      sym_sql_string,
      sym_sql_binary_expression,
      sym_sql_alias,
      sym_sql_fn,
  [1439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym_sql_identifier,
    STATE(8), 1,
      sym_sql_expr,
    STATE(6), 4,
      sym_sql_string,
      sym_sql_binary_expression,
      sym_sql_alias,
      sym_sql_fn,
  [1458] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym_sql_identifier,
    STATE(4), 1,
      sym_sql_expr,
    STATE(6), 4,
      sym_sql_string,
      sym_sql_binary_expression,
      sym_sql_alias,
      sym_sql_fn,
  [1477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1494] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym_sql_identifier,
    STATE(10), 1,
      sym_sql_expr,
    STATE(6), 4,
      sym_sql_string,
      sym_sql_binary_expression,
      sym_sql_alias,
      sym_sql_fn,
  [1513] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym_sql_identifier,
    STATE(11), 1,
      sym_sql_expr,
    STATE(6), 4,
      sym_sql_string,
      sym_sql_binary_expression,
      sym_sql_alias,
      sym_sql_fn,
  [1532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1549] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_SQUOTE,
    ACTIONS(131), 1,
      sym_sql_identifier,
    STATE(13), 1,
      sym_sql_expr,
    STATE(6), 4,
      sym_sql_string,
      sym_sql_binary_expression,
      sym_sql_alias,
      sym_sql_fn,
  [1568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(159), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1609] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      sym_jinja_pair,
    STATE(163), 1,
      sym_jinja_lit_string,
  [1631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1643] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACE,
    STATE(104), 1,
      sym_jinja_pair,
    STATE(163), 1,
      sym_jinja_lit_string,
  [1665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1677] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(72), 1,
      sym_sql_order_by_clause,
    STATE(125), 1,
      sym_sql_limit_clause,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1709] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(93), 1,
      sym_sql_order_by_clause,
    STATE(120), 1,
      sym_sql_limit_clause,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1729] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(83), 1,
      sym_sql_order_by_clause,
    STATE(121), 1,
      sym_sql_limit_clause,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1749] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      sym_jinja_pair,
    STATE(163), 1,
      sym_jinja_lit_string,
  [1768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      sym_jinja_pair,
    STATE(163), 1,
      sym_jinja_lit_string,
  [1787] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      sym_jinja_pair,
    STATE(163), 1,
      sym_jinja_lit_string,
  [1806] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(33), 1,
      sym_sql_select_clause,
    STATE(122), 1,
      sym_sql_with_clause,
    STATE(152), 1,
      sym_sql_select_statement,
  [1825] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(183), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [1840] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(33), 1,
      sym_sql_select_clause,
    STATE(122), 1,
      sym_sql_with_clause,
    STATE(175), 1,
      sym_sql_select_statement,
  [1859] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(188), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [1874] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(192), 1,
      anon_sym_RBRACE,
    STATE(129), 1,
      sym_jinja_pair,
    STATE(163), 1,
      sym_jinja_lit_string,
  [1893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(194), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [1908] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [1919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1929] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(137), 1,
      sym_sql_limit_clause,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1953] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(204), 1,
      sym_sql_identifier,
    STATE(50), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [1967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [1987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2027] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(204), 1,
      sym_sql_identifier,
    STATE(56), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [2041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(125), 1,
      sym_sql_limit_clause,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(120), 1,
      sym_sql_limit_clause,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2119] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2129] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(129), 1,
      sym_jinja_pair,
    STATE(163), 1,
      sym_jinja_lit_string,
  [2145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2165] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(121), 1,
      sym_sql_limit_clause,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2179] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
    STATE(106), 1,
      aux_sym_jinja_dict_repeat1,
  [2192] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      aux_sym_sql_select_clause_token1,
    STATE(99), 1,
      aux_sym_sql_with_clause_repeat1,
  [2205] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
    ACTIONS(240), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_jinja_argument_list_repeat1,
  [2218] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(96), 1,
      aux_sym_jinja_argument_list_repeat1,
  [2231] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_jinja_dict_repeat1,
  [2244] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(251), 1,
      aux_sym_sql_select_clause_token1,
    STATE(99), 1,
      aux_sym_sql_with_clause_repeat1,
  [2257] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(253), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_jinja_list_repeat1,
  [2270] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_COMMA,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(116), 1,
      aux_sym_jinja_argument_list_repeat1,
  [2283] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    ACTIONS(261), 1,
      anon_sym_EQ,
    STATE(89), 1,
      sym_jinja_argument_list,
  [2296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [2305] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      aux_sym_jinja_dict_repeat1,
  [2318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_jinja_list_repeat1,
  [2331] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_jinja_dict_repeat1,
  [2344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_jinja_list_repeat1,
  [2357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      aux_sym_sql_select_clause_token1,
    STATE(95), 1,
      aux_sym_sql_with_clause_repeat1,
  [2370] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_jinja_list_repeat1,
  [2383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_sql_identifier,
    STATE(108), 1,
      sym_sql_cte,
    STATE(180), 1,
      sym_sql_cte_name,
  [2396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_sql_column_list_repeat1,
  [2409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_COMMA,
    ACTIONS(291), 1,
      anon_sym_RBRACE,
    STATE(112), 1,
      aux_sym_jinja_dict_repeat1,
  [2422] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_sql_identifier,
    STATE(123), 1,
      sym_sql_cte,
    STATE(180), 1,
      sym_sql_cte_name,
  [2435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_jinja_argument_list_repeat1,
  [2448] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_jinja_list_repeat1,
  [2461] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_jinja_argument_list_repeat1,
  [2474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      sym_sql_identifier,
    STATE(103), 1,
      sym_sql_order_by_expression,
  [2500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2516] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(32), 1,
      sym_sql_select_clause,
  [2526] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [2534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      sym_jinja_argument_list,
  [2544] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2552] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2560] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    STATE(146), 1,
      sym_jinja_argument_list,
  [2578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2594] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2602] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [2642] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2706] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2714] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_sql_identifier,
  [2753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SQUOTE,
  [2760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      ts_builtin_sym_end,
  [2767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      aux_sym_sql_order_by_clause_token2,
  [2774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_sql_integer,
  [2781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_SQUOTE,
  [2788] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      anon_sym_DQUOTE,
  [2795] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RPAREN,
  [2802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_RBRACK,
  [2809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      aux_sym_sql_cte_token1,
  [2816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_RBRACE,
  [2823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
  [2830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_DQUOTE,
  [2837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_COLON,
  [2844] = 2,
    ACTIONS(336), 1,
      aux_sym_jinja_lit_string_token2,
    ACTIONS(338), 1,
      sym_comment,
  [2851] = 2,
    ACTIONS(338), 1,
      sym_comment,
    ACTIONS(340), 1,
      aux_sym_sql_string_token1,
  [2858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_RBRACE_RBRACE,
  [2872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_LPAREN,
  [2879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
  [2886] = 2,
    ACTIONS(338), 1,
      sym_comment,
    ACTIONS(346), 1,
      aux_sym_jinja_lit_string_token2,
  [2893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_SQUOTE,
  [2900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
  [2907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_sql_identifier,
  [2914] = 2,
    ACTIONS(338), 1,
      sym_comment,
    ACTIONS(352), 1,
      aux_sym_jinja_lit_string_token1,
  [2921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
  [2928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      ts_builtin_sym_end,
  [2935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_sql_identifier,
  [2942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      ts_builtin_sym_end,
  [2949] = 2,
    ACTIONS(338), 1,
      sym_comment,
    ACTIONS(362), 1,
      aux_sym_jinja_lit_string_token1,
  [2956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      aux_sym_sql_cte_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 184,
  [SMALL_STATE(7)] = 222,
  [SMALL_STATE(8)] = 266,
  [SMALL_STATE(9)] = 304,
  [SMALL_STATE(10)] = 342,
  [SMALL_STATE(11)] = 382,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 472,
  [SMALL_STATE(14)] = 521,
  [SMALL_STATE(15)] = 573,
  [SMALL_STATE(16)] = 613,
  [SMALL_STATE(17)] = 653,
  [SMALL_STATE(18)] = 692,
  [SMALL_STATE(19)] = 731,
  [SMALL_STATE(20)] = 768,
  [SMALL_STATE(21)] = 805,
  [SMALL_STATE(22)] = 842,
  [SMALL_STATE(23)] = 879,
  [SMALL_STATE(24)] = 915,
  [SMALL_STATE(25)] = 951,
  [SMALL_STATE(26)] = 985,
  [SMALL_STATE(27)] = 1021,
  [SMALL_STATE(28)] = 1057,
  [SMALL_STATE(29)] = 1090,
  [SMALL_STATE(30)] = 1123,
  [SMALL_STATE(31)] = 1156,
  [SMALL_STATE(32)] = 1189,
  [SMALL_STATE(33)] = 1221,
  [SMALL_STATE(34)] = 1253,
  [SMALL_STATE(35)] = 1278,
  [SMALL_STATE(36)] = 1292,
  [SMALL_STATE(37)] = 1310,
  [SMALL_STATE(38)] = 1336,
  [SMALL_STATE(39)] = 1358,
  [SMALL_STATE(40)] = 1376,
  [SMALL_STATE(41)] = 1402,
  [SMALL_STATE(42)] = 1420,
  [SMALL_STATE(43)] = 1439,
  [SMALL_STATE(44)] = 1458,
  [SMALL_STATE(45)] = 1477,
  [SMALL_STATE(46)] = 1494,
  [SMALL_STATE(47)] = 1513,
  [SMALL_STATE(48)] = 1532,
  [SMALL_STATE(49)] = 1549,
  [SMALL_STATE(50)] = 1568,
  [SMALL_STATE(51)] = 1585,
  [SMALL_STATE(52)] = 1597,
  [SMALL_STATE(53)] = 1609,
  [SMALL_STATE(54)] = 1631,
  [SMALL_STATE(55)] = 1643,
  [SMALL_STATE(56)] = 1665,
  [SMALL_STATE(57)] = 1677,
  [SMALL_STATE(58)] = 1697,
  [SMALL_STATE(59)] = 1709,
  [SMALL_STATE(60)] = 1729,
  [SMALL_STATE(61)] = 1749,
  [SMALL_STATE(62)] = 1768,
  [SMALL_STATE(63)] = 1787,
  [SMALL_STATE(64)] = 1806,
  [SMALL_STATE(65)] = 1825,
  [SMALL_STATE(66)] = 1840,
  [SMALL_STATE(67)] = 1859,
  [SMALL_STATE(68)] = 1874,
  [SMALL_STATE(69)] = 1893,
  [SMALL_STATE(70)] = 1908,
  [SMALL_STATE(71)] = 1919,
  [SMALL_STATE(72)] = 1929,
  [SMALL_STATE(73)] = 1943,
  [SMALL_STATE(74)] = 1953,
  [SMALL_STATE(75)] = 1967,
  [SMALL_STATE(76)] = 1977,
  [SMALL_STATE(77)] = 1987,
  [SMALL_STATE(78)] = 1997,
  [SMALL_STATE(79)] = 2007,
  [SMALL_STATE(80)] = 2017,
  [SMALL_STATE(81)] = 2027,
  [SMALL_STATE(82)] = 2041,
  [SMALL_STATE(83)] = 2051,
  [SMALL_STATE(84)] = 2065,
  [SMALL_STATE(85)] = 2075,
  [SMALL_STATE(86)] = 2089,
  [SMALL_STATE(87)] = 2099,
  [SMALL_STATE(88)] = 2109,
  [SMALL_STATE(89)] = 2119,
  [SMALL_STATE(90)] = 2129,
  [SMALL_STATE(91)] = 2145,
  [SMALL_STATE(92)] = 2155,
  [SMALL_STATE(93)] = 2165,
  [SMALL_STATE(94)] = 2179,
  [SMALL_STATE(95)] = 2192,
  [SMALL_STATE(96)] = 2205,
  [SMALL_STATE(97)] = 2218,
  [SMALL_STATE(98)] = 2231,
  [SMALL_STATE(99)] = 2244,
  [SMALL_STATE(100)] = 2257,
  [SMALL_STATE(101)] = 2270,
  [SMALL_STATE(102)] = 2283,
  [SMALL_STATE(103)] = 2296,
  [SMALL_STATE(104)] = 2305,
  [SMALL_STATE(105)] = 2318,
  [SMALL_STATE(106)] = 2331,
  [SMALL_STATE(107)] = 2344,
  [SMALL_STATE(108)] = 2357,
  [SMALL_STATE(109)] = 2370,
  [SMALL_STATE(110)] = 2383,
  [SMALL_STATE(111)] = 2396,
  [SMALL_STATE(112)] = 2409,
  [SMALL_STATE(113)] = 2422,
  [SMALL_STATE(114)] = 2435,
  [SMALL_STATE(115)] = 2448,
  [SMALL_STATE(116)] = 2461,
  [SMALL_STATE(117)] = 2474,
  [SMALL_STATE(118)] = 2482,
  [SMALL_STATE(119)] = 2490,
  [SMALL_STATE(120)] = 2500,
  [SMALL_STATE(121)] = 2508,
  [SMALL_STATE(122)] = 2516,
  [SMALL_STATE(123)] = 2526,
  [SMALL_STATE(124)] = 2534,
  [SMALL_STATE(125)] = 2544,
  [SMALL_STATE(126)] = 2552,
  [SMALL_STATE(127)] = 2560,
  [SMALL_STATE(128)] = 2568,
  [SMALL_STATE(129)] = 2578,
  [SMALL_STATE(130)] = 2586,
  [SMALL_STATE(131)] = 2594,
  [SMALL_STATE(132)] = 2602,
  [SMALL_STATE(133)] = 2610,
  [SMALL_STATE(134)] = 2618,
  [SMALL_STATE(135)] = 2626,
  [SMALL_STATE(136)] = 2634,
  [SMALL_STATE(137)] = 2642,
  [SMALL_STATE(138)] = 2650,
  [SMALL_STATE(139)] = 2658,
  [SMALL_STATE(140)] = 2666,
  [SMALL_STATE(141)] = 2674,
  [SMALL_STATE(142)] = 2682,
  [SMALL_STATE(143)] = 2690,
  [SMALL_STATE(144)] = 2698,
  [SMALL_STATE(145)] = 2706,
  [SMALL_STATE(146)] = 2714,
  [SMALL_STATE(147)] = 2722,
  [SMALL_STATE(148)] = 2730,
  [SMALL_STATE(149)] = 2738,
  [SMALL_STATE(150)] = 2746,
  [SMALL_STATE(151)] = 2753,
  [SMALL_STATE(152)] = 2760,
  [SMALL_STATE(153)] = 2767,
  [SMALL_STATE(154)] = 2774,
  [SMALL_STATE(155)] = 2781,
  [SMALL_STATE(156)] = 2788,
  [SMALL_STATE(157)] = 2795,
  [SMALL_STATE(158)] = 2802,
  [SMALL_STATE(159)] = 2809,
  [SMALL_STATE(160)] = 2816,
  [SMALL_STATE(161)] = 2823,
  [SMALL_STATE(162)] = 2830,
  [SMALL_STATE(163)] = 2837,
  [SMALL_STATE(164)] = 2844,
  [SMALL_STATE(165)] = 2851,
  [SMALL_STATE(166)] = 2858,
  [SMALL_STATE(167)] = 2865,
  [SMALL_STATE(168)] = 2872,
  [SMALL_STATE(169)] = 2879,
  [SMALL_STATE(170)] = 2886,
  [SMALL_STATE(171)] = 2893,
  [SMALL_STATE(172)] = 2900,
  [SMALL_STATE(173)] = 2907,
  [SMALL_STATE(174)] = 2914,
  [SMALL_STATE(175)] = 2921,
  [SMALL_STATE(176)] = 2928,
  [SMALL_STATE(177)] = 2935,
  [SMALL_STATE(178)] = 2942,
  [SMALL_STATE(179)] = 2949,
  [SMALL_STATE(180)] = 2956,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_expr, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_expr, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_binary_expression, 3, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_binary_expression, 3, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_fn, 4),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_fn, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_alias, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_alias, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_where_clause, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(47),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2), SHIFT_REPEAT(81),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_clause, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2), SHIFT_REPEAT(150),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expr, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2), SHIFT_REPEAT(113),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(30),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 2),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(90),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(25),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 6),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [360] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
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
