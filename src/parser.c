#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 201
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 4
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_POUNDinclude = 1,
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
  anon_sym_nil = 24,
  anon_sym__ = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_DASH = 28,
  anon_sym_bnot = 29,
  anon_sym_lnot = 30,
  anon_sym_CARET = 31,
  anon_sym_STAR = 32,
  anon_sym_SLASH = 33,
  anon_sym_PERCENT = 34,
  anon_sym_PLUS = 35,
  anon_sym_land = 36,
  anon_sym_lor = 37,
  anon_sym_lxor = 38,
  anon_sym_band = 39,
  anon_sym_bor = 40,
  anon_sym_bxor = 41,
  anon_sym_bshl = 42,
  anon_sym_bshr = 43,
  anon_sym_bshru = 44,
  anon_sym_as = 45,
  anon_sym_COLON = 46,
  anon_sym_LT_COLON = 47,
  anon_sym_PIPE = 48,
  anon_sym_number = 49,
  anon_sym_symbol = 50,
  anon_sym_unsigned = 51,
  anon_sym_float = 52,
  anon_sym_true = 53,
  anon_sym_false = 54,
  sym_string_literal = 55,
  sym_line_comment = 56,
  sym_block_comment = 57,
  sym_identifier = 58,
  sym_number = 59,
  sym_decl_kw = 60,
  sym_input_kw = 61,
  sym_output_kw = 62,
  sym_type_kw = 63,
  sym_include_kw = 64,
  sym_printsize_kw = 65,
  sym_limitsize_kw = 66,
  sym_plan_kw = 67,
  sym_source_file = 68,
  sym__element = 69,
  sym_preprocessor_directive = 70,
  sym_include_preprocessor_directive = 71,
  sym_relation_decl = 72,
  sym_relation_qualifier = 73,
  sym_choice_domain = 74,
  sym_choice_domain_attribute = 75,
  sym_choice_domain_tuple_attribute = 76,
  sym_rule = 77,
  sym_disjunction = 78,
  sym_conjunction = 79,
  sym_constraint = 80,
  sym_binary_constraint = 81,
  sym_query_plan = 82,
  sym_directive = 83,
  sym__directive_qualifier = 84,
  sym_directive_attribute_assignment = 85,
  sym_directive_value = 86,
  sym_include_directive = 87,
  sym_qualified_name = 88,
  sym_argument = 89,
  sym_constant = 90,
  sym_variable = 91,
  sym_argument_list = 92,
  sym_unary_operation = 93,
  sym_binary_operation = 94,
  sym_type_conversion = 95,
  sym_attribute = 96,
  sym_fact = 97,
  sym_type_decl = 98,
  sym_subtype_decl = 99,
  sym_equivalence_type_decl = 100,
  sym_union_type_expr = 101,
  sym_type_name = 102,
  sym_record_type_expr = 103,
  sym_primitive_type = 104,
  sym_atom = 105,
  sym_boolean_literal = 106,
  aux_sym_source_file_repeat1 = 107,
  aux_sym_relation_decl_repeat1 = 108,
  aux_sym_relation_decl_repeat2 = 109,
  aux_sym_relation_decl_repeat3 = 110,
  aux_sym_choice_domain_repeat1 = 111,
  aux_sym_rule_repeat1 = 112,
  aux_sym_disjunction_repeat1 = 113,
  aux_sym_conjunction_repeat1 = 114,
  aux_sym_conjunction_repeat2 = 115,
  aux_sym_directive_repeat1 = 116,
  aux_sym_directive_repeat2 = 117,
  aux_sym_qualified_name_repeat1 = 118,
  aux_sym_argument_list_repeat1 = 119,
  aux_sym_union_type_expr_repeat1 = 120,
  alias_sym_attribute_name = 121,
  alias_sym_choice_domain_single_attribute = 122,
  alias_sym_path_spec = 123,
  alias_sym_user_defined_type_name = 124,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDinclude] = "#include",
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
  [anon_sym_nil] = "nil",
  [anon_sym__] = "_",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_bnot] = "bnot",
  [anon_sym_lnot] = "lnot",
  [anon_sym_CARET] = "^",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_land] = "land",
  [anon_sym_lor] = "lor",
  [anon_sym_lxor] = "lxor",
  [anon_sym_band] = "band",
  [anon_sym_bor] = "bor",
  [anon_sym_bxor] = "bxor",
  [anon_sym_bshl] = "bshl",
  [anon_sym_bshr] = "bshr",
  [anon_sym_bshru] = "bshru",
  [anon_sym_as] = "as",
  [anon_sym_COLON] = ":",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_PIPE] = "|",
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
  [sym_decl_kw] = "decl_kw",
  [sym_input_kw] = "input_kw",
  [sym_output_kw] = "output_kw",
  [sym_type_kw] = "type_kw",
  [sym_include_kw] = "include_kw",
  [sym_printsize_kw] = "printsize_kw",
  [sym_limitsize_kw] = "limitsize_kw",
  [sym_plan_kw] = "plan_kw",
  [sym_source_file] = "source_file",
  [sym__element] = "_element",
  [sym_preprocessor_directive] = "preprocessor_directive",
  [sym_include_preprocessor_directive] = "include_preprocessor_directive",
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
  [sym__directive_qualifier] = "_directive_qualifier",
  [sym_directive_attribute_assignment] = "directive_attribute_assignment",
  [sym_directive_value] = "directive_value",
  [sym_include_directive] = "include_directive",
  [sym_qualified_name] = "qualified_name",
  [sym_argument] = "argument",
  [sym_constant] = "constant",
  [sym_variable] = "variable",
  [sym_argument_list] = "argument_list",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_type_conversion] = "type_conversion",
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
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_union_type_expr_repeat1] = "union_type_expr_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_choice_domain_single_attribute] = "choice_domain_single_attribute",
  [alias_sym_path_spec] = "path_spec",
  [alias_sym_user_defined_type_name] = "user_defined_type_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
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
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_bnot] = anon_sym_bnot,
  [anon_sym_lnot] = anon_sym_lnot,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_land] = anon_sym_land,
  [anon_sym_lor] = anon_sym_lor,
  [anon_sym_lxor] = anon_sym_lxor,
  [anon_sym_band] = anon_sym_band,
  [anon_sym_bor] = anon_sym_bor,
  [anon_sym_bxor] = anon_sym_bxor,
  [anon_sym_bshl] = anon_sym_bshl,
  [anon_sym_bshr] = anon_sym_bshr,
  [anon_sym_bshru] = anon_sym_bshru,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
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
  [sym_decl_kw] = sym_decl_kw,
  [sym_input_kw] = sym_input_kw,
  [sym_output_kw] = sym_output_kw,
  [sym_type_kw] = sym_type_kw,
  [sym_include_kw] = sym_include_kw,
  [sym_printsize_kw] = sym_printsize_kw,
  [sym_limitsize_kw] = sym_limitsize_kw,
  [sym_plan_kw] = sym_plan_kw,
  [sym_source_file] = sym_source_file,
  [sym__element] = sym__element,
  [sym_preprocessor_directive] = sym_preprocessor_directive,
  [sym_include_preprocessor_directive] = sym_include_preprocessor_directive,
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
  [sym__directive_qualifier] = sym__directive_qualifier,
  [sym_directive_attribute_assignment] = sym_directive_attribute_assignment,
  [sym_directive_value] = sym_directive_value,
  [sym_include_directive] = sym_include_directive,
  [sym_qualified_name] = sym_qualified_name,
  [sym_argument] = sym_argument,
  [sym_constant] = sym_constant,
  [sym_variable] = sym_variable,
  [sym_argument_list] = sym_argument_list,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_type_conversion] = sym_type_conversion,
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
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_union_type_expr_repeat1] = aux_sym_union_type_expr_repeat1,
  [alias_sym_attribute_name] = alias_sym_attribute_name,
  [alias_sym_choice_domain_single_attribute] = alias_sym_choice_domain_single_attribute,
  [alias_sym_path_spec] = alias_sym_path_spec,
  [alias_sym_user_defined_type_name] = alias_sym_user_defined_type_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDinclude] = {
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
  [anon_sym_nil] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_land] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_band] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bshl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bshr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bshru] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_decl_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_input_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_output_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_type_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_include_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_printsize_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_limitsize_kw] = {
    .visible = true,
    .named = true,
  },
  [sym_plan_kw] = {
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
  [sym_preprocessor_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_include_preprocessor_directive] = {
    .visible = true,
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
  [sym__directive_qualifier] = {
    .visible = false,
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
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_type_conversion] = {
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
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_union_type_expr_repeat1] = {
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
  [alias_sym_path_spec] = {
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
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 2},
  [8] = {.index = 5, .length = 2},
  [9] = {.index = 7, .length = 2},
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
  [1] = {
    [1] = alias_sym_path_spec,
  },
  [3] = {
    [0] = alias_sym_user_defined_type_name,
  },
  [7] = {
    [0] = alias_sym_attribute_name,
  },
  [10] = {
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
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
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
  [92] = 92,
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
  [109] = 56,
  [110] = 58,
  [111] = 57,
  [112] = 112,
  [113] = 113,
  [114] = 59,
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
  [145] = 74,
  [146] = 72,
  [147] = 82,
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
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 189,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      if (lookahead == '!') ADVANCE(146);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ':') ADVANCE(182);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '<') ADVANCE(147);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '^') ADVANCE(165);
      if (lookahead == '_') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(115);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(145);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(181);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(168);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == '*') ADVANCE(166);
      if (lookahead == '+') ADVANCE(169);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(167);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '<') ADVANCE(148);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '>') ADVANCE(149);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '^') ADVANCE(165);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '-') ADVANCE(160);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == '_') ADVANCE(157);
      if (lookahead == 'a') ADVANCE(271);
      if (lookahead == 'b') ADVANCE(249);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead == 't') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(197);
      if (lookahead == '\\') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(199);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(158);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead == 'u') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(183);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(66);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(112);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 'r') ADVANCE(56);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(98);
      if (lookahead == 's') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'n') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(94);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(131);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'g') ADVANCE(61);
      END_STATE();
    case 52:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'h') ADVANCE(92);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 96:
      if (lookahead == 'q') ADVANCE(104);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 105:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(179);
      END_STATE();
    case 108:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 109:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 115:
      if (lookahead == 'v') ADVANCE(48);
      END_STATE();
    case 116:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 117:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 118:
      if (eof) ADVANCE(120);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '(') ADVANCE(123);
      if (lookahead == ')') ADVANCE(124);
      if (lookahead == ',') ADVANCE(122);
      if (lookahead == '.') ADVANCE(143);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(144);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(152);
      if (lookahead == '|') ADVANCE(184);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(118)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == '#') ADVANCE(58);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(266);
      if (lookahead == 'c') ADVANCE(229);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == 'i') ADVANCE(251);
      if (lookahead == 'm') ADVANCE(203);
      if (lookahead == 'n') ADVANCE(258);
      if (lookahead == 'o') ADVANCE(279);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(119)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(153);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(183);
      if (lookahead == '=') ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(198);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(178);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(142);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead == 'm') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 't') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 118, .external_lex_state = 2},
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
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 118, .external_lex_state = 2},
  [27] = {.lex_state = 118, .external_lex_state = 2},
  [28] = {.lex_state = 119, .external_lex_state = 2},
  [29] = {.lex_state = 119, .external_lex_state = 2},
  [30] = {.lex_state = 119, .external_lex_state = 2},
  [31] = {.lex_state = 119, .external_lex_state = 2},
  [32] = {.lex_state = 119, .external_lex_state = 2},
  [33] = {.lex_state = 119, .external_lex_state = 2},
  [34] = {.lex_state = 119, .external_lex_state = 2},
  [35] = {.lex_state = 119, .external_lex_state = 2},
  [36] = {.lex_state = 119, .external_lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 119, .external_lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 118, .external_lex_state = 2},
  [57] = {.lex_state = 118, .external_lex_state = 2},
  [58] = {.lex_state = 118, .external_lex_state = 2},
  [59] = {.lex_state = 118, .external_lex_state = 2},
  [60] = {.lex_state = 118, .external_lex_state = 2},
  [61] = {.lex_state = 118, .external_lex_state = 2},
  [62] = {.lex_state = 118, .external_lex_state = 2},
  [63] = {.lex_state = 118, .external_lex_state = 2},
  [64] = {.lex_state = 118, .external_lex_state = 2},
  [65] = {.lex_state = 118, .external_lex_state = 1},
  [66] = {.lex_state = 118, .external_lex_state = 2},
  [67] = {.lex_state = 118, .external_lex_state = 2},
  [68] = {.lex_state = 118, .external_lex_state = 2},
  [69] = {.lex_state = 118, .external_lex_state = 2},
  [70] = {.lex_state = 118, .external_lex_state = 1},
  [71] = {.lex_state = 118, .external_lex_state = 2},
  [72] = {.lex_state = 118, .external_lex_state = 2},
  [73] = {.lex_state = 118, .external_lex_state = 2},
  [74] = {.lex_state = 118, .external_lex_state = 2},
  [75] = {.lex_state = 118, .external_lex_state = 2},
  [76] = {.lex_state = 118, .external_lex_state = 2},
  [77] = {.lex_state = 118, .external_lex_state = 2},
  [78] = {.lex_state = 118, .external_lex_state = 2},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 118, .external_lex_state = 2},
  [81] = {.lex_state = 118, .external_lex_state = 2},
  [82] = {.lex_state = 118, .external_lex_state = 2},
  [83] = {.lex_state = 118, .external_lex_state = 2},
  [84] = {.lex_state = 118, .external_lex_state = 2},
  [85] = {.lex_state = 118, .external_lex_state = 2},
  [86] = {.lex_state = 118, .external_lex_state = 2},
  [87] = {.lex_state = 118, .external_lex_state = 2},
  [88] = {.lex_state = 118, .external_lex_state = 2},
  [89] = {.lex_state = 118, .external_lex_state = 2},
  [90] = {.lex_state = 118, .external_lex_state = 2},
  [91] = {.lex_state = 118, .external_lex_state = 2},
  [92] = {.lex_state = 118, .external_lex_state = 2},
  [93] = {.lex_state = 118, .external_lex_state = 2},
  [94] = {.lex_state = 118, .external_lex_state = 2},
  [95] = {.lex_state = 118, .external_lex_state = 2},
  [96] = {.lex_state = 118, .external_lex_state = 2},
  [97] = {.lex_state = 118, .external_lex_state = 2},
  [98] = {.lex_state = 118, .external_lex_state = 2},
  [99] = {.lex_state = 118, .external_lex_state = 2},
  [100] = {.lex_state = 118, .external_lex_state = 2},
  [101] = {.lex_state = 118, .external_lex_state = 2},
  [102] = {.lex_state = 118, .external_lex_state = 2},
  [103] = {.lex_state = 118, .external_lex_state = 2},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 118},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 118},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 118},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 118},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 118},
  [140] = {.lex_state = 118},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 118},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 118},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 118},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 118},
  [169] = {.lex_state = 118},
  [170] = {.lex_state = 118},
  [171] = {.lex_state = 118},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 118},
  [176] = {.lex_state = 118},
  [177] = {.lex_state = 118},
  [178] = {.lex_state = 118},
  [179] = {.lex_state = 118},
  [180] = {.lex_state = 118},
  [181] = {.lex_state = 118},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 118},
  [188] = {.lex_state = 118},
  [189] = {.lex_state = 118},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 118},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 118},
};

enum {
  ts_external_token_decl_kw = 0,
  ts_external_token_input_kw = 1,
  ts_external_token_output_kw = 2,
  ts_external_token_type_kw = 3,
  ts_external_token_include_kw = 4,
  ts_external_token_printsize_kw = 5,
  ts_external_token_limitsize_kw = 6,
  ts_external_token_plan_kw = 7,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_decl_kw] = sym_decl_kw,
  [ts_external_token_input_kw] = sym_input_kw,
  [ts_external_token_output_kw] = sym_output_kw,
  [ts_external_token_type_kw] = sym_type_kw,
  [ts_external_token_include_kw] = sym_include_kw,
  [ts_external_token_printsize_kw] = sym_printsize_kw,
  [ts_external_token_limitsize_kw] = sym_limitsize_kw,
  [ts_external_token_plan_kw] = sym_plan_kw,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_decl_kw] = true,
    [ts_external_token_input_kw] = true,
    [ts_external_token_output_kw] = true,
    [ts_external_token_type_kw] = true,
    [ts_external_token_include_kw] = true,
    [ts_external_token_printsize_kw] = true,
    [ts_external_token_limitsize_kw] = true,
    [ts_external_token_plan_kw] = true,
  },
  [2] = {
    [ts_external_token_decl_kw] = true,
    [ts_external_token_input_kw] = true,
    [ts_external_token_output_kw] = true,
    [ts_external_token_type_kw] = true,
    [ts_external_token_include_kw] = true,
    [ts_external_token_printsize_kw] = true,
    [ts_external_token_limitsize_kw] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
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
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_bnot] = ACTIONS(1),
    [anon_sym_lnot] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_land] = ACTIONS(1),
    [anon_sym_lor] = ACTIONS(1),
    [anon_sym_lxor] = ACTIONS(1),
    [anon_sym_band] = ACTIONS(1),
    [anon_sym_bor] = ACTIONS(1),
    [anon_sym_bxor] = ACTIONS(1),
    [anon_sym_bshl] = ACTIONS(1),
    [anon_sym_bshr] = ACTIONS(1),
    [anon_sym_bshru] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_number] = ACTIONS(1),
    [sym_decl_kw] = ACTIONS(1),
    [sym_input_kw] = ACTIONS(1),
    [sym_output_kw] = ACTIONS(1),
    [sym_type_kw] = ACTIONS(1),
    [sym_include_kw] = ACTIONS(1),
    [sym_printsize_kw] = ACTIONS(1),
    [sym_limitsize_kw] = ACTIONS(1),
    [sym_plan_kw] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(193),
    [sym__element] = STATE(26),
    [sym_preprocessor_directive] = STATE(26),
    [sym_include_preprocessor_directive] = STATE(95),
    [sym_relation_decl] = STATE(26),
    [sym_rule] = STATE(26),
    [sym_directive] = STATE(26),
    [sym__directive_qualifier] = STATE(175),
    [sym_include_directive] = STATE(26),
    [sym_qualified_name] = STATE(191),
    [sym_fact] = STATE(26),
    [sym_type_decl] = STATE(26),
    [sym_atom] = STATE(135),
    [aux_sym_source_file_repeat1] = STATE(26),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(9),
    [sym_decl_kw] = ACTIONS(11),
    [sym_input_kw] = ACTIONS(13),
    [sym_output_kw] = ACTIONS(13),
    [sym_type_kw] = ACTIONS(15),
    [sym_include_kw] = ACTIONS(17),
    [sym_printsize_kw] = ACTIONS(13),
    [sym_limitsize_kw] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_conjunction_repeat1,
    STATE(37), 1,
      sym_argument,
    STATE(134), 1,
      sym_conjunction,
    STATE(190), 1,
      sym_disjunction,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(118), 2,
      sym_constraint,
      sym_atom,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [72] = 20,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_conjunction_repeat1,
    STATE(37), 1,
      sym_argument,
    STATE(134), 1,
      sym_conjunction,
    STATE(184), 1,
      sym_disjunction,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(118), 2,
      sym_constraint,
      sym_atom,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [144] = 20,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_conjunction_repeat1,
    STATE(37), 1,
      sym_argument,
    STATE(134), 1,
      sym_conjunction,
    STATE(191), 1,
      sym_qualified_name,
    STATE(192), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(118), 2,
      sym_constraint,
      sym_atom,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [216] = 20,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_conjunction_repeat1,
    STATE(37), 1,
      sym_argument,
    STATE(134), 1,
      sym_conjunction,
    STATE(191), 1,
      sym_qualified_name,
    STATE(198), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(118), 2,
      sym_constraint,
      sym_atom,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [288] = 20,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_conjunction_repeat1,
    STATE(37), 1,
      sym_argument,
    STATE(134), 1,
      sym_conjunction,
    STATE(191), 1,
      sym_qualified_name,
    STATE(197), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(118), 2,
      sym_constraint,
      sym_atom,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [360] = 20,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_conjunction_repeat1,
    STATE(37), 1,
      sym_argument,
    STATE(134), 1,
      sym_conjunction,
    STATE(182), 1,
      sym_disjunction,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(118), 2,
      sym_constraint,
      sym_atom,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [432] = 19,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_BANG,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(9), 1,
      aux_sym_conjunction_repeat1,
    STATE(37), 1,
      sym_argument,
    STATE(158), 1,
      sym_conjunction,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(118), 2,
      sym_constraint,
      sym_atom,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [501] = 18,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      anon_sym_BANG,
    STATE(37), 1,
      sym_argument,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(119), 2,
      sym_constraint,
      sym_atom,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [567] = 18,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      anon_sym_BANG,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(37), 1,
      sym_argument,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(133), 2,
      sym_constraint,
      sym_atom,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [633] = 18,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym__,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_argument,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(132), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(138), 2,
      sym_constraint,
      sym_atom,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [699] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(51), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [734] = 7,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(55), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [777] = 4,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(57), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(55), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [814] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(57), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(55), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [849] = 6,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(55), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [890] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(67), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [925] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(71), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [960] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(75), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [995] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(79), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1030] = 8,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(57), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(83), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(55), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1075] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(85), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1110] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(91), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(89), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1145] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(93), 22,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1180] = 6,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(99), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(85), 17,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_STAR,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1219] = 13,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_decl_kw,
    ACTIONS(15), 1,
      sym_type_kw,
    ACTIONS(17), 1,
      sym_include_kw,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    STATE(95), 1,
      sym_include_preprocessor_directive,
    STATE(135), 1,
      sym_atom,
    STATE(175), 1,
      sym__directive_qualifier,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(27), 9,
      sym__element,
      sym_preprocessor_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [1271] = 13,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_POUNDinclude,
    ACTIONS(108), 1,
      sym_identifier,
    ACTIONS(111), 1,
      sym_decl_kw,
    ACTIONS(117), 1,
      sym_type_kw,
    ACTIONS(120), 1,
      sym_include_kw,
    STATE(95), 1,
      sym_include_preprocessor_directive,
    STATE(135), 1,
      sym_atom,
    STATE(175), 1,
      sym__directive_qualifier,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(114), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(27), 9,
      sym__element,
      sym_preprocessor_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [1323] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(94), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(125), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(123), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [1362] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(96), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(125), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(131), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [1401] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(98), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(33), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(125), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(135), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [1440] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(83), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(34), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(125), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(139), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [1479] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(97), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(125), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(143), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [1518] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(97), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(125), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(143), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [1557] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(88), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(125), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(147), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [1596] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(88), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(29), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(125), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(147), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [1635] = 5,
    ACTIONS(156), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(36), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(153), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(151), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_choice_DASHdomain,
  [1669] = 10,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(158), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(83), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(160), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(162), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1713] = 9,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(83), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(166), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(162), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1753] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
    ACTIONS(168), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_choice_DASHdomain,
  [1781] = 9,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(83), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(172), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(162), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1820] = 11,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_bshr,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(156), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(83), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(162), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1863] = 11,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [1906] = 11,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_bshr,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(83), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(162), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1949] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(40), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [1989] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(43), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2029] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(54), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2069] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(24), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2109] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(38), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2149] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(21), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2189] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(13), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2229] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(14), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2269] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(15), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2309] = 10,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    STATE(16), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(37), 2,
      sym_string_literal,
      sym_number,
    STATE(20), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2349] = 9,
    ACTIONS(61), 1,
      anon_sym_CARET,
    ACTIONS(65), 1,
      anon_sym_SLASH,
    ACTIONS(164), 1,
      anon_sym_bshr,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(63), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(83), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(162), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [2386] = 5,
    ACTIONS(186), 1,
      anon_sym_BANG,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_string_literal,
      sym_number,
    ACTIONS(189), 8,
      anon_sym_nil,
      anon_sym__,
      anon_sym_bnot,
      anon_sym_lnot,
      anon_sym_as,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2414] = 4,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [2440] = 4,
    ACTIONS(198), 1,
      anon_sym_DOT,
    STATE(56), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [2466] = 4,
    ACTIONS(198), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_PIPE,
      sym_identifier,
  [2492] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 14,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      sym_identifier,
  [2513] = 5,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2539] = 5,
    ACTIONS(202), 1,
      anon_sym_COMMA,
    ACTIONS(208), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2565] = 4,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_LPAREN,
      sym_identifier,
  [2589] = 4,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(68), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2612] = 4,
    ACTIONS(221), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(219), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2635] = 4,
    ACTIONS(226), 1,
      sym_plan_kw,
    STATE(84), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2658] = 4,
    ACTIONS(230), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2681] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(210), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      sym_identifier,
  [2700] = 4,
    ACTIONS(217), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2723] = 4,
    ACTIONS(237), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(235), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2746] = 4,
    ACTIONS(226), 1,
      sym_plan_kw,
    STATE(99), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2769] = 4,
    ACTIONS(237), 1,
      anon_sym_PIPE,
    STATE(69), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(241), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2792] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      sym_identifier,
  [2810] = 3,
    ACTIONS(247), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(245), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [2830] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      sym_identifier,
  [2848] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      sym_identifier,
  [2866] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(251), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      sym_identifier,
  [2884] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(253), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      sym_identifier,
  [2902] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(255), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      sym_identifier,
  [2920] = 8,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(72), 1,
      sym_qualified_name,
    STATE(73), 1,
      sym_type_name,
    STATE(74), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(92), 2,
      sym_union_type_expr,
      sym_record_type_expr,
    ACTIONS(259), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [2950] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(219), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      sym_identifier,
  [2968] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(263), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      sym_identifier,
  [2986] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(265), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      sym_identifier,
  [3004] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3021] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(267), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3038] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(269), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3055] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(271), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3072] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(273), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3089] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3106] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(275), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3123] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(277), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3140] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(279), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3157] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(245), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3174] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(281), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3191] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(283), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3208] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(285), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3225] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(287), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3242] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3259] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3276] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(289), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3293] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(291), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3310] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(293), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3327] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(295), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3344] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(297), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      sym_identifier,
  [3361] = 6,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(145), 1,
      sym_primitive_type,
    STATE(146), 1,
      sym_qualified_name,
    STATE(199), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(299), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3384] = 6,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(72), 1,
      sym_qualified_name,
    STATE(74), 1,
      sym_primitive_type,
    STATE(91), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(259), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3407] = 6,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(72), 1,
      sym_qualified_name,
    STATE(74), 1,
      sym_primitive_type,
    STATE(80), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(259), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3430] = 6,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(71), 1,
      sym_type_name,
    STATE(72), 1,
      sym_qualified_name,
    STATE(74), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(259), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3453] = 6,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(144), 1,
      sym_type_name,
    STATE(145), 1,
      sym_primitive_type,
    STATE(146), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(299), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3476] = 4,
    ACTIONS(303), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3493] = 4,
    ACTIONS(99), 1,
      anon_sym_DOT,
    STATE(111), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3510] = 4,
    ACTIONS(99), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3527] = 6,
    ACTIONS(306), 1,
      sym_string_literal,
    ACTIONS(308), 1,
      sym_identifier,
    STATE(172), 1,
      sym_directive_value,
    STATE(174), 1,
      sym_boolean_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
  [3548] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3564] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [3576] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3592] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3608] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3624] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3640] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(122), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3656] = 4,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(323), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3672] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(325), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3684] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3700] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3712] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3728] = 5,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(63), 1,
      sym_choice_domain_attribute,
    STATE(78), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3745] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3756] = 4,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(337), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [3771] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3786] = 4,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    STATE(129), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3801] = 4,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    STATE(130), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3816] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3827] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(356), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3838] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(323), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3849] = 4,
    ACTIONS(339), 1,
      anon_sym_SEMI,
    STATE(127), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [3864] = 5,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_COLON_DASH,
    ACTIONS(364), 1,
      anon_sym_DOT,
    STATE(161), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3881] = 4,
    ACTIONS(368), 1,
      anon_sym_SEMI,
    STATE(136), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(366), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [3896] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3907] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3918] = 4,
    ACTIONS(375), 1,
      anon_sym_EQ,
    ACTIONS(377), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(90), 2,
      sym_subtype_decl,
      sym_equivalence_type_decl,
  [3933] = 5,
    ACTIONS(331), 1,
      anon_sym_LPAREN,
    ACTIONS(333), 1,
      sym_identifier,
    STATE(75), 1,
      sym_choice_domain_attribute,
    STATE(78), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3950] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RPAREN,
    STATE(160), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3964] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3978] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(385), 1,
      anon_sym_RBRACK,
    STATE(129), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3992] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4002] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(249), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4012] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4022] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(265), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4032] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4042] = 4,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4056] = 4,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4070] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(398), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4084] = 4,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4098] = 4,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(400), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4112] = 4,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
    STATE(162), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4126] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4140] = 4,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4154] = 4,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4168] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(366), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [4178] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(179), 1,
      sym_atom,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4192] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(129), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4206] = 4,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_COLON_DASH,
    STATE(164), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4220] = 4,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4234] = 4,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4248] = 4,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_COLON_DASH,
    STATE(164), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4262] = 4,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4276] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4286] = 4,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RPAREN,
    STATE(152), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4300] = 3,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(155), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4311] = 3,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(167), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4322] = 3,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(173), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4333] = 3,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(141), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4344] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(433), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4353] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(392), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4362] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4371] = 3,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(60), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4382] = 3,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(153), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4393] = 3,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(148), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4404] = 3,
    ACTIONS(437), 1,
      sym_identifier,
    STATE(67), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4415] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [4424] = 3,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(142), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4435] = 2,
    ACTIONS(439), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4443] = 2,
    ACTIONS(441), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4451] = 2,
    ACTIONS(443), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4459] = 2,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4467] = 2,
    ACTIONS(447), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4475] = 2,
    ACTIONS(449), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4483] = 2,
    ACTIONS(451), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4491] = 2,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4499] = 2,
    ACTIONS(455), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4507] = 2,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4515] = 2,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4523] = 2,
    ACTIONS(461), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4531] = 2,
    ACTIONS(463), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4539] = 2,
    ACTIONS(465), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4547] = 2,
    ACTIONS(467), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4555] = 2,
    ACTIONS(469), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4563] = 2,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4571] = 2,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4579] = 2,
    ACTIONS(475), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4587] = 2,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 216,
  [SMALL_STATE(6)] = 288,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 432,
  [SMALL_STATE(9)] = 501,
  [SMALL_STATE(10)] = 567,
  [SMALL_STATE(11)] = 633,
  [SMALL_STATE(12)] = 699,
  [SMALL_STATE(13)] = 734,
  [SMALL_STATE(14)] = 777,
  [SMALL_STATE(15)] = 814,
  [SMALL_STATE(16)] = 849,
  [SMALL_STATE(17)] = 890,
  [SMALL_STATE(18)] = 925,
  [SMALL_STATE(19)] = 960,
  [SMALL_STATE(20)] = 995,
  [SMALL_STATE(21)] = 1030,
  [SMALL_STATE(22)] = 1075,
  [SMALL_STATE(23)] = 1110,
  [SMALL_STATE(24)] = 1145,
  [SMALL_STATE(25)] = 1180,
  [SMALL_STATE(26)] = 1219,
  [SMALL_STATE(27)] = 1271,
  [SMALL_STATE(28)] = 1323,
  [SMALL_STATE(29)] = 1362,
  [SMALL_STATE(30)] = 1401,
  [SMALL_STATE(31)] = 1440,
  [SMALL_STATE(32)] = 1479,
  [SMALL_STATE(33)] = 1518,
  [SMALL_STATE(34)] = 1557,
  [SMALL_STATE(35)] = 1596,
  [SMALL_STATE(36)] = 1635,
  [SMALL_STATE(37)] = 1669,
  [SMALL_STATE(38)] = 1713,
  [SMALL_STATE(39)] = 1753,
  [SMALL_STATE(40)] = 1781,
  [SMALL_STATE(41)] = 1820,
  [SMALL_STATE(42)] = 1863,
  [SMALL_STATE(43)] = 1906,
  [SMALL_STATE(44)] = 1949,
  [SMALL_STATE(45)] = 1989,
  [SMALL_STATE(46)] = 2029,
  [SMALL_STATE(47)] = 2069,
  [SMALL_STATE(48)] = 2109,
  [SMALL_STATE(49)] = 2149,
  [SMALL_STATE(50)] = 2189,
  [SMALL_STATE(51)] = 2229,
  [SMALL_STATE(52)] = 2269,
  [SMALL_STATE(53)] = 2309,
  [SMALL_STATE(54)] = 2349,
  [SMALL_STATE(55)] = 2386,
  [SMALL_STATE(56)] = 2414,
  [SMALL_STATE(57)] = 2440,
  [SMALL_STATE(58)] = 2466,
  [SMALL_STATE(59)] = 2492,
  [SMALL_STATE(60)] = 2513,
  [SMALL_STATE(61)] = 2539,
  [SMALL_STATE(62)] = 2565,
  [SMALL_STATE(63)] = 2589,
  [SMALL_STATE(64)] = 2612,
  [SMALL_STATE(65)] = 2635,
  [SMALL_STATE(66)] = 2658,
  [SMALL_STATE(67)] = 2681,
  [SMALL_STATE(68)] = 2700,
  [SMALL_STATE(69)] = 2723,
  [SMALL_STATE(70)] = 2746,
  [SMALL_STATE(71)] = 2769,
  [SMALL_STATE(72)] = 2792,
  [SMALL_STATE(73)] = 2810,
  [SMALL_STATE(74)] = 2830,
  [SMALL_STATE(75)] = 2848,
  [SMALL_STATE(76)] = 2866,
  [SMALL_STATE(77)] = 2884,
  [SMALL_STATE(78)] = 2902,
  [SMALL_STATE(79)] = 2920,
  [SMALL_STATE(80)] = 2950,
  [SMALL_STATE(81)] = 2968,
  [SMALL_STATE(82)] = 2986,
  [SMALL_STATE(83)] = 3004,
  [SMALL_STATE(84)] = 3021,
  [SMALL_STATE(85)] = 3038,
  [SMALL_STATE(86)] = 3055,
  [SMALL_STATE(87)] = 3072,
  [SMALL_STATE(88)] = 3089,
  [SMALL_STATE(89)] = 3106,
  [SMALL_STATE(90)] = 3123,
  [SMALL_STATE(91)] = 3140,
  [SMALL_STATE(92)] = 3157,
  [SMALL_STATE(93)] = 3174,
  [SMALL_STATE(94)] = 3191,
  [SMALL_STATE(95)] = 3208,
  [SMALL_STATE(96)] = 3225,
  [SMALL_STATE(97)] = 3242,
  [SMALL_STATE(98)] = 3259,
  [SMALL_STATE(99)] = 3276,
  [SMALL_STATE(100)] = 3293,
  [SMALL_STATE(101)] = 3310,
  [SMALL_STATE(102)] = 3327,
  [SMALL_STATE(103)] = 3344,
  [SMALL_STATE(104)] = 3361,
  [SMALL_STATE(105)] = 3384,
  [SMALL_STATE(106)] = 3407,
  [SMALL_STATE(107)] = 3430,
  [SMALL_STATE(108)] = 3453,
  [SMALL_STATE(109)] = 3476,
  [SMALL_STATE(110)] = 3493,
  [SMALL_STATE(111)] = 3510,
  [SMALL_STATE(112)] = 3527,
  [SMALL_STATE(113)] = 3548,
  [SMALL_STATE(114)] = 3564,
  [SMALL_STATE(115)] = 3576,
  [SMALL_STATE(116)] = 3592,
  [SMALL_STATE(117)] = 3608,
  [SMALL_STATE(118)] = 3624,
  [SMALL_STATE(119)] = 3640,
  [SMALL_STATE(120)] = 3656,
  [SMALL_STATE(121)] = 3672,
  [SMALL_STATE(122)] = 3684,
  [SMALL_STATE(123)] = 3700,
  [SMALL_STATE(124)] = 3712,
  [SMALL_STATE(125)] = 3728,
  [SMALL_STATE(126)] = 3745,
  [SMALL_STATE(127)] = 3756,
  [SMALL_STATE(128)] = 3771,
  [SMALL_STATE(129)] = 3786,
  [SMALL_STATE(130)] = 3801,
  [SMALL_STATE(131)] = 3816,
  [SMALL_STATE(132)] = 3827,
  [SMALL_STATE(133)] = 3838,
  [SMALL_STATE(134)] = 3849,
  [SMALL_STATE(135)] = 3864,
  [SMALL_STATE(136)] = 3881,
  [SMALL_STATE(137)] = 3896,
  [SMALL_STATE(138)] = 3907,
  [SMALL_STATE(139)] = 3918,
  [SMALL_STATE(140)] = 3933,
  [SMALL_STATE(141)] = 3950,
  [SMALL_STATE(142)] = 3964,
  [SMALL_STATE(143)] = 3978,
  [SMALL_STATE(144)] = 3992,
  [SMALL_STATE(145)] = 4002,
  [SMALL_STATE(146)] = 4012,
  [SMALL_STATE(147)] = 4022,
  [SMALL_STATE(148)] = 4032,
  [SMALL_STATE(149)] = 4042,
  [SMALL_STATE(150)] = 4056,
  [SMALL_STATE(151)] = 4070,
  [SMALL_STATE(152)] = 4084,
  [SMALL_STATE(153)] = 4098,
  [SMALL_STATE(154)] = 4112,
  [SMALL_STATE(155)] = 4126,
  [SMALL_STATE(156)] = 4140,
  [SMALL_STATE(157)] = 4154,
  [SMALL_STATE(158)] = 4168,
  [SMALL_STATE(159)] = 4178,
  [SMALL_STATE(160)] = 4192,
  [SMALL_STATE(161)] = 4206,
  [SMALL_STATE(162)] = 4220,
  [SMALL_STATE(163)] = 4234,
  [SMALL_STATE(164)] = 4248,
  [SMALL_STATE(165)] = 4262,
  [SMALL_STATE(166)] = 4276,
  [SMALL_STATE(167)] = 4286,
  [SMALL_STATE(168)] = 4300,
  [SMALL_STATE(169)] = 4311,
  [SMALL_STATE(170)] = 4322,
  [SMALL_STATE(171)] = 4333,
  [SMALL_STATE(172)] = 4344,
  [SMALL_STATE(173)] = 4353,
  [SMALL_STATE(174)] = 4362,
  [SMALL_STATE(175)] = 4371,
  [SMALL_STATE(176)] = 4382,
  [SMALL_STATE(177)] = 4393,
  [SMALL_STATE(178)] = 4404,
  [SMALL_STATE(179)] = 4415,
  [SMALL_STATE(180)] = 4424,
  [SMALL_STATE(181)] = 4435,
  [SMALL_STATE(182)] = 4443,
  [SMALL_STATE(183)] = 4451,
  [SMALL_STATE(184)] = 4459,
  [SMALL_STATE(185)] = 4467,
  [SMALL_STATE(186)] = 4475,
  [SMALL_STATE(187)] = 4483,
  [SMALL_STATE(188)] = 4491,
  [SMALL_STATE(189)] = 4499,
  [SMALL_STATE(190)] = 4507,
  [SMALL_STATE(191)] = 4515,
  [SMALL_STATE(192)] = 4523,
  [SMALL_STATE(193)] = 4531,
  [SMALL_STATE(194)] = 4539,
  [SMALL_STATE(195)] = 4547,
  [SMALL_STATE(196)] = 4555,
  [SMALL_STATE(197)] = 4563,
  [SMALL_STATE(198)] = 4571,
  [SMALL_STATE(199)] = 4579,
  [SMALL_STATE(200)] = 4587,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(175),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 8),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 8),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 8),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 8),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 8),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 8),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [153] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(39),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(55),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(200),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(178),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_expr_repeat1, 2),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_expr_repeat1, 2), SHIFT_REPEAT(106),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 6),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(140),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_expr, 4),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_expr, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalence_type_decl, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 10),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 6),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_expr, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_expr, 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 8),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 5),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_preprocessor_directive, 2, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [303] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(189),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(10),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(44),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(177),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(181),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(8),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 7),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(170),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(159),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 9),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [463] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_souffle_external_scanner_create(void);
void tree_sitter_souffle_external_scanner_destroy(void *);
bool tree_sitter_souffle_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_souffle_external_scanner_serialize(void *, char *);
void tree_sitter_souffle_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_souffle_external_scanner_create,
      tree_sitter_souffle_external_scanner_destroy,
      tree_sitter_souffle_external_scanner_scan,
      tree_sitter_souffle_external_scanner_serialize,
      tree_sitter_souffle_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
