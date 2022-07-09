#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 122
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  aux_sym_jinja_identifier_token1 = 18,
  anon_sym_with = 19,
  anon_sym_as = 20,
  anon_sym_select = 21,
  sym_sql_column_list = 22,
  anon_sym_from = 23,
  sym_source_file = 24,
  sym_jinja_block = 25,
  sym_jinja_expr = 26,
  sym_jinja_fn_call = 27,
  sym_jinja_argument_list = 28,
  sym_jinja_lit_string = 29,
  sym_jinja_bool = 30,
  sym_jinja_list = 31,
  sym_jinja_dict = 32,
  sym_jinja_pair = 33,
  sym_jinja_kwarg = 34,
  sym_jinja_identifier = 35,
  sym_sql_select_statement = 36,
  sym_sql_cte = 37,
  sym_sql_select = 38,
  sym_sql_identifier = 39,
  sym_sql_from_clause = 40,
  aux_sym_jinja_argument_list_repeat1 = 41,
  aux_sym_jinja_list_repeat1 = 42,
  aux_sym_jinja_dict_repeat1 = 43,
  aux_sym_sql_select_statement_repeat1 = 44,
  aux_sym_sql_cte_repeat1 = 45,
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
  [aux_sym_jinja_identifier_token1] = "jinja_identifier_token1",
  [anon_sym_with] = "with",
  [anon_sym_as] = "as",
  [anon_sym_select] = "select",
  [sym_sql_column_list] = "sql_column_list",
  [anon_sym_from] = "from",
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
  [sym_jinja_identifier] = "jinja_identifier",
  [sym_sql_select_statement] = "sql_select_statement",
  [sym_sql_cte] = "sql_cte",
  [sym_sql_select] = "sql_select",
  [sym_sql_identifier] = "sql_identifier",
  [sym_sql_from_clause] = "sql_from_clause",
  [aux_sym_jinja_argument_list_repeat1] = "jinja_argument_list_repeat1",
  [aux_sym_jinja_list_repeat1] = "jinja_list_repeat1",
  [aux_sym_jinja_dict_repeat1] = "jinja_dict_repeat1",
  [aux_sym_sql_select_statement_repeat1] = "sql_select_statement_repeat1",
  [aux_sym_sql_cte_repeat1] = "sql_cte_repeat1",
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
  [aux_sym_jinja_identifier_token1] = aux_sym_jinja_identifier_token1,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_select] = anon_sym_select,
  [sym_sql_column_list] = sym_sql_column_list,
  [anon_sym_from] = anon_sym_from,
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
  [sym_jinja_identifier] = sym_jinja_identifier,
  [sym_sql_select_statement] = sym_sql_select_statement,
  [sym_sql_cte] = sym_sql_cte,
  [sym_sql_select] = sym_sql_select,
  [sym_sql_identifier] = sym_sql_identifier,
  [sym_sql_from_clause] = sym_sql_from_clause,
  [aux_sym_jinja_argument_list_repeat1] = aux_sym_jinja_argument_list_repeat1,
  [aux_sym_jinja_list_repeat1] = aux_sym_jinja_list_repeat1,
  [aux_sym_jinja_dict_repeat1] = aux_sym_jinja_dict_repeat1,
  [aux_sym_sql_select_statement_repeat1] = aux_sym_sql_select_statement_repeat1,
  [aux_sym_sql_cte_repeat1] = aux_sym_sql_cte_repeat1,
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
  [aux_sym_jinja_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_select] = {
    .visible = true,
    .named = false,
  },
  [sym_sql_column_list] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
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
  [sym_jinja_identifier] = {
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
  [sym_sql_select] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_sql_from_clause] = {
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
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(21);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(54);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(48);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(53);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == 's') ADVANCE(46);
      if (lookahead == 'w') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(14);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == 'h') ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(20);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(22);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 's') ADVANCE(4);
      if (lookahead == 'w') ADVANCE(7);
      if (lookahead == '{') ADVANCE(15);
      if (lookahead == '}') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(30);
      if (lookahead == '\\') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(19);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'a') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'c') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'e') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'h') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'i') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'l') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'm') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'o') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'r') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 's') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 't') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 't') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (lookahead == 'u') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_jinja_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_with);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_select);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_select);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_sql_column_list);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
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
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 17},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 17},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
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
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 17},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 29},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 25},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 29},
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
    [aux_sym_jinja_identifier_token1] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_select] = ACTIONS(1),
    [sym_sql_column_list] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(119),
    [sym_jinja_block] = STATE(19),
    [sym_sql_select_statement] = STATE(117),
    [sym_sql_cte] = STATE(30),
    [sym_sql_select] = STATE(116),
    [aux_sym_sql_select_statement_repeat1] = STATE(30),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(3),
    [anon_sym_with] = ACTIONS(5),
    [anon_sym_select] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
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
      aux_sym_jinja_identifier_token1,
    STATE(57), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(63), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [40] = 11,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(25), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(56), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [80] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [117] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [154] = 11,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(33), 1,
      anon_sym_COMMA,
    ACTIONS(35), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_jinja_expr,
    STATE(76), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [193] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [230] = 11,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    ACTIONS(41), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_jinja_expr,
    STATE(76), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [269] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [306] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_jinja_expr,
    STATE(76), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [342] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_jinja_expr,
    STATE(76), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [378] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_jinja_expr,
    STATE(76), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [414] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    STATE(57), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [448] = 10,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_jinja_expr,
    STATE(76), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [484] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    STATE(76), 1,
      sym_jinja_identifier,
    STATE(78), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [517] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    STATE(76), 1,
      sym_jinja_identifier,
    STATE(108), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [550] = 9,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_LBRACE,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    STATE(73), 1,
      sym_jinja_expr,
    STATE(76), 1,
      sym_jinja_identifier,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(49), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [583] = 9,
    ACTIONS(23), 1,
      aux_sym_jinja_identifier_token1,
    ACTIONS(53), 1,
      anon_sym_SQUOTE,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_jinja_expr,
    STATE(74), 1,
      sym_jinja_identifier,
    ACTIONS(57), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(84), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [616] = 5,
    ACTIONS(5), 1,
      anon_sym_with,
    ACTIONS(7), 1,
      anon_sym_select,
    STATE(100), 1,
      sym_sql_select_statement,
    STATE(116), 1,
      sym_sql_select,
    STATE(30), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [633] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(66), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [652] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(60), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [671] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [687] = 4,
    ACTIONS(73), 1,
      aux_sym_jinja_identifier_token1,
    STATE(26), 1,
      aux_sym_sql_cte_repeat1,
    STATE(98), 1,
      sym_sql_identifier,
    ACTIONS(75), 2,
      anon_sym_with,
      anon_sym_select,
  [701] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [717] = 1,
    ACTIONS(79), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [725] = 4,
    ACTIONS(81), 1,
      aux_sym_jinja_identifier_token1,
    STATE(26), 1,
      aux_sym_sql_cte_repeat1,
    STATE(98), 1,
      sym_sql_identifier,
    ACTIONS(84), 2,
      anon_sym_with,
      anon_sym_select,
  [739] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [755] = 4,
    ACTIONS(73), 1,
      aux_sym_jinja_identifier_token1,
    STATE(23), 1,
      aux_sym_sql_cte_repeat1,
    STATE(98), 1,
      sym_sql_identifier,
    ACTIONS(88), 2,
      anon_sym_with,
      anon_sym_select,
  [769] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [785] = 4,
    ACTIONS(5), 1,
      anon_sym_with,
    ACTIONS(7), 1,
      anon_sym_select,
    STATE(101), 1,
      sym_sql_select,
    STATE(44), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [799] = 1,
    ACTIONS(92), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [806] = 1,
    ACTIONS(94), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [813] = 1,
    ACTIONS(96), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [820] = 1,
    ACTIONS(98), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [827] = 1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      anon_sym_with,
      anon_sym_select,
  [834] = 1,
    ACTIONS(102), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [841] = 1,
    ACTIONS(104), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [848] = 1,
    ACTIONS(106), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [855] = 1,
    ACTIONS(108), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [862] = 1,
    ACTIONS(110), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [869] = 1,
    ACTIONS(112), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [876] = 4,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(67), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [889] = 1,
    ACTIONS(114), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [896] = 3,
    ACTIONS(116), 1,
      anon_sym_with,
    ACTIONS(119), 1,
      anon_sym_select,
    STATE(44), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [907] = 1,
    ACTIONS(121), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [914] = 1,
    ACTIONS(123), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [921] = 2,
    ACTIONS(125), 1,
      anon_sym_COMMA,
    ACTIONS(127), 3,
      aux_sym_jinja_identifier_token1,
      anon_sym_with,
      anon_sym_select,
  [930] = 1,
    ACTIONS(129), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [937] = 1,
    ACTIONS(131), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [944] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_jinja_list_repeat1,
  [954] = 3,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_jinja_argument_list_repeat1,
  [964] = 1,
    ACTIONS(140), 3,
      aux_sym_jinja_identifier_token1,
      anon_sym_with,
      anon_sym_select,
  [970] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(142), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_jinja_list_repeat1,
  [980] = 3,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_jinja_dict_repeat1,
  [990] = 3,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(146), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1000] = 3,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1010] = 3,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_EQ,
    STATE(37), 1,
      sym_jinja_argument_list,
  [1020] = 3,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1030] = 3,
    ACTIONS(161), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(62), 1,
      aux_sym_jinja_list_repeat1,
  [1040] = 3,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(65), 1,
      aux_sym_jinja_dict_repeat1,
  [1050] = 3,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(53), 1,
      aux_sym_jinja_list_repeat1,
  [1060] = 3,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(50), 1,
      aux_sym_jinja_list_repeat1,
  [1070] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1080] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(64), 1,
      aux_sym_jinja_dict_repeat1,
  [1090] = 3,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    ACTIONS(184), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_jinja_dict_repeat1,
  [1100] = 3,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_jinja_dict_repeat1,
  [1110] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1115] = 2,
    ACTIONS(7), 1,
      anon_sym_select,
    STATE(112), 1,
      sym_sql_select,
  [1122] = 1,
    ACTIONS(190), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1127] = 1,
    ACTIONS(192), 2,
      anon_sym_LPAREN,
      anon_sym_EQ,
  [1132] = 1,
    ACTIONS(108), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1137] = 1,
    ACTIONS(194), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1142] = 1,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1147] = 2,
    ACTIONS(196), 1,
      anon_sym_LPAREN,
    STATE(87), 1,
      sym_jinja_argument_list,
  [1154] = 1,
    ACTIONS(159), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1159] = 2,
    ACTIONS(152), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_jinja_argument_list,
  [1166] = 1,
    ACTIONS(198), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1171] = 1,
    ACTIONS(200), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1176] = 1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1181] = 2,
    ACTIONS(202), 1,
      anon_sym_from,
    STATE(69), 1,
      sym_sql_from_clause,
  [1188] = 1,
    ACTIONS(92), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1193] = 2,
    ACTIONS(3), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(77), 1,
      sym_jinja_block,
  [1200] = 1,
    ACTIONS(96), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1205] = 1,
    ACTIONS(131), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1210] = 1,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1215] = 1,
    ACTIONS(94), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1220] = 1,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1225] = 1,
    ACTIONS(79), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1230] = 1,
    ACTIONS(114), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1235] = 1,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1240] = 1,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1245] = 1,
    ACTIONS(112), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1250] = 1,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1255] = 1,
    ACTIONS(98), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1260] = 1,
    ACTIONS(102), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1265] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [1269] = 1,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
  [1273] = 1,
    ACTIONS(206), 1,
      anon_sym_as,
  [1277] = 1,
    ACTIONS(208), 1,
      anon_sym_as,
  [1281] = 1,
    ACTIONS(210), 1,
      ts_builtin_sym_end,
  [1285] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [1289] = 1,
    ACTIONS(214), 1,
      anon_sym_SQUOTE,
  [1293] = 1,
    ACTIONS(214), 1,
      anon_sym_DQUOTE,
  [1297] = 1,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
  [1301] = 1,
    ACTIONS(216), 1,
      anon_sym_SQUOTE,
  [1305] = 1,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
  [1309] = 1,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
  [1313] = 1,
    ACTIONS(218), 1,
      anon_sym_RBRACE_RBRACE,
  [1317] = 1,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
  [1321] = 1,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
  [1325] = 1,
    ACTIONS(220), 1,
      aux_sym_jinja_lit_string_token2,
  [1329] = 1,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
  [1333] = 1,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
  [1337] = 1,
    ACTIONS(224), 1,
      anon_sym_LPAREN,
  [1341] = 1,
    ACTIONS(226), 1,
      aux_sym_jinja_lit_string_token1,
  [1345] = 1,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
  [1349] = 1,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
  [1353] = 1,
    ACTIONS(232), 1,
      sym_sql_column_list,
  [1357] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
  [1361] = 1,
    ACTIONS(236), 1,
      aux_sym_jinja_lit_string_token1,
  [1365] = 1,
    ACTIONS(238), 1,
      aux_sym_jinja_lit_string_token2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 154,
  [SMALL_STATE(7)] = 193,
  [SMALL_STATE(8)] = 230,
  [SMALL_STATE(9)] = 269,
  [SMALL_STATE(10)] = 306,
  [SMALL_STATE(11)] = 342,
  [SMALL_STATE(12)] = 378,
  [SMALL_STATE(13)] = 414,
  [SMALL_STATE(14)] = 448,
  [SMALL_STATE(15)] = 484,
  [SMALL_STATE(16)] = 517,
  [SMALL_STATE(17)] = 550,
  [SMALL_STATE(18)] = 583,
  [SMALL_STATE(19)] = 616,
  [SMALL_STATE(20)] = 633,
  [SMALL_STATE(21)] = 652,
  [SMALL_STATE(22)] = 671,
  [SMALL_STATE(23)] = 687,
  [SMALL_STATE(24)] = 701,
  [SMALL_STATE(25)] = 717,
  [SMALL_STATE(26)] = 725,
  [SMALL_STATE(27)] = 739,
  [SMALL_STATE(28)] = 755,
  [SMALL_STATE(29)] = 769,
  [SMALL_STATE(30)] = 785,
  [SMALL_STATE(31)] = 799,
  [SMALL_STATE(32)] = 806,
  [SMALL_STATE(33)] = 813,
  [SMALL_STATE(34)] = 820,
  [SMALL_STATE(35)] = 827,
  [SMALL_STATE(36)] = 834,
  [SMALL_STATE(37)] = 841,
  [SMALL_STATE(38)] = 848,
  [SMALL_STATE(39)] = 855,
  [SMALL_STATE(40)] = 862,
  [SMALL_STATE(41)] = 869,
  [SMALL_STATE(42)] = 876,
  [SMALL_STATE(43)] = 889,
  [SMALL_STATE(44)] = 896,
  [SMALL_STATE(45)] = 907,
  [SMALL_STATE(46)] = 914,
  [SMALL_STATE(47)] = 921,
  [SMALL_STATE(48)] = 930,
  [SMALL_STATE(49)] = 937,
  [SMALL_STATE(50)] = 944,
  [SMALL_STATE(51)] = 954,
  [SMALL_STATE(52)] = 964,
  [SMALL_STATE(53)] = 970,
  [SMALL_STATE(54)] = 980,
  [SMALL_STATE(55)] = 990,
  [SMALL_STATE(56)] = 1000,
  [SMALL_STATE(57)] = 1010,
  [SMALL_STATE(58)] = 1020,
  [SMALL_STATE(59)] = 1030,
  [SMALL_STATE(60)] = 1040,
  [SMALL_STATE(61)] = 1050,
  [SMALL_STATE(62)] = 1060,
  [SMALL_STATE(63)] = 1070,
  [SMALL_STATE(64)] = 1080,
  [SMALL_STATE(65)] = 1090,
  [SMALL_STATE(66)] = 1100,
  [SMALL_STATE(67)] = 1110,
  [SMALL_STATE(68)] = 1115,
  [SMALL_STATE(69)] = 1122,
  [SMALL_STATE(70)] = 1127,
  [SMALL_STATE(71)] = 1132,
  [SMALL_STATE(72)] = 1137,
  [SMALL_STATE(73)] = 1142,
  [SMALL_STATE(74)] = 1147,
  [SMALL_STATE(75)] = 1154,
  [SMALL_STATE(76)] = 1159,
  [SMALL_STATE(77)] = 1166,
  [SMALL_STATE(78)] = 1171,
  [SMALL_STATE(79)] = 1176,
  [SMALL_STATE(80)] = 1181,
  [SMALL_STATE(81)] = 1188,
  [SMALL_STATE(82)] = 1193,
  [SMALL_STATE(83)] = 1200,
  [SMALL_STATE(84)] = 1205,
  [SMALL_STATE(85)] = 1210,
  [SMALL_STATE(86)] = 1215,
  [SMALL_STATE(87)] = 1220,
  [SMALL_STATE(88)] = 1225,
  [SMALL_STATE(89)] = 1230,
  [SMALL_STATE(90)] = 1235,
  [SMALL_STATE(91)] = 1240,
  [SMALL_STATE(92)] = 1245,
  [SMALL_STATE(93)] = 1250,
  [SMALL_STATE(94)] = 1255,
  [SMALL_STATE(95)] = 1260,
  [SMALL_STATE(96)] = 1265,
  [SMALL_STATE(97)] = 1269,
  [SMALL_STATE(98)] = 1273,
  [SMALL_STATE(99)] = 1277,
  [SMALL_STATE(100)] = 1281,
  [SMALL_STATE(101)] = 1285,
  [SMALL_STATE(102)] = 1289,
  [SMALL_STATE(103)] = 1293,
  [SMALL_STATE(104)] = 1297,
  [SMALL_STATE(105)] = 1301,
  [SMALL_STATE(106)] = 1305,
  [SMALL_STATE(107)] = 1309,
  [SMALL_STATE(108)] = 1313,
  [SMALL_STATE(109)] = 1317,
  [SMALL_STATE(110)] = 1321,
  [SMALL_STATE(111)] = 1325,
  [SMALL_STATE(112)] = 1329,
  [SMALL_STATE(113)] = 1333,
  [SMALL_STATE(114)] = 1337,
  [SMALL_STATE(115)] = 1341,
  [SMALL_STATE(116)] = 1345,
  [SMALL_STATE(117)] = 1349,
  [SMALL_STATE(118)] = 1353,
  [SMALL_STATE(119)] = 1357,
  [SMALL_STATE(120)] = 1361,
  [SMALL_STATE(121)] = 1365,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_cte, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sql_cte_repeat1, 2), SHIFT_REPEAT(99),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sql_cte_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sql_cte, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_select_statement_repeat1, 2), SHIFT_REPEAT(28),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_select_statement_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sql_cte_repeat1, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expr, 1),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(17),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sql_cte_repeat1, 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(13),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(42),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select, 3),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_identifier, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_identifier, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [234] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
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
