#include <stdio.h>
#include <string.h>

#include "tree_sitter/parser.h"

enum TokenType {
    DECL_KW,
    INPUT_KW,
    OUTPUT_KW,
    TYPE_KW,
    FUNCTOR_KW,
    INCLUDE_KW,
    PRINTSIZE_KW,
    LIMITSIZE_KW,
    PLAN_KW,
    COMP_KW,
    INIT_KW,
    OVERRIDE_KW,
};

bool is_whitespace(int32_t c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

static inline int32_t advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
    return lexer->lookahead;
}

static inline int32_t skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
    return lexer->lookahead;
}

void *tree_sitter_souffle_external_scanner_create() {
    return NULL;
}

void tree_sitter_souffle_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_souffle_external_scanner_serialize(void *payload,
                                                        char *buffer) {
    return 0;
}

void tree_sitter_souffle_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
}

char *next_token(TSLexer *lexer) {
    for (int32_t c = lexer->lookahead; !lexer->eof(lexer) && is_whitespace(c);
         c = skip(lexer)) {
    }
    if (lexer->eof(lexer)) return NULL;

    int buf_limit = 36;
    char *buf = (char *)malloc((buf_limit + 1) * sizeof(char));
    int32_t i = 0;

    for (int32_t c = lexer->lookahead;
         !lexer->eof(lexer) && !is_whitespace(c) && i < buf_limit;
         c = advance(lexer)) {
        buf[i] = c;
        i++;
    }
    buf[i] = '\0';
    return buf;
}

bool tree_sitter_souffle_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
    char *token = next_token(lexer);
    if (token == NULL) return false;

    bool matched = false;
    if (valid_symbols[DECL_KW] && strcmp(token, ".decl") == 0) {
        lexer->result_symbol = DECL_KW;
        matched = true;
    }
    if (valid_symbols[INPUT_KW] && strcmp(token, ".input") == 0) {
        lexer->result_symbol = INPUT_KW;
        matched = true;
    }
    if (valid_symbols[OUTPUT_KW] && strcmp(token, ".output") == 0) {
        lexer->result_symbol = OUTPUT_KW;
        matched = true;
    }
    if (valid_symbols[TYPE_KW] && strcmp(token, ".type") == 0) {
        lexer->result_symbol = TYPE_KW;
        matched = true;
    }
    if (valid_symbols[FUNCTOR_KW] && strcmp(token, ".functor") == 0) {
        lexer->result_symbol = FUNCTOR_KW;
        matched = true;
    }
    if (valid_symbols[INCLUDE_KW] && strcmp(token, ".include") == 0) {
        lexer->result_symbol = INCLUDE_KW;
        matched = true;
    }
    if (valid_symbols[PRINTSIZE_KW] && strcmp(token, ".printsize") == 0) {
        lexer->result_symbol = PRINTSIZE_KW;
        matched = true;
    }
    if (valid_symbols[LIMITSIZE_KW] && strcmp(token, ".limitsize") == 0) {
        lexer->result_symbol = LIMITSIZE_KW;
        matched = true;
    }
    if (valid_symbols[PLAN_KW] && strcmp(token, ".plan") == 0) {
        lexer->result_symbol = PLAN_KW;
        matched = true;
    }
    if (valid_symbols[COMP_KW] && strcmp(token, ".comp") == 0) {
        lexer->result_symbol = COMP_KW;
        matched = true;
    }
    if (valid_symbols[INIT_KW] && strcmp(token, ".init") == 0) {
        lexer->result_symbol = INIT_KW;
        matched = true;
    }
    if (valid_symbols[OVERRIDE_KW] && strcmp(token, ".override") == 0) {
        lexer->result_symbol = OVERRIDE_KW;
        matched = true;
    }
    free(token);
    return matched;
}
