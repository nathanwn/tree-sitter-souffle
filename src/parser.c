#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 3
#define TOKEN_COUNT 48
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_DOTdecl = 1,
  anon_sym_COMMA = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  anon_sym_eqrel = 5,
  anon_sym_btree = 6,
  anon_sym_brie = 7,
  anon_sym_no_magic = 8,
  anon_sym_magic = 9,
  anon_sym_no_inline = 10,
  anon_sym_inline = 11,
  anon_sym_override = 12,
  anon_sym_choice_DASHdomain = 13,
  anon_sym_COLON_DASH = 14,
  anon_sym_DOT = 15,
  anon_sym_SEMI = 16,
  anon_sym_BANG = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_EQ = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_DOTplan = 24,
  anon_sym_DOTinput = 25,
  anon_sym_DOToutput = 26,
  anon_sym_DOTprintsize = 27,
  anon_sym_DOTlimitsize = 28,
  anon_sym_DOTinclude = 29,
  anon_sym__ = 30,
  anon_sym_COLON = 31,
  anon_sym_DOTtype = 32,
  anon_sym_LT_COLON = 33,
  anon_sym_PIPE = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_number = 37,
  anon_sym_symbol = 38,
  anon_sym_unsigned = 39,
  anon_sym_float = 40,
  anon_sym_true = 41,
  anon_sym_false = 42,
  sym_string_literal = 43,
  sym_line_comment = 44,
  sym_block_comment = 45,
  sym_identifier = 46,
  sym_number = 47,
  sym_source_file = 48,
  sym__element = 49,
  sym_relation_decl = 50,
  sym_relation_qualifier = 51,
  sym_choice_domain = 52,
  sym_choice_domain_attribute = 53,
  sym_choice_domain_tuple_attribute = 54,
  sym_rule = 55,
  sym_disjunction = 56,
  sym_conjunction = 57,
  sym_constraint = 58,
  sym_binary_constraint = 59,
  sym_query_plan = 60,
  sym_directive = 61,
  sym_directive_qualifier = 62,
  sym_directive_attribute_assignment = 63,
  sym_directive_value = 64,
  sym_include_directive = 65,
  sym_qualified_name = 66,
  sym_argument = 67,
  sym_variable = 68,
  sym_attribute = 69,
  sym_fact = 70,
  sym_type_decl = 71,
  sym_subtype_decl = 72,
  sym_equivalence_type_decl = 73,
  sym_union_type_expr = 74,
  sym_type_name = 75,
  sym_record_type_expr = 76,
  sym_primitive_type = 77,
  sym_atom = 78,
  sym_boolean_literal = 79,
  aux_sym_source_file_repeat1 = 80,
  aux_sym_relation_decl_repeat1 = 81,
  aux_sym_relation_decl_repeat2 = 82,
  aux_sym_relation_decl_repeat3 = 83,
  aux_sym_choice_domain_repeat1 = 84,
  aux_sym_rule_repeat1 = 85,
  aux_sym_disjunction_repeat1 = 86,
  aux_sym_conjunction_repeat1 = 87,
  aux_sym_conjunction_repeat2 = 88,
  aux_sym_directive_repeat1 = 89,
  aux_sym_directive_repeat2 = 90,
  aux_sym_qualified_name_repeat1 = 91,
  aux_sym_union_type_expr_repeat1 = 92,
  aux_sym_atom_repeat1 = 93,
  alias_sym_attribute_name = 94,
  alias_sym_choice_domain_single_attribute = 95,
  alias_sym_user_defined_type_name = 96,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTdecl] = ".decl",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_eqrel] = "eqrel",
  [anon_sym_btree] = "btree",
  [anon_sym_brie] = "brie",
  [anon_sym_no_magic] = "no_magic",
  [anon_sym_magic] = "magic",
  [anon_sym_no_inline] = "no_inline",
  [anon_sym_inline] = "inline",
  [anon_sym_override] = "override",
  [anon_sym_choice_DASHdomain] = "choice-domain",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_DOTplan] = ".plan",
  [anon_sym_DOTinput] = ".input",
  [anon_sym_DOToutput] = ".output",
  [anon_sym_DOTprintsize] = ".printsize",
  [anon_sym_DOTlimitsize] = ".limitsize",
  [anon_sym_DOTinclude] = ".include",
  [anon_sym__] = "_",
  [anon_sym_COLON] = ":",
  [anon_sym_DOTtype] = ".type",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_number] = "number",
  [anon_sym_symbol] = "symbol",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_string_literal] = "string_literal",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym_relation_decl] = "relation_decl",
  [sym_relation_qualifier] = "relation_qualifier",
  [sym_choice_domain] = "choice_domain",
  [sym_choice_domain_attribute] = "choice_domain_attribute",
  [sym_choice_domain_tuple_attribute] = "choice_domain_tuple_attribute",
  [sym_rule] = "rule",
  [sym_disjunction] = "disjunction",
  [sym_conjunction] = "conjunction",
  [sym_constraint] = "constraint",
  [sym_binary_constraint] = "binary_constraint",
  [sym_query_plan] = "query_plan",
  [sym_directive] = "directive",
  [sym_directive_qualifier] = "directive_qualifier",
  [sym_directive_attribute_assignment] = "directive_attribute_assignment",
  [sym_directive_value] = "directive_value",
  [sym_include_directive] = "include_directive",
  [sym_qualified_name] = "qualified_name",
  [sym_argument] = "argument",
  [sym_variable] = "variable",
  [sym_attribute] = "attribute",
  [sym_fact] = "fact",
  [sym_type_decl] = "type_decl",
  [sym_subtype_decl] = "subtype_decl",
  [sym_equivalence_type_decl] = "equivalence_type_decl",
  [sym_union_type_expr] = "union_type_expr",
  [sym_type_name] = "type_name",
  [sym_record_type_expr] = "record_type_expr",
  [sym_primitive_type] = "primitive_type",
  [sym_atom] = "atom",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_relation_decl_repeat1] = "relation_decl_repeat1",
  [aux_sym_relation_decl_repeat2] = "relation_decl_repeat2",
  [aux_sym_relation_decl_repeat3] = "relation_decl_repeat3",
  [aux_sym_choice_domain_repeat1] = "choice_domain_repeat1",
  [aux_sym_rule_repeat1] = "rule_repeat1",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_directive_repeat2] = "directive_repeat2",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
  [aux_sym_union_type_expr_repeat1] = "union_type_expr_repeat1",
  [aux_sym_atom_repeat1] = "atom_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_choice_domain_single_attribute] = "choice_domain_single_attribute",
  [alias_sym_user_defined_type_name] = "user_defined_type_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTdecl] = anon_sym_DOTdecl,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_eqrel] = anon_sym_eqrel,
  [anon_sym_btree] = anon_sym_btree,
  [anon_sym_brie] = anon_sym_brie,
  [anon_sym_no_magic] = anon_sym_no_magic,
  [anon_sym_magic] = anon_sym_magic,
  [anon_sym_no_inline] = anon_sym_no_inline,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_choice_DASHdomain] = anon_sym_choice_DASHdomain,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_DOTplan] = anon_sym_DOTplan,
  [anon_sym_DOTinput] = anon_sym_DOTinput,
  [anon_sym_DOToutput] = anon_sym_DOToutput,
  [anon_sym_DOTprintsize] = anon_sym_DOTprintsize,
  [anon_sym_DOTlimitsize] = anon_sym_DOTlimitsize,
  [anon_sym_DOTinclude] = anon_sym_DOTinclude,
  [anon_sym__] = anon_sym__,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOTtype] = anon_sym_DOTtype,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_string_literal] = sym_string_literal,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym_relation_decl] = sym_relation_decl,
  [sym_relation_qualifier] = sym_relation_qualifier,
  [sym_choice_domain] = sym_choice_domain,
  [sym_choice_domain_attribute] = sym_choice_domain_attribute,
  [sym_choice_domain_tuple_attribute] = sym_choice_domain_tuple_attribute,
  [sym_rule] = sym_rule,
  [sym_disjunction] = sym_disjunction,
  [sym_conjunction] = sym_conjunction,
  [sym_constraint] = sym_constraint,
  [sym_binary_constraint] = sym_binary_constraint,
  [sym_query_plan] = sym_query_plan,
  [sym_directive] = sym_directive,
  [sym_directive_qualifier] = sym_directive_qualifier,
  [sym_directive_attribute_assignment] = sym_directive_attribute_assignment,
  [sym_directive_value] = sym_directive_value,
  [sym_include_directive] = sym_include_directive,
  [sym_qualified_name] = sym_qualified_name,
  [sym_argument] = sym_argument,
  [sym_variable] = sym_variable,
  [sym_attribute] = sym_attribute,
  [sym_fact] = sym_fact,
  [sym_type_decl] = sym_type_decl,
  [sym_subtype_decl] = sym_subtype_decl,
  [sym_equivalence_type_decl] = sym_equivalence_type_decl,
  [sym_union_type_expr] = sym_union_type_expr,
  [sym_type_name] = sym_type_name,
  [sym_record_type_expr] = sym_record_type_expr,
  [sym_primitive_type] = sym_primitive_type,
  [sym_atom] = sym_atom,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_relation_decl_repeat1] = aux_sym_relation_decl_repeat1,
  [aux_sym_relation_decl_repeat2] = aux_sym_relation_decl_repeat2,
  [aux_sym_relation_decl_repeat3] = aux_sym_relation_decl_repeat3,
  [aux_sym_choice_domain_repeat1] = aux_sym_choice_domain_repeat1,
  [aux_sym_rule_repeat1] = aux_sym_rule_repeat1,
  [aux_sym_disjunction_repeat1] = aux_sym_disjunction_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_directive_repeat2] = aux_sym_directive_repeat2,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
  [aux_sym_union_type_expr_repeat1] = aux_sym_union_type_expr_repeat1,
  [aux_sym_atom_repeat1] = aux_sym_atom_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_choice_domain_single_attribute] = alias_sym_choice_domain_single_attribute,
  [alias_sym_user_defined_type_name] = alias_sym_user_defined_type_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOTdecl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eqrel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice_DASHdomain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTplan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTinput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOToutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTprintsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlimitsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
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
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_relation_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_domain_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_choice_domain_tuple_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_query_plan] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_qualifier] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_attribute_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_directive_value] = {
    .visible = true,
    .named = true,
  },
  [sym_include_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_argument] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_subtype_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_equivalence_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_domain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_type_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_atom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_choice_domain_single_attribute] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_user_defined_type_name] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_directive_attribute = 1,
  field_directive_value = 2,
  field_relation_name = 3,
  field_rule_name = 4,
  field_type_ref = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_directive_attribute] = "directive_attribute",
  [field_directive_value] = "directive_value",
  [field_relation_name] = "relation_name",
  [field_rule_name] = "rule_name",
  [field_type_ref] = "type_ref",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [7] = {.index = 5, .length = 2},
  [8] = {.index = 7, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type_ref, 1},
  [1] =
    {field_rule_name, 0},
  [2] =
    {field_relation_name, 1},
  [3] =
    {field_rule_name, 0},
    {field_rule_name, 1},
  [5] =
    {field_relation_name, 1},
    {field_relation_name, 2},
  [7] =
    {field_directive_attribute, 0},
    {field_directive_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [2] = {
    [0] = alias_sym_user_defined_type_name,
  },
  [6] = {
    [0] = alias_sym_attribute_name,
  },
  [9] = {
    [0] = alias_sym_choice_domain_single_attribute,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_qualified_name, 2,
    sym_qualified_name,
    alias_sym_user_defined_type_name,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 22,
  [79] = 79,
  [80] = 26,
  [81] = 24,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 30,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 162,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '_') ADVANCE(95);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'f') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '|') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == '[') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 's') ADVANCE(185);
      if (lookahead == 'u') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(77);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '_') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(110);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '_') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'y') ADVANCE(41);
      END_STATE();
    case 56:
      if (lookahead == 'z') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'z') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 59:
      if (eof) ADVANCE(62);
      if (lookahead == '!') ADVANCE(11);
      if (lookahead == '(') ADVANCE(65);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == ',') ADVANCE(64);
      if (lookahead == '.') ADVANCE(78);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == '>') ADVANCE(84);
      if (lookahead == ']') ADVANCE(102);
      if (lookahead == '|') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(172);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead == 'i') ADVANCE(161);
      if (lookahead == 'm') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'o') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOTdecl);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'd') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(99);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(86);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOTplan);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOTinput);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOToutput);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DOTprintsize);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_DOTlimitsize);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOTinclude);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(76);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DOTtype);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead == 'm') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(146);
      if (lookahead == 't') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 59},
  [2] = {.lex_state = 60},
  [3] = {.lex_state = 60},
  [4] = {.lex_state = 60},
  [5] = {.lex_state = 60},
  [6] = {.lex_state = 60},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 60},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 60},
  [11] = {.lex_state = 59},
  [12] = {.lex_state = 59},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 59},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 59},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 59},
  [27] = {.lex_state = 59},
  [28] = {.lex_state = 59},
  [29] = {.lex_state = 59},
  [30] = {.lex_state = 59},
  [31] = {.lex_state = 59},
  [32] = {.lex_state = 59},
  [33] = {.lex_state = 59},
  [34] = {.lex_state = 59},
  [35] = {.lex_state = 59},
  [36] = {.lex_state = 59},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 59},
  [39] = {.lex_state = 61},
  [40] = {.lex_state = 59},
  [41] = {.lex_state = 59},
  [42] = {.lex_state = 59},
  [43] = {.lex_state = 61},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 59},
  [46] = {.lex_state = 59},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 59},
  [49] = {.lex_state = 59},
  [50] = {.lex_state = 59},
  [51] = {.lex_state = 59},
  [52] = {.lex_state = 59},
  [53] = {.lex_state = 59},
  [54] = {.lex_state = 59},
  [55] = {.lex_state = 59},
  [56] = {.lex_state = 59},
  [57] = {.lex_state = 59},
  [58] = {.lex_state = 59},
  [59] = {.lex_state = 59},
  [60] = {.lex_state = 59},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 59},
  [63] = {.lex_state = 59},
  [64] = {.lex_state = 59},
  [65] = {.lex_state = 59},
  [66] = {.lex_state = 59},
  [67] = {.lex_state = 59},
  [68] = {.lex_state = 59},
  [69] = {.lex_state = 59},
  [70] = {.lex_state = 59},
  [71] = {.lex_state = 59},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 59},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 9},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 59},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 60},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 9},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 59},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 59},
  [123] = {.lex_state = 59},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 59},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 59},
  [140] = {.lex_state = 59},
  [141] = {.lex_state = 59},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 59},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 59},
  [148] = {.lex_state = 59},
  [149] = {.lex_state = 59},
  [150] = {.lex_state = 59},
  [151] = {.lex_state = 59},
  [152] = {.lex_state = 59},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 59},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 59},
  [158] = {.lex_state = 59},
  [159] = {.lex_state = 60},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 59},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 59},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 59},
  [170] = {.lex_state = 59},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTdecl] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_eqrel] = ACTIONS(1),
    [anon_sym_btree] = ACTIONS(1),
    [anon_sym_brie] = ACTIONS(1),
    [anon_sym_no_magic] = ACTIONS(1),
    [anon_sym_magic] = ACTIONS(1),
    [anon_sym_no_inline] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_choice_DASHdomain] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_DOTinput] = ACTIONS(1),
    [anon_sym_DOToutput] = ACTIONS(1),
    [anon_sym_DOTprintsize] = ACTIONS(1),
    [anon_sym_DOTlimitsize] = ACTIONS(1),
    [anon_sym_DOTinclude] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOTtype] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(166),
    [sym__element] = STATE(11),
    [sym_relation_decl] = STATE(11),
    [sym_rule] = STATE(11),
    [sym_directive] = STATE(11),
    [sym_directive_qualifier] = STATE(141),
    [sym_include_directive] = STATE(11),
    [sym_qualified_name] = STATE(164),
    [sym_fact] = STATE(11),
    [sym_type_decl] = STATE(11),
    [sym_atom] = STATE(101),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_DOTdecl] = ACTIONS(7),
    [anon_sym_DOTinput] = ACTIONS(9),
    [anon_sym_DOToutput] = ACTIONS(9),
    [anon_sym_DOTprintsize] = ACTIONS(9),
    [anon_sym_DOTlimitsize] = ACTIONS(9),
    [anon_sym_DOTinclude] = ACTIONS(11),
    [anon_sym_DOTtype] = ACTIONS(13),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(21), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(70), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(3), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
    ACTIONS(19), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [38] = 7,
    ACTIONS(21), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(67), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(19), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [76] = 7,
    ACTIONS(21), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(31), 1,
      sym_identifier,
    STATE(72), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(19), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(29), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [114] = 7,
    ACTIONS(21), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(70), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(17), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
    ACTIONS(19), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [152] = 7,
    ACTIONS(21), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(35), 1,
      sym_identifier,
    STATE(65), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(19), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(33), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [190] = 7,
    ACTIONS(21), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(69), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(4), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(19), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [228] = 7,
    ACTIONS(21), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(69), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(19), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [266] = 7,
    ACTIONS(21), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(43), 1,
      sym_identifier,
    STATE(68), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(8), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(19), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [304] = 5,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(47), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(45), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [337] = 11,
    ACTIONS(7), 1,
      anon_sym_DOTdecl,
    ACTIONS(11), 1,
      anon_sym_DOTinclude,
    ACTIONS(13), 1,
      anon_sym_DOTtype,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_atom,
    STATE(141), 1,
      sym_directive_qualifier,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(12), 8,
      sym__element,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [382] = 11,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_DOTdecl,
    ACTIONS(62), 1,
      anon_sym_DOTinclude,
    ACTIONS(65), 1,
      anon_sym_DOTtype,
    ACTIONS(68), 1,
      sym_identifier,
    STATE(101), 1,
      sym_atom,
    STATE(141), 1,
      sym_directive_qualifier,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(12), 8,
      sym__element,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [427] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(71), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
    ACTIONS(73), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
  [454] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conjunction_repeat1,
    STATE(47), 1,
      sym_variable,
    STATE(79), 1,
      sym_argument,
    STATE(99), 1,
      sym_conjunction,
    STATE(153), 1,
      sym_disjunction,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_constraint,
      sym_atom,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [501] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conjunction_repeat1,
    STATE(47), 1,
      sym_variable,
    STATE(79), 1,
      sym_argument,
    STATE(99), 1,
      sym_conjunction,
    STATE(164), 1,
      sym_qualified_name,
    STATE(165), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_constraint,
      sym_atom,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [548] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conjunction_repeat1,
    STATE(47), 1,
      sym_variable,
    STATE(79), 1,
      sym_argument,
    STATE(99), 1,
      sym_conjunction,
    STATE(155), 1,
      sym_disjunction,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_constraint,
      sym_atom,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [595] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conjunction_repeat1,
    STATE(47), 1,
      sym_variable,
    STATE(79), 1,
      sym_argument,
    STATE(99), 1,
      sym_conjunction,
    STATE(161), 1,
      sym_disjunction,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_constraint,
      sym_atom,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [642] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conjunction_repeat1,
    STATE(47), 1,
      sym_variable,
    STATE(79), 1,
      sym_argument,
    STATE(99), 1,
      sym_conjunction,
    STATE(160), 1,
      sym_disjunction,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_constraint,
      sym_atom,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [689] = 14,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conjunction_repeat1,
    STATE(47), 1,
      sym_variable,
    STATE(79), 1,
      sym_argument,
    STATE(99), 1,
      sym_conjunction,
    STATE(156), 1,
      sym_disjunction,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_constraint,
      sym_atom,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [736] = 13,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(77), 1,
      anon_sym_BANG,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    STATE(25), 1,
      aux_sym_conjunction_repeat1,
    STATE(47), 1,
      sym_variable,
    STATE(79), 1,
      sym_argument,
    STATE(117), 1,
      sym_conjunction,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(85), 2,
      sym_constraint,
      sym_atom,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [780] = 12,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_BANG,
    STATE(47), 1,
      sym_variable,
    STATE(77), 1,
      aux_sym_conjunction_repeat1,
    STATE(79), 1,
      sym_argument,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(113), 2,
      sym_constraint,
      sym_atom,
  [821] = 4,
    ACTIONS(91), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 12,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [846] = 12,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_BANG,
    STATE(21), 1,
      aux_sym_conjunction_repeat1,
    STATE(47), 1,
      sym_variable,
    STATE(79), 1,
      sym_argument,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(95), 2,
      sym_constraint,
      sym_atom,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [887] = 4,
    ACTIONS(100), 1,
      anon_sym_DOT,
    STATE(26), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 12,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [912] = 12,
    ACTIONS(79), 1,
      anon_sym__,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_BANG,
    ACTIONS(102), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_variable,
    STATE(77), 1,
      aux_sym_conjunction_repeat1,
    STATE(79), 1,
      sym_argument,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(91), 2,
      sym_constraint,
      sym_atom,
    STATE(112), 2,
      sym_binary_constraint,
      sym_boolean_literal,
  [953] = 4,
    ACTIONS(100), 1,
      anon_sym_DOT,
    STATE(22), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 12,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [978] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(106), 13,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym_identifier,
  [998] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(108), 13,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym_identifier,
  [1018] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(110), 13,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      sym_identifier,
  [1038] = 3,
    ACTIONS(112), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 12,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [1060] = 4,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 10,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1083] = 5,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1108] = 5,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1133] = 4,
    ACTIONS(131), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1155] = 4,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    STATE(34), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(134), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1177] = 4,
    ACTIONS(136), 1,
      anon_sym_PIPE,
    STATE(35), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1199] = 8,
    ACTIONS(140), 1,
      anon_sym_LBRACK,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primitive_type,
    STATE(29), 1,
      sym_qualified_name,
    STATE(49), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym_union_type_expr,
      sym_record_type_expr,
    ACTIONS(142), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1229] = 4,
    ACTIONS(148), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(146), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1251] = 4,
    ACTIONS(153), 1,
      anon_sym_DOTplan,
    STATE(59), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1273] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 11,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1291] = 4,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1313] = 4,
    ACTIONS(157), 1,
      anon_sym_COMMA,
    STATE(41), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1335] = 4,
    ACTIONS(153), 1,
      anon_sym_DOTplan,
    STATE(53), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1357] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [1376] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 10,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1393] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(169), 10,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1410] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(171), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [1429] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 10,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [1446] = 3,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1465] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 10,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1482] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(146), 10,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1499] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 10,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1516] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1532] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1548] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1564] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1580] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1596] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1612] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1628] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1644] = 6,
    ACTIONS(98), 1,
      anon_sym_LPAREN,
    ACTIONS(199), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [1668] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(201), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1684] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1700] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1716] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1732] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1748] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(207), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1764] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1780] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1796] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1812] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(209), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1828] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(211), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [1844] = 6,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primitive_type,
    STATE(29), 1,
      sym_qualified_name,
    STATE(64), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(142), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1867] = 6,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primitive_type,
    STATE(29), 1,
      sym_qualified_name,
    STATE(48), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(142), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1890] = 6,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primitive_type,
    STATE(29), 1,
      sym_qualified_name,
    STATE(121), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(142), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1913] = 6,
    ACTIONS(144), 1,
      sym_identifier,
    STATE(28), 1,
      sym_primitive_type,
    STATE(29), 1,
      sym_qualified_name,
    STATE(36), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(142), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [1936] = 5,
    ACTIONS(215), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_BANG,
    STATE(77), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 4,
      anon_sym__,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [1956] = 4,
    ACTIONS(222), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1973] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(225), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
  [1988] = 4,
    ACTIONS(199), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(104), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2005] = 4,
    ACTIONS(199), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2022] = 6,
    ACTIONS(229), 1,
      sym_string_literal,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(144), 1,
      sym_boolean_literal,
    STATE(145), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 2,
      anon_sym_true,
      anon_sym_false,
  [2043] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(235), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2059] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(237), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2071] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(94), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2087] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(241), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2103] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2119] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(241), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2135] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(245), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2147] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(235), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2163] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(247), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2179] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [2191] = 4,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2207] = 4,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(247), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2223] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2234] = 4,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2249] = 4,
    ACTIONS(260), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2264] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(263), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2275] = 4,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    STATE(96), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(265), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [2290] = 4,
    STATE(47), 1,
      sym_variable,
    STATE(128), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym__,
      sym_identifier,
  [2305] = 5,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_COLON_DASH,
    ACTIONS(271), 1,
      anon_sym_DOT,
    STATE(123), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2322] = 5,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(42), 1,
      sym_choice_domain_attribute,
    STATE(46), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2339] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(277), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2350] = 4,
    STATE(47), 1,
      sym_variable,
    STATE(98), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym__,
      sym_identifier,
  [2365] = 4,
    ACTIONS(279), 1,
      anon_sym_EQ,
    ACTIONS(281), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(66), 2,
      sym_subtype_decl,
      sym_equivalence_type_decl,
  [2380] = 4,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(106), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2395] = 4,
    STATE(47), 1,
      sym_variable,
    STATE(142), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym__,
      sym_identifier,
  [2410] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2421] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2432] = 4,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(295), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2447] = 5,
    ACTIONS(273), 1,
      anon_sym_LPAREN,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(46), 1,
      sym_choice_domain_tuple_attribute,
    STATE(51), 1,
      sym_choice_domain_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2464] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(297), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2475] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(299), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2486] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(303), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2500] = 4,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_atom_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2514] = 4,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(311), 1,
      anon_sym_LPAREN,
    STATE(124), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2528] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [2538] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(106), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2552] = 4,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(315), 1,
      anon_sym_RPAREN,
    STATE(110), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2566] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    STATE(106), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2580] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(319), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2590] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(152), 1,
      sym_atom,
    STATE(164), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2604] = 4,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(321), 1,
      anon_sym_COLON_DASH,
    STATE(133), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2618] = 4,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(323), 1,
      anon_sym_LPAREN,
    STATE(110), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2632] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2642] = 4,
    ACTIONS(325), 1,
      anon_sym_COMMA,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2656] = 4,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(332), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2670] = 4,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      aux_sym_atom_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2684] = 4,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(119), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2698] = 4,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    ACTIONS(341), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_atom_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2712] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(343), 1,
      anon_sym_RBRACK,
    STATE(120), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2726] = 4,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(126), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2740] = 4,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    ACTIONS(350), 1,
      anon_sym_COLON_DASH,
    STATE(133), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2754] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(295), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [2764] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(352), 1,
      anon_sym_RPAREN,
    STATE(118), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2778] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    ACTIONS(354), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2792] = 4,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(345), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2806] = 4,
    ACTIONS(330), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2820] = 3,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(135), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2831] = 3,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(138), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2842] = 3,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(33), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2853] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(341), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2862] = 3,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(131), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2873] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(364), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2882] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(366), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2891] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2900] = 3,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(125), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2911] = 3,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(136), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2922] = 3,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(146), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2933] = 3,
    ACTIONS(362), 1,
      sym_identifier,
    STATE(40), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2944] = 3,
    ACTIONS(360), 1,
      sym_identifier,
    STATE(137), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2955] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [2964] = 2,
    ACTIONS(368), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2972] = 2,
    ACTIONS(370), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2980] = 2,
    ACTIONS(372), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2988] = 2,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [2996] = 2,
    ACTIONS(376), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3004] = 2,
    ACTIONS(378), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3012] = 2,
    ACTIONS(380), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3020] = 2,
    ACTIONS(382), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3028] = 2,
    ACTIONS(384), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3036] = 2,
    ACTIONS(386), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3044] = 2,
    ACTIONS(388), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3052] = 2,
    ACTIONS(390), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3060] = 2,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3068] = 2,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3076] = 2,
    ACTIONS(396), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3084] = 2,
    ACTIONS(398), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3092] = 2,
    ACTIONS(400), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3100] = 2,
    ACTIONS(402), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 152,
  [SMALL_STATE(7)] = 190,
  [SMALL_STATE(8)] = 228,
  [SMALL_STATE(9)] = 266,
  [SMALL_STATE(10)] = 304,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 382,
  [SMALL_STATE(13)] = 427,
  [SMALL_STATE(14)] = 454,
  [SMALL_STATE(15)] = 501,
  [SMALL_STATE(16)] = 548,
  [SMALL_STATE(17)] = 595,
  [SMALL_STATE(18)] = 642,
  [SMALL_STATE(19)] = 689,
  [SMALL_STATE(20)] = 736,
  [SMALL_STATE(21)] = 780,
  [SMALL_STATE(22)] = 821,
  [SMALL_STATE(23)] = 846,
  [SMALL_STATE(24)] = 887,
  [SMALL_STATE(25)] = 912,
  [SMALL_STATE(26)] = 953,
  [SMALL_STATE(27)] = 978,
  [SMALL_STATE(28)] = 998,
  [SMALL_STATE(29)] = 1018,
  [SMALL_STATE(30)] = 1038,
  [SMALL_STATE(31)] = 1060,
  [SMALL_STATE(32)] = 1083,
  [SMALL_STATE(33)] = 1108,
  [SMALL_STATE(34)] = 1133,
  [SMALL_STATE(35)] = 1155,
  [SMALL_STATE(36)] = 1177,
  [SMALL_STATE(37)] = 1199,
  [SMALL_STATE(38)] = 1229,
  [SMALL_STATE(39)] = 1251,
  [SMALL_STATE(40)] = 1273,
  [SMALL_STATE(41)] = 1291,
  [SMALL_STATE(42)] = 1313,
  [SMALL_STATE(43)] = 1335,
  [SMALL_STATE(44)] = 1357,
  [SMALL_STATE(45)] = 1376,
  [SMALL_STATE(46)] = 1393,
  [SMALL_STATE(47)] = 1410,
  [SMALL_STATE(48)] = 1429,
  [SMALL_STATE(49)] = 1446,
  [SMALL_STATE(50)] = 1465,
  [SMALL_STATE(51)] = 1482,
  [SMALL_STATE(52)] = 1499,
  [SMALL_STATE(53)] = 1516,
  [SMALL_STATE(54)] = 1532,
  [SMALL_STATE(55)] = 1548,
  [SMALL_STATE(56)] = 1564,
  [SMALL_STATE(57)] = 1580,
  [SMALL_STATE(58)] = 1596,
  [SMALL_STATE(59)] = 1612,
  [SMALL_STATE(60)] = 1628,
  [SMALL_STATE(61)] = 1644,
  [SMALL_STATE(62)] = 1668,
  [SMALL_STATE(63)] = 1684,
  [SMALL_STATE(64)] = 1700,
  [SMALL_STATE(65)] = 1716,
  [SMALL_STATE(66)] = 1732,
  [SMALL_STATE(67)] = 1748,
  [SMALL_STATE(68)] = 1764,
  [SMALL_STATE(69)] = 1780,
  [SMALL_STATE(70)] = 1796,
  [SMALL_STATE(71)] = 1812,
  [SMALL_STATE(72)] = 1828,
  [SMALL_STATE(73)] = 1844,
  [SMALL_STATE(74)] = 1867,
  [SMALL_STATE(75)] = 1890,
  [SMALL_STATE(76)] = 1913,
  [SMALL_STATE(77)] = 1936,
  [SMALL_STATE(78)] = 1956,
  [SMALL_STATE(79)] = 1973,
  [SMALL_STATE(80)] = 1988,
  [SMALL_STATE(81)] = 2005,
  [SMALL_STATE(82)] = 2022,
  [SMALL_STATE(83)] = 2043,
  [SMALL_STATE(84)] = 2059,
  [SMALL_STATE(85)] = 2071,
  [SMALL_STATE(86)] = 2087,
  [SMALL_STATE(87)] = 2103,
  [SMALL_STATE(88)] = 2119,
  [SMALL_STATE(89)] = 2135,
  [SMALL_STATE(90)] = 2147,
  [SMALL_STATE(91)] = 2163,
  [SMALL_STATE(92)] = 2179,
  [SMALL_STATE(93)] = 2191,
  [SMALL_STATE(94)] = 2207,
  [SMALL_STATE(95)] = 2223,
  [SMALL_STATE(96)] = 2234,
  [SMALL_STATE(97)] = 2249,
  [SMALL_STATE(98)] = 2264,
  [SMALL_STATE(99)] = 2275,
  [SMALL_STATE(100)] = 2290,
  [SMALL_STATE(101)] = 2305,
  [SMALL_STATE(102)] = 2322,
  [SMALL_STATE(103)] = 2339,
  [SMALL_STATE(104)] = 2350,
  [SMALL_STATE(105)] = 2365,
  [SMALL_STATE(106)] = 2380,
  [SMALL_STATE(107)] = 2395,
  [SMALL_STATE(108)] = 2410,
  [SMALL_STATE(109)] = 2421,
  [SMALL_STATE(110)] = 2432,
  [SMALL_STATE(111)] = 2447,
  [SMALL_STATE(112)] = 2464,
  [SMALL_STATE(113)] = 2475,
  [SMALL_STATE(114)] = 2486,
  [SMALL_STATE(115)] = 2500,
  [SMALL_STATE(116)] = 2514,
  [SMALL_STATE(117)] = 2528,
  [SMALL_STATE(118)] = 2538,
  [SMALL_STATE(119)] = 2552,
  [SMALL_STATE(120)] = 2566,
  [SMALL_STATE(121)] = 2580,
  [SMALL_STATE(122)] = 2590,
  [SMALL_STATE(123)] = 2604,
  [SMALL_STATE(124)] = 2618,
  [SMALL_STATE(125)] = 2632,
  [SMALL_STATE(126)] = 2642,
  [SMALL_STATE(127)] = 2656,
  [SMALL_STATE(128)] = 2670,
  [SMALL_STATE(129)] = 2684,
  [SMALL_STATE(130)] = 2698,
  [SMALL_STATE(131)] = 2712,
  [SMALL_STATE(132)] = 2726,
  [SMALL_STATE(133)] = 2740,
  [SMALL_STATE(134)] = 2754,
  [SMALL_STATE(135)] = 2764,
  [SMALL_STATE(136)] = 2778,
  [SMALL_STATE(137)] = 2792,
  [SMALL_STATE(138)] = 2806,
  [SMALL_STATE(139)] = 2820,
  [SMALL_STATE(140)] = 2831,
  [SMALL_STATE(141)] = 2842,
  [SMALL_STATE(142)] = 2853,
  [SMALL_STATE(143)] = 2862,
  [SMALL_STATE(144)] = 2873,
  [SMALL_STATE(145)] = 2882,
  [SMALL_STATE(146)] = 2891,
  [SMALL_STATE(147)] = 2900,
  [SMALL_STATE(148)] = 2911,
  [SMALL_STATE(149)] = 2922,
  [SMALL_STATE(150)] = 2933,
  [SMALL_STATE(151)] = 2944,
  [SMALL_STATE(152)] = 2955,
  [SMALL_STATE(153)] = 2964,
  [SMALL_STATE(154)] = 2972,
  [SMALL_STATE(155)] = 2980,
  [SMALL_STATE(156)] = 2988,
  [SMALL_STATE(157)] = 2996,
  [SMALL_STATE(158)] = 3004,
  [SMALL_STATE(159)] = 3012,
  [SMALL_STATE(160)] = 3020,
  [SMALL_STATE(161)] = 3028,
  [SMALL_STATE(162)] = 3036,
  [SMALL_STATE(163)] = 3044,
  [SMALL_STATE(164)] = 3052,
  [SMALL_STATE(165)] = 3060,
  [SMALL_STATE(166)] = 3068,
  [SMALL_STATE(167)] = 3076,
  [SMALL_STATE(168)] = 3084,
  [SMALL_STATE(169)] = 3092,
  [SMALL_STATE(170)] = 3100,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 4),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 4),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 4),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(13),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(154),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(169),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(168),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(167),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(170),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(150),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_expr_repeat1, 2),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_expr_repeat1, 2), SHIFT_REPEAT(74),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_expr, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_expr, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(111),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 9),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalence_type_decl, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_expr, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_expr, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 7),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 4),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(77),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(162),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [249] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(23),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(20),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(147),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(158),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 6),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(149),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2), SHIFT_REPEAT(107),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_atom_repeat1, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(122),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 8),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [394] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_qualifier, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_souffle(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
