#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 67
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 10

enum ts_symbol_identifiers {
  sym__token = 1,
  anon_sym_DASH_GT = 2,
  anon_sym_LBRACK = 3,
  anon_sym_COLON = 4,
  anon_sym_RBRACK = 5,
  anon_sym_PIPE = 6,
  sym__strict_token = 7,
  sym_info_comment = 8,
  sym_simple_comment = 9,
  sym__lf = 10,
  sym__ws = 11,
  sym_source_file = 12,
  sym__line = 13,
  sym__statement = 14,
  sym_stmt_translation = 15,
  sym_stmt_complex = 16,
  sym_text = 17,
  sym_strict_text = 18,
  sym__orthogram = 19,
  sym_ortho_gap = 20,
  sym_ortho_choice = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_stmt_complex_repeat1 = 23,
  aux_sym_text_repeat1 = 24,
  aux_sym_strict_text_repeat1 = 25,
  aux_sym_ortho_choice_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__token] = "_token",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COLON] = ":",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [sym__strict_token] = "_strict_token",
  [sym_info_comment] = "info_comment",
  [sym_simple_comment] = "simple_comment",
  [sym__lf] = "_lf",
  [sym__ws] = "_ws",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_stmt_translation] = "stmt_translation",
  [sym_stmt_complex] = "stmt_complex",
  [sym_text] = "text",
  [sym_strict_text] = "strict_text",
  [sym__orthogram] = "_orthogram",
  [sym_ortho_gap] = "ortho_gap",
  [sym_ortho_choice] = "ortho_choice",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_stmt_complex_repeat1] = "stmt_complex_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_strict_text_repeat1] = "strict_text_repeat1",
  [aux_sym_ortho_choice_repeat1] = "ortho_choice_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__token] = sym__token,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym__strict_token] = sym__strict_token,
  [sym_info_comment] = sym_info_comment,
  [sym_simple_comment] = sym_simple_comment,
  [sym__lf] = sym__lf,
  [sym__ws] = sym__ws,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_stmt_translation] = sym_stmt_translation,
  [sym_stmt_complex] = sym_stmt_complex,
  [sym_text] = sym_text,
  [sym_strict_text] = sym_strict_text,
  [sym__orthogram] = sym__orthogram,
  [sym_ortho_gap] = sym_ortho_gap,
  [sym_ortho_choice] = sym_ortho_choice,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_stmt_complex_repeat1] = aux_sym_stmt_complex_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_strict_text_repeat1] = aux_sym_strict_text_repeat1,
  [aux_sym_ortho_choice_repeat1] = aux_sym_ortho_choice_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__token] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym__strict_token] = {
    .visible = false,
    .named = true,
  },
  [sym_info_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_simple_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__lf] = {
    .visible = false,
    .named = true,
  },
  [sym__ws] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_stmt_translation] = {
    .visible = true,
    .named = true,
  },
  [sym_stmt_complex] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_strict_text] = {
    .visible = true,
    .named = true,
  },
  [sym__orthogram] = {
    .visible = false,
    .named = true,
  },
  [sym_ortho_gap] = {
    .visible = true,
    .named = true,
  },
  [sym_ortho_choice] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_stmt_complex_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_strict_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ortho_choice_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_answer = 1,
  field_comment = 2,
  field_original = 3,
  field_right_answer = 4,
  field_translation = 5,
  field_wrong_answer = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_answer] = "answer",
  [field_comment] = "comment",
  [field_original] = "original",
  [field_right_answer] = "right_answer",
  [field_translation] = "translation",
  [field_wrong_answer] = "wrong_answer",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_wrong_answer, 1},
  [1] =
    {field_answer, 1},
  [2] =
    {field_right_answer, 1},
  [3] =
    {field_wrong_answer, 1, .inherited = true},
  [4] =
    {field_wrong_answer, 0, .inherited = true},
    {field_wrong_answer, 1, .inherited = true},
  [6] =
    {field_original, 0},
    {field_translation, 2},
  [8] =
    {field_comment, 2},
  [9] =
    {field_right_answer, 1},
    {field_wrong_answer, 2, .inherited = true},
  [11] =
    {field_answer, 1},
    {field_comment, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 5,
  [7] = 4,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 10,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 11,
  [20] = 13,
  [21] = 21,
  [22] = 22,
  [23] = 16,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 11,
  [29] = 26,
  [30] = 15,
  [31] = 31,
  [32] = 27,
  [33] = 33,
  [34] = 25,
  [35] = 24,
  [36] = 13,
  [37] = 11,
  [38] = 13,
  [39] = 22,
  [40] = 21,
  [41] = 33,
  [42] = 31,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 45,
  [51] = 51,
  [52] = 44,
  [53] = 43,
  [54] = 54,
  [55] = 46,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
  [63] = 63,
  [64] = 64,
  [65] = 64,
  [66] = 66,
};

static TSCharacterRange sym__token_character_set_1[] = {
  {'!', '"'}, {'$', 'Z'}, {'\\', '\\'}, {'^', '~'}, {0xa1, 0xac}, {0xae, 0x5ff}, {0x606, 0x61b}, {0x61d, 0x6dc},
  {0x6de, 0x70e}, {0x710, 0x88f}, {0x892, 0x8e1}, {0x8e3, 0x167f}, {0x1681, 0x180d}, {0x180f, 0x1fff}, {0x2010, 0x2027}, {0x2030, 0x205e},
  {0x2065, 0x2065}, {0x2070, 0x2fff}, {0x3001, 0xd7ff}, {0xe001, 0xf8fe}, {0xf900, 0xfefe}, {0xff00, 0xfff8}, {0xfffc, 0x10ffff},
};

static TSCharacterRange sym__strict_token_character_set_1[] = {
  {'!', '"'}, {'$', '9'}, {';', 'Z'}, {'\\', '\\'}, {'^', '{'}, {'}', '~'}, {0xa1, 0xac}, {0xae, 0x5ff},
  {0x606, 0x61b}, {0x61d, 0x6dc}, {0x6de, 0x70e}, {0x710, 0x88f}, {0x892, 0x8e1}, {0x8e3, 0x167f}, {0x1681, 0x180d}, {0x180f, 0x1fff},
  {0x2010, 0x2027}, {0x2030, 0x205e}, {0x2065, 0x2065}, {0x2070, 0x2fff}, {0x3001, 0xd7ff}, {0xe001, 0xf8fe}, {0xf900, 0xfefe}, {0xff00, 0xfff8},
  {0xfffc, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '\n', 23,
        '\r', 24,
        '#', 20,
        '-', 16,
        ':', 12,
        '[', 10,
        ']', 13,
        '|', 15,
      );
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(25);
      if (set_contains(sym__strict_token_character_set_1, 25, lookahead)) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(25);
      if (set_contains(sym__token_character_set_1, 23, lookahead)) ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(25);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(25);
      if (set_contains(sym__token_character_set_1, 23, lookahead)) ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(8);
      END_STATE();
    case 5:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '#') ADVANCE(20);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(25);
      if (set_contains(sym__token_character_set_1, 23, lookahead)) ADVANCE(17);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\r') ADVANCE(24);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(13);
      if (lookahead == '|') ADVANCE(14);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(25);
      if (set_contains(sym__strict_token_character_set_1, 25, lookahead)) ADVANCE(18);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (set_contains(sym__token_character_set_1, 23, lookahead)) ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (set_contains(sym__token_character_set_1, 23, lookahead)) ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (set_contains(sym__token_character_set_1, 23, lookahead)) ADVANCE(17);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__token);
      if (lookahead == '>') ADVANCE(9);
      if (set_contains(sym__token_character_set_1, 23, lookahead)) ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__token);
      if (set_contains(sym__token_character_set_1, 23, lookahead)) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__strict_token);
      if (set_contains(sym__strict_token_character_set_1, 25, lookahead)) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_info_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_simple_comment);
      if (lookahead == '!') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_simple_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '!') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_simple_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__lf);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__lf);
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__ws);
      if (lookahead == ' ' ||
          lookahead == 0xa0 ||
          lookahead == 0x1680 ||
          (0x2000 <= lookahead && lookahead <= 0x200a) ||
          lookahead == 0x2028 ||
          lookahead == 0x2029 ||
          lookahead == 0x202f ||
          lookahead == 0x205f ||
          lookahead == 0x3000) ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__token] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_info_comment] = ACTIONS(1),
    [sym_simple_comment] = ACTIONS(3),
    [sym__lf] = ACTIONS(1),
    [sym__ws] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(63),
    [sym__line] = STATE(60),
    [sym__statement] = STATE(51),
    [sym_stmt_translation] = STATE(51),
    [sym_stmt_complex] = STATE(51),
    [sym_text] = STATE(16),
    [sym__orthogram] = STATE(4),
    [sym_ortho_gap] = STATE(4),
    [sym_ortho_choice] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_stmt_complex_repeat1] = STATE(4),
    [aux_sym_text_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__token] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_info_comment] = ACTIONS(13),
    [sym_simple_comment] = ACTIONS(3),
    [sym__lf] = ACTIONS(15),
    [sym__ws] = ACTIONS(5),
  },
  [2] = {
    [sym__line] = STATE(66),
    [sym__statement] = STATE(51),
    [sym_stmt_translation] = STATE(51),
    [sym_stmt_complex] = STATE(51),
    [sym_text] = STATE(23),
    [sym__orthogram] = STATE(7),
    [sym_ortho_gap] = STATE(7),
    [sym_ortho_choice] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_stmt_complex_repeat1] = STATE(7),
    [aux_sym_text_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__token] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(22),
    [sym_info_comment] = ACTIONS(25),
    [sym_simple_comment] = ACTIONS(3),
    [sym__lf] = ACTIONS(28),
    [sym__ws] = ACTIONS(5),
  },
  [3] = {
    [sym__line] = STATE(58),
    [sym__statement] = STATE(51),
    [sym_stmt_translation] = STATE(51),
    [sym_stmt_complex] = STATE(51),
    [sym_text] = STATE(16),
    [sym__orthogram] = STATE(4),
    [sym_ortho_gap] = STATE(4),
    [sym_ortho_choice] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_stmt_complex_repeat1] = STATE(4),
    [aux_sym_text_repeat1] = STATE(38),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym__token] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_info_comment] = ACTIONS(33),
    [sym_simple_comment] = ACTIONS(3),
    [sym__lf] = ACTIONS(35),
    [sym__ws] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      sym__token,
    STATE(10), 1,
      sym_text,
    STATE(13), 1,
      aux_sym_text_repeat1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
    STATE(5), 4,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
      aux_sym_stmt_complex_repeat1,
  [30] = 8,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(43), 1,
      sym__token,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym_text,
    STATE(36), 1,
      aux_sym_text_repeat1,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
    STATE(5), 4,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
      aux_sym_stmt_complex_repeat1,
  [60] = 8,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(43), 1,
      sym__token,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    STATE(36), 1,
      aux_sym_text_repeat1,
    STATE(41), 1,
      sym_text,
    ACTIONS(41), 2,
      sym_info_comment,
      sym__lf,
    STATE(6), 4,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
      aux_sym_stmt_complex_repeat1,
  [89] = 8,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(52), 1,
      sym__token,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_text,
    STATE(20), 1,
      aux_sym_text_repeat1,
    ACTIONS(37), 2,
      sym_info_comment,
      sym__lf,
    STATE(6), 4,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
      aux_sym_stmt_complex_repeat1,
  [118] = 8,
    ACTIONS(56), 1,
      anon_sym_COLON,
    ACTIONS(58), 1,
      anon_sym_RBRACK,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(62), 1,
      sym__strict_token,
    STATE(17), 1,
      aux_sym_strict_text_repeat1,
    STATE(31), 1,
      sym_strict_text,
    STATE(43), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [144] = 8,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(62), 1,
      sym__strict_token,
    ACTIONS(64), 1,
      anon_sym_COLON,
    ACTIONS(66), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_strict_text_repeat1,
    STATE(42), 1,
      sym_strict_text,
    STATE(53), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [170] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
    STATE(21), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [190] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(72), 1,
      sym__token,
    STATE(11), 1,
      aux_sym_text_repeat1,
    ACTIONS(70), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [209] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 2,
      sym_info_comment,
      sym__lf,
    STATE(40), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [228] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(77), 1,
      sym__token,
    STATE(11), 1,
      aux_sym_text_repeat1,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [247] = 4,
    ACTIONS(81), 1,
      sym__strict_token,
    STATE(14), 1,
      aux_sym_strict_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(79), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [263] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [277] = 4,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    STATE(21), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [293] = 4,
    ACTIONS(91), 1,
      sym__strict_token,
    STATE(14), 1,
      aux_sym_strict_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(89), 3,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [309] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(17), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [323] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(93), 1,
      sym__token,
    STATE(19), 1,
      aux_sym_text_repeat1,
    ACTIONS(70), 3,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [341] = 5,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(96), 1,
      sym__token,
    STATE(19), 1,
      aux_sym_text_repeat1,
    ACTIONS(75), 3,
      anon_sym_LBRACK,
      sym_info_comment,
      sym__lf,
  [359] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [373] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [387] = 4,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(101), 1,
      anon_sym_DASH_GT,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    STATE(40), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [403] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [417] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [431] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [445] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(109), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [459] = 4,
    ACTIONS(111), 1,
      sym__token,
    STATE(28), 1,
      aux_sym_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(70), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [474] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(107), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [487] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(84), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [500] = 5,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(114), 1,
      anon_sym_COLON,
    ACTIONS(116), 1,
      anon_sym_RBRACK,
    STATE(49), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [517] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(109), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [530] = 3,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    STATE(21), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [543] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(105), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [556] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(103), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [569] = 4,
    ACTIONS(118), 1,
      sym__token,
    STATE(28), 1,
      aux_sym_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(75), 2,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
  [584] = 5,
    ACTIONS(70), 1,
      anon_sym_LBRACK,
    ACTIONS(120), 1,
      sym__token,
    ACTIONS(123), 1,
      anon_sym_DASH_GT,
    STATE(37), 1,
      aux_sym_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [601] = 5,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      sym__token,
    ACTIONS(127), 1,
      anon_sym_DASH_GT,
    STATE(37), 1,
      aux_sym_text_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [618] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(98), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [631] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(41), 4,
      anon_sym_LBRACK,
      sym__token,
      sym_info_comment,
      sym__lf,
  [644] = 3,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    STATE(40), 3,
      sym__orthogram,
      sym_ortho_gap,
      sym_ortho_choice,
  [657] = 5,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(129), 1,
      anon_sym_COLON,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [674] = 4,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [688] = 4,
    ACTIONS(39), 1,
      sym__token,
    STATE(13), 1,
      aux_sym_text_repeat1,
    STATE(54), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [702] = 4,
    ACTIONS(135), 1,
      sym__token,
    STATE(36), 1,
      aux_sym_text_repeat1,
    STATE(64), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [716] = 4,
    ACTIONS(135), 1,
      sym__token,
    STATE(36), 1,
      aux_sym_text_repeat1,
    STATE(62), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [730] = 4,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [744] = 4,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    ACTIONS(141), 1,
      anon_sym_PIPE,
    STATE(48), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [758] = 4,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(144), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [772] = 4,
    ACTIONS(135), 1,
      sym__token,
    STATE(36), 1,
      aux_sym_text_repeat1,
    STATE(65), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [786] = 4,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(148), 1,
      sym_info_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      sym__lf,
  [800] = 4,
    ACTIONS(52), 1,
      sym__token,
    STATE(20), 1,
      aux_sym_text_repeat1,
    STATE(54), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [814] = 4,
    ACTIONS(60), 1,
      anon_sym_PIPE,
    ACTIONS(150), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_ortho_choice_repeat1,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [828] = 3,
    ACTIONS(3), 1,
      sym_simple_comment,
    ACTIONS(5), 1,
      sym__ws,
    ACTIONS(152), 3,
      ts_builtin_sym_end,
      sym_info_comment,
      sym__lf,
  [840] = 4,
    ACTIONS(135), 1,
      sym__token,
    STATE(36), 1,
      aux_sym_text_repeat1,
    STATE(61), 1,
      sym_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [854] = 4,
    ACTIONS(62), 1,
      sym__strict_token,
    STATE(17), 1,
      aux_sym_strict_text_repeat1,
    STATE(59), 1,
      sym_strict_text,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [868] = 2,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      sym__lf,
  [877] = 3,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      sym__lf,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [888] = 2,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
    ACTIONS(160), 2,
      anon_sym_RBRACK,
      anon_sym_PIPE,
  [897] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(158), 1,
      sym__lf,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [908] = 2,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [916] = 2,
    ACTIONS(164), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [924] = 2,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [932] = 2,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [940] = 2,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
  [948] = 2,
    ACTIONS(158), 1,
      sym__lf,
    ACTIONS(5), 2,
      sym_simple_comment,
      sym__ws,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 89,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 144,
  [SMALL_STATE(10)] = 170,
  [SMALL_STATE(11)] = 190,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 228,
  [SMALL_STATE(14)] = 247,
  [SMALL_STATE(15)] = 263,
  [SMALL_STATE(16)] = 277,
  [SMALL_STATE(17)] = 293,
  [SMALL_STATE(18)] = 309,
  [SMALL_STATE(19)] = 323,
  [SMALL_STATE(20)] = 341,
  [SMALL_STATE(21)] = 359,
  [SMALL_STATE(22)] = 373,
  [SMALL_STATE(23)] = 387,
  [SMALL_STATE(24)] = 403,
  [SMALL_STATE(25)] = 417,
  [SMALL_STATE(26)] = 431,
  [SMALL_STATE(27)] = 445,
  [SMALL_STATE(28)] = 459,
  [SMALL_STATE(29)] = 474,
  [SMALL_STATE(30)] = 487,
  [SMALL_STATE(31)] = 500,
  [SMALL_STATE(32)] = 517,
  [SMALL_STATE(33)] = 530,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 556,
  [SMALL_STATE(36)] = 569,
  [SMALL_STATE(37)] = 584,
  [SMALL_STATE(38)] = 601,
  [SMALL_STATE(39)] = 618,
  [SMALL_STATE(40)] = 631,
  [SMALL_STATE(41)] = 644,
  [SMALL_STATE(42)] = 657,
  [SMALL_STATE(43)] = 674,
  [SMALL_STATE(44)] = 688,
  [SMALL_STATE(45)] = 702,
  [SMALL_STATE(46)] = 716,
  [SMALL_STATE(47)] = 730,
  [SMALL_STATE(48)] = 744,
  [SMALL_STATE(49)] = 758,
  [SMALL_STATE(50)] = 772,
  [SMALL_STATE(51)] = 786,
  [SMALL_STATE(52)] = 800,
  [SMALL_STATE(53)] = 814,
  [SMALL_STATE(54)] = 828,
  [SMALL_STATE(55)] = 840,
  [SMALL_STATE(56)] = 854,
  [SMALL_STATE(57)] = 868,
  [SMALL_STATE(58)] = 877,
  [SMALL_STATE(59)] = 888,
  [SMALL_STATE(60)] = 897,
  [SMALL_STATE(61)] = 908,
  [SMALL_STATE(62)] = 916,
  [SMALL_STATE(63)] = 924,
  [SMALL_STATE(64)] = 932,
  [SMALL_STATE(65)] = 940,
  [SMALL_STATE(66)] = 948,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_complex, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_stmt_complex_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_complex_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_complex_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_stmt_complex_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_complex, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_strict_text_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_strict_text_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ortho_gap, 3, 0, 2), REDUCE(sym_ortho_choice, 3, 0, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strict_text, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_ortho_gap, 2, 0, 0), REDUCE(sym_ortho_choice, 2, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ortho_gap, 5, 0, 9),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ortho_choice, 4, 0, 8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ortho_gap, 4, 0, 7),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ortho_choice, 3, 0, 4),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ortho_choice_repeat1, 2, 0, 5),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ortho_choice_repeat1, 2, 0, 5), SHIFT_REPEAT(56),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stmt_translation, 3, 0, 6),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ortho_choice_repeat1, 2, 0, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [166] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tort(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__token,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
