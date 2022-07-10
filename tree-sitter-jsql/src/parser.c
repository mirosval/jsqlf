#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 153
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
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(32);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(52);
      if (lookahead == 'T') ADVANCE(57);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == 'f') ADVANCE(73);
      if (lookahead == '{') ADVANCE(48);
      if (lookahead == '}') ADVANCE(49);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(76);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(80);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(66);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(74);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('C' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(53);
      if (lookahead == 'T') ADVANCE(57);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == ']') ADVANCE(46);
      if (lookahead == '{') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '{') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(87);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(31);
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
          lookahead == 'h') ADVANCE(82);
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
          lookahead == 'm') ADVANCE(105);
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
          lookahead == 'r') ADVANCE(106);
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
          lookahead == 's') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      END_STATE();
    case 24:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      END_STATE();
    case 25:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == ':') ADVANCE(50);
      if (lookahead == ']') ADVANCE(46);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(91);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(41);
      if (lookahead == '\\') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(30);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_sql_cte_token2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_sql_select_token1);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_sql_order_by_clause_token2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_sql_limit_clause_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_sql_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
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
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 27},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 27},
  [48] = {.lex_state = 27},
  [49] = {.lex_state = 27},
  [50] = {.lex_state = 27},
  [51] = {.lex_state = 27},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 27},
  [54] = {.lex_state = 27},
  [55] = {.lex_state = 27},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 27},
  [58] = {.lex_state = 27},
  [59] = {.lex_state = 27},
  [60] = {.lex_state = 27},
  [61] = {.lex_state = 27},
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 27},
  [64] = {.lex_state = 27},
  [65] = {.lex_state = 27},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 27},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 27},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 27},
  [83] = {.lex_state = 27},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 27},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 27},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 27},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 27},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 27},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 27},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 27},
  [140] = {.lex_state = 27},
  [141] = {.lex_state = 27},
  [142] = {.lex_state = 27},
  [143] = {.lex_state = 27},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 40},
  [147] = {.lex_state = 36},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 36},
  [152] = {.lex_state = 40},
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
    [sym_source_file] = STATE(150),
    [sym_jinja_block] = STATE(23),
    [sym_sql_select_statement] = STATE(149),
    [sym_sql_cte] = STATE(38),
    [sym_sql_select] = STATE(148),
    [aux_sym_sql_select_statement_repeat1] = STATE(38),
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
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(60), 5,
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
    STATE(78), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(60), 5,
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
    STATE(91), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(60), 5,
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
    STATE(91), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(60), 5,
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
    STATE(91), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(60), 5,
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
    STATE(77), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 5,
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
    STATE(91), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(60), 5,
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
    STATE(70), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 5,
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
    STATE(99), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 5,
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
    STATE(99), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 5,
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
    STATE(99), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 5,
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
    STATE(99), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 5,
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
    STATE(91), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(60), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [445] = 8,
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
    STATE(98), 1,
      sym_jinja_expr,
    ACTIONS(59), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 5,
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
    STATE(143), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 5,
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
    ACTIONS(39), 1,
      sym_jinja_identifier,
    STATE(99), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 5,
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
    STATE(104), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(60), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [565] = 3,
    ACTIONS(69), 1,
      aux_sym_sql_cte_token2,
    ACTIONS(71), 1,
      sym_sql_identifier,
    ACTIONS(67), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [579] = 1,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [589] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_COMMA,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(84), 1,
      sym_jinja_pair,
    STATE(124), 1,
      sym_jinja_lit_string,
  [608] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [621] = 5,
    ACTIONS(5), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(138), 1,
      sym_sql_select_statement,
    STATE(148), 1,
      sym_sql_select,
    STATE(38), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [638] = 3,
    ACTIONS(85), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [651] = 5,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      sym_sql_identifier,
    STATE(50), 1,
      aux_sym_sql_cte_repeat1,
    STATE(129), 1,
      sym_sql_cte_name,
    ACTIONS(90), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [668] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      anon_sym_COMMA,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_jinja_pair,
    STATE(124), 1,
      sym_jinja_lit_string,
  [687] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [700] = 3,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_sql_from_clause_repeat1,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [713] = 5,
    ACTIONS(107), 1,
      aux_sym_sql_order_by_clause_token1,
    ACTIONS(109), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(62), 1,
      sym_sql_order_by_clause,
    STATE(100), 1,
      sym_sql_limit_clause,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [730] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [742] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_jinja_pair,
    STATE(124), 1,
      sym_jinja_lit_string,
  [758] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_jinja_pair,
    STATE(124), 1,
      sym_jinja_lit_string,
  [774] = 1,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [782] = 1,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [790] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_jinja_pair,
    STATE(124), 1,
      sym_jinja_lit_string,
  [806] = 1,
    ACTIONS(83), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_from_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [814] = 1,
    ACTIONS(123), 5,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_sql_order_by_clause_token1,
      aux_sym_sql_limit_clause_token1,
  [822] = 4,
    ACTIONS(5), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(136), 1,
      sym_sql_select,
    STATE(48), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [836] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(97), 1,
      sym_jinja_pair,
    STATE(124), 1,
      sym_jinja_lit_string,
  [852] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_sql_column_list_repeat1,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [864] = 1,
    ACTIONS(129), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [872] = 1,
    ACTIONS(131), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [879] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(133), 1,
      sym_sql_identifier,
    STATE(34), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [890] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(133), 1,
      sym_sql_identifier,
    STATE(22), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [901] = 1,
    ACTIONS(135), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [908] = 1,
    ACTIONS(137), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [915] = 1,
    ACTIONS(139), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [922] = 3,
    ACTIONS(141), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(144), 1,
      aux_sym_sql_select_token1,
    STATE(48), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [933] = 1,
    ACTIONS(146), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [940] = 3,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(148), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [951] = 3,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(90), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [962] = 1,
    ACTIONS(150), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [969] = 1,
    ACTIONS(152), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [976] = 1,
    ACTIONS(154), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [983] = 1,
    ACTIONS(156), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [990] = 4,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(97), 1,
      sym_jinja_pair,
    STATE(124), 1,
      sym_jinja_lit_string,
  [1003] = 1,
    ACTIONS(158), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1010] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(163), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [1021] = 1,
    ACTIONS(165), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1028] = 1,
    ACTIONS(167), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1035] = 1,
    ACTIONS(169), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1042] = 3,
    ACTIONS(109), 1,
      aux_sym_sql_limit_clause_token1,
    STATE(90), 1,
      sym_sql_limit_clause,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1053] = 1,
    ACTIONS(173), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1060] = 1,
    ACTIONS(175), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1067] = 3,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(179), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [1078] = 3,
    ACTIONS(181), 1,
      sym_sql_identifier,
    ACTIONS(183), 1,
      anon_sym_STAR,
    STATE(93), 1,
      sym_sql_column_list,
  [1088] = 3,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      aux_sym_jinja_list_repeat1,
  [1098] = 3,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_jinja_dict_repeat1,
  [1108] = 1,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_limit_clause_token1,
  [1114] = 3,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    STATE(81), 1,
      aux_sym_jinja_list_repeat1,
  [1124] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(198), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_jinja_list_repeat1,
  [1134] = 3,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      aux_sym_jinja_dict_repeat1,
  [1144] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(205), 1,
      aux_sym_sql_from_clause_token1,
    STATE(83), 1,
      aux_sym_sql_column_list_repeat1,
  [1154] = 3,
    ACTIONS(207), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(68), 1,
      aux_sym_jinja_dict_repeat1,
  [1164] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(85), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1174] = 3,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1184] = 3,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_jinja_list_repeat1,
  [1194] = 3,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1204] = 3,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    ACTIONS(227), 1,
      anon_sym_EQ,
    STATE(54), 1,
      sym_jinja_argument_list,
  [1214] = 3,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 1,
      anon_sym_COMMA,
    STATE(72), 1,
      aux_sym_jinja_dict_repeat1,
  [1224] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    STATE(67), 1,
      aux_sym_jinja_list_repeat1,
  [1234] = 1,
    ACTIONS(233), 3,
      anon_sym_COMMA,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [1240] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(235), 1,
      aux_sym_sql_from_clause_token1,
    STATE(24), 1,
      aux_sym_sql_column_list_repeat1,
  [1250] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    STATE(80), 1,
      aux_sym_jinja_dict_repeat1,
  [1260] = 3,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1270] = 3,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1280] = 2,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(251), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [1288] = 1,
    ACTIONS(156), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1293] = 1,
    ACTIONS(135), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1298] = 1,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1303] = 1,
    ACTIONS(246), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1308] = 2,
    ACTIONS(225), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_jinja_argument_list,
  [1315] = 2,
    ACTIONS(255), 1,
      aux_sym_sql_from_clause_token1,
    STATE(29), 1,
      sym_sql_from_clause,
  [1322] = 2,
    ACTIONS(257), 1,
      sym_sql_identifier,
    STATE(69), 1,
      sym_sql_order_by_expression,
  [1329] = 1,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1334] = 2,
    ACTIONS(261), 1,
      sym_sql_identifier,
    STATE(141), 1,
      sym_sql_cte_name,
  [1341] = 1,
    ACTIONS(203), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1346] = 1,
    ACTIONS(263), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1351] = 1,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1356] = 1,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1361] = 2,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(118), 1,
      sym_jinja_argument_list,
  [1368] = 1,
    ACTIONS(169), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1373] = 2,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(145), 1,
      sym_sql_select,
  [1380] = 1,
    ACTIONS(267), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1385] = 2,
    ACTIONS(261), 1,
      sym_sql_identifier,
    STATE(129), 1,
      sym_sql_cte_name,
  [1392] = 1,
    ACTIONS(175), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1397] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1402] = 1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1407] = 1,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1412] = 2,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(125), 1,
      sym_sql_select,
  [1419] = 1,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1424] = 1,
    ACTIONS(173), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1429] = 1,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1434] = 1,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1439] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1444] = 1,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1449] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1454] = 1,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1459] = 1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1464] = 1,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
  [1468] = 1,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
  [1472] = 1,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
  [1476] = 1,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
  [1480] = 1,
    ACTIONS(269), 1,
      anon_sym_COLON,
  [1484] = 1,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
  [1488] = 1,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
  [1492] = 1,
    ACTIONS(275), 1,
      anon_sym_LPAREN,
  [1496] = 1,
    ACTIONS(277), 1,
      sym_sql_identifier,
  [1500] = 1,
    ACTIONS(279), 1,
      aux_sym_sql_cte_token2,
  [1504] = 1,
    ACTIONS(281), 1,
      anon_sym_DQUOTE,
  [1508] = 1,
    ACTIONS(281), 1,
      anon_sym_SQUOTE,
  [1512] = 1,
    ACTIONS(283), 1,
      aux_sym_sql_order_by_clause_token2,
  [1516] = 1,
    ACTIONS(285), 1,
      anon_sym_SQUOTE,
  [1520] = 1,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
  [1524] = 1,
    ACTIONS(219), 1,
      anon_sym_RBRACK,
  [1528] = 1,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [1532] = 1,
    ACTIONS(289), 1,
      sym_sql_identifier,
  [1536] = 1,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
  [1540] = 1,
    ACTIONS(293), 1,
      sym_sql_integer,
  [1544] = 1,
    ACTIONS(205), 1,
      aux_sym_sql_from_clause_token1,
  [1548] = 1,
    ACTIONS(295), 1,
      aux_sym_sql_cte_token2,
  [1552] = 1,
    ACTIONS(297), 1,
      aux_sym_sql_cte_token2,
  [1556] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE_RBRACE,
  [1560] = 1,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
  [1564] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [1568] = 1,
    ACTIONS(303), 1,
      aux_sym_jinja_lit_string_token2,
  [1572] = 1,
    ACTIONS(305), 1,
      aux_sym_jinja_lit_string_token1,
  [1576] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [1580] = 1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
  [1584] = 1,
    ACTIONS(311), 1,
      ts_builtin_sym_end,
  [1588] = 1,
    ACTIONS(313), 1,
      aux_sym_jinja_lit_string_token1,
  [1592] = 1,
    ACTIONS(315), 1,
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
  [SMALL_STATE(20)] = 579,
  [SMALL_STATE(21)] = 589,
  [SMALL_STATE(22)] = 608,
  [SMALL_STATE(23)] = 621,
  [SMALL_STATE(24)] = 638,
  [SMALL_STATE(25)] = 651,
  [SMALL_STATE(26)] = 668,
  [SMALL_STATE(27)] = 687,
  [SMALL_STATE(28)] = 700,
  [SMALL_STATE(29)] = 713,
  [SMALL_STATE(30)] = 730,
  [SMALL_STATE(31)] = 742,
  [SMALL_STATE(32)] = 758,
  [SMALL_STATE(33)] = 774,
  [SMALL_STATE(34)] = 782,
  [SMALL_STATE(35)] = 790,
  [SMALL_STATE(36)] = 806,
  [SMALL_STATE(37)] = 814,
  [SMALL_STATE(38)] = 822,
  [SMALL_STATE(39)] = 836,
  [SMALL_STATE(40)] = 852,
  [SMALL_STATE(41)] = 864,
  [SMALL_STATE(42)] = 872,
  [SMALL_STATE(43)] = 879,
  [SMALL_STATE(44)] = 890,
  [SMALL_STATE(45)] = 901,
  [SMALL_STATE(46)] = 908,
  [SMALL_STATE(47)] = 915,
  [SMALL_STATE(48)] = 922,
  [SMALL_STATE(49)] = 933,
  [SMALL_STATE(50)] = 940,
  [SMALL_STATE(51)] = 951,
  [SMALL_STATE(52)] = 962,
  [SMALL_STATE(53)] = 969,
  [SMALL_STATE(54)] = 976,
  [SMALL_STATE(55)] = 983,
  [SMALL_STATE(56)] = 990,
  [SMALL_STATE(57)] = 1003,
  [SMALL_STATE(58)] = 1010,
  [SMALL_STATE(59)] = 1021,
  [SMALL_STATE(60)] = 1028,
  [SMALL_STATE(61)] = 1035,
  [SMALL_STATE(62)] = 1042,
  [SMALL_STATE(63)] = 1053,
  [SMALL_STATE(64)] = 1060,
  [SMALL_STATE(65)] = 1067,
  [SMALL_STATE(66)] = 1078,
  [SMALL_STATE(67)] = 1088,
  [SMALL_STATE(68)] = 1098,
  [SMALL_STATE(69)] = 1108,
  [SMALL_STATE(70)] = 1114,
  [SMALL_STATE(71)] = 1124,
  [SMALL_STATE(72)] = 1134,
  [SMALL_STATE(73)] = 1144,
  [SMALL_STATE(74)] = 1154,
  [SMALL_STATE(75)] = 1164,
  [SMALL_STATE(76)] = 1174,
  [SMALL_STATE(77)] = 1184,
  [SMALL_STATE(78)] = 1194,
  [SMALL_STATE(79)] = 1204,
  [SMALL_STATE(80)] = 1214,
  [SMALL_STATE(81)] = 1224,
  [SMALL_STATE(82)] = 1234,
  [SMALL_STATE(83)] = 1240,
  [SMALL_STATE(84)] = 1250,
  [SMALL_STATE(85)] = 1260,
  [SMALL_STATE(86)] = 1270,
  [SMALL_STATE(87)] = 1280,
  [SMALL_STATE(88)] = 1288,
  [SMALL_STATE(89)] = 1293,
  [SMALL_STATE(90)] = 1298,
  [SMALL_STATE(91)] = 1303,
  [SMALL_STATE(92)] = 1308,
  [SMALL_STATE(93)] = 1315,
  [SMALL_STATE(94)] = 1322,
  [SMALL_STATE(95)] = 1329,
  [SMALL_STATE(96)] = 1334,
  [SMALL_STATE(97)] = 1341,
  [SMALL_STATE(98)] = 1346,
  [SMALL_STATE(99)] = 1351,
  [SMALL_STATE(100)] = 1356,
  [SMALL_STATE(101)] = 1361,
  [SMALL_STATE(102)] = 1368,
  [SMALL_STATE(103)] = 1373,
  [SMALL_STATE(104)] = 1380,
  [SMALL_STATE(105)] = 1385,
  [SMALL_STATE(106)] = 1392,
  [SMALL_STATE(107)] = 1397,
  [SMALL_STATE(108)] = 1402,
  [SMALL_STATE(109)] = 1407,
  [SMALL_STATE(110)] = 1412,
  [SMALL_STATE(111)] = 1419,
  [SMALL_STATE(112)] = 1424,
  [SMALL_STATE(113)] = 1429,
  [SMALL_STATE(114)] = 1434,
  [SMALL_STATE(115)] = 1439,
  [SMALL_STATE(116)] = 1444,
  [SMALL_STATE(117)] = 1449,
  [SMALL_STATE(118)] = 1454,
  [SMALL_STATE(119)] = 1459,
  [SMALL_STATE(120)] = 1464,
  [SMALL_STATE(121)] = 1468,
  [SMALL_STATE(122)] = 1472,
  [SMALL_STATE(123)] = 1476,
  [SMALL_STATE(124)] = 1480,
  [SMALL_STATE(125)] = 1484,
  [SMALL_STATE(126)] = 1488,
  [SMALL_STATE(127)] = 1492,
  [SMALL_STATE(128)] = 1496,
  [SMALL_STATE(129)] = 1500,
  [SMALL_STATE(130)] = 1504,
  [SMALL_STATE(131)] = 1508,
  [SMALL_STATE(132)] = 1512,
  [SMALL_STATE(133)] = 1516,
  [SMALL_STATE(134)] = 1520,
  [SMALL_STATE(135)] = 1524,
  [SMALL_STATE(136)] = 1528,
  [SMALL_STATE(137)] = 1532,
  [SMALL_STATE(138)] = 1536,
  [SMALL_STATE(139)] = 1540,
  [SMALL_STATE(140)] = 1544,
  [SMALL_STATE(141)] = 1548,
  [SMALL_STATE(142)] = 1552,
  [SMALL_STATE(143)] = 1556,
  [SMALL_STATE(144)] = 1560,
  [SMALL_STATE(145)] = 1564,
  [SMALL_STATE(146)] = 1568,
  [SMALL_STATE(147)] = 1572,
  [SMALL_STATE(148)] = 1576,
  [SMALL_STATE(149)] = 1580,
  [SMALL_STATE(150)] = 1584,
  [SMALL_STATE(151)] = 1588,
  [SMALL_STATE(152)] = 1592,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_column_list_repeat1, 2), SHIFT_REPEAT(128),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 7),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_from_clause_repeat1, 2), SHIFT_REPEAT(43),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_expression, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_select_statement_repeat1, 2), SHIFT_REPEAT(96),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_select_statement_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 8),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 2), SHIFT_REPEAT(105),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expr, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(17),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_order_by_clause, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [200] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(56),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_column_list, 2),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(14),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 6), SHIFT_REPEAT(82),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 6),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select, 5),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_limit_clause, 2),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte_name, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [311] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
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
