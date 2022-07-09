#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

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
  sym_sql_column_list = 23,
  aux_sym_sql_from_clause_token1 = 24,
  sym_source_file = 25,
  sym_jinja_block = 26,
  sym_jinja_expr = 27,
  sym_jinja_fn_call = 28,
  sym_jinja_argument_list = 29,
  sym_jinja_lit_string = 30,
  sym_jinja_bool = 31,
  sym_jinja_list = 32,
  sym_jinja_dict = 33,
  sym_jinja_pair = 34,
  sym_jinja_kwarg = 35,
  sym_sql_select_statement = 36,
  sym_sql_cte = 37,
  sym_sql_select = 38,
  sym_sql_from_clause = 39,
  sym_sql_table_name = 40,
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
  [sym_jinja_identifier] = "jinja_identifier",
  [aux_sym_sql_cte_token1] = "with",
  [aux_sym_sql_cte_token2] = "as",
  [aux_sym_sql_select_token1] = "select",
  [sym_sql_identifier] = "sql_identifier",
  [sym_sql_column_list] = "sql_column_list",
  [aux_sym_sql_from_clause_token1] = "from",
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
  [sym_sql_select] = "sql_select",
  [sym_sql_from_clause] = "sql_from_clause",
  [sym_sql_table_name] = "sql_table_name",
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
  [sym_jinja_identifier] = sym_jinja_identifier,
  [aux_sym_sql_cte_token1] = aux_sym_sql_cte_token1,
  [aux_sym_sql_cte_token2] = aux_sym_sql_cte_token2,
  [aux_sym_sql_select_token1] = aux_sym_sql_select_token1,
  [sym_sql_identifier] = sym_sql_identifier,
  [sym_sql_column_list] = sym_sql_column_list,
  [aux_sym_sql_from_clause_token1] = aux_sym_sql_from_clause_token1,
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
  [sym_sql_select] = sym_sql_select,
  [sym_sql_from_clause] = sym_sql_from_clause,
  [sym_sql_table_name] = sym_sql_table_name,
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
  [sym_sql_column_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sql_from_clause_token1] = {
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
  [sym_sql_from_clause] = {
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
};

enum {
  field_jinja_argument_list = 1,
  field_jinja_fn_name = 2,
  field_key = 3,
  field_table = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_jinja_argument_list] = "jinja_argument_list",
  [field_jinja_fn_name] = "jinja_fn_name",
  [field_key] = "key",
  [field_table] = "table",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_jinja_argument_list, 1},
    {field_jinja_fn_name, 0},
  [2] =
    {field_table, 1},
  [3] =
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
      if (eof) ADVANCE(11);
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == '*') ADVANCE(67);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == 'F') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(43);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(21);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(39);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '{') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '}') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(9);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 7:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == ')') ADVANCE(16);
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == ']') ADVANCE(28);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(4);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(59);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_jinja_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(12);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'a') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'l') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'r') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 's') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'u') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_jinja_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_sql_cte_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_sql_cte_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_sql_select_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_sql_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_sql_column_list);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_sql_from_clause_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
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
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 10},
  [34] = {.lex_state = 10},
  [35] = {.lex_state = 10},
  [36] = {.lex_state = 10},
  [37] = {.lex_state = 10},
  [38] = {.lex_state = 3},
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
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
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
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 10},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
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
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 10},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 22},
  [115] = {.lex_state = 18},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 18},
  [120] = {.lex_state = 22},
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
    [sym_sql_column_list] = ACTIONS(1),
    [aux_sym_sql_from_clause_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(118),
    [sym_jinja_block] = STATE(21),
    [sym_sql_select_statement] = STATE(117),
    [sym_sql_cte] = STATE(23),
    [sym_sql_select] = STATE(116),
    [aux_sym_sql_select_statement_repeat1] = STATE(23),
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
    STATE(51), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(50), 5,
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
    STATE(64), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(50), 5,
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
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(50), 5,
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
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(50), 5,
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
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(50), 5,
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
    STATE(60), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [212] = 10,
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
    ACTIONS(41), 1,
      anon_sym_COMMA,
    ACTIONS(43), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [248] = 9,
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
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(50), 5,
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
    STATE(74), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 5,
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
    STATE(74), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 5,
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
    STATE(74), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 5,
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
    STATE(74), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 5,
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
    STATE(75), 2,
      sym_jinja_expr,
      sym_jinja_kwarg,
    STATE(50), 5,
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
    STATE(72), 1,
      sym_jinja_expr,
    ACTIONS(59), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(83), 5,
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
    STATE(111), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 5,
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
    STATE(74), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 5,
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
    STATE(73), 1,
      sym_jinja_expr,
    ACTIONS(17), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(50), 5,
      sym_jinja_fn_call,
      sym_jinja_lit_string,
      sym_jinja_bool,
      sym_jinja_list,
      sym_jinja_dict,
  [565] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [584] = 6,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(59), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [603] = 5,
    ACTIONS(5), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(108), 1,
      sym_sql_select_statement,
    STATE(116), 1,
      sym_sql_select,
    STATE(23), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [620] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [636] = 4,
    ACTIONS(5), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(107), 1,
      sym_sql_select,
    STATE(40), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [650] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [666] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [682] = 5,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(95), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [698] = 1,
    ACTIONS(83), 5,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
  [706] = 1,
    ACTIONS(85), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [713] = 4,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(15), 1,
      anon_sym_DQUOTE,
    STATE(95), 1,
      sym_jinja_pair,
    STATE(96), 1,
      sym_jinja_lit_string,
  [726] = 1,
    ACTIONS(87), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [733] = 1,
    ACTIONS(89), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [740] = 1,
    ACTIONS(91), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [747] = 1,
    ACTIONS(93), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [754] = 3,
    ACTIONS(97), 1,
      sym_sql_identifier,
    STATE(45), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(95), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [765] = 1,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [772] = 1,
    ACTIONS(101), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [779] = 3,
    ACTIONS(105), 1,
      sym_sql_identifier,
    STATE(37), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(103), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [790] = 3,
    ACTIONS(3), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(108), 1,
      sym_sql_identifier,
    STATE(76), 2,
      sym_jinja_block,
      sym_sql_table_name,
  [801] = 1,
    ACTIONS(110), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [808] = 3,
    ACTIONS(112), 1,
      aux_sym_sql_cte_token1,
    ACTIONS(115), 1,
      aux_sym_sql_select_token1,
    STATE(40), 2,
      sym_sql_cte,
      aux_sym_sql_select_statement_repeat1,
  [819] = 1,
    ACTIONS(117), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [826] = 1,
    ACTIONS(119), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [833] = 1,
    ACTIONS(121), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [840] = 1,
    ACTIONS(123), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [847] = 3,
    ACTIONS(97), 1,
      sym_sql_identifier,
    STATE(37), 1,
      aux_sym_sql_cte_repeat1,
    ACTIONS(125), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [858] = 1,
    ACTIONS(127), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [865] = 1,
    ACTIONS(129), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [872] = 3,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(135), 1,
      sym_sql_identifier,
    ACTIONS(133), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [883] = 1,
    ACTIONS(137), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [890] = 1,
    ACTIONS(139), 4,
      anon_sym_RBRACE_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [897] = 3,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_jinja_argument_list_repeat1,
  [907] = 3,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_jinja_argument_list_repeat1,
  [917] = 3,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_EQ,
    STATE(28), 1,
      sym_jinja_argument_list,
  [927] = 3,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_jinja_dict_repeat1,
  [937] = 3,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_jinja_list_repeat1,
  [947] = 3,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_jinja_list_repeat1,
  [957] = 3,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_jinja_dict_repeat1,
  [967] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_jinja_list_repeat1,
  [977] = 3,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(57), 1,
      aux_sym_jinja_dict_repeat1,
  [987] = 3,
    ACTIONS(171), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_jinja_list_repeat1,
  [997] = 3,
    ACTIONS(175), 1,
      anon_sym_COMMA,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    STATE(54), 1,
      aux_sym_jinja_dict_repeat1,
  [1007] = 3,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
    STATE(62), 1,
      aux_sym_jinja_dict_repeat1,
  [1017] = 2,
    ACTIONS(186), 1,
      sym_sql_identifier,
    ACTIONS(184), 2,
      aux_sym_sql_cte_token1,
      aux_sym_sql_select_token1,
  [1025] = 3,
    ACTIONS(188), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1035] = 3,
    ACTIONS(29), 1,
      anon_sym_RPAREN,
    ACTIONS(192), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1045] = 3,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_jinja_argument_list_repeat1,
  [1055] = 3,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
    STATE(56), 1,
      aux_sym_jinja_list_repeat1,
  [1065] = 1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1070] = 1,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1075] = 2,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_jinja_argument_list,
  [1082] = 2,
    ACTIONS(200), 1,
      aux_sym_sql_from_clause_token1,
    STATE(80), 1,
      sym_sql_from_clause,
  [1089] = 1,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1094] = 1,
    ACTIONS(204), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1099] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1104] = 1,
    ACTIONS(148), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1109] = 1,
    ACTIONS(206), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1114] = 1,
    ACTIONS(208), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1119] = 2,
    ACTIONS(7), 1,
      aux_sym_sql_select_token1,
    STATE(113), 1,
      sym_sql_select,
  [1126] = 2,
    ACTIONS(210), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_jinja_argument_list,
  [1133] = 1,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
  [1138] = 1,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1143] = 1,
    ACTIONS(93), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1148] = 1,
    ACTIONS(139), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1153] = 1,
    ACTIONS(121), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1158] = 1,
    ACTIONS(89), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1163] = 1,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1168] = 1,
    ACTIONS(83), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1173] = 1,
    ACTIONS(117), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1178] = 1,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1183] = 1,
    ACTIONS(129), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1188] = 1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1193] = 1,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1198] = 1,
    ACTIONS(91), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1203] = 1,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1208] = 1,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1213] = 1,
    ACTIONS(214), 1,
      anon_sym_COLON,
  [1217] = 1,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
  [1221] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
  [1225] = 1,
    ACTIONS(198), 1,
      anon_sym_RBRACK,
  [1229] = 1,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
  [1233] = 1,
    ACTIONS(218), 1,
      anon_sym_SQUOTE,
  [1237] = 1,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
  [1241] = 1,
    ACTIONS(173), 1,
      anon_sym_RBRACK,
  [1245] = 1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
  [1249] = 1,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
  [1253] = 1,
    ACTIONS(220), 1,
      anon_sym_SQUOTE,
  [1257] = 1,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
  [1261] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [1265] = 1,
    ACTIONS(226), 1,
      sym_sql_column_list,
  [1269] = 1,
    ACTIONS(228), 1,
      aux_sym_sql_cte_token2,
  [1273] = 1,
    ACTIONS(230), 1,
      anon_sym_RBRACE_RBRACE,
  [1277] = 1,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
  [1281] = 1,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
  [1285] = 1,
    ACTIONS(234), 1,
      aux_sym_jinja_lit_string_token2,
  [1289] = 1,
    ACTIONS(236), 1,
      aux_sym_jinja_lit_string_token1,
  [1293] = 1,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
  [1297] = 1,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
  [1301] = 1,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
  [1305] = 1,
    ACTIONS(244), 1,
      aux_sym_jinja_lit_string_token1,
  [1309] = 1,
    ACTIONS(246), 1,
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
  [SMALL_STATE(9)] = 248,
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
  [SMALL_STATE(20)] = 584,
  [SMALL_STATE(21)] = 603,
  [SMALL_STATE(22)] = 620,
  [SMALL_STATE(23)] = 636,
  [SMALL_STATE(24)] = 650,
  [SMALL_STATE(25)] = 666,
  [SMALL_STATE(26)] = 682,
  [SMALL_STATE(27)] = 698,
  [SMALL_STATE(28)] = 706,
  [SMALL_STATE(29)] = 713,
  [SMALL_STATE(30)] = 726,
  [SMALL_STATE(31)] = 733,
  [SMALL_STATE(32)] = 740,
  [SMALL_STATE(33)] = 747,
  [SMALL_STATE(34)] = 754,
  [SMALL_STATE(35)] = 765,
  [SMALL_STATE(36)] = 772,
  [SMALL_STATE(37)] = 779,
  [SMALL_STATE(38)] = 790,
  [SMALL_STATE(39)] = 801,
  [SMALL_STATE(40)] = 808,
  [SMALL_STATE(41)] = 819,
  [SMALL_STATE(42)] = 826,
  [SMALL_STATE(43)] = 833,
  [SMALL_STATE(44)] = 840,
  [SMALL_STATE(45)] = 847,
  [SMALL_STATE(46)] = 858,
  [SMALL_STATE(47)] = 865,
  [SMALL_STATE(48)] = 872,
  [SMALL_STATE(49)] = 883,
  [SMALL_STATE(50)] = 890,
  [SMALL_STATE(51)] = 897,
  [SMALL_STATE(52)] = 907,
  [SMALL_STATE(53)] = 917,
  [SMALL_STATE(54)] = 927,
  [SMALL_STATE(55)] = 937,
  [SMALL_STATE(56)] = 947,
  [SMALL_STATE(57)] = 957,
  [SMALL_STATE(58)] = 967,
  [SMALL_STATE(59)] = 977,
  [SMALL_STATE(60)] = 987,
  [SMALL_STATE(61)] = 997,
  [SMALL_STATE(62)] = 1007,
  [SMALL_STATE(63)] = 1017,
  [SMALL_STATE(64)] = 1025,
  [SMALL_STATE(65)] = 1035,
  [SMALL_STATE(66)] = 1045,
  [SMALL_STATE(67)] = 1055,
  [SMALL_STATE(68)] = 1065,
  [SMALL_STATE(69)] = 1070,
  [SMALL_STATE(70)] = 1075,
  [SMALL_STATE(71)] = 1082,
  [SMALL_STATE(72)] = 1089,
  [SMALL_STATE(73)] = 1094,
  [SMALL_STATE(74)] = 1099,
  [SMALL_STATE(75)] = 1104,
  [SMALL_STATE(76)] = 1109,
  [SMALL_STATE(77)] = 1114,
  [SMALL_STATE(78)] = 1119,
  [SMALL_STATE(79)] = 1126,
  [SMALL_STATE(80)] = 1133,
  [SMALL_STATE(81)] = 1138,
  [SMALL_STATE(82)] = 1143,
  [SMALL_STATE(83)] = 1148,
  [SMALL_STATE(84)] = 1153,
  [SMALL_STATE(85)] = 1158,
  [SMALL_STATE(86)] = 1163,
  [SMALL_STATE(87)] = 1168,
  [SMALL_STATE(88)] = 1173,
  [SMALL_STATE(89)] = 1178,
  [SMALL_STATE(90)] = 1183,
  [SMALL_STATE(91)] = 1188,
  [SMALL_STATE(92)] = 1193,
  [SMALL_STATE(93)] = 1198,
  [SMALL_STATE(94)] = 1203,
  [SMALL_STATE(95)] = 1208,
  [SMALL_STATE(96)] = 1213,
  [SMALL_STATE(97)] = 1217,
  [SMALL_STATE(98)] = 1221,
  [SMALL_STATE(99)] = 1225,
  [SMALL_STATE(100)] = 1229,
  [SMALL_STATE(101)] = 1233,
  [SMALL_STATE(102)] = 1237,
  [SMALL_STATE(103)] = 1241,
  [SMALL_STATE(104)] = 1245,
  [SMALL_STATE(105)] = 1249,
  [SMALL_STATE(106)] = 1253,
  [SMALL_STATE(107)] = 1257,
  [SMALL_STATE(108)] = 1261,
  [SMALL_STATE(109)] = 1265,
  [SMALL_STATE(110)] = 1269,
  [SMALL_STATE(111)] = 1273,
  [SMALL_STATE(112)] = 1277,
  [SMALL_STATE(113)] = 1281,
  [SMALL_STATE(114)] = 1285,
  [SMALL_STATE(115)] = 1289,
  [SMALL_STATE(116)] = 1293,
  [SMALL_STATE(117)] = 1297,
  [SMALL_STATE(118)] = 1301,
  [SMALL_STATE(119)] = 1305,
  [SMALL_STATE(120)] = 1309,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_lit_string, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_fn_call, 2, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_bool, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sql_cte_repeat1, 2), SHIFT_REPEAT(110),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 5),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sql_select_statement_repeat1, 2), SHIFT_REPEAT(34),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_select_statement_repeat1, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_dict, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_cte, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_list, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sql_cte_repeat1, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_argument_list, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_expr, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2), SHIFT_REPEAT(14),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_argument_list_repeat1, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2), SHIFT_REPEAT(17),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_list_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2), SHIFT_REPEAT(29),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_dict_repeat1, 2),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sql_cte_repeat1, 6),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sql_cte_repeat1, 6),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_pair, 3, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_kwarg, 3, .production_id = 3),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_from_clause, 2, .production_id = 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_table_name, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sql_select_statement, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [242] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
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
