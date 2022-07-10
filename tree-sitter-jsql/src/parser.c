#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

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
  aux_sym_sql_order_by_clause_token1 = 25,
  aux_sym_sql_order_by_clause_token2 = 26,
  aux_sym_sql_limit_clause_token1 = 27,
  sym_sql_integer = 28,
  sym_source_file = 29,
  sym_jinja_block = 30,
  sym_jinja_expr = 31,
  sym_jinja_fn_call = 32,
  sym_jinja_argument_list = 33,
  sym_jinja_lit_string = 34,
  sym_jinja_bool = 35,
  sym_jinja_list = 36,
  sym_jinja_dict = 37,
  sym_jinja_pair = 38,
  sym_jinja_kwarg = 39,
  sym_sql_select_statement = 40,
  sym_sql_with_clause = 41,
  sym_sql_cte = 42,
  sym_sql_cte_name = 43,
  sym_sql_select_clause = 44,
  sym_sql_column_list = 45,
  sym_sql_from_clause = 46,
  sym_sql_order_by_clause = 47,
  sym_sql_order_by_expression = 48,
  sym_sql_limit_clause = 49,
  sym_sql_expr = 50,
  sym_sql_alias = 51,
  sym_sql_fn = 52,
  sym_sql_arg_list = 53,
  sym_sql_table_name = 54,
  aux_sym_jinja_argument_list_repeat1 = 55,
  aux_sym_jinja_list_repeat1 = 56,
  aux_sym_jinja_dict_repeat1 = 57,
  aux_sym_sql_with_clause_repeat1 = 58,
  aux_sym_sql_column_list_repeat1 = 59,
  aux_sym_sql_from_clause_repeat1 = 60,
  aux_sym_sql_order_by_expression_repeat1 = 61,
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
  [aux_sym_sql_order_by_clause_token1] = "order",
  [aux_sym_sql_order_by_clause_token2] = "by",
  [aux_sym_sql_limit_clause_token1] = "limit",
  [sym_sql_integer] = "sql_integer",
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
  [sym_sql_order_by_clause] = "sql_order_by_clause",
  [sym_sql_order_by_expression] = "sql_order_by_expression",
  [sym_sql_limit_clause] = "sql_limit_clause",
  [sym_sql_expr] = "sql_expr",
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
  [aux_sym_sql_order_by_clause_token1] = aux_sym_sql_order_by_clause_token1,
  [aux_sym_sql_order_by_clause_token2] = aux_sym_sql_order_by_clause_token2,
  [aux_sym_sql_limit_clause_token1] = aux_sym_sql_limit_clause_token1,
  [sym_sql_integer] = sym_sql_integer,
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
  [sym_sql_order_by_clause] = sym_sql_order_by_clause,
  [sym_sql_order_by_expression] = sym_sql_order_by_expression,
  [sym_sql_limit_clause] = sym_sql_limit_clause,
  [sym_sql_expr] = sym_sql_expr,
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
  [sym_sql_integer] = {
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
  field_jinja_argument_list = 1,
  field_jinja_fn_name = 2,
  field_key = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_jinja_argument_list] = "jinja_argument_list",
  [field_jinja_fn_name] = "jinja_fn_name",
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_jinja_argument_list, 1},
    {field_jinja_fn_name, 0},
  [2] =
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
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == '=') ADVANCE(50);
      if (lookahead == 'F') ADVANCE(51);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '}') ADVANCE(48);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(75);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(79);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(65);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(73);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(61);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(38);
      if (lookahead == '\'') ADVANCE(34);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(56);
      if (lookahead == '[') ADVANCE(44);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '{') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 13:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 14:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 16:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      END_STATE();
    case 23:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 24:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 26:
      if (eof) ADVANCE(28);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '{') ADVANCE(3);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(21);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(19);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(7);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(91);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(29);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_sql_with_clause_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_sql_select_clause_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token2);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_sql_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 26},
  [20] = {.lex_state = 26},
  [21] = {.lex_state = 26},
  [22] = {.lex_state = 26},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 26},
  [26] = {.lex_state = 26},
  [27] = {.lex_state = 26},
  [28] = {.lex_state = 26},
  [29] = {.lex_state = 26},
  [30] = {.lex_state = 26},
  [31] = {.lex_state = 26},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 26},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 26},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 26},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 26},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 26},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 26},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 26},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 26},
  [56] = {.lex_state = 26},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 26},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 26},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 26},
  [64] = {.lex_state = 26},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 26},
  [67] = {.lex_state = 26},
  [68] = {.lex_state = 26},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 26},
  [71] = {.lex_state = 26},
  [72] = {.lex_state = 26},
  [73] = {.lex_state = 26},
  [74] = {.lex_state = 26},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 26},
  [77] = {.lex_state = 26},
  [78] = {.lex_state = 26},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 26},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 26},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 26},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 26},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 26},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 26},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
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
  [136] = {.lex_state = 26},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 26},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 26},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 26},
  [152] = {.lex_state = 39},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 26},
  [156] = {.lex_state = 35},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 35},
  [162] = {.lex_state = 39},
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
    [aux_sym_sql_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_sql_order_by_clause_token2] = ACTIONS(1),
    [aux_sym_sql_limit_clause_token1] = ACTIONS(1),
    [sym_sql_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(160),
    [sym_jinja_block] = STATE(50),
    [sym_sql_select_statement] = STATE(158),
    [sym_sql_with_clause] = STATE(104),
    [sym_sql_select_clause] = STATE(22),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(3),
    [aux_sym_sql_with_clause_token1] = ACTIONS(5),
    [aux_sym_sql_select_clause_token1] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(9), 1,
      anon_sym_COMMA,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(84), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [37] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_jinja_identifier,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(95), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [74] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_jinja_identifier,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(116), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [108] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_jinja_identifier,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(116), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [142] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_jinja_identifier,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(116), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [176] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(39), 1,
      sym_jinja_identifier,
    STATE(90), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [212] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_jinja_identifier,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(116), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [246] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_jinja_identifier,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [282] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_jinja_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [315] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_jinja_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [348] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_jinja_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [381] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_jinja_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [414] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(116), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [445] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_jinja_identifier,
    STATE(141), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [475] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_jinja_identifier,
    STATE(114), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [505] = 8,
    ACTIONS(55), 1,
      anon_sym_SQUOTE,
    ACTIONS(57), 1,
      anon_sym_DQUOTE,
    ACTIONS(61), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      anon_sym_LBRACE,
    ACTIONS(65), 1,
      sym_jinja_identifier,
    STATE(115), 1,
      sym_jinja_expr,
    ACTIONS(59), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(125), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [535] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      sym_jinja_identifier,
    STATE(118), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(78), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [565] = 7,
    ACTIONS(69), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(71), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(73), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(31), 1,
      sym_sql_from_clause,
    STATE(64), 1,
      sym_sql_order_by_clause,
    STATE(107), 1,
      sym_sql_limit_clause,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [588] = 2,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [601] = 4,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      aux_sym_sql_cte_token1,
    STATE(24), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [618] = 7,
    ACTIONS(69), 1,
      aux_sym_sql_from_clause_token1,
    ACTIONS(71), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(73), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(34), 1,
      sym_sql_from_clause,
    STATE(57), 1,
      sym_sql_order_by_clause,
    STATE(106), 1,
      sym_sql_limit_clause,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [641] = 3,
    ACTIONS(89), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(91), 1,
      sym_sql_identifier,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [655] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [669] = 2,
    ACTIONS(83), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [681] = 1,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [691] = 3,
    ACTIONS(97), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [705] = 1,
    ACTIONS(100), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [715] = 1,
    ACTIONS(102), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_with_clause_token1,
      aux_sym_sql_select_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [725] = 1,
    ACTIONS(104), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [735] = 5,
    ACTIONS(71), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(73), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(77), 1,
      sym_sql_order_by_clause,
    STATE(117), 1,
      sym_sql_limit_clause,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [752] = 5,
    ACTIONS(108), 1,
      sym_sql_identifier,
    ACTIONS(110), 1,
      anon_sym_STAR,
    STATE(21), 1,
      sym_sql_expr,
    STATE(52), 1,
      sym_sql_column_list,
    STATE(26), 2,
      sym_sql_alias,
      sym_sql_fn,
  [769] = 3,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [782] = 5,
    ACTIONS(71), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(73), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(64), 1,
      sym_sql_order_by_clause,
    STATE(107), 1,
      sym_sql_limit_clause,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [799] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym_jinja_pair,
    STATE(138), 1,
      sym_jinja_lit_string,
  [818] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [831] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_jinja_pair,
    STATE(138), 1,
      sym_jinja_lit_string,
  [850] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(129), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [863] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_jinja_pair,
    STATE(138), 1,
      sym_jinja_lit_string,
  [879] = 1,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [887] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [899] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [911] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_jinja_pair,
    STATE(138), 1,
      sym_jinja_lit_string,
  [927] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_jinja_pair,
    STATE(138), 1,
      sym_jinja_lit_string,
  [943] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      sym_jinja_pair,
    STATE(138), 1,
      sym_jinja_lit_string,
  [959] = 1,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [967] = 1,
    ACTIONS(152), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [975] = 1,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [983] = 4,
    ACTIONS(108), 1,
      sym_sql_identifier,
    STATE(56), 1,
      sym_sql_expr,
    STATE(146), 1,
      sym_sql_arg_list,
    STATE(26), 2,
      sym_sql_alias,
      sym_sql_fn,
  [997] = 5,
    ACTIONS(5), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(7), 1,
      aux_sym_sql_select_clause_token1,
    STATE(22), 1,
      sym_sql_select_clause,
    STATE(104), 1,
      sym_sql_with_clause,
    STATE(140), 1,
      sym_sql_select_statement,
  [1013] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_sql_order_by_expression_repeat1,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [1025] = 1,
    ACTIONS(156), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1033] = 1,
    ACTIONS(79), 5,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [1041] = 5,
    ACTIONS(5), 1,
      aux_sym_sql_with_clause_token1,
    ACTIONS(7), 1,
      aux_sym_sql_select_clause_token1,
    STATE(22), 1,
      sym_sql_select_clause,
    STATE(104), 1,
      sym_sql_with_clause,
    STATE(149), 1,
      sym_sql_select_statement,
  [1057] = 1,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [1064] = 4,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(83), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_sql_column_list_repeat1,
  [1077] = 3,
    ACTIONS(73), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(107), 1,
      sym_sql_limit_clause,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1088] = 1,
    ACTIONS(160), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1095] = 1,
    ACTIONS(162), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1102] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(164), 1,
      sym_sql_identifier,
    STATE(36), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [1113] = 1,
    ACTIONS(166), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1120] = 3,
    ACTIONS(108), 1,
      sym_sql_identifier,
    STATE(25), 1,
      sym_sql_expr,
    STATE(26), 2,
      sym_sql_alias,
      sym_sql_fn,
  [1131] = 1,
    ACTIONS(168), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1138] = 3,
    ACTIONS(73), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(117), 1,
      sym_sql_limit_clause,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1149] = 1,
    ACTIONS(170), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1156] = 1,
    ACTIONS(172), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1163] = 1,
    ACTIONS(174), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1170] = 1,
    ACTIONS(176), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1177] = 4,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_jinja_pair,
    STATE(138), 1,
      sym_jinja_lit_string,
  [1190] = 1,
    ACTIONS(178), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1197] = 1,
    ACTIONS(180), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1204] = 1,
    ACTIONS(182), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1211] = 1,
    ACTIONS(184), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1218] = 1,
    ACTIONS(186), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1225] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(164), 1,
      sym_sql_identifier,
    STATE(48), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [1236] = 1,
    ACTIONS(188), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1243] = 3,
    ACTIONS(73), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(105), 1,
      sym_sql_limit_clause,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1254] = 1,
    ACTIONS(192), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1261] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(27), 1,
      aux_sym_sql_column_list_repeat1,
  [1271] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(199), 1,
      aux_sym_sql_select_clause_token1,
    STATE(80), 1,
      aux_sym_sql_with_clause_repeat1,
  [1281] = 3,
    ACTIONS(201), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_jinja_list_repeat1,
  [1291] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(207), 1,
      aux_sym_sql_select_clause_token1,
    STATE(98), 1,
      aux_sym_sql_with_clause_repeat1,
  [1301] = 3,
    ACTIONS(209), 1,
      sym_sql_identifier,
    STATE(82), 1,
      sym_sql_cte,
    STATE(139), 1,
      sym_sql_cte_name,
  [1311] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(100), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1321] = 3,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_EQ,
    STATE(58), 1,
      sym_jinja_argument_list,
  [1331] = 3,
    ACTIONS(219), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1341] = 1,
    ACTIONS(224), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [1347] = 3,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    STATE(94), 1,
      aux_sym_jinja_dict_repeat1,
  [1357] = 3,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_jinja_dict_repeat1,
  [1367] = 3,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      aux_sym_jinja_list_repeat1,
  [1377] = 3,
    ACTIONS(236), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_jinja_list_repeat1,
  [1387] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_jinja_list_repeat1,
  [1397] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_jinja_list_repeat1,
  [1407] = 3,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_jinja_dict_repeat1,
  [1417] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(97), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1427] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(96), 1,
      aux_sym_jinja_dict_repeat1,
  [1437] = 3,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1447] = 3,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      aux_sym_sql_select_clause_token1,
    STATE(80), 1,
      aux_sym_sql_with_clause_repeat1,
  [1457] = 3,
    ACTIONS(209), 1,
      sym_sql_identifier,
    STATE(111), 1,
      sym_sql_cte,
    STATE(139), 1,
      sym_sql_cte_name,
  [1467] = 3,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1477] = 3,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(89), 1,
      aux_sym_jinja_dict_repeat1,
  [1487] = 1,
    ACTIONS(172), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1492] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1497] = 2,
    ACTIONS(7), 1,
      aux_sym_sql_select_clause_token1,
    STATE(19), 1,
      sym_sql_select_clause,
  [1504] = 1,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1509] = 1,
    ACTIONS(67), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1514] = 1,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1519] = 2,
    ACTIONS(268), 1,
      sym_sql_identifier,
    STATE(87), 1,
      sym_sql_order_by_expression,
  [1526] = 1,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1531] = 2,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym_jinja_argument_list,
  [1538] = 1,
    ACTIONS(199), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [1543] = 2,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      sym_jinja_argument_list,
  [1550] = 1,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1555] = 1,
    ACTIONS(274), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1560] = 1,
    ACTIONS(276), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1565] = 1,
    ACTIONS(222), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1570] = 1,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1575] = 1,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1580] = 1,
    ACTIONS(278), 2,
      anon_sym_COMMA,
      aux_sym_sql_select_clause_token1,
  [1585] = 1,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1590] = 1,
    ACTIONS(180), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1595] = 1,
    ACTIONS(170), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1600] = 1,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1605] = 1,
    ACTIONS(174), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1610] = 1,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1615] = 1,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1620] = 1,
    ACTIONS(186), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1625] = 1,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1630] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1635] = 1,
    ACTIONS(176), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1640] = 1,
    ACTIONS(178), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1645] = 1,
    ACTIONS(184), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1650] = 1,
    ACTIONS(166), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1655] = 1,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
  [1659] = 1,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
  [1663] = 1,
    ACTIONS(282), 1,
      aux_sym_sql_cte_token1,
  [1667] = 1,
    ACTIONS(284), 1,
      sym_sql_identifier,
  [1671] = 1,
    ACTIONS(286), 1,
      anon_sym_COLON,
  [1675] = 1,
    ACTIONS(288), 1,
      aux_sym_sql_cte_token1,
  [1679] = 1,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
  [1683] = 1,
    ACTIONS(292), 1,
      anon_sym_RBRACE_RBRACE,
  [1687] = 1,
    ACTIONS(234), 1,
      anon_sym_RBRACK,
  [1691] = 1,
    ACTIONS(294), 1,
      anon_sym_SQUOTE,
  [1695] = 1,
    ACTIONS(294), 1,
      anon_sym_DQUOTE,
  [1699] = 1,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
  [1703] = 1,
    ACTIONS(296), 1,
      anon_sym_RPAREN,
  [1707] = 1,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
  [1711] = 1,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
  [1715] = 1,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
  [1719] = 1,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [1723] = 1,
    ACTIONS(302), 1,
      aux_sym_sql_order_by_clause_token2,
  [1727] = 1,
    ACTIONS(304), 1,
      aux_sym_jinja_lit_string_token2,
  [1731] = 1,
    ACTIONS(306), 1,
      sym_sql_identifier,
  [1735] = 1,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
  [1739] = 1,
    ACTIONS(308), 1,
      sym_sql_integer,
  [1743] = 1,
    ACTIONS(310), 1,
      aux_sym_jinja_lit_string_token1,
  [1747] = 1,
    ACTIONS(280), 1,
      anon_sym_SQUOTE,
  [1751] = 1,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
  [1755] = 1,
    ACTIONS(314), 1,
      sym_sql_identifier,
  [1759] = 1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [1763] = 1,
    ACTIONS(318), 1,
      aux_sym_jinja_lit_string_token1,
  [1767] = 1,
    ACTIONS(320), 1,
      aux_sym_jinja_lit_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 176,
  [SMALL_STATE(8)] = 212,
  [SMALL_STATE(9)] = 246,
  [SMALL_STATE(10)] = 282,
  [SMALL_STATE(11)] = 315,
  [SMALL_STATE(12)] = 348,
  [SMALL_STATE(13)] = 381,
  [SMALL_STATE(14)] = 414,
  [SMALL_STATE(15)] = 445,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 505,
  [SMALL_STATE(18)] = 535,
  [SMALL_STATE(19)] = 565,
  [SMALL_STATE(20)] = 588,
  [SMALL_STATE(21)] = 601,
  [SMALL_STATE(22)] = 618,
  [SMALL_STATE(23)] = 641,
  [SMALL_STATE(24)] = 655,
  [SMALL_STATE(25)] = 669,
  [SMALL_STATE(26)] = 681,
  [SMALL_STATE(27)] = 691,
  [SMALL_STATE(28)] = 705,
  [SMALL_STATE(29)] = 715,
  [SMALL_STATE(30)] = 725,
  [SMALL_STATE(31)] = 735,
  [SMALL_STATE(32)] = 752,
  [SMALL_STATE(33)] = 769,
  [SMALL_STATE(34)] = 782,
  [SMALL_STATE(35)] = 799,
  [SMALL_STATE(36)] = 818,
  [SMALL_STATE(37)] = 831,
  [SMALL_STATE(38)] = 850,
  [SMALL_STATE(39)] = 863,
  [SMALL_STATE(40)] = 879,
  [SMALL_STATE(41)] = 887,
  [SMALL_STATE(42)] = 899,
  [SMALL_STATE(43)] = 911,
  [SMALL_STATE(44)] = 927,
  [SMALL_STATE(45)] = 943,
  [SMALL_STATE(46)] = 959,
  [SMALL_STATE(47)] = 967,
  [SMALL_STATE(48)] = 975,
  [SMALL_STATE(49)] = 983,
  [SMALL_STATE(50)] = 997,
  [SMALL_STATE(51)] = 1013,
  [SMALL_STATE(52)] = 1025,
  [SMALL_STATE(53)] = 1033,
  [SMALL_STATE(54)] = 1041,
  [SMALL_STATE(55)] = 1057,
  [SMALL_STATE(56)] = 1064,
  [SMALL_STATE(57)] = 1077,
  [SMALL_STATE(58)] = 1088,
  [SMALL_STATE(59)] = 1095,
  [SMALL_STATE(60)] = 1102,
  [SMALL_STATE(61)] = 1113,
  [SMALL_STATE(62)] = 1120,
  [SMALL_STATE(63)] = 1131,
  [SMALL_STATE(64)] = 1138,
  [SMALL_STATE(65)] = 1149,
  [SMALL_STATE(66)] = 1156,
  [SMALL_STATE(67)] = 1163,
  [SMALL_STATE(68)] = 1170,
  [SMALL_STATE(69)] = 1177,
  [SMALL_STATE(70)] = 1190,
  [SMALL_STATE(71)] = 1197,
  [SMALL_STATE(72)] = 1204,
  [SMALL_STATE(73)] = 1211,
  [SMALL_STATE(74)] = 1218,
  [SMALL_STATE(75)] = 1225,
  [SMALL_STATE(76)] = 1236,
  [SMALL_STATE(77)] = 1243,
  [SMALL_STATE(78)] = 1254,
  [SMALL_STATE(79)] = 1261,
  [SMALL_STATE(80)] = 1271,
  [SMALL_STATE(81)] = 1281,
  [SMALL_STATE(82)] = 1291,
  [SMALL_STATE(83)] = 1301,
  [SMALL_STATE(84)] = 1311,
  [SMALL_STATE(85)] = 1321,
  [SMALL_STATE(86)] = 1331,
  [SMALL_STATE(87)] = 1341,
  [SMALL_STATE(88)] = 1347,
  [SMALL_STATE(89)] = 1357,
  [SMALL_STATE(90)] = 1367,
  [SMALL_STATE(91)] = 1377,
  [SMALL_STATE(92)] = 1387,
  [SMALL_STATE(93)] = 1397,
  [SMALL_STATE(94)] = 1407,
  [SMALL_STATE(95)] = 1417,
  [SMALL_STATE(96)] = 1427,
  [SMALL_STATE(97)] = 1437,
  [SMALL_STATE(98)] = 1447,
  [SMALL_STATE(99)] = 1457,
  [SMALL_STATE(100)] = 1467,
  [SMALL_STATE(101)] = 1477,
  [SMALL_STATE(102)] = 1487,
  [SMALL_STATE(103)] = 1492,
  [SMALL_STATE(104)] = 1497,
  [SMALL_STATE(105)] = 1504,
  [SMALL_STATE(106)] = 1509,
  [SMALL_STATE(107)] = 1514,
  [SMALL_STATE(108)] = 1519,
  [SMALL_STATE(109)] = 1526,
  [SMALL_STATE(110)] = 1531,
  [SMALL_STATE(111)] = 1538,
  [SMALL_STATE(112)] = 1543,
  [SMALL_STATE(113)] = 1550,
  [SMALL_STATE(114)] = 1555,
  [SMALL_STATE(115)] = 1560,
  [SMALL_STATE(116)] = 1565,
  [SMALL_STATE(117)] = 1570,
  [SMALL_STATE(118)] = 1575,
  [SMALL_STATE(119)] = 1580,
  [SMALL_STATE(120)] = 1585,
  [SMALL_STATE(121)] = 1590,
  [SMALL_STATE(122)] = 1595,
  [SMALL_STATE(123)] = 1600,
  [SMALL_STATE(124)] = 1605,
  [SMALL_STATE(125)] = 1610,
  [SMALL_STATE(126)] = 1615,
  [SMALL_STATE(127)] = 1620,
  [SMALL_STATE(128)] = 1625,
  [SMALL_STATE(129)] = 1630,
  [SMALL_STATE(130)] = 1635,
  [SMALL_STATE(131)] = 1640,
  [SMALL_STATE(132)] = 1645,
  [SMALL_STATE(133)] = 1650,
  [SMALL_STATE(134)] = 1655,
  [SMALL_STATE(135)] = 1659,
  [SMALL_STATE(136)] = 1663,
  [SMALL_STATE(137)] = 1667,
  [SMALL_STATE(138)] = 1671,
  [SMALL_STATE(139)] = 1675,
  [SMALL_STATE(140)] = 1679,
  [SMALL_STATE(141)] = 1683,
  [SMALL_STATE(142)] = 1687,
  [SMALL_STATE(143)] = 1691,
  [SMALL_STATE(144)] = 1695,
  [SMALL_STATE(145)] = 1699,
  [SMALL_STATE(146)] = 1703,
  [SMALL_STATE(147)] = 1707,
  [SMALL_STATE(148)] = 1711,
  [SMALL_STATE(149)] = 1715,
  [SMALL_STATE(150)] = 1719,
  [SMALL_STATE(151)] = 1723,
  [SMALL_STATE(152)] = 1727,
  [SMALL_STATE(153)] = 1731,
  [SMALL_STATE(154)] = 1735,
  [SMALL_STATE(155)] = 1739,
  [SMALL_STATE(156)] = 1743,
  [SMALL_STATE(157)] = 1747,
  [SMALL_STATE(158)] = 1751,
  [SMALL_STATE(159)] = 1755,
  [SMALL_STATE(160)] = 1759,
  [SMALL_STATE(161)] = 1763,
  [SMALL_STATE(162)] = 1767,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_expr, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(62),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_alias, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_fn, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2), SHIFT_REPEAT(75),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_order_by_expression_repeat1, 2), SHIFT_REPEAT(153),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_clause, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 4),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expr, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_arg_list, 2),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2), SHIFT_REPEAT(99),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_with_clause_repeat1, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(14),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(18),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(69),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_with_clause, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 5),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 5),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
