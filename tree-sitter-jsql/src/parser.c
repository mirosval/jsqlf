#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 233
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 97
#define ALIAS_COUNT 0
#define TOKEN_COUNT 57
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  aux_sym_sql_group_by_clause_token1 = 28,
  aux_sym_sql_limit_clause_token1 = 29,
  aux_sym_sql_string_token1 = 30,
  anon_sym_CARET = 31,
  anon_sym_SLASH = 32,
  anon_sym_PERCENT = 33,
  anon_sym_LT_LT = 34,
  anon_sym_GT_GT = 35,
  anon_sym_AMP = 36,
  anon_sym_PLUS = 37,
  anon_sym_DASH = 38,
  anon_sym_PIPE = 39,
  anon_sym_POUND = 40,
  anon_sym_LT = 41,
  anon_sym_LT_EQ = 42,
  anon_sym_LT_GT = 43,
  anon_sym_BANG_EQ = 44,
  anon_sym_GT = 45,
  anon_sym_GT_EQ = 46,
  anon_sym_TILDE = 47,
  anon_sym_BANG_TILDE = 48,
  anon_sym_TILDE_STAR = 49,
  anon_sym_BANG_TILDE_STAR = 50,
  aux_sym_sql_boolean_expr_token1 = 51,
  aux_sym_sql_boolean_expr_token2 = 52,
  aux_sym_sql_boolean_expr_token3 = 53,
  anon_sym_DOT = 54,
  sym_sql_integer = 55,
  sym_comment = 56,
  sym_source_file = 57,
  sym_jinja_block = 58,
  sym_jinja_expr = 59,
  sym_jinja_fn_call = 60,
  sym_jinja_argument_list = 61,
  sym_jinja_lit_string = 62,
  sym_jinja_bool = 63,
  sym_jinja_list = 64,
  sym_jinja_dict = 65,
  sym_jinja_pair = 66,
  sym_jinja_kwarg = 67,
  sym_sql_select_statement = 68,
  sym_sql_with_clause = 69,
  sym_sql_cte = 70,
  sym_sql_cte_name = 71,
  sym_sql_select_clause = 72,
  sym_sql_column_list = 73,
  sym_sql_from_clause = 74,
  sym_sql_where_clause = 75,
  sym_sql_order_by_clause = 76,
  sym_sql_order_by_expression = 77,
  sym_sql_group_by_clause = 78,
  sym_sql_group_by_expression = 79,
  sym_sql_limit_clause = 80,
  sym_sql_expr = 81,
  sym_sql_string = 82,
  sym_sql_binary_expr = 83,
  sym_sql_boolean_expr = 84,
  sym_sql_alias = 85,
  sym_sql_fn = 86,
  sym_sql_arg_list = 87,
  sym_sql_table_name = 88,
  sym_sql_dotted_identifier = 89,
  aux_sym_jinja_argument_list_repeat1 = 90,
  aux_sym_jinja_list_repeat1 = 91,
  aux_sym_jinja_dict_repeat1 = 92,
  aux_sym_sql_with_clause_repeat1 = 93,
  aux_sym_sql_column_list_repeat1 = 94,
  aux_sym_sql_from_clause_repeat1 = 95,
  aux_sym_sql_order_by_expression_repeat1 = 96,
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
  [sym_sql_group_by_clause] = "sql_group_by_clause",
  [sym_sql_group_by_expression] = "sql_group_by_expression",
  [sym_sql_limit_clause] = "sql_limit_clause",
  [sym_sql_expr] = "sql_expr",
  [sym_sql_string] = "sql_string",
  [sym_sql_binary_expr] = "sql_binary_expr",
  [sym_sql_boolean_expr] = "sql_boolean_expr",
  [sym_sql_alias] = "sql_alias",
  [sym_sql_fn] = "sql_fn",
  [sym_sql_arg_list] = "sql_arg_list",
  [sym_sql_table_name] = "sql_table_name",
  [sym_sql_dotted_identifier] = "sql_dotted_identifier",
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
  [sym_sql_group_by_clause] = sym_sql_group_by_clause,
  [sym_sql_group_by_expression] = sym_sql_group_by_expression,
  [sym_sql_limit_clause] = sym_sql_limit_clause,
  [sym_sql_expr] = sym_sql_expr,
  [sym_sql_string] = sym_sql_string,
  [sym_sql_binary_expr] = sym_sql_binary_expr,
  [sym_sql_boolean_expr] = sym_sql_boolean_expr,
  [sym_sql_alias] = sym_sql_alias,
  [sym_sql_fn] = sym_sql_fn,
  [sym_sql_arg_list] = sym_sql_arg_list,
  [sym_sql_table_name] = sym_sql_table_name,
  [sym_sql_dotted_identifier] = sym_sql_dotted_identifier,
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
  [sym_sql_dotted_identifier] = {
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
      if (eof) ADVANCE(59);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '&') ADVANCE(184);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead == 'F') ADVANCE(100);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') SKIP(52)
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == '^') ADVANCE(179);
      if (lookahead == 'f') ADVANCE(129);
      if (lookahead == '{') ADVANCE(96);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '}') ADVANCE(97);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(122);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(137);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(130);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(117);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(123);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(127);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(110);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('C' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(138);
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
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '&') ADVANCE(184);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(179);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(42);
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
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == 'F') ADVANCE(101);
      if (lookahead == 'T') ADVANCE(105);
      if (lookahead == '[') ADVANCE(93);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == '{') ADVANCE(95);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(65);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(150);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(176);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(178);
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(208);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(192);
      if (lookahead == '~') ADVANCE(196);
      END_STATE();
    case 20:
      if (lookahead == '{') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == '}') ADVANCE(61);
      END_STATE();
    case 22:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 23:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
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
          lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(139);
      END_STATE();
    case 30:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(27);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 32:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      END_STATE();
    case 35:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 36:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(23);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      END_STATE();
    case 37:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 40:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 41:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 43:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 44:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      END_STATE();
    case 47:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      END_STATE();
    case 48:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(29);
      END_STATE();
    case 49:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(167);
      END_STATE();
    case 51:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 52:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(51)
      END_STATE();
    case 53:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') SKIP(57)
      END_STATE();
    case 54:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') SKIP(57)
      if (lookahead == '\r') SKIP(53)
      END_STATE();
    case 55:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') SKIP(58)
      END_STATE();
    case 56:
      if (eof) ADVANCE(59);
      if (lookahead == '\n') SKIP(58)
      if (lookahead == '\r') SKIP(55)
      END_STATE();
    case 57:
      if (eof) ADVANCE(59);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '#') ADVANCE(188);
      if (lookahead == '%') ADVANCE(181);
      if (lookahead == '&') ADVANCE(184);
      if (lookahead == '(') ADVANCE(62);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == '*') ADVANCE(163);
      if (lookahead == '+') ADVANCE(185);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(204);
      if (lookahead == '/') ADVANCE(180);
      if (lookahead == ':') ADVANCE(98);
      if (lookahead == '<') ADVANCE(189);
      if (lookahead == '=') ADVANCE(99);
      if (lookahead == '>') ADVANCE(193);
      if (lookahead == '\\') SKIP(54)
      if (lookahead == ']') ADVANCE(94);
      if (lookahead == '^') ADVANCE(179);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '|') ADVANCE(187);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '~') ADVANCE(195);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(50);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(41);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(44);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(43);
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
          lookahead == 65279) SKIP(57)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (lookahead == ')') ADVANCE(64);
      if (lookahead == ',') ADVANCE(63);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '\\') SKIP(56)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(58)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\r') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(77);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead == '\'') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(69);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '/') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(16);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(76);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '*') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(71);
      if (lookahead == '*') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\r') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(90);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(88);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '"') ADVANCE(208);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(16);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(89);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '*') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(88);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '/') ADVANCE(85);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(88);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(84);
      if (lookahead == '*') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(88);
      if (lookahead == '\\') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(60);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(113);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(109);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_sql_with_clause_token1);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_sql_select_clause_token1);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_sql_where_clause_token1);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token1);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token2);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_sql_group_by_clause_token1);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\r') ADVANCE(171);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(176);
      if (lookahead == '\'') ADVANCE(207);
      if (lookahead != 0) ADVANCE(172);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '-') ADVANCE(175);
      if (lookahead == '/') ADVANCE(173);
      if (lookahead == '\\') ADVANCE(170);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(174);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(12);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(13);
      if (lookahead == '*') ADVANCE(177);
      if (lookahead != 0) ADVANCE(178);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(208);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(182);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(183);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      if (lookahead == '*') ADVANCE(198);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE_STAR);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token2);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_sql_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(208);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 57},
  [6] = {.lex_state = 57},
  [7] = {.lex_state = 57},
  [8] = {.lex_state = 57},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 57},
  [16] = {.lex_state = 57},
  [17] = {.lex_state = 57},
  [18] = {.lex_state = 57},
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
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
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
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 57},
  [53] = {.lex_state = 57},
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
  [64] = {.lex_state = 57},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 57},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 57},
  [77] = {.lex_state = 58},
  [78] = {.lex_state = 57},
  [79] = {.lex_state = 57},
  [80] = {.lex_state = 57},
  [81] = {.lex_state = 57},
  [82] = {.lex_state = 57},
  [83] = {.lex_state = 57},
  [84] = {.lex_state = 57},
  [85] = {.lex_state = 57},
  [86] = {.lex_state = 57},
  [87] = {.lex_state = 57},
  [88] = {.lex_state = 57},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 57},
  [91] = {.lex_state = 57},
  [92] = {.lex_state = 57},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 57},
  [95] = {.lex_state = 57},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 57},
  [98] = {.lex_state = 57},
  [99] = {.lex_state = 57},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 57},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 57},
  [104] = {.lex_state = 57},
  [105] = {.lex_state = 57},
  [106] = {.lex_state = 57},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 57},
  [110] = {.lex_state = 57},
  [111] = {.lex_state = 57},
  [112] = {.lex_state = 18},
  [113] = {.lex_state = 57},
  [114] = {.lex_state = 18},
  [115] = {.lex_state = 57},
  [116] = {.lex_state = 57},
  [117] = {.lex_state = 57},
  [118] = {.lex_state = 57},
  [119] = {.lex_state = 57},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 57},
  [122] = {.lex_state = 57},
  [123] = {.lex_state = 57},
  [124] = {.lex_state = 57},
  [125] = {.lex_state = 57},
  [126] = {.lex_state = 57},
  [127] = {.lex_state = 57},
  [128] = {.lex_state = 57},
  [129] = {.lex_state = 57},
  [130] = {.lex_state = 57},
  [131] = {.lex_state = 57},
  [132] = {.lex_state = 57},
  [133] = {.lex_state = 57},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 57},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 18},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 18},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 57},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 57},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 57},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 57},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 57},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 18},
  [177] = {.lex_state = 18},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 57},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 174},
  [196] = {.lex_state = 57},
  [197] = {.lex_state = 18},
  [198] = {.lex_state = 57},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 57},
  [201] = {.lex_state = 18},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 57},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 57},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 57},
  [212] = {.lex_state = 86},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 18},
  [215] = {.lex_state = 18},
  [216] = {.lex_state = 73},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 18},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 18},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 18},
  [227] = {.lex_state = 18},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 73},
  [230] = {.lex_state = 86},
  [231] = {.lex_state = 174},
  [232] = {.lex_state = 0},
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
    [sym_source_file] = STATE(232),
    [sym_jinja_block] = STATE(106),
    [sym_sql_select_statement] = STATE(225),
    [sym_sql_with_clause] = STATE(185),
    [sym_sql_select_clause] = STATE(52),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(5),
    [aux_sym_sql_with_clause_token1] = ACTIONS(7),
    [aux_sym_sql_select_clause_token1] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_DOT,
    ACTIONS(15), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(11), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [47] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_DOT,
    ACTIONS(21), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(19), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [91] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(47), 1,
      aux_sym_sql_boolean_expr_token3,
    STATE(76), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(43), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(33), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
    ACTIONS(29), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [155] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(47), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(43), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(33), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(29), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [214] = 3,
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
    ACTIONS(11), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [255] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(53), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(43), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(33), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(29), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(51), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [312] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(43), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(33), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(29), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(51), 10,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
      aux_sym_sql_boolean_expr_token2,
  [367] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(33), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(57), 6,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(55), 20,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [414] = 3,
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
    ACTIONS(55), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [455] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_CARET,
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
  [498] = 3,
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
    ACTIONS(59), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [539] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(33), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(57), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(55), 17,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [590] = 3,
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
    ACTIONS(63), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(67), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [672] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(71), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(75), 26,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
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
  [754] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_SLASH,
    ACTIONS(41), 1,
      anon_sym_DASH,
    ACTIONS(45), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(47), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(39), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(43), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(33), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
    ACTIONS(29), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [810] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_DOT,
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
  [851] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(107), 1,
      aux_sym_sql_boolean_expr_token3,
    STATE(140), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(99), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(93), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(89), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [909] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(21), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(19), 21,
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
  [947] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    ACTIONS(57), 5,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(93), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(55), 15,
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
  [988] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(99), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(57), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(93), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(55), 12,
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
  [1033] = 3,
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
  [1068] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(107), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(49), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(99), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(93), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(89), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(75), 21,
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
  [1156] = 3,
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
  [1191] = 3,
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
  [1226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(71), 21,
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
  [1261] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(57), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(55), 20,
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
  [1298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(67), 21,
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
  [1333] = 3,
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
  [1368] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(105), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(99), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(51), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(93), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(89), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1417] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_CARET,
    ACTIONS(97), 1,
      anon_sym_SLASH,
    ACTIONS(101), 1,
      anon_sym_DASH,
    ACTIONS(99), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(51), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(93), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(89), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1464] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_COMMA,
    ACTIONS(113), 1,
      anon_sym_RPAREN,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_jinja_identifier,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(134), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1504] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_jinja_identifier,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(143), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1544] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_jinja_identifier,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(167), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1581] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_jinja_identifier,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(167), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1618] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_jinja_identifier,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(167), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1655] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    ACTIONS(141), 1,
      sym_jinja_identifier,
    STATE(136), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1694] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_jinja_identifier,
    ACTIONS(143), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1733] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_jinja_identifier,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(167), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1770] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_jinja_identifier,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1806] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(125), 1,
      sym_jinja_identifier,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(167), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1840] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_jinja_identifier,
    ACTIONS(151), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1876] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_jinja_identifier,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1912] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_jinja_identifier,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1948] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_jinja_identifier,
    STATE(173), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1981] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_jinja_identifier,
    STATE(200), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2014] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      sym_jinja_identifier,
    STATE(171), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2047] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_SQUOTE,
    ACTIONS(159), 1,
      anon_sym_DQUOTE,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(165), 1,
      anon_sym_LBRACE,
    ACTIONS(167), 1,
      sym_jinja_identifier,
    STATE(174), 1,
      sym_jinja_expr,
    ACTIONS(161), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(164), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2080] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(173), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(177), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(64), 1,
      sym_sql_from_clause,
    STATE(82), 1,
      sym_sql_where_clause,
    STATE(98), 1,
      sym_sql_group_by_clause,
    STATE(122), 1,
      sym_sql_order_by_clause,
    STATE(161), 1,
      sym_sql_limit_clause,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2118] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(173), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(177), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(70), 1,
      sym_sql_from_clause,
    STATE(81), 1,
      sym_sql_where_clause,
    STATE(91), 1,
      sym_sql_group_by_clause,
    STATE(113), 1,
      sym_sql_order_by_clause,
    STATE(178), 1,
      sym_sql_limit_clause,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2156] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(187), 1,
      anon_sym_STAR,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(4), 1,
      sym_sql_expr,
    STATE(87), 1,
      sym_sql_column_list,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2186] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(20), 1,
      sym_sql_expr,
    STATE(222), 1,
      sym_sql_arg_list,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2213] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(20), 1,
      sym_sql_expr,
    STATE(217), 1,
      sym_sql_arg_list,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2240] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(30), 1,
      sym_sql_expr,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(5), 1,
      sym_sql_expr,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2288] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(24), 1,
      sym_sql_expr,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2312] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(18), 1,
      sym_sql_expr,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2336] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(25), 1,
      sym_sql_expr,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(8), 1,
      sym_sql_expr,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2384] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(23), 1,
      sym_sql_expr,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2408] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(177), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(81), 1,
      sym_sql_where_clause,
    STATE(91), 1,
      sym_sql_group_by_clause,
    STATE(113), 1,
      sym_sql_order_by_clause,
    STATE(178), 1,
      sym_sql_limit_clause,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2440] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(32), 1,
      sym_sql_expr,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2464] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(22), 1,
      sym_sql_expr,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2488] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(9), 1,
      sym_sql_expr,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2512] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(10), 1,
      sym_sql_expr,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2536] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(34), 1,
      sym_sql_expr,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2560] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(177), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(84), 1,
      sym_sql_where_clause,
    STATE(95), 1,
      sym_sql_group_by_clause,
    STATE(130), 1,
      sym_sql_order_by_clause,
    STATE(175), 1,
      sym_sql_limit_clause,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2592] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(14), 1,
      sym_sql_expr,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(11), 1,
      sym_sql_expr,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2640] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(7), 1,
      sym_sql_expr,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2664] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_SQUOTE,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(189), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(13), 1,
      sym_sql_expr,
    STATE(6), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2688] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_SQUOTE,
    ACTIONS(193), 1,
      sym_sql_identifier,
    ACTIONS(195), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(33), 1,
      sym_sql_expr,
    STATE(27), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(199), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(205), 1,
      sym_sql_identifier,
    ACTIONS(201), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2784] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(212), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2802] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(177), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(95), 1,
      sym_sql_group_by_clause,
    STATE(130), 1,
      sym_sql_order_by_clause,
    STATE(175), 1,
      sym_sql_limit_clause,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2828] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(177), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(91), 1,
      sym_sql_group_by_clause,
    STATE(113), 1,
      sym_sql_order_by_clause,
    STATE(178), 1,
      sym_sql_limit_clause,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2854] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(216), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2872] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(177), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(99), 1,
      sym_sql_group_by_clause,
    STATE(129), 1,
      sym_sql_order_by_clause,
    STATE(184), 1,
      sym_sql_limit_clause,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [2898] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(85), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(220), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2916] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2981] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(130), 1,
      sym_sql_order_by_clause,
    STATE(175), 1,
      sym_sql_limit_clause,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3001] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(231), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3017] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      sym_jinja_pair,
    STATE(218), 1,
      sym_jinja_lit_string,
  [3039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(240), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3055] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(129), 1,
      sym_sql_order_by_clause,
    STATE(184), 1,
      sym_sql_limit_clause,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3075] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(135), 1,
      sym_jinja_pair,
    STATE(218), 1,
      sym_jinja_lit_string,
  [3097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(248), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(113), 1,
      sym_sql_order_by_clause,
    STATE(178), 1,
      sym_sql_limit_clause,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(132), 1,
      sym_sql_order_by_clause,
    STATE(163), 1,
      sym_sql_limit_clause,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3153] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_jinja_pair,
    STATE(218), 1,
      sym_jinja_lit_string,
  [3172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [3183] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_jinja_pair,
    STATE(218), 1,
      sym_jinja_lit_string,
  [3202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3213] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(52), 1,
      sym_sql_select_clause,
    STATE(185), 1,
      sym_sql_with_clause,
    STATE(228), 1,
      sym_sql_select_statement,
  [3232] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(258), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [3247] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(52), 1,
      sym_sql_select_clause,
    STATE(185), 1,
      sym_sql_with_clause,
    STATE(193), 1,
      sym_sql_select_statement,
  [3266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_jinja_pair,
    STATE(218), 1,
      sym_jinja_lit_string,
  [3285] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_jinja_pair,
    STATE(218), 1,
      sym_jinja_lit_string,
  [3304] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    STATE(105), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(264), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [3319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3339] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(270), 1,
      sym_sql_identifier,
    STATE(80), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [3353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(175), 1,
      sym_sql_limit_clause,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(270), 1,
      sym_sql_identifier,
    STATE(86), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [3381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3391] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3421] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3431] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym_jinja_pair,
    STATE(218), 1,
      sym_jinja_lit_string,
  [3447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(178), 1,
      sym_sql_limit_clause,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(163), 1,
      sym_sql_limit_clause,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(184), 1,
      sym_sql_limit_clause,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3559] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(162), 1,
      sym_sql_limit_clause,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
    STATE(138), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_COMMA,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    STATE(144), 1,
      aux_sym_jinja_dict_repeat1,
  [3619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(145), 1,
      aux_sym_jinja_list_repeat1,
  [3632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(137), 1,
      aux_sym_sql_column_list_repeat1,
  [3645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    ACTIONS(317), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3658] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    ACTIONS(319), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3671] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_sql_column_list_repeat1,
  [3684] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      aux_sym_sql_select_clause_token1,
    STATE(154), 1,
      aux_sym_sql_with_clause_repeat1,
  [3697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
    STATE(142), 1,
      aux_sym_jinja_dict_repeat1,
  [3710] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(139), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3723] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(336), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_jinja_dict_repeat1,
  [3736] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_jinja_list_repeat1,
  [3749] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_jinja_dict_repeat1,
  [3762] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_jinja_list_repeat1,
  [3775] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_sql_identifier,
    STATE(141), 1,
      sym_sql_cte,
    STATE(196), 1,
      sym_sql_cte_name,
  [3788] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    ACTIONS(351), 1,
      anon_sym_EQ,
    STATE(110), 1,
      sym_jinja_argument_list,
  [3801] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_sql_identifier,
    STATE(160), 1,
      sym_sql_cte,
    STATE(196), 1,
      sym_sql_cte_name,
  [3814] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(146), 1,
      aux_sym_jinja_dict_repeat1,
  [3827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [3836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_jinja_argument_list_repeat1,
  [3849] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 1,
      anon_sym_COMMA,
    ACTIONS(364), 1,
      aux_sym_sql_select_clause_token1,
    STATE(157), 1,
      aux_sym_sql_with_clause_repeat1,
  [3862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(366), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_jinja_list_repeat1,
  [3875] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(155), 1,
      aux_sym_jinja_list_repeat1,
  [3888] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_COMMA,
    ACTIONS(375), 1,
      aux_sym_sql_select_clause_token1,
    STATE(157), 1,
      aux_sym_sql_with_clause_repeat1,
  [3901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3909] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [3925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3933] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [3949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3957] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_LPAREN,
    STATE(170), 1,
      sym_jinja_argument_list,
  [3967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [3975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [3983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3999] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      sym_sql_identifier,
    STATE(118), 1,
      sym_sql_group_by_expression,
  [4057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      sym_sql_identifier,
    STATE(152), 1,
      sym_sql_order_by_expression,
  [4067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4115] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [4123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(53), 1,
      sym_sql_select_clause,
  [4133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      sym_jinja_argument_list,
  [4167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4175] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4191] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      ts_builtin_sym_end,
  [4198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_SQUOTE,
  [4205] = 2,
    ACTIONS(397), 1,
      aux_sym_sql_string_token1,
    ACTIONS(399), 1,
      sym_comment,
  [4212] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      aux_sym_sql_cte_token1,
  [4219] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      sym_sql_identifier,
  [4226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      aux_sym_sql_cte_token1,
  [4233] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_LPAREN,
  [4240] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RBRACE_RBRACE,
  [4247] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_sql_identifier,
  [4254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_SQUOTE,
  [4261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RPAREN,
  [4268] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      aux_sym_sql_order_by_clause_token2,
  [4275] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_DQUOTE,
  [4282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_SQUOTE,
  [4289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_DQUOTE,
  [4296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
  [4303] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      aux_sym_sql_order_by_clause_token2,
  [4310] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [4317] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      sym_sql_integer,
  [4324] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(423), 1,
      aux_sym_jinja_lit_string_token2,
  [4331] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 1,
      anon_sym_SQUOTE,
  [4338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      sym_sql_identifier,
  [4345] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_sql_identifier,
  [4352] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(431), 1,
      aux_sym_jinja_lit_string_token1,
  [4359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      anon_sym_RPAREN,
  [4366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_COLON,
  [4373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      sym_sql_identifier,
  [4380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
  [4387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
  [4394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
  [4401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_sql_identifier,
  [4408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
  [4415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      ts_builtin_sym_end,
  [4422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      sym_sql_identifier,
  [4429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      sym_sql_identifier,
  [4436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
  [4443] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(451), 1,
      aux_sym_jinja_lit_string_token1,
  [4450] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(453), 1,
      aux_sym_jinja_lit_string_token2,
  [4457] = 2,
    ACTIONS(399), 1,
      sym_comment,
    ACTIONS(455), 1,
      aux_sym_sql_string_token1,
  [4464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 91,
  [SMALL_STATE(5)] = 155,
  [SMALL_STATE(6)] = 214,
  [SMALL_STATE(7)] = 255,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 367,
  [SMALL_STATE(10)] = 414,
  [SMALL_STATE(11)] = 455,
  [SMALL_STATE(12)] = 498,
  [SMALL_STATE(13)] = 539,
  [SMALL_STATE(14)] = 590,
  [SMALL_STATE(15)] = 631,
  [SMALL_STATE(16)] = 672,
  [SMALL_STATE(17)] = 713,
  [SMALL_STATE(18)] = 754,
  [SMALL_STATE(19)] = 810,
  [SMALL_STATE(20)] = 851,
  [SMALL_STATE(21)] = 909,
  [SMALL_STATE(22)] = 947,
  [SMALL_STATE(23)] = 988,
  [SMALL_STATE(24)] = 1033,
  [SMALL_STATE(25)] = 1068,
  [SMALL_STATE(26)] = 1121,
  [SMALL_STATE(27)] = 1156,
  [SMALL_STATE(28)] = 1191,
  [SMALL_STATE(29)] = 1226,
  [SMALL_STATE(30)] = 1261,
  [SMALL_STATE(31)] = 1298,
  [SMALL_STATE(32)] = 1333,
  [SMALL_STATE(33)] = 1368,
  [SMALL_STATE(34)] = 1417,
  [SMALL_STATE(35)] = 1464,
  [SMALL_STATE(36)] = 1504,
  [SMALL_STATE(37)] = 1544,
  [SMALL_STATE(38)] = 1581,
  [SMALL_STATE(39)] = 1618,
  [SMALL_STATE(40)] = 1655,
  [SMALL_STATE(41)] = 1694,
  [SMALL_STATE(42)] = 1733,
  [SMALL_STATE(43)] = 1770,
  [SMALL_STATE(44)] = 1806,
  [SMALL_STATE(45)] = 1840,
  [SMALL_STATE(46)] = 1876,
  [SMALL_STATE(47)] = 1912,
  [SMALL_STATE(48)] = 1948,
  [SMALL_STATE(49)] = 1981,
  [SMALL_STATE(50)] = 2014,
  [SMALL_STATE(51)] = 2047,
  [SMALL_STATE(52)] = 2080,
  [SMALL_STATE(53)] = 2118,
  [SMALL_STATE(54)] = 2156,
  [SMALL_STATE(55)] = 2186,
  [SMALL_STATE(56)] = 2213,
  [SMALL_STATE(57)] = 2240,
  [SMALL_STATE(58)] = 2264,
  [SMALL_STATE(59)] = 2288,
  [SMALL_STATE(60)] = 2312,
  [SMALL_STATE(61)] = 2336,
  [SMALL_STATE(62)] = 2360,
  [SMALL_STATE(63)] = 2384,
  [SMALL_STATE(64)] = 2408,
  [SMALL_STATE(65)] = 2440,
  [SMALL_STATE(66)] = 2464,
  [SMALL_STATE(67)] = 2488,
  [SMALL_STATE(68)] = 2512,
  [SMALL_STATE(69)] = 2536,
  [SMALL_STATE(70)] = 2560,
  [SMALL_STATE(71)] = 2592,
  [SMALL_STATE(72)] = 2616,
  [SMALL_STATE(73)] = 2640,
  [SMALL_STATE(74)] = 2664,
  [SMALL_STATE(75)] = 2688,
  [SMALL_STATE(76)] = 2712,
  [SMALL_STATE(77)] = 2731,
  [SMALL_STATE(78)] = 2750,
  [SMALL_STATE(79)] = 2765,
  [SMALL_STATE(80)] = 2784,
  [SMALL_STATE(81)] = 2802,
  [SMALL_STATE(82)] = 2828,
  [SMALL_STATE(83)] = 2854,
  [SMALL_STATE(84)] = 2872,
  [SMALL_STATE(85)] = 2898,
  [SMALL_STATE(86)] = 2916,
  [SMALL_STATE(87)] = 2929,
  [SMALL_STATE(88)] = 2942,
  [SMALL_STATE(89)] = 2955,
  [SMALL_STATE(90)] = 2968,
  [SMALL_STATE(91)] = 2981,
  [SMALL_STATE(92)] = 3001,
  [SMALL_STATE(93)] = 3017,
  [SMALL_STATE(94)] = 3039,
  [SMALL_STATE(95)] = 3055,
  [SMALL_STATE(96)] = 3075,
  [SMALL_STATE(97)] = 3097,
  [SMALL_STATE(98)] = 3113,
  [SMALL_STATE(99)] = 3133,
  [SMALL_STATE(100)] = 3153,
  [SMALL_STATE(101)] = 3172,
  [SMALL_STATE(102)] = 3183,
  [SMALL_STATE(103)] = 3202,
  [SMALL_STATE(104)] = 3213,
  [SMALL_STATE(105)] = 3232,
  [SMALL_STATE(106)] = 3247,
  [SMALL_STATE(107)] = 3266,
  [SMALL_STATE(108)] = 3285,
  [SMALL_STATE(109)] = 3304,
  [SMALL_STATE(110)] = 3319,
  [SMALL_STATE(111)] = 3329,
  [SMALL_STATE(112)] = 3339,
  [SMALL_STATE(113)] = 3353,
  [SMALL_STATE(114)] = 3367,
  [SMALL_STATE(115)] = 3381,
  [SMALL_STATE(116)] = 3391,
  [SMALL_STATE(117)] = 3401,
  [SMALL_STATE(118)] = 3411,
  [SMALL_STATE(119)] = 3421,
  [SMALL_STATE(120)] = 3431,
  [SMALL_STATE(121)] = 3447,
  [SMALL_STATE(122)] = 3457,
  [SMALL_STATE(123)] = 3471,
  [SMALL_STATE(124)] = 3481,
  [SMALL_STATE(125)] = 3491,
  [SMALL_STATE(126)] = 3501,
  [SMALL_STATE(127)] = 3511,
  [SMALL_STATE(128)] = 3521,
  [SMALL_STATE(129)] = 3531,
  [SMALL_STATE(130)] = 3545,
  [SMALL_STATE(131)] = 3559,
  [SMALL_STATE(132)] = 3569,
  [SMALL_STATE(133)] = 3583,
  [SMALL_STATE(134)] = 3593,
  [SMALL_STATE(135)] = 3606,
  [SMALL_STATE(136)] = 3619,
  [SMALL_STATE(137)] = 3632,
  [SMALL_STATE(138)] = 3645,
  [SMALL_STATE(139)] = 3658,
  [SMALL_STATE(140)] = 3671,
  [SMALL_STATE(141)] = 3684,
  [SMALL_STATE(142)] = 3697,
  [SMALL_STATE(143)] = 3710,
  [SMALL_STATE(144)] = 3723,
  [SMALL_STATE(145)] = 3736,
  [SMALL_STATE(146)] = 3749,
  [SMALL_STATE(147)] = 3762,
  [SMALL_STATE(148)] = 3775,
  [SMALL_STATE(149)] = 3788,
  [SMALL_STATE(150)] = 3801,
  [SMALL_STATE(151)] = 3814,
  [SMALL_STATE(152)] = 3827,
  [SMALL_STATE(153)] = 3836,
  [SMALL_STATE(154)] = 3849,
  [SMALL_STATE(155)] = 3862,
  [SMALL_STATE(156)] = 3875,
  [SMALL_STATE(157)] = 3888,
  [SMALL_STATE(158)] = 3901,
  [SMALL_STATE(159)] = 3909,
  [SMALL_STATE(160)] = 3917,
  [SMALL_STATE(161)] = 3925,
  [SMALL_STATE(162)] = 3933,
  [SMALL_STATE(163)] = 3941,
  [SMALL_STATE(164)] = 3949,
  [SMALL_STATE(165)] = 3957,
  [SMALL_STATE(166)] = 3967,
  [SMALL_STATE(167)] = 3975,
  [SMALL_STATE(168)] = 3983,
  [SMALL_STATE(169)] = 3991,
  [SMALL_STATE(170)] = 3999,
  [SMALL_STATE(171)] = 4007,
  [SMALL_STATE(172)] = 4015,
  [SMALL_STATE(173)] = 4023,
  [SMALL_STATE(174)] = 4031,
  [SMALL_STATE(175)] = 4039,
  [SMALL_STATE(176)] = 4047,
  [SMALL_STATE(177)] = 4057,
  [SMALL_STATE(178)] = 4067,
  [SMALL_STATE(179)] = 4075,
  [SMALL_STATE(180)] = 4083,
  [SMALL_STATE(181)] = 4091,
  [SMALL_STATE(182)] = 4099,
  [SMALL_STATE(183)] = 4107,
  [SMALL_STATE(184)] = 4115,
  [SMALL_STATE(185)] = 4123,
  [SMALL_STATE(186)] = 4133,
  [SMALL_STATE(187)] = 4141,
  [SMALL_STATE(188)] = 4149,
  [SMALL_STATE(189)] = 4157,
  [SMALL_STATE(190)] = 4167,
  [SMALL_STATE(191)] = 4175,
  [SMALL_STATE(192)] = 4183,
  [SMALL_STATE(193)] = 4191,
  [SMALL_STATE(194)] = 4198,
  [SMALL_STATE(195)] = 4205,
  [SMALL_STATE(196)] = 4212,
  [SMALL_STATE(197)] = 4219,
  [SMALL_STATE(198)] = 4226,
  [SMALL_STATE(199)] = 4233,
  [SMALL_STATE(200)] = 4240,
  [SMALL_STATE(201)] = 4247,
  [SMALL_STATE(202)] = 4254,
  [SMALL_STATE(203)] = 4261,
  [SMALL_STATE(204)] = 4268,
  [SMALL_STATE(205)] = 4275,
  [SMALL_STATE(206)] = 4282,
  [SMALL_STATE(207)] = 4289,
  [SMALL_STATE(208)] = 4296,
  [SMALL_STATE(209)] = 4303,
  [SMALL_STATE(210)] = 4310,
  [SMALL_STATE(211)] = 4317,
  [SMALL_STATE(212)] = 4324,
  [SMALL_STATE(213)] = 4331,
  [SMALL_STATE(214)] = 4338,
  [SMALL_STATE(215)] = 4345,
  [SMALL_STATE(216)] = 4352,
  [SMALL_STATE(217)] = 4359,
  [SMALL_STATE(218)] = 4366,
  [SMALL_STATE(219)] = 4373,
  [SMALL_STATE(220)] = 4380,
  [SMALL_STATE(221)] = 4387,
  [SMALL_STATE(222)] = 4394,
  [SMALL_STATE(223)] = 4401,
  [SMALL_STATE(224)] = 4408,
  [SMALL_STATE(225)] = 4415,
  [SMALL_STATE(226)] = 4422,
  [SMALL_STATE(227)] = 4429,
  [SMALL_STATE(228)] = 4436,
  [SMALL_STATE(229)] = 4443,
  [SMALL_STATE(230)] = 4450,
  [SMALL_STATE(231)] = 4457,
  [SMALL_STATE(232)] = 4464,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_expr, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_expr, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_alias, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_alias, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_fn, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_fn, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_where_clause, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(58),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2), SHIFT_REPEAT(114),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_clause, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2), SHIFT_REPEAT(223),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 5),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expr, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_clause, 3),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(61),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 2),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 2),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(120),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(50),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 3),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(44),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2), SHIFT_REPEAT(150),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 7),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [457] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
