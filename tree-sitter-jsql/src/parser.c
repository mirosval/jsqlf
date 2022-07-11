#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 253
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 0
#define TOKEN_COUNT 62
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
  aux_sym_sql_union_statement_token1 = 19,
  aux_sym_sql_union_statement_token2 = 20,
  aux_sym_sql_intersect_statement_token1 = 21,
  aux_sym_sql_except_statement_token1 = 22,
  aux_sym_sql_with_clause_token1 = 23,
  aux_sym_sql_cte_token1 = 24,
  aux_sym_sql_cte_recursive_name_token1 = 25,
  aux_sym_sql_select_clause_token1 = 26,
  sym_sql_identifier = 27,
  anon_sym_STAR = 28,
  aux_sym_sql_from_clause_token1 = 29,
  aux_sym_sql_where_clause_token1 = 30,
  aux_sym_sql_order_by_clause_token1 = 31,
  aux_sym_sql_order_by_clause_token2 = 32,
  aux_sym_sql_group_by_clause_token1 = 33,
  aux_sym_sql_limit_clause_token1 = 34,
  aux_sym_sql_string_token1 = 35,
  anon_sym_CARET = 36,
  anon_sym_SLASH = 37,
  anon_sym_PERCENT = 38,
  anon_sym_LT_LT = 39,
  anon_sym_GT_GT = 40,
  anon_sym_AMP = 41,
  anon_sym_PLUS = 42,
  anon_sym_DASH = 43,
  anon_sym_PIPE = 44,
  anon_sym_POUND = 45,
  anon_sym_LT = 46,
  anon_sym_LT_EQ = 47,
  anon_sym_LT_GT = 48,
  anon_sym_BANG_EQ = 49,
  anon_sym_GT = 50,
  anon_sym_GT_EQ = 51,
  anon_sym_TILDE = 52,
  anon_sym_BANG_TILDE = 53,
  anon_sym_TILDE_STAR = 54,
  anon_sym_BANG_TILDE_STAR = 55,
  aux_sym_sql_boolean_expr_token1 = 56,
  aux_sym_sql_boolean_expr_token2 = 57,
  aux_sym_sql_boolean_expr_token3 = 58,
  anon_sym_DOT = 59,
  sym_sql_integer = 60,
  sym_comment = 61,
  sym_source_file = 62,
  sym_jinja_block = 63,
  sym_jinja_expr = 64,
  sym_jinja_fn_call = 65,
  sym_jinja_argument_list = 66,
  sym_jinja_lit_string = 67,
  sym_jinja_bool = 68,
  sym_jinja_list = 69,
  sym_jinja_dict = 70,
  sym_jinja_pair = 71,
  sym_jinja_kwarg = 72,
  sym_sql_statement = 73,
  sym_sql_union_statement = 74,
  sym_sql_intersect_statement = 75,
  sym_sql_except_statement = 76,
  sym_sql_select_statement = 77,
  sym_sql_with_clause = 78,
  sym_sql_cte = 79,
  sym_sql_cte_recursive_name = 80,
  sym_sql_cte_name = 81,
  sym_sql_select_clause = 82,
  sym_sql_column_list = 83,
  sym_sql_from_clause = 84,
  sym_sql_where_clause = 85,
  sym_sql_order_by_clause = 86,
  sym_sql_order_by_expression = 87,
  sym_sql_group_by_clause = 88,
  sym_sql_group_by_expression = 89,
  sym_sql_limit_clause = 90,
  sym_sql_expr = 91,
  sym_sql_string = 92,
  sym_sql_binary_expr = 93,
  sym_sql_boolean_expr = 94,
  sym_sql_alias = 95,
  sym_sql_fn = 96,
  sym_sql_arg_list = 97,
  sym_sql_table_name = 98,
  sym_sql_dotted_identifier = 99,
  aux_sym_jinja_argument_list_repeat1 = 100,
  aux_sym_jinja_list_repeat1 = 101,
  aux_sym_jinja_dict_repeat1 = 102,
  aux_sym_sql_with_clause_repeat1 = 103,
  aux_sym_sql_column_list_repeat1 = 104,
  aux_sym_sql_from_clause_repeat1 = 105,
  aux_sym_sql_order_by_expression_repeat1 = 106,
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
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '%') ADVANCE(259);
      if (lookahead == '&') ADVANCE(262);
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '>') ADVANCE(271);
      if (lookahead == 'F') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(127);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == '\\') SKIP(74)
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '^') ADVANCE(257);
      if (lookahead == 'f') ADVANCE(168);
      if (lookahead == '{') ADVANCE(118);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '}') ADVANCE(119);
      if (lookahead == '~') ADVANCE(273);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(185);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(184);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(170);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(156);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(147);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(160);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(165);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(158);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(146);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('C' <= lookahead && lookahead <= '_') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(186);
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
      if (lookahead == '\n') SKIP(13)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(21)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(21)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '%') ADVANCE(259);
      if (lookahead == '&') ADVANCE(262);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '>') ADVANCE(271);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '^') ADVANCE(257);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '~') ADVANCE(273);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(48);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
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
      if (lookahead == '"') ADVANCE(100);
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(123);
      if (lookahead == 'T') ADVANCE(127);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '{') ADVANCE(117);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 13:
      if (lookahead == '\'') ADVANCE(87);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(13)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(254);
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(256);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '{') ADVANCE(23);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(270);
      if (lookahead == '~') ADVANCE(274);
      END_STATE();
    case 23:
      if (lookahead == '{') ADVANCE(82);
      END_STATE();
    case 24:
      if (lookahead == '}') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 27:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(278);
      END_STATE();
    case 29:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 30:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 32:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 34:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 37:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(191);
      END_STATE();
    case 38:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(33);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 41:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 42:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 43:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(42);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      END_STATE();
    case 46:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      END_STATE();
    case 48:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(28);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      END_STATE();
    case 49:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 54:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(246);
      END_STATE();
    case 55:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 57:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 58:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 59:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(279);
      END_STATE();
    case 60:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 61:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 63:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(36);
      END_STATE();
    case 64:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      END_STATE();
    case 65:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      END_STATE();
    case 66:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 67:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 68:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(34);
      END_STATE();
    case 70:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 71:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 72:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 73:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 74:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(73)
      END_STATE();
    case 75:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(79)
      END_STATE();
    case 76:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(79)
      if (lookahead == '\r') SKIP(75)
      END_STATE();
    case 77:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(80)
      END_STATE();
    case 78:
      if (eof) ADVANCE(81);
      if (lookahead == '\n') SKIP(80)
      if (lookahead == '\r') SKIP(77)
      END_STATE();
    case 79:
      if (eof) ADVANCE(81);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '#') ADVANCE(266);
      if (lookahead == '%') ADVANCE(259);
      if (lookahead == '&') ADVANCE(262);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '*') ADVANCE(241);
      if (lookahead == '+') ADVANCE(263);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(282);
      if (lookahead == '/') ADVANCE(258);
      if (lookahead == ':') ADVANCE(120);
      if (lookahead == '<') ADVANCE(267);
      if (lookahead == '=') ADVANCE(121);
      if (lookahead == '>') ADVANCE(271);
      if (lookahead == '\\') SKIP(76)
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '^') ADVANCE(257);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '|') ADVANCE(265);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(273);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(43);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(72);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(57);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(61);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(49);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(39);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(50);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 80:
      if (eof) ADVANCE(81);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(85);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\\') SKIP(78)
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(227);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(238);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(223);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(214);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(222);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(215);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(80)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(99);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(97);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead == '\'') ADVANCE(286);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\n') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\'') ADVANCE(18);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(98);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(93);
      if (lookahead == '*') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(112);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(108);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(110);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead == '"') ADVANCE(286);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\n') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead != 0) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(110);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(109);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(106);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(82);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(140);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(134);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_sql_union_statement_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_sql_union_statement_token2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_sql_intersect_statement_token1);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_sql_except_statement_token1);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_sql_with_clause_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_sql_cte_recursive_name_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_sql_select_clause_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_sql_where_clause_token1);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token2);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_sql_group_by_clause_token1);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\r') ADVANCE(249);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\n') ADVANCE(254);
      if (lookahead == '\'') ADVANCE(285);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '*') ADVANCE(256);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-') ADVANCE(253);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(248);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(252);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead != 0) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead == '/') ADVANCE(254);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_sql_string_token1);
      if (lookahead == '\'') ADVANCE(15);
      if (lookahead == '*') ADVANCE(255);
      if (lookahead != 0) ADVANCE(256);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(286);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(260);
      if (lookahead == '=') ADVANCE(268);
      if (lookahead == '>') ADVANCE(269);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(272);
      if (lookahead == '>') ADVANCE(261);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '*') ADVANCE(275);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE);
      if (lookahead == '*') ADVANCE(276);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_TILDE_STAR);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_BANG_TILDE_STAR);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token1);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token2);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_sql_boolean_expr_token3);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_sql_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\'') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(286);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 79},
  [2] = {.lex_state = 79},
  [3] = {.lex_state = 79},
  [4] = {.lex_state = 79},
  [5] = {.lex_state = 79},
  [6] = {.lex_state = 79},
  [7] = {.lex_state = 79},
  [8] = {.lex_state = 79},
  [9] = {.lex_state = 79},
  [10] = {.lex_state = 79},
  [11] = {.lex_state = 79},
  [12] = {.lex_state = 79},
  [13] = {.lex_state = 79},
  [14] = {.lex_state = 79},
  [15] = {.lex_state = 79},
  [16] = {.lex_state = 79},
  [17] = {.lex_state = 79},
  [18] = {.lex_state = 79},
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
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 79},
  [39] = {.lex_state = 79},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 79},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 79},
  [57] = {.lex_state = 79},
  [58] = {.lex_state = 79},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 79},
  [62] = {.lex_state = 80},
  [63] = {.lex_state = 79},
  [64] = {.lex_state = 79},
  [65] = {.lex_state = 79},
  [66] = {.lex_state = 13},
  [67] = {.lex_state = 13},
  [68] = {.lex_state = 79},
  [69] = {.lex_state = 79},
  [70] = {.lex_state = 79},
  [71] = {.lex_state = 13},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 13},
  [75] = {.lex_state = 13},
  [76] = {.lex_state = 13},
  [77] = {.lex_state = 79},
  [78] = {.lex_state = 13},
  [79] = {.lex_state = 13},
  [80] = {.lex_state = 79},
  [81] = {.lex_state = 79},
  [82] = {.lex_state = 13},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 13},
  [85] = {.lex_state = 13},
  [86] = {.lex_state = 13},
  [87] = {.lex_state = 13},
  [88] = {.lex_state = 13},
  [89] = {.lex_state = 79},
  [90] = {.lex_state = 13},
  [91] = {.lex_state = 79},
  [92] = {.lex_state = 79},
  [93] = {.lex_state = 79},
  [94] = {.lex_state = 79},
  [95] = {.lex_state = 13},
  [96] = {.lex_state = 79},
  [97] = {.lex_state = 79},
  [98] = {.lex_state = 79},
  [99] = {.lex_state = 79},
  [100] = {.lex_state = 79},
  [101] = {.lex_state = 79},
  [102] = {.lex_state = 79},
  [103] = {.lex_state = 79},
  [104] = {.lex_state = 79},
  [105] = {.lex_state = 79},
  [106] = {.lex_state = 79},
  [107] = {.lex_state = 79},
  [108] = {.lex_state = 79},
  [109] = {.lex_state = 79},
  [110] = {.lex_state = 79},
  [111] = {.lex_state = 79},
  [112] = {.lex_state = 79},
  [113] = {.lex_state = 79},
  [114] = {.lex_state = 79},
  [115] = {.lex_state = 79},
  [116] = {.lex_state = 79},
  [117] = {.lex_state = 79},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 79},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 79},
  [123] = {.lex_state = 20},
  [124] = {.lex_state = 79},
  [125] = {.lex_state = 79},
  [126] = {.lex_state = 79},
  [127] = {.lex_state = 79},
  [128] = {.lex_state = 20},
  [129] = {.lex_state = 79},
  [130] = {.lex_state = 79},
  [131] = {.lex_state = 79},
  [132] = {.lex_state = 79},
  [133] = {.lex_state = 79},
  [134] = {.lex_state = 79},
  [135] = {.lex_state = 79},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 79},
  [139] = {.lex_state = 79},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 79},
  [142] = {.lex_state = 21},
  [143] = {.lex_state = 79},
  [144] = {.lex_state = 79},
  [145] = {.lex_state = 79},
  [146] = {.lex_state = 79},
  [147] = {.lex_state = 79},
  [148] = {.lex_state = 79},
  [149] = {.lex_state = 79},
  [150] = {.lex_state = 21},
  [151] = {.lex_state = 79},
  [152] = {.lex_state = 79},
  [153] = {.lex_state = 79},
  [154] = {.lex_state = 79},
  [155] = {.lex_state = 79},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 79},
  [158] = {.lex_state = 79},
  [159] = {.lex_state = 79},
  [160] = {.lex_state = 79},
  [161] = {.lex_state = 79},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 79},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 79},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 79},
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
  [188] = {.lex_state = 79},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 79},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 21},
  [196] = {.lex_state = 21},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 79},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 79},
  [212] = {.lex_state = 21},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 108},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 79},
  [217] = {.lex_state = 252},
  [218] = {.lex_state = 21},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 79},
  [221] = {.lex_state = 79},
  [222] = {.lex_state = 79},
  [223] = {.lex_state = 79},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 21},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 21},
  [233] = {.lex_state = 79},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 21},
  [236] = {.lex_state = 95},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 21},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 21},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 21},
  [248] = {.lex_state = 21},
  [249] = {.lex_state = 95},
  [250] = {.lex_state = 108},
  [251] = {.lex_state = 252},
  [252] = {.lex_state = 0},
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
    [sym_source_file] = STATE(252),
    [sym_jinja_block] = STATE(97),
    [sym_sql_statement] = STATE(144),
    [sym_sql_union_statement] = STATE(133),
    [sym_sql_intersect_statement] = STATE(133),
    [sym_sql_except_statement] = STATE(133),
    [sym_sql_select_statement] = STATE(133),
    [sym_sql_with_clause] = STATE(191),
    [sym_sql_select_clause] = STATE(39),
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
    ACTIONS(11), 29,
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
    ACTIONS(21), 1,
      anon_sym_COMMA,
    ACTIONS(25), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(29), 1,
      anon_sym_CARET,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(41), 1,
      aux_sym_sql_boolean_expr_token3,
    STATE(61), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(33), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(27), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(23), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(19), 10,
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
    ACTIONS(47), 1,
      anon_sym_DOT,
    ACTIONS(45), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(43), 29,
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
  [164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
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
  [208] = 3,
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
  [252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_CARET,
    ACTIONS(59), 7,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(57), 28,
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
  [298] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(29), 1,
      anon_sym_CARET,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(41), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(33), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(27), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(23), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(61), 11,
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
  [360] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_CARET,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(65), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(33), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(27), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(23), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(63), 12,
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
  [420] = 3,
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
  [464] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_CARET,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(27), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(59), 6,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(57), 23,
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
  [514] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_CARET,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(33), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(27), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(23), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(63), 13,
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
  [572] = 3,
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
    ACTIONS(67), 29,
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
  [616] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_CARET,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(33), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(27), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(57), 20,
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
  [670] = 3,
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
    ACTIONS(71), 29,
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
  [714] = 3,
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
    ACTIONS(75), 29,
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
  [758] = 3,
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
    ACTIONS(11), 29,
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
  [802] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(29), 1,
      anon_sym_CARET,
    ACTIONS(31), 1,
      anon_sym_SLASH,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(41), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(33), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(37), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(27), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(23), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
    ACTIONS(79), 8,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [861] = 5,
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
  [902] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(93), 1,
      anon_sym_CARET,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(105), 1,
      aux_sym_sql_boolean_expr_token3,
    STATE(167), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(101), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(91), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [960] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_DOT,
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
  [998] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(93), 1,
      anon_sym_CARET,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(105), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(101), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(91), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1056] = 3,
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
  [1091] = 3,
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
  [1126] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_CARET,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(63), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(101), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(91), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1175] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_CARET,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(101), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(63), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_boolean_expr_token2,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(91), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_CARET,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    ACTIONS(59), 5,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(91), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(57), 15,
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
  [1263] = 3,
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
  [1298] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_CARET,
    ACTIONS(59), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(57), 20,
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
  [1335] = 3,
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
  [1370] = 3,
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
  [1405] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_CARET,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(59), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(91), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(57), 12,
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
  [1450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 6,
      anon_sym_SLASH,
      anon_sym_DASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(49), 21,
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
  [1485] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(93), 1,
      anon_sym_CARET,
    ACTIONS(95), 1,
      anon_sym_SLASH,
    ACTIONS(99), 1,
      anon_sym_DASH,
    ACTIONS(103), 1,
      aux_sym_sql_boolean_expr_token2,
    ACTIONS(105), 1,
      aux_sym_sql_boolean_expr_token3,
    ACTIONS(61), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(97), 3,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_POUND,
    ACTIONS(101), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_TILDE,
      anon_sym_BANG_TILDE,
    ACTIONS(91), 5,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP,
    ACTIONS(87), 7,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_LT_GT,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_TILDE_STAR,
      anon_sym_BANG_TILDE_STAR,
  [1538] = 3,
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
  [1573] = 11,
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
    STATE(163), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1613] = 11,
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
    STATE(182), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1653] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(135), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(139), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(56), 1,
      sym_sql_from_clause,
    STATE(70), 1,
      sym_sql_where_clause,
    STATE(107), 1,
      sym_sql_group_by_clause,
    STATE(111), 1,
      sym_sql_order_by_clause,
    STATE(134), 1,
      sym_sql_limit_clause,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [1694] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(135), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(139), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(52), 1,
      sym_sql_from_clause,
    STATE(63), 1,
      sym_sql_where_clause,
    STATE(99), 1,
      sym_sql_group_by_clause,
    STATE(116), 1,
      sym_sql_order_by_clause,
    STATE(127), 1,
      sym_sql_limit_clause,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [1735] = 10,
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
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(208), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1772] = 10,
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
    STATE(208), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1809] = 10,
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
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(208), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1846] = 11,
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
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
    ACTIONS(155), 1,
      sym_jinja_identifier,
    STATE(181), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1885] = 11,
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
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RBRACK,
    STATE(172), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1924] = 10,
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
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(208), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1961] = 10,
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
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [1997] = 10,
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
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2033] = 9,
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
    STATE(208), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2067] = 10,
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
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(167), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2103] = 10,
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
    ACTIONS(155), 1,
      sym_jinja_identifier,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2139] = 9,
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
    ACTIONS(155), 1,
      sym_jinja_identifier,
    STATE(186), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2172] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(139), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(70), 1,
      sym_sql_where_clause,
    STATE(107), 1,
      sym_sql_group_by_clause,
    STATE(111), 1,
      sym_sql_order_by_clause,
    STATE(134), 1,
      sym_sql_limit_clause,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2207] = 9,
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
    ACTIONS(155), 1,
      sym_jinja_identifier,
    STATE(198), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2240] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
    ACTIONS(173), 1,
      anon_sym_DQUOTE,
    ACTIONS(177), 1,
      anon_sym_LBRACK,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      sym_jinja_identifier,
    STATE(190), 1,
      sym_jinja_expr,
    ACTIONS(175), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(192), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2273] = 9,
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
    ACTIONS(155), 1,
      sym_jinja_identifier,
    STATE(221), 1,
      sym_jinja_expr,
    ACTIONS(119), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [2306] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      aux_sym_sql_where_clause_token1,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(139), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(68), 1,
      sym_sql_where_clause,
    STATE(104), 1,
      sym_sql_group_by_clause,
    STATE(113), 1,
      sym_sql_order_by_clause,
    STATE(120), 1,
      sym_sql_limit_clause,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 12,
      ts_builtin_sym_end,
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
  [2359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(61), 10,
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
  [2381] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(3), 1,
      sym_sql_expr,
    STATE(94), 1,
      sym_sql_column_list,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2411] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_STAR,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(20), 1,
      sym_sql_expr,
    STATE(239), 1,
      sym_sql_column_list,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2441] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(204), 10,
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
  [2463] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(210), 1,
      sym_sql_identifier,
    ACTIONS(206), 10,
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
  [2485] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(139), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(107), 1,
      sym_sql_group_by_clause,
    STATE(111), 1,
      sym_sql_order_by_clause,
    STATE(134), 1,
      sym_sql_limit_clause,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2514] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(65), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(212), 9,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_where_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_group_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [2535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    STATE(69), 1,
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
  [2556] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(22), 1,
      sym_sql_expr,
    STATE(234), 1,
      sym_sql_arg_list,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2583] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(22), 1,
      sym_sql_expr,
    STATE(242), 1,
      sym_sql_arg_list,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2610] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(139), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(96), 1,
      sym_sql_group_by_clause,
    STATE(112), 1,
      sym_sql_order_by_clause,
    STATE(135), 1,
      sym_sql_limit_clause,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    STATE(69), 1,
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
  [2660] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(139), 1,
      aux_sym_sql_group_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(104), 1,
      sym_sql_group_by_clause,
    STATE(113), 1,
      sym_sql_order_by_clause,
    STATE(120), 1,
      sym_sql_limit_clause,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [2689] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(32), 1,
      sym_sql_expr,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2713] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(9), 1,
      sym_sql_expr,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2737] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(14), 1,
      sym_sql_expr,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2761] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(8), 1,
      sym_sql_expr,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(7), 1,
      sym_sql_expr,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2809] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(10), 1,
      sym_sql_expr,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2833] = 2,
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
  [2849] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(11), 1,
      sym_sql_expr,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2873] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(12), 1,
      sym_sql_expr,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 10,
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
  [2913] = 2,
    ACTIONS(3), 1,
      sym_comment,
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
  [2929] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(23), 1,
      sym_sql_expr,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2953] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(34), 1,
      sym_sql_expr,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [2977] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(29), 1,
      sym_sql_expr,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3001] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(28), 1,
      sym_sql_expr,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3025] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(27), 1,
      sym_sql_expr,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3049] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(26), 1,
      sym_sql_expr,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_SQUOTE,
    ACTIONS(200), 1,
      sym_sql_identifier,
    ACTIONS(202), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(25), 1,
      sym_sql_expr,
    STATE(35), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 10,
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
  [3113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(18), 1,
      sym_sql_expr,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3137] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(229), 1,
      aux_sym_sql_union_statement_token2,
    STATE(39), 1,
      sym_sql_select_clause,
    STATE(132), 1,
      sym_sql_statement,
    STATE(191), 1,
      sym_sql_with_clause,
    STATE(133), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3165] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(231), 1,
      aux_sym_sql_union_statement_token2,
    STATE(39), 1,
      sym_sql_select_clause,
    STATE(131), 1,
      sym_sql_statement,
    STATE(191), 1,
      sym_sql_with_clause,
    STATE(133), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3193] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    ACTIONS(233), 1,
      aux_sym_sql_union_statement_token2,
    STATE(39), 1,
      sym_sql_select_clause,
    STATE(130), 1,
      sym_sql_statement,
    STATE(191), 1,
      sym_sql_with_clause,
    STATE(133), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 10,
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
  [3237] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(192), 1,
      sym_sql_identifier,
    ACTIONS(196), 1,
      aux_sym_sql_boolean_expr_token1,
    STATE(13), 1,
      sym_sql_expr,
    STATE(17), 6,
      sym_sql_string,
      sym_sql_binary_expr,
      sym_sql_boolean_expr,
      sym_sql_alias,
      sym_sql_fn,
      sym_sql_dotted_identifier,
  [3261] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(115), 1,
      sym_sql_order_by_clause,
    STATE(129), 1,
      sym_sql_limit_clause,
    ACTIONS(237), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3284] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(39), 1,
      sym_sql_select_clause,
    STATE(153), 1,
      sym_sql_statement,
    STATE(191), 1,
      sym_sql_with_clause,
    STATE(133), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3309] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(239), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3328] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(111), 1,
      sym_sql_order_by_clause,
    STATE(134), 1,
      sym_sql_limit_clause,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3351] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(243), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3370] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(39), 1,
      sym_sql_select_clause,
    STATE(125), 1,
      sym_sql_statement,
    STATE(191), 1,
      sym_sql_with_clause,
    STATE(133), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3414] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(39), 1,
      sym_sql_select_clause,
    STATE(124), 1,
      sym_sql_statement,
    STATE(191), 1,
      sym_sql_with_clause,
    STATE(133), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3439] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(112), 1,
      sym_sql_order_by_clause,
    STATE(135), 1,
      sym_sql_limit_clause,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3462] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(39), 1,
      sym_sql_select_clause,
    STATE(126), 1,
      sym_sql_statement,
    STATE(191), 1,
      sym_sql_with_clause,
    STATE(133), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3487] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(39), 1,
      sym_sql_select_clause,
    STATE(149), 1,
      sym_sql_statement,
    STATE(191), 1,
      sym_sql_with_clause,
    STATE(133), 4,
      sym_sql_union_statement,
      sym_sql_intersect_statement,
      sym_sql_except_statement,
      sym_sql_select_statement,
  [3512] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(113), 1,
      sym_sql_order_by_clause,
    STATE(120), 1,
      sym_sql_limit_clause,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3535] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(250), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [3553] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 8,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(252), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [3585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(120), 1,
      sym_sql_limit_clause,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3602] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(129), 1,
      sym_sql_limit_clause,
    ACTIONS(237), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(135), 1,
      sym_sql_limit_clause,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3636] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 7,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [3649] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(122), 1,
      sym_sql_limit_clause,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(134), 1,
      sym_sql_limit_clause,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 6,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
      aux_sym_sql_limit_clause_token1,
  [3695] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(183), 1,
      sym_jinja_pair,
    STATE(245), 1,
      sym_jinja_lit_string,
  [3717] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(165), 1,
      sym_jinja_pair,
    STATE(245), 1,
      sym_jinja_lit_string,
  [3739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3750] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(245), 1,
      sym_jinja_lit_string,
  [3769] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3780] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(274), 1,
      sym_sql_identifier,
    STATE(188), 1,
      sym_sql_cte,
    STATE(216), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [3797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(276), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3821] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(282), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3845] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      aux_sym_sql_cte_recursive_name_token1,
    ACTIONS(274), 1,
      sym_sql_identifier,
    STATE(169), 1,
      sym_sql_cte,
    STATE(216), 2,
      sym_sql_cte_recursive_name,
      sym_sql_cte_name,
  [3862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(284), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(288), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3943] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(245), 1,
      sym_jinja_lit_string,
  [3962] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(245), 1,
      sym_jinja_lit_string,
  [3981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_union_statement_token1,
      aux_sym_sql_intersect_statement_token1,
      aux_sym_sql_except_statement_token1,
  [3992] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [4003] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(245), 1,
      sym_jinja_lit_string,
  [4022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4032] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(304), 1,
      sym_sql_identifier,
    STATE(64), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [4046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4056] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    ACTIONS(310), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(312), 1,
      aux_sym_sql_except_statement_token1,
  [4072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4112] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(310), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(312), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(322), 1,
      anon_sym_RPAREN,
  [4128] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(304), 1,
      sym_sql_identifier,
    STATE(77), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [4142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4162] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      aux_sym_sql_intersect_statement_token1,
    ACTIONS(310), 1,
      aux_sym_sql_union_statement_token1,
    ACTIONS(312), 1,
      aux_sym_sql_except_statement_token1,
    ACTIONS(328), 1,
      ts_builtin_sym_end,
  [4178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_SQUOTE,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym_jinja_pair,
    STATE(245), 1,
      sym_jinja_lit_string,
  [4214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4234] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4254] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_jinja_list_repeat1,
  [4277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4290] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_jinja_dict_repeat1,
  [4303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(174), 1,
      aux_sym_jinja_dict_repeat1,
  [4316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      aux_sym_jinja_list_repeat1,
  [4329] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_sql_column_list_repeat1,
  [4342] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(361), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_sql_column_list_repeat1,
  [4355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      aux_sym_sql_select_clause_token1,
    STATE(177), 1,
      aux_sym_sql_with_clause_repeat1,
  [4368] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_COMMA,
    ACTIONS(371), 1,
      anon_sym_RPAREN,
    STATE(170), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      aux_sym_sql_select_clause_token1,
    STATE(171), 1,
      aux_sym_sql_with_clause_repeat1,
  [4394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(162), 1,
      aux_sym_jinja_list_repeat1,
  [4407] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    ACTIONS(384), 1,
      anon_sym_EQ,
    STATE(155), 1,
      sym_jinja_argument_list,
  [4420] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_RBRACE,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_jinja_dict_repeat1,
  [4433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_sql_column_list_repeat1,
  [4446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4459] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      aux_sym_sql_select_clause_token1,
    STATE(171), 1,
      aux_sym_sql_with_clause_repeat1,
  [4472] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_jinja_list_repeat1,
  [4485] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4498] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    STATE(180), 1,
      aux_sym_jinja_dict_repeat1,
  [4511] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
    STATE(178), 1,
      aux_sym_jinja_list_repeat1,
  [4524] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_jinja_argument_list_repeat1,
  [4537] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_COMMA,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      aux_sym_jinja_dict_repeat1,
  [4550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4574] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4582] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [4590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      aux_sym_sql_select_clause_token1,
    STATE(38), 1,
      sym_sql_select_clause,
  [4616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      sym_sql_identifier,
    STATE(114), 1,
      sym_sql_group_by_expression,
  [4650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_sql_identifier,
    STATE(117), 1,
      sym_sql_order_by_expression,
  [4660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(421), 1,
      anon_sym_LPAREN,
    STATE(189), 1,
      sym_jinja_argument_list,
  [4670] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4694] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_LPAREN,
    STATE(155), 1,
      sym_jinja_argument_list,
  [4720] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4728] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [4752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4760] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4768] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4776] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_LPAREN,
      aux_sym_sql_cte_token1,
  [4784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(429), 1,
      sym_sql_identifier,
    STATE(219), 1,
      sym_sql_cte_name,
  [4794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [4802] = 2,
    ACTIONS(431), 1,
      aux_sym_jinja_lit_string_token2,
    ACTIONS(433), 1,
      sym_comment,
  [4809] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_SQUOTE,
  [4816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(437), 1,
      aux_sym_sql_cte_token1,
  [4823] = 2,
    ACTIONS(433), 1,
      sym_comment,
    ACTIONS(439), 1,
      aux_sym_sql_string_token1,
  [4830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      sym_sql_identifier,
  [4837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
  [4844] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(445), 1,
      aux_sym_sql_order_by_clause_token2,
  [4851] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(447), 1,
      anon_sym_RBRACE_RBRACE,
  [4858] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(449), 1,
      aux_sym_sql_order_by_clause_token2,
  [4865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(451), 1,
      sym_sql_integer,
  [4872] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(453), 1,
      anon_sym_SQUOTE,
  [4879] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(455), 1,
      anon_sym_LPAREN,
  [4886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_SQUOTE,
  [4893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(457), 1,
      anon_sym_DQUOTE,
  [4900] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
  [4907] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(459), 1,
      sym_sql_identifier,
  [4914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
  [4921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(461), 1,
      anon_sym_SQUOTE,
  [4928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 1,
      sym_sql_identifier,
  [4935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(465), 1,
      aux_sym_sql_cte_token1,
  [4942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
  [4949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 1,
      sym_sql_identifier,
  [4956] = 2,
    ACTIONS(433), 1,
      sym_comment,
    ACTIONS(471), 1,
      aux_sym_jinja_lit_string_token1,
  [4963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(435), 1,
      anon_sym_DQUOTE,
  [4970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(473), 1,
      sym_sql_identifier,
  [4977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
  [4984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_RPAREN,
  [4991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_RBRACK,
  [4998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
  [5005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
  [5012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      sym_sql_identifier,
  [5019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(481), 1,
      anon_sym_COLON,
  [5026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
  [5033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(483), 1,
      sym_sql_identifier,
  [5040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(485), 1,
      sym_sql_identifier,
  [5047] = 2,
    ACTIONS(433), 1,
      sym_comment,
    ACTIONS(487), 1,
      aux_sym_jinja_lit_string_token1,
  [5054] = 2,
    ACTIONS(433), 1,
      sym_comment,
    ACTIONS(489), 1,
      aux_sym_jinja_lit_string_token2,
  [5061] = 2,
    ACTIONS(433), 1,
      sym_comment,
    ACTIONS(491), 1,
      aux_sym_sql_string_token1,
  [5068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 50,
  [SMALL_STATE(4)] = 117,
  [SMALL_STATE(5)] = 164,
  [SMALL_STATE(6)] = 208,
  [SMALL_STATE(7)] = 252,
  [SMALL_STATE(8)] = 298,
  [SMALL_STATE(9)] = 360,
  [SMALL_STATE(10)] = 420,
  [SMALL_STATE(11)] = 464,
  [SMALL_STATE(12)] = 514,
  [SMALL_STATE(13)] = 572,
  [SMALL_STATE(14)] = 616,
  [SMALL_STATE(15)] = 670,
  [SMALL_STATE(16)] = 714,
  [SMALL_STATE(17)] = 758,
  [SMALL_STATE(18)] = 802,
  [SMALL_STATE(19)] = 861,
  [SMALL_STATE(20)] = 902,
  [SMALL_STATE(21)] = 960,
  [SMALL_STATE(22)] = 998,
  [SMALL_STATE(23)] = 1056,
  [SMALL_STATE(24)] = 1091,
  [SMALL_STATE(25)] = 1126,
  [SMALL_STATE(26)] = 1175,
  [SMALL_STATE(27)] = 1222,
  [SMALL_STATE(28)] = 1263,
  [SMALL_STATE(29)] = 1298,
  [SMALL_STATE(30)] = 1335,
  [SMALL_STATE(31)] = 1370,
  [SMALL_STATE(32)] = 1405,
  [SMALL_STATE(33)] = 1450,
  [SMALL_STATE(34)] = 1485,
  [SMALL_STATE(35)] = 1538,
  [SMALL_STATE(36)] = 1573,
  [SMALL_STATE(37)] = 1613,
  [SMALL_STATE(38)] = 1653,
  [SMALL_STATE(39)] = 1694,
  [SMALL_STATE(40)] = 1735,
  [SMALL_STATE(41)] = 1772,
  [SMALL_STATE(42)] = 1809,
  [SMALL_STATE(43)] = 1846,
  [SMALL_STATE(44)] = 1885,
  [SMALL_STATE(45)] = 1924,
  [SMALL_STATE(46)] = 1961,
  [SMALL_STATE(47)] = 1997,
  [SMALL_STATE(48)] = 2033,
  [SMALL_STATE(49)] = 2067,
  [SMALL_STATE(50)] = 2103,
  [SMALL_STATE(51)] = 2139,
  [SMALL_STATE(52)] = 2172,
  [SMALL_STATE(53)] = 2207,
  [SMALL_STATE(54)] = 2240,
  [SMALL_STATE(55)] = 2273,
  [SMALL_STATE(56)] = 2306,
  [SMALL_STATE(57)] = 2341,
  [SMALL_STATE(58)] = 2359,
  [SMALL_STATE(59)] = 2381,
  [SMALL_STATE(60)] = 2411,
  [SMALL_STATE(61)] = 2441,
  [SMALL_STATE(62)] = 2463,
  [SMALL_STATE(63)] = 2485,
  [SMALL_STATE(64)] = 2514,
  [SMALL_STATE(65)] = 2535,
  [SMALL_STATE(66)] = 2556,
  [SMALL_STATE(67)] = 2583,
  [SMALL_STATE(68)] = 2610,
  [SMALL_STATE(69)] = 2639,
  [SMALL_STATE(70)] = 2660,
  [SMALL_STATE(71)] = 2689,
  [SMALL_STATE(72)] = 2713,
  [SMALL_STATE(73)] = 2737,
  [SMALL_STATE(74)] = 2761,
  [SMALL_STATE(75)] = 2785,
  [SMALL_STATE(76)] = 2809,
  [SMALL_STATE(77)] = 2833,
  [SMALL_STATE(78)] = 2849,
  [SMALL_STATE(79)] = 2873,
  [SMALL_STATE(80)] = 2897,
  [SMALL_STATE(81)] = 2913,
  [SMALL_STATE(82)] = 2929,
  [SMALL_STATE(83)] = 2953,
  [SMALL_STATE(84)] = 2977,
  [SMALL_STATE(85)] = 3001,
  [SMALL_STATE(86)] = 3025,
  [SMALL_STATE(87)] = 3049,
  [SMALL_STATE(88)] = 3073,
  [SMALL_STATE(89)] = 3097,
  [SMALL_STATE(90)] = 3113,
  [SMALL_STATE(91)] = 3137,
  [SMALL_STATE(92)] = 3165,
  [SMALL_STATE(93)] = 3193,
  [SMALL_STATE(94)] = 3221,
  [SMALL_STATE(95)] = 3237,
  [SMALL_STATE(96)] = 3261,
  [SMALL_STATE(97)] = 3284,
  [SMALL_STATE(98)] = 3309,
  [SMALL_STATE(99)] = 3328,
  [SMALL_STATE(100)] = 3351,
  [SMALL_STATE(101)] = 3370,
  [SMALL_STATE(102)] = 3395,
  [SMALL_STATE(103)] = 3414,
  [SMALL_STATE(104)] = 3439,
  [SMALL_STATE(105)] = 3462,
  [SMALL_STATE(106)] = 3487,
  [SMALL_STATE(107)] = 3512,
  [SMALL_STATE(108)] = 3535,
  [SMALL_STATE(109)] = 3553,
  [SMALL_STATE(110)] = 3567,
  [SMALL_STATE(111)] = 3585,
  [SMALL_STATE(112)] = 3602,
  [SMALL_STATE(113)] = 3619,
  [SMALL_STATE(114)] = 3636,
  [SMALL_STATE(115)] = 3649,
  [SMALL_STATE(116)] = 3666,
  [SMALL_STATE(117)] = 3683,
  [SMALL_STATE(118)] = 3695,
  [SMALL_STATE(119)] = 3717,
  [SMALL_STATE(120)] = 3739,
  [SMALL_STATE(121)] = 3750,
  [SMALL_STATE(122)] = 3769,
  [SMALL_STATE(123)] = 3780,
  [SMALL_STATE(124)] = 3797,
  [SMALL_STATE(125)] = 3810,
  [SMALL_STATE(126)] = 3821,
  [SMALL_STATE(127)] = 3834,
  [SMALL_STATE(128)] = 3845,
  [SMALL_STATE(129)] = 3862,
  [SMALL_STATE(130)] = 3873,
  [SMALL_STATE(131)] = 3886,
  [SMALL_STATE(132)] = 3897,
  [SMALL_STATE(133)] = 3910,
  [SMALL_STATE(134)] = 3921,
  [SMALL_STATE(135)] = 3932,
  [SMALL_STATE(136)] = 3943,
  [SMALL_STATE(137)] = 3962,
  [SMALL_STATE(138)] = 3981,
  [SMALL_STATE(139)] = 3992,
  [SMALL_STATE(140)] = 4003,
  [SMALL_STATE(141)] = 4022,
  [SMALL_STATE(142)] = 4032,
  [SMALL_STATE(143)] = 4046,
  [SMALL_STATE(144)] = 4056,
  [SMALL_STATE(145)] = 4072,
  [SMALL_STATE(146)] = 4082,
  [SMALL_STATE(147)] = 4092,
  [SMALL_STATE(148)] = 4102,
  [SMALL_STATE(149)] = 4112,
  [SMALL_STATE(150)] = 4128,
  [SMALL_STATE(151)] = 4142,
  [SMALL_STATE(152)] = 4152,
  [SMALL_STATE(153)] = 4162,
  [SMALL_STATE(154)] = 4178,
  [SMALL_STATE(155)] = 4188,
  [SMALL_STATE(156)] = 4198,
  [SMALL_STATE(157)] = 4214,
  [SMALL_STATE(158)] = 4224,
  [SMALL_STATE(159)] = 4234,
  [SMALL_STATE(160)] = 4244,
  [SMALL_STATE(161)] = 4254,
  [SMALL_STATE(162)] = 4264,
  [SMALL_STATE(163)] = 4277,
  [SMALL_STATE(164)] = 4290,
  [SMALL_STATE(165)] = 4303,
  [SMALL_STATE(166)] = 4316,
  [SMALL_STATE(167)] = 4329,
  [SMALL_STATE(168)] = 4342,
  [SMALL_STATE(169)] = 4355,
  [SMALL_STATE(170)] = 4368,
  [SMALL_STATE(171)] = 4381,
  [SMALL_STATE(172)] = 4394,
  [SMALL_STATE(173)] = 4407,
  [SMALL_STATE(174)] = 4420,
  [SMALL_STATE(175)] = 4433,
  [SMALL_STATE(176)] = 4446,
  [SMALL_STATE(177)] = 4459,
  [SMALL_STATE(178)] = 4472,
  [SMALL_STATE(179)] = 4485,
  [SMALL_STATE(180)] = 4498,
  [SMALL_STATE(181)] = 4511,
  [SMALL_STATE(182)] = 4524,
  [SMALL_STATE(183)] = 4537,
  [SMALL_STATE(184)] = 4550,
  [SMALL_STATE(185)] = 4558,
  [SMALL_STATE(186)] = 4566,
  [SMALL_STATE(187)] = 4574,
  [SMALL_STATE(188)] = 4582,
  [SMALL_STATE(189)] = 4590,
  [SMALL_STATE(190)] = 4598,
  [SMALL_STATE(191)] = 4606,
  [SMALL_STATE(192)] = 4616,
  [SMALL_STATE(193)] = 4624,
  [SMALL_STATE(194)] = 4632,
  [SMALL_STATE(195)] = 4640,
  [SMALL_STATE(196)] = 4650,
  [SMALL_STATE(197)] = 4660,
  [SMALL_STATE(198)] = 4670,
  [SMALL_STATE(199)] = 4678,
  [SMALL_STATE(200)] = 4686,
  [SMALL_STATE(201)] = 4694,
  [SMALL_STATE(202)] = 4702,
  [SMALL_STATE(203)] = 4710,
  [SMALL_STATE(204)] = 4720,
  [SMALL_STATE(205)] = 4728,
  [SMALL_STATE(206)] = 4736,
  [SMALL_STATE(207)] = 4744,
  [SMALL_STATE(208)] = 4752,
  [SMALL_STATE(209)] = 4760,
  [SMALL_STATE(210)] = 4768,
  [SMALL_STATE(211)] = 4776,
  [SMALL_STATE(212)] = 4784,
  [SMALL_STATE(213)] = 4794,
  [SMALL_STATE(214)] = 4802,
  [SMALL_STATE(215)] = 4809,
  [SMALL_STATE(216)] = 4816,
  [SMALL_STATE(217)] = 4823,
  [SMALL_STATE(218)] = 4830,
  [SMALL_STATE(219)] = 4837,
  [SMALL_STATE(220)] = 4844,
  [SMALL_STATE(221)] = 4851,
  [SMALL_STATE(222)] = 4858,
  [SMALL_STATE(223)] = 4865,
  [SMALL_STATE(224)] = 4872,
  [SMALL_STATE(225)] = 4879,
  [SMALL_STATE(226)] = 4886,
  [SMALL_STATE(227)] = 4893,
  [SMALL_STATE(228)] = 4900,
  [SMALL_STATE(229)] = 4907,
  [SMALL_STATE(230)] = 4914,
  [SMALL_STATE(231)] = 4921,
  [SMALL_STATE(232)] = 4928,
  [SMALL_STATE(233)] = 4935,
  [SMALL_STATE(234)] = 4942,
  [SMALL_STATE(235)] = 4949,
  [SMALL_STATE(236)] = 4956,
  [SMALL_STATE(237)] = 4963,
  [SMALL_STATE(238)] = 4970,
  [SMALL_STATE(239)] = 4977,
  [SMALL_STATE(240)] = 4984,
  [SMALL_STATE(241)] = 4991,
  [SMALL_STATE(242)] = 4998,
  [SMALL_STATE(243)] = 5005,
  [SMALL_STATE(244)] = 5012,
  [SMALL_STATE(245)] = 5019,
  [SMALL_STATE(246)] = 5026,
  [SMALL_STATE(247)] = 5033,
  [SMALL_STATE(248)] = 5040,
  [SMALL_STATE(249)] = 5047,
  [SMALL_STATE(250)] = 5054,
  [SMALL_STATE(251)] = 5061,
  [SMALL_STATE(252)] = 5068,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_expr, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_expr, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_fn, 4),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_fn, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_alias, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_alias, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_binary_expr, 3, .production_id = 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_boolean_expr, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_boolean_expr, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_string, 3, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_dotted_identifier, 5),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_dotted_identifier, 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_where_clause, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(74),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2), SHIFT_REPEAT(150),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_clause, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 5),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2), SHIFT_REPEAT(229),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_expression, 2),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_group_by_clause, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 6),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 7),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 4),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_union_statement, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_intersect_statement, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_except_statement, 3),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_statement, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expr, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(51),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(83),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(48),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2), SHIFT_REPEAT(123),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 2),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 3),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(156),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 4),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_recursive_name, 5),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [493] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
