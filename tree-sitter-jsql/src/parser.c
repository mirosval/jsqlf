#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 150
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 57
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  aux_sym_sql_cte_token1 = 19,
  aux_sym_sql_cte_token2 = 20,
  aux_sym_sql_select_token1 = 21,
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
  sym_sql_cte = 41,
  sym_sql_cte_name = 42,
  sym_sql_select = 43,
  sym_sql_column_list = 44,
  sym_sql_from_clause = 45,
  sym_sql_order_by_clause = 46,
  sym_sql_order_by_expression = 47,
  sym_sql_limit_clause = 48,
  sym_sql_table_name = 49,
  aux_sym_jinja_argument_list_repeat1 = 50,
  aux_sym_jinja_list_repeat1 = 51,
  aux_sym_jinja_dict_repeat1 = 52,
  aux_sym_sql_select_statement_repeat1 = 53,
  aux_sym_sql_cte_repeat1 = 54,
  aux_sym_sql_column_list_repeat1 = 55,
  aux_sym_sql_from_clause_repeat1 = 56,
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
  [aux_sym_sql_cte_token1] = "with",
  [aux_sym_sql_cte_token2] = "as",
  [aux_sym_sql_select_token1] = "select",
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
  [sym_sql_cte] = "sql_cte",
  [sym_sql_cte_name] = "sql_cte_name",
  [sym_sql_select] = "sql_select",
  [sym_sql_column_list] = "sql_column_list",
  [sym_sql_from_clause] = "sql_from_clause",
  [sym_sql_order_by_clause] = "sql_order_by_clause",
  [sym_sql_order_by_expression] = "sql_order_by_expression",
  [sym_sql_limit_clause] = "sql_limit_clause",
  [sym_sql_table_name] = "sql_table_name",
  [aux_sym_jinja_argument_list_repeat1] = "jinja_argument_list_repeat1",
  [aux_sym_jinja_list_repeat1] = "jinja_list_repeat1",
  [aux_sym_jinja_dict_repeat1] = "jinja_dict_repeat1",
  [aux_sym_sql_select_statement_repeat1] = "sql_select_statement_repeat1",
  [aux_sym_sql_cte_repeat1] = "sql_cte_repeat1",
  [aux_sym_sql_column_list_repeat1] = "sql_column_list_repeat1",
  [aux_sym_sql_from_clause_repeat1] = "sql_from_clause_repeat1",
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
  [aux_sym_sql_cte_token1] = aux_sym_sql_cte_token1,
  [aux_sym_sql_cte_token2] = aux_sym_sql_cte_token2,
  [aux_sym_sql_select_token1] = aux_sym_sql_select_token1,
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
  [sym_sql_cte] = sym_sql_cte,
  [sym_sql_cte_name] = sym_sql_cte_name,
  [sym_sql_select] = sym_sql_select,
  [sym_sql_column_list] = sym_sql_column_list,
  [sym_sql_from_clause] = sym_sql_from_clause,
  [sym_sql_order_by_clause] = sym_sql_order_by_clause,
  [sym_sql_order_by_expression] = sym_sql_order_by_expression,
  [sym_sql_limit_clause] = sym_sql_limit_clause,
  [sym_sql_table_name] = sym_sql_table_name,
  [aux_sym_jinja_argument_list_repeat1] = aux_sym_jinja_argument_list_repeat1,
  [aux_sym_jinja_list_repeat1] = aux_sym_jinja_list_repeat1,
  [aux_sym_jinja_dict_repeat1] = aux_sym_jinja_dict_repeat1,
  [aux_sym_sql_select_statement_repeat1] = aux_sym_sql_select_statement_repeat1,
  [aux_sym_sql_cte_repeat1] = aux_sym_sql_cte_repeat1,
  [aux_sym_sql_column_list_repeat1] = aux_sym_sql_column_list_repeat1,
  [aux_sym_sql_from_clause_repeat1] = aux_sym_sql_from_clause_repeat1,
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
  [aux_sym_sql_cte_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_cte_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sql_select_token1] = {
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
  [sym_sql_cte] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_cte_name] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_select] = {
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
  [aux_sym_sql_select_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sql_cte_repeat1] = {
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
      if (lookahead == '*') ADVANCE(94);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
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
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(85);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      END_STATE();
    case 12:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 17:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 18:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 20:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 22:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(82);
      END_STATE();
    case 23:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(98);
      END_STATE();
    case 24:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == ')') ADVANCE(33);
      if (lookahead == ',') ADVANCE(32);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ']') ADVANCE(45);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '}') ADVANCE(5);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(22);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(26);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(20);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(12);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(21);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(8);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
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
          lookahead == 'm') ADVANCE(95);
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
          lookahead == 'r') ADVANCE(96);
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
          lookahead == 't') ADVANCE(98);
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
          lookahead == 'y') ADVANCE(97);
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
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_sql_cte_token2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_sql_select_token1);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_sql_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
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
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 27},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 27},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 27},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 27},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 27},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 27},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 27},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 27},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 27},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 27},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 27},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 39},
  [138] = {.lex_state = 27},
  [139] = {.lex_state = 35},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 27},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 27},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 35},
  [149] = {.lex_state = 39},
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
    [aux_sym_sql_cte_token1] = ACTIONS(1),
    [aux_sym_sql_cte_token2] = ACTIONS(1),
    [aux_sym_sql_select_token1] = ACTIONS(1),
    [sym_sql_identifier] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [aux_sym_sql_from_clause_token1] = ACTIONS(1),
    [aux_sym_sql_order_by_clause_token1] = ACTIONS(1),
    [aux_sym_sql_order_by_clause_token2] = ACTIONS(1),
    [aux_sym_sql_limit_clause_token1] = ACTIONS(1),
    [sym_sql_integer] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(145),
    [sym_jinja_block] = STATE(26),
    [sym_sql_select_statement] = STATE(144),
    [sym_sql_cte] = STATE(32),
    [sym_sql_select] = STATE(143),
    [aux_sym_sql_select_statement_repeat1] = STATE(32),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(3),
    [aux_sym_sql_cte_token1] = ACTIONS(5),
    [aux_sym_sql_select_token1] = ACTIONS(7),
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
    STATE(71), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(46), 5,
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
    STATE(73), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(46), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [74] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(29), 1,
      anon_sym_COMMA,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(33), 1,
      sym_jinja_identifier,
    STATE(65), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(46), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [110] = 9,
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
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(93), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(46), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [144] = 9,
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
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(93), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(46), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [178] = 9,
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
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(93), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(46), 5,
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
    STATE(93), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(46), 5,
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
    ACTIONS(33), 1,
      sym_jinja_identifier,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(78), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(46), 5,
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
    ACTIONS(33), 1,
      sym_jinja_identifier,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(46), 5,
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
    ACTIONS(33), 1,
      sym_jinja_identifier,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(46), 5,
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
    ACTIONS(33), 1,
      sym_jinja_identifier,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(46), 5,
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
    ACTIONS(33), 1,
      sym_jinja_identifier,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(46), 5,
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
    STATE(93), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(46), 5,
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
    ACTIONS(33), 1,
      sym_jinja_identifier,
    STATE(127), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(46), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [475] = 8,
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
    STATE(97), 1,
      sym_jinja_expr,
    ACTIONS(59), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(112), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [505] = 8,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      sym_jinja_identifier,
    STATE(92), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(46), 5,
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
    ACTIONS(33), 1,
      sym_jinja_identifier,
    STATE(95), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(46), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [565] = 1,
    ACTIONS(67), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [575] = 5,
    ACTIONS(71), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(73), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(51), 1,
      sym_sql_order_by_clause,
    STATE(94), 1,
      sym_sql_limit_clause,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [592] = 3,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [605] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [618] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(84), 1,
      anon_sym_COMMA,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(85), 1,
      sym_jinja_pair,
    STATE(125), 1,
      sym_jinja_lit_string,
  [637] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [650] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
    STATE(76), 1,
      sym_jinja_pair,
    STATE(125), 1,
      sym_jinja_lit_string,
  [669] = 5,
    ACTIONS(5), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(143), 1,
      sym_sql_select,
    STATE(147), 1,
      sym_sql_select_statement,
    STATE(32), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [686] = 5,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      sym_sql_identifier,
    STATE(45), 1,
      aux_sym_sql_cte_repeat1,
    STATE(124), 1,
      sym_sql_cte_name,
    ACTIONS(96), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [703] = 3,
    ACTIONS(102), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [716] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [728] = 1,
    ACTIONS(75), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [736] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_jinja_pair,
    STATE(125), 1,
      sym_jinja_lit_string,
  [752] = 4,
    ACTIONS(5), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(119), 1,
      sym_sql_select,
    STATE(62), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [766] = 1,
    ACTIONS(111), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [774] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_jinja_pair,
    STATE(125), 1,
      sym_jinja_lit_string,
  [790] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(115), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [802] = 1,
    ACTIONS(100), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [810] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_jinja_pair,
    STATE(125), 1,
      sym_jinja_lit_string,
  [826] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    STATE(98), 1,
      sym_jinja_pair,
    STATE(125), 1,
      sym_jinja_lit_string,
  [842] = 1,
    ACTIONS(121), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [850] = 1,
    ACTIONS(123), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [857] = 1,
    ACTIONS(125), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [864] = 1,
    ACTIONS(127), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [871] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(132), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [882] = 1,
    ACTIONS(134), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [889] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(136), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [900] = 1,
    ACTIONS(138), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [907] = 1,
    ACTIONS(140), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [914] = 3,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(96), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [925] = 1,
    ACTIONS(142), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [932] = 3,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(146), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [943] = 3,
    ACTIONS(73), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(90), 1,
      sym_sql_limit_clause,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [954] = 1,
    ACTIONS(150), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [961] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(152), 1,
      sym_sql_identifier,
    STATE(24), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [972] = 1,
    ACTIONS(154), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [979] = 1,
    ACTIONS(156), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [986] = 1,
    ACTIONS(158), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [993] = 4,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(98), 1,
      sym_jinja_pair,
    STATE(125), 1,
      sym_jinja_lit_string,
  [1006] = 1,
    ACTIONS(160), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1013] = 1,
    ACTIONS(162), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1020] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(152), 1,
      sym_sql_identifier,
    STATE(30), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [1031] = 1,
    ACTIONS(164), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1038] = 3,
    ACTIONS(166), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(169), 1,
      aux_sym_sql_select_token1,
    STATE(62), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [1049] = 1,
    ACTIONS(171), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1056] = 1,
    ACTIONS(173), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [1062] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_jinja_list_repeat1,
  [1072] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      aux_sym_sql_from_clause_token1,
    STATE(28), 1,
      aux_sym_sql_column_list_repeat1,
  [1082] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_jinja_list_repeat1,
  [1092] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_jinja_dict_repeat1,
  [1102] = 3,
    ACTIONS(185), 1,
      sym_sql_identifier,
    ACTIONS(187), 1,
      anon_sym_STAR,
    STATE(96), 1,
      sym_sql_column_list,
  [1112] = 3,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 1,
      anon_sym_EQ,
    STATE(40), 1,
      sym_jinja_argument_list,
  [1122] = 3,
    ACTIONS(193), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1132] = 3,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(197), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1142] = 3,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1152] = 3,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_jinja_dict_repeat1,
  [1162] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(77), 1,
      aux_sym_jinja_list_repeat1,
  [1172] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym_jinja_dict_repeat1,
  [1182] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    STATE(77), 1,
      aux_sym_jinja_list_repeat1,
  [1192] = 3,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_jinja_list_repeat1,
  [1202] = 1,
    ACTIONS(220), 3,
      anon_sym_COMMA,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [1208] = 3,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_jinja_dict_repeat1,
  [1218] = 2,
    ACTIONS(227), 1,
      anon_sym_COMMA,
    ACTIONS(230), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [1226] = 3,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(232), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1236] = 3,
    ACTIONS(234), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1246] = 3,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      aux_sym_sql_from_clause_token1,
    STATE(66), 1,
      aux_sym_sql_column_list_repeat1,
  [1256] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_jinja_dict_repeat1,
  [1266] = 2,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(115), 1,
      sym_jinja_argument_list,
  [1273] = 1,
    ACTIONS(171), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1278] = 2,
    ACTIONS(247), 1,
      sym_sql_identifier,
    STATE(64), 1,
      sym_sql_order_by_expression,
  [1285] = 1,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1290] = 1,
    ACTIONS(251), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1295] = 2,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(126), 1,
      sym_sql_select,
  [1302] = 1,
    ACTIONS(253), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1307] = 1,
    ACTIONS(237), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1312] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1317] = 1,
    ACTIONS(214), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1322] = 2,
    ACTIONS(255), 1,
      aux_sym_sql_from_clause_token1,
    STATE(20), 1,
      sym_sql_from_clause,
  [1329] = 1,
    ACTIONS(257), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1334] = 1,
    ACTIONS(225), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1339] = 2,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_jinja_argument_list,
  [1346] = 1,
    ACTIONS(142), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1351] = 1,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1356] = 1,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1361] = 2,
    ACTIONS(259), 1,
      sym_sql_identifier,
    STATE(124), 1,
      sym_sql_cte_name,
  [1368] = 1,
    ACTIONS(160), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1373] = 1,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1378] = 1,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1383] = 2,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(121), 1,
      sym_sql_select,
  [1390] = 1,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1395] = 1,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1400] = 2,
    ACTIONS(259), 1,
      sym_sql_identifier,
    STATE(128), 1,
      sym_sql_cte_name,
  [1407] = 1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1412] = 1,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1417] = 1,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1422] = 1,
    ACTIONS(140), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1427] = 1,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1432] = 1,
    ACTIONS(111), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1437] = 1,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1442] = 1,
    ACTIONS(261), 1,
      aux_sym_sql_cte_token2,
  [1446] = 1,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
  [1450] = 1,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
  [1454] = 1,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [1458] = 1,
    ACTIONS(267), 1,
      anon_sym_LPAREN,
  [1462] = 1,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
  [1466] = 1,
    ACTIONS(269), 1,
      aux_sym_sql_cte_token2,
  [1470] = 1,
    ACTIONS(271), 1,
      anon_sym_COLON,
  [1474] = 1,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
  [1478] = 1,
    ACTIONS(275), 1,
      anon_sym_RBRACE_RBRACE,
  [1482] = 1,
    ACTIONS(277), 1,
      aux_sym_sql_cte_token2,
  [1486] = 1,
    ACTIONS(279), 1,
      sym_sql_identifier,
  [1490] = 1,
    ACTIONS(281), 1,
      anon_sym_SQUOTE,
  [1494] = 1,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
  [1498] = 1,
    ACTIONS(218), 1,
      anon_sym_RBRACK,
  [1502] = 1,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
  [1506] = 1,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
  [1510] = 1,
    ACTIONS(285), 1,
      anon_sym_SQUOTE,
  [1514] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
  [1518] = 1,
    ACTIONS(287), 1,
      aux_sym_jinja_lit_string_token2,
  [1522] = 1,
    ACTIONS(239), 1,
      aux_sym_sql_from_clause_token1,
  [1526] = 1,
    ACTIONS(289), 1,
      aux_sym_jinja_lit_string_token1,
  [1530] = 1,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
  [1534] = 1,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
  [1538] = 1,
    ACTIONS(291), 1,
      sym_sql_integer,
  [1542] = 1,
    ACTIONS(293), 1,
      ts_builtin_sym_end,
  [1546] = 1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [1550] = 1,
    ACTIONS(297), 1,
      ts_builtin_sym_end,
  [1554] = 1,
    ACTIONS(299), 1,
      aux_sym_sql_order_by_clause_token2,
  [1558] = 1,
    ACTIONS(301), 1,
      ts_builtin_sym_end,
  [1562] = 1,
    ACTIONS(303), 1,
      aux_sym_jinja_lit_string_token1,
  [1566] = 1,
    ACTIONS(305), 1,
      aux_sym_jinja_lit_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 74,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 178,
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
  [SMALL_STATE(20)] = 575,
  [SMALL_STATE(21)] = 592,
  [SMALL_STATE(22)] = 605,
  [SMALL_STATE(23)] = 618,
  [SMALL_STATE(24)] = 637,
  [SMALL_STATE(25)] = 650,
  [SMALL_STATE(26)] = 669,
  [SMALL_STATE(27)] = 686,
  [SMALL_STATE(28)] = 703,
  [SMALL_STATE(29)] = 716,
  [SMALL_STATE(30)] = 728,
  [SMALL_STATE(31)] = 736,
  [SMALL_STATE(32)] = 752,
  [SMALL_STATE(33)] = 766,
  [SMALL_STATE(34)] = 774,
  [SMALL_STATE(35)] = 790,
  [SMALL_STATE(36)] = 802,
  [SMALL_STATE(37)] = 810,
  [SMALL_STATE(38)] = 826,
  [SMALL_STATE(39)] = 842,
  [SMALL_STATE(40)] = 850,
  [SMALL_STATE(41)] = 857,
  [SMALL_STATE(42)] = 864,
  [SMALL_STATE(43)] = 871,
  [SMALL_STATE(44)] = 882,
  [SMALL_STATE(45)] = 889,
  [SMALL_STATE(46)] = 900,
  [SMALL_STATE(47)] = 907,
  [SMALL_STATE(48)] = 914,
  [SMALL_STATE(49)] = 925,
  [SMALL_STATE(50)] = 932,
  [SMALL_STATE(51)] = 943,
  [SMALL_STATE(52)] = 954,
  [SMALL_STATE(53)] = 961,
  [SMALL_STATE(54)] = 972,
  [SMALL_STATE(55)] = 979,
  [SMALL_STATE(56)] = 986,
  [SMALL_STATE(57)] = 993,
  [SMALL_STATE(58)] = 1006,
  [SMALL_STATE(59)] = 1013,
  [SMALL_STATE(60)] = 1020,
  [SMALL_STATE(61)] = 1031,
  [SMALL_STATE(62)] = 1038,
  [SMALL_STATE(63)] = 1049,
  [SMALL_STATE(64)] = 1056,
  [SMALL_STATE(65)] = 1062,
  [SMALL_STATE(66)] = 1072,
  [SMALL_STATE(67)] = 1082,
  [SMALL_STATE(68)] = 1092,
  [SMALL_STATE(69)] = 1102,
  [SMALL_STATE(70)] = 1112,
  [SMALL_STATE(71)] = 1122,
  [SMALL_STATE(72)] = 1132,
  [SMALL_STATE(73)] = 1142,
  [SMALL_STATE(74)] = 1152,
  [SMALL_STATE(75)] = 1162,
  [SMALL_STATE(76)] = 1172,
  [SMALL_STATE(77)] = 1182,
  [SMALL_STATE(78)] = 1192,
  [SMALL_STATE(79)] = 1202,
  [SMALL_STATE(80)] = 1208,
  [SMALL_STATE(81)] = 1218,
  [SMALL_STATE(82)] = 1226,
  [SMALL_STATE(83)] = 1236,
  [SMALL_STATE(84)] = 1246,
  [SMALL_STATE(85)] = 1256,
  [SMALL_STATE(86)] = 1266,
  [SMALL_STATE(87)] = 1273,
  [SMALL_STATE(88)] = 1278,
  [SMALL_STATE(89)] = 1285,
  [SMALL_STATE(90)] = 1290,
  [SMALL_STATE(91)] = 1295,
  [SMALL_STATE(92)] = 1302,
  [SMALL_STATE(93)] = 1307,
  [SMALL_STATE(94)] = 1312,
  [SMALL_STATE(95)] = 1317,
  [SMALL_STATE(96)] = 1322,
  [SMALL_STATE(97)] = 1329,
  [SMALL_STATE(98)] = 1334,
  [SMALL_STATE(99)] = 1339,
  [SMALL_STATE(100)] = 1346,
  [SMALL_STATE(101)] = 1351,
  [SMALL_STATE(102)] = 1356,
  [SMALL_STATE(103)] = 1361,
  [SMALL_STATE(104)] = 1368,
  [SMALL_STATE(105)] = 1373,
  [SMALL_STATE(106)] = 1378,
  [SMALL_STATE(107)] = 1383,
  [SMALL_STATE(108)] = 1390,
  [SMALL_STATE(109)] = 1395,
  [SMALL_STATE(110)] = 1400,
  [SMALL_STATE(111)] = 1407,
  [SMALL_STATE(112)] = 1412,
  [SMALL_STATE(113)] = 1417,
  [SMALL_STATE(114)] = 1422,
  [SMALL_STATE(115)] = 1427,
  [SMALL_STATE(116)] = 1432,
  [SMALL_STATE(117)] = 1437,
  [SMALL_STATE(118)] = 1442,
  [SMALL_STATE(119)] = 1446,
  [SMALL_STATE(120)] = 1450,
  [SMALL_STATE(121)] = 1454,
  [SMALL_STATE(122)] = 1458,
  [SMALL_STATE(123)] = 1462,
  [SMALL_STATE(124)] = 1466,
  [SMALL_STATE(125)] = 1470,
  [SMALL_STATE(126)] = 1474,
  [SMALL_STATE(127)] = 1478,
  [SMALL_STATE(128)] = 1482,
  [SMALL_STATE(129)] = 1486,
  [SMALL_STATE(130)] = 1490,
  [SMALL_STATE(131)] = 1494,
  [SMALL_STATE(132)] = 1498,
  [SMALL_STATE(133)] = 1502,
  [SMALL_STATE(134)] = 1506,
  [SMALL_STATE(135)] = 1510,
  [SMALL_STATE(136)] = 1514,
  [SMALL_STATE(137)] = 1518,
  [SMALL_STATE(138)] = 1522,
  [SMALL_STATE(139)] = 1526,
  [SMALL_STATE(140)] = 1530,
  [SMALL_STATE(141)] = 1534,
  [SMALL_STATE(142)] = 1538,
  [SMALL_STATE(143)] = 1542,
  [SMALL_STATE(144)] = 1546,
  [SMALL_STATE(145)] = 1550,
  [SMALL_STATE(146)] = 1554,
  [SMALL_STATE(147)] = 1558,
  [SMALL_STATE(148)] = 1562,
  [SMALL_STATE(149)] = 1566,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2), SHIFT_REPEAT(60),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 7),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(129),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 2), SHIFT_REPEAT(103),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 8),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expr, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_select_statement_repeat1, 2), SHIFT_REPEAT(110),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_select_statement_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(18),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 7),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(57),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 6), SHIFT_REPEAT(79),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [234] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(14),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [297] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
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
