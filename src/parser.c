#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 27
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_POUND = 1,
  anon_sym_COLON = 2,
  sym_item_start = 3,
  sym_identifier = 4,
  sym_indentation = 5,
  sym_space = 6,
  aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH = 7,
  sym_item_text = 8,
  sym_source_file = 9,
  sym_item = 10,
  sym_item_content = 11,
  sym_item_tags = 12,
  sym_item_tag = 13,
  sym_new_line = 14,
  aux_sym_source_file_repeat1 = 15,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_POUND] = "#",
  [anon_sym_COLON] = ":",
  [sym_item_start] = "item_start",
  [sym_identifier] = "identifier",
  [sym_indentation] = "indentation",
  [sym_space] = "space",
  [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = "/\\r?\\n/",
  [sym_item_text] = "item_text",
  [sym_source_file] = "source_file",
  [sym_item] = "item",
  [sym_item_content] = "item_content",
  [sym_item_tags] = "item_tags",
  [sym_item_tag] = "item_tag",
  [sym_new_line] = "new_line",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_item_start] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_indentation] = {
    .visible = true,
    .named = true,
  },
  [sym_space] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_item_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_item_content] = {
    .visible = true,
    .named = true,
  },
  [sym_item_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_item_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_new_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == ':')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_item_start);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_indentation);
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(7);
      if (lookahead == '\n' ||
          lookahead == '\r')
        SKIP(6);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_indentation);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(7);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_indentation);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-')
        ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(9);
      END_STATE();
    case 10:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(13);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(15);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH);
      END_STATE();
    case 13:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(13);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(14);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(5);
      END_STATE();
    case 17:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(18);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(18);
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(20);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(19);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_item_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r')
        ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    case 24:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == ' ')
        SKIP(23);
      END_STATE();
    case 25:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == '\n')
        ADVANCE(12);
      if (lookahead == '\r')
        ADVANCE(26);
      if (lookahead == ':')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(15);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_space);
      if (lookahead == '\t' ||
          lookahead == ' ')
        ADVANCE(27);
      if (lookahead == 'f' ||
          lookahead == 'v')
        ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == '#')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      if (lookahead != 0)
        ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 25},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 23},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 6},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_item_start] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_item] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_indentation] = ACTIONS(5),
  },
  [2] = {
    [sym_item_start] = ACTIONS(7),
  },
  [3] = {
    [ts_builtin_sym_end] = ACTIONS(9),
  },
  [4] = {
    [sym_item] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_indentation] = ACTIONS(5),
  },
  [5] = {
    [sym_item_content] = STATE(10),
    [sym_item_tags] = STATE(11),
    [sym_item_tag] = STATE(12),
    [sym_new_line] = STATE(13),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_space] = ACTIONS(15),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(17),
  },
  [6] = {
    [sym_item] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_indentation] = ACTIONS(21),
  },
  [7] = {
    [sym_identifier] = ACTIONS(24),
  },
  [8] = {
    [sym_item_content] = STATE(17),
    [sym_item_tags] = STATE(18),
    [sym_item_tag] = STATE(12),
    [sym_new_line] = STATE(19),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_space] = ACTIONS(26),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(17),
    [sym_item_text] = ACTIONS(28),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(30),
    [sym_indentation] = ACTIONS(32),
  },
  [10] = {
    [sym_new_line] = STATE(19),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(34),
  },
  [11] = {
    [sym_item_content] = STATE(17),
    [sym_new_line] = STATE(19),
    [sym_space] = ACTIONS(36),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(17),
  },
  [12] = {
    [sym_space] = ACTIONS(38),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(38),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_indentation] = ACTIONS(42),
  },
  [14] = {
    [anon_sym_COLON] = ACTIONS(44),
    [sym_space] = ACTIONS(46),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(46),
  },
  [15] = {
    [sym_item_text] = ACTIONS(48),
  },
  [16] = {
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(50),
  },
  [17] = {
    [sym_new_line] = STATE(22),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(34),
  },
  [18] = {
    [sym_item_content] = STATE(23),
    [sym_new_line] = STATE(22),
    [sym_space] = ACTIONS(36),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(17),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(52),
    [sym_indentation] = ACTIONS(54),
  },
  [20] = {
    [sym_item_tag] = STATE(24),
    [anon_sym_POUND] = ACTIONS(56),
    [sym_item_text] = ACTIONS(48),
  },
  [21] = {
    [sym_identifier] = ACTIONS(58),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(60),
    [sym_indentation] = ACTIONS(62),
  },
  [23] = {
    [sym_new_line] = STATE(26),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(34),
  },
  [24] = {
    [sym_space] = ACTIONS(64),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(64),
  },
  [25] = {
    [sym_space] = ACTIONS(66),
    [aux_sym_SLASH_BSLASHr_QMARK_BSLASHn_SLASH] = ACTIONS(66),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_indentation] = ACTIONS(70),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 0),
  [5] = {.count = 1, .reusable = false}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(5),
  [9] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [11] = {.count = 1, .reusable = true}, REDUCE(sym_source_file, 1),
  [13] = {.count = 1, .reusable = false}, SHIFT(7),
  [15] = {.count = 1, .reusable = false}, SHIFT(8),
  [17] = {.count = 1, .reusable = false}, SHIFT(9),
  [19] = {.count = 1, .reusable = true}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.count = 2, .reusable = false}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.count = 1, .reusable = true}, SHIFT(14),
  [26] = {.count = 1, .reusable = false}, SHIFT(15),
  [28] = {.count = 1, .reusable = false}, SHIFT(16),
  [30] = {.count = 1, .reusable = true}, REDUCE(sym_new_line, 1),
  [32] = {.count = 1, .reusable = false}, REDUCE(sym_new_line, 1),
  [34] = {.count = 1, .reusable = true}, SHIFT(9),
  [36] = {.count = 1, .reusable = false}, SHIFT(20),
  [38] = {.count = 1, .reusable = false}, REDUCE(sym_item_tags, 1),
  [40] = {.count = 1, .reusable = true}, REDUCE(sym_item, 3),
  [42] = {.count = 1, .reusable = false}, REDUCE(sym_item, 3),
  [44] = {.count = 1, .reusable = false}, SHIFT(21),
  [46] = {.count = 1, .reusable = false}, REDUCE(sym_item_tag, 2),
  [48] = {.count = 1, .reusable = true}, SHIFT(16),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_item_content, 2),
  [52] = {.count = 1, .reusable = true}, REDUCE(sym_item, 4),
  [54] = {.count = 1, .reusable = false}, REDUCE(sym_item, 4),
  [56] = {.count = 1, .reusable = true}, SHIFT(7),
  [58] = {.count = 1, .reusable = true}, SHIFT(25),
  [60] = {.count = 1, .reusable = true}, REDUCE(sym_item, 5),
  [62] = {.count = 1, .reusable = false}, REDUCE(sym_item, 5),
  [64] = {.count = 1, .reusable = false}, REDUCE(sym_item_tags, 3),
  [66] = {.count = 1, .reusable = false}, REDUCE(sym_item_tag, 4),
  [68] = {.count = 1, .reusable = true}, REDUCE(sym_item, 6),
  [70] = {.count = 1, .reusable = false}, REDUCE(sym_item, 6),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_micromanager() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
