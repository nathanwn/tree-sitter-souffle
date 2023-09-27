#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 196
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 3
#define TOKEN_COUNT 67
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
  anon_sym_nil = 30,
  anon_sym__ = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_DASH = 34,
  anon_sym_bnot = 35,
  anon_sym_lnot = 36,
  anon_sym_CARET = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  anon_sym_PLUS = 41,
  anon_sym_land = 42,
  anon_sym_lor = 43,
  anon_sym_lxor = 44,
  anon_sym_band = 45,
  anon_sym_bor = 46,
  anon_sym_bxor = 47,
  anon_sym_bshl = 48,
  anon_sym_bshr = 49,
  anon_sym_bshru = 50,
  anon_sym_as = 51,
  anon_sym_COLON = 52,
  anon_sym_DOTtype = 53,
  anon_sym_LT_COLON = 54,
  anon_sym_PIPE = 55,
  anon_sym_number = 56,
  anon_sym_symbol = 57,
  anon_sym_unsigned = 58,
  anon_sym_float = 59,
  anon_sym_true = 60,
  anon_sym_false = 61,
  sym_string_literal = 62,
  sym_line_comment = 63,
  sym_block_comment = 64,
  sym_identifier = 65,
  sym_number = 66,
  sym_source_file = 67,
  sym__element = 68,
  sym_relation_decl = 69,
  sym_relation_qualifier = 70,
  sym_choice_domain = 71,
  sym_choice_domain_attribute = 72,
  sym_choice_domain_tuple_attribute = 73,
  sym_rule = 74,
  sym_disjunction = 75,
  sym_conjunction = 76,
  sym_constraint = 77,
  sym_binary_constraint = 78,
  sym_query_plan = 79,
  sym_directive = 80,
  sym_directive_qualifier = 81,
  sym_directive_attribute_assignment = 82,
  sym_directive_value = 83,
  sym_include_directive = 84,
  sym_qualified_name = 85,
  sym_argument = 86,
  sym_constant = 87,
  sym_variable = 88,
  sym_argument_list = 89,
  sym_unary_operation = 90,
  sym_binary_operation = 91,
  sym_type_conversion = 92,
  sym_attribute = 93,
  sym_fact = 94,
  sym_type_decl = 95,
  sym_subtype_decl = 96,
  sym_equivalence_type_decl = 97,
  sym_union_type_expr = 98,
  sym_type_name = 99,
  sym_record_type_expr = 100,
  sym_primitive_type = 101,
  sym_atom = 102,
  sym_boolean_literal = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_relation_decl_repeat1 = 105,
  aux_sym_relation_decl_repeat2 = 106,
  aux_sym_relation_decl_repeat3 = 107,
  aux_sym_choice_domain_repeat1 = 108,
  aux_sym_rule_repeat1 = 109,
  aux_sym_disjunction_repeat1 = 110,
  aux_sym_conjunction_repeat1 = 111,
  aux_sym_conjunction_repeat2 = 112,
  aux_sym_directive_repeat1 = 113,
  aux_sym_directive_repeat2 = 114,
  aux_sym_qualified_name_repeat1 = 115,
  aux_sym_argument_list_repeat1 = 116,
  aux_sym_union_type_expr_repeat1 = 117,
  alias_sym_attribute_name = 118,
  alias_sym_choice_domain_single_attribute = 119,
  alias_sym_user_defined_type_name = 120,
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
  [anon_sym_DOTtype] = ".type",
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
  [anon_sym_DOTtype] = anon_sym_DOTtype,
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
  [108] = 57,
  [109] = 58,
  [110] = 56,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 62,
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
  [195] = 187,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(154);
      if (lookahead == '!') ADVANCE(181);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '%') ADVANCE(209);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(210);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == ';') ADVANCE(179);
      if (lookahead == '<') ADVANCE(182);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(184);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '^') ADVANCE(206);
      if (lookahead == '_') ADVANCE(197);
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 's') ADVANCE(147);
      if (lookahead == 't') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(97);
      if (lookahead == '|') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(180);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(179);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(209);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(207);
      if (lookahead == '+') ADVANCE(210);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '.') ADVANCE(177);
      if (lookahead == '/') ADVANCE(208);
      if (lookahead == ':') ADVANCE(222);
      if (lookahead == ';') ADVANCE(179);
      if (lookahead == '<') ADVANCE(183);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == '>') ADVANCE(184);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '^') ADVANCE(206);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '-') ADVANCE(201);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '_') ADVANCE(198);
      if (lookahead == 'a') ADVANCE(313);
      if (lookahead == 'b') ADVANCE(291);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(244);
      if (lookahead == 't') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(239);
      if (lookahead == '\\') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(240);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(241);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(199);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(225);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(116);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(99);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(74);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(165);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(86);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(231);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(235);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(237);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(101);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(109);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(92);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(195);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(217);
      if (lookahead == 'r') ADVANCE(218);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(229);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(139);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(43);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 115:
      if (lookahead == 'q') ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(215);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(220);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(64);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(204);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(191);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(137);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(135);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 146:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 148:
      if (lookahead == 'z') ADVANCE(51);
      END_STATE();
    case 149:
      if (lookahead == 'z') ADVANCE(52);
      END_STATE();
    case 150:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 151:
      if (eof) ADVANCE(154);
      if (lookahead == '(') ADVANCE(157);
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == ',') ADVANCE(156);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(187);
      if (lookahead == ']') ADVANCE(200);
      if (lookahead == '|') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(151)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(308);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 'e') ADVANCE(305);
      if (lookahead == 'i') ADVANCE(293);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(300);
      if (lookahead == 'o') ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOTdecl);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(188);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(186);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_DOTplan);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_DOTinput);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_DOToutput);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOTprintsize);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DOTlimitsize);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_DOTinclude);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(240);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(176);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_DOTtype);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 't') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 151},
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
  [26] = {.lex_state = 152},
  [27] = {.lex_state = 152},
  [28] = {.lex_state = 152},
  [29] = {.lex_state = 152},
  [30] = {.lex_state = 152},
  [31] = {.lex_state = 152},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 152},
  [34] = {.lex_state = 152},
  [35] = {.lex_state = 152},
  [36] = {.lex_state = 151},
  [37] = {.lex_state = 151},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 152},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
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
  [56] = {.lex_state = 151},
  [57] = {.lex_state = 151},
  [58] = {.lex_state = 151},
  [59] = {.lex_state = 151},
  [60] = {.lex_state = 151},
  [61] = {.lex_state = 151},
  [62] = {.lex_state = 151},
  [63] = {.lex_state = 151},
  [64] = {.lex_state = 151},
  [65] = {.lex_state = 151},
  [66] = {.lex_state = 151},
  [67] = {.lex_state = 151},
  [68] = {.lex_state = 151},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 153},
  [71] = {.lex_state = 151},
  [72] = {.lex_state = 151},
  [73] = {.lex_state = 151},
  [74] = {.lex_state = 153},
  [75] = {.lex_state = 151},
  [76] = {.lex_state = 151},
  [77] = {.lex_state = 151},
  [78] = {.lex_state = 151},
  [79] = {.lex_state = 151},
  [80] = {.lex_state = 151},
  [81] = {.lex_state = 151},
  [82] = {.lex_state = 151},
  [83] = {.lex_state = 151},
  [84] = {.lex_state = 151},
  [85] = {.lex_state = 151},
  [86] = {.lex_state = 151},
  [87] = {.lex_state = 151},
  [88] = {.lex_state = 151},
  [89] = {.lex_state = 151},
  [90] = {.lex_state = 151},
  [91] = {.lex_state = 151},
  [92] = {.lex_state = 151},
  [93] = {.lex_state = 151},
  [94] = {.lex_state = 151},
  [95] = {.lex_state = 151},
  [96] = {.lex_state = 151},
  [97] = {.lex_state = 151},
  [98] = {.lex_state = 151},
  [99] = {.lex_state = 151},
  [100] = {.lex_state = 151},
  [101] = {.lex_state = 151},
  [102] = {.lex_state = 11},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 151},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 151},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 151},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 151},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 151},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 151},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 151},
  [164] = {.lex_state = 151},
  [165] = {.lex_state = 151},
  [166] = {.lex_state = 151},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 151},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 151},
  [172] = {.lex_state = 151},
  [173] = {.lex_state = 151},
  [174] = {.lex_state = 151},
  [175] = {.lex_state = 151},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 151},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 151},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 151},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 151},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 151},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 151},
  [195] = {.lex_state = 151},
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
    [anon_sym_DOTtype] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(191),
    [sym__element] = STATE(37),
    [sym_relation_decl] = STATE(37),
    [sym_rule] = STATE(37),
    [sym_directive] = STATE(37),
    [sym_directive_qualifier] = STATE(166),
    [sym_include_directive] = STATE(37),
    [sym_qualified_name] = STATE(189),
    [sym_fact] = STATE(37),
    [sym_type_decl] = STATE(37),
    [sym_atom] = STATE(125),
    [aux_sym_source_file_repeat1] = STATE(37),
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
  [0] = 20,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(32), 1,
      sym_argument,
    STATE(136), 1,
      sym_conjunction,
    STATE(181), 1,
      sym_disjunction,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(121), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [72] = 20,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(32), 1,
      sym_argument,
    STATE(136), 1,
      sym_conjunction,
    STATE(184), 1,
      sym_disjunction,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(121), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [144] = 20,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(32), 1,
      sym_argument,
    STATE(136), 1,
      sym_conjunction,
    STATE(188), 1,
      sym_disjunction,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(121), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [216] = 20,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(32), 1,
      sym_argument,
    STATE(136), 1,
      sym_conjunction,
    STATE(176), 1,
      sym_disjunction,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(121), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [288] = 20,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(32), 1,
      sym_argument,
    STATE(136), 1,
      sym_conjunction,
    STATE(185), 1,
      sym_disjunction,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(121), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [360] = 20,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(32), 1,
      sym_argument,
    STATE(136), 1,
      sym_conjunction,
    STATE(180), 1,
      sym_disjunction,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(121), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [432] = 19,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_BANG,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(32), 1,
      sym_argument,
    STATE(151), 1,
      sym_conjunction,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(121), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [501] = 18,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      anon_sym_BANG,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(32), 1,
      sym_argument,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(131), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [567] = 18,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      anon_sym_BANG,
    STATE(32), 1,
      sym_argument,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(111), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [633] = 18,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(23), 1,
      anon_sym__,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_BANG,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym_argument,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(137), 2,
      sym_constraint,
      sym_atom,
    STATE(138), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [699] = 8,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(61), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(49), 14,
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
  [744] = 7,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(49), 17,
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
  [787] = 4,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(49), 21,
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
  [824] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(49), 22,
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
  [859] = 6,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(51), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(49), 19,
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
  [900] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(65), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(63), 22,
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
  [935] = 3,
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
  [970] = 3,
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
  [1005] = 3,
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
  [1040] = 3,
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
  [1075] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(85), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(83), 22,
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
    ACTIONS(89), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(87), 22,
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
    ACTIONS(93), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(91), 22,
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
    ACTIONS(95), 1,
      anon_sym_LPAREN,
    ACTIONS(97), 1,
      anon_sym_DOT,
    STATE(108), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(67), 17,
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
  [1219] = 7,
    ACTIONS(103), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(92), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(99), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
    ACTIONS(101), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
  [1257] = 7,
    ACTIONS(103), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(109), 1,
      sym_identifier,
    STATE(94), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(28), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(101), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1295] = 7,
    ACTIONS(103), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(84), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(101), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1333] = 7,
    ACTIONS(103), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(84), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(26), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(101), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(111), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1371] = 7,
    ACTIONS(103), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(90), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(34), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(101), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1409] = 7,
    ACTIONS(103), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(90), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(101), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(115), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1447] = 10,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(119), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(121), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(123), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1491] = 7,
    ACTIONS(103), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(93), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(31), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(101), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(127), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1529] = 7,
    ACTIONS(103), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(89), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(101), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(131), 8,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1567] = 5,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(137), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1600] = 11,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      anon_sym_DOTdecl,
    ACTIONS(150), 1,
      anon_sym_DOTinclude,
    ACTIONS(153), 1,
      anon_sym_DOTtype,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(125), 1,
      sym_atom,
    STATE(166), 1,
      sym_directive_qualifier,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(36), 8,
      sym__element,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [1645] = 11,
    ACTIONS(7), 1,
      anon_sym_DOTdecl,
    ACTIONS(11), 1,
      anon_sym_DOTinclude,
    ACTIONS(13), 1,
      anon_sym_DOTtype,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(125), 1,
      sym_atom,
    STATE(166), 1,
      sym_directive_qualifier,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(9), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(36), 8,
      sym__element,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [1690] = 9,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(61), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(161), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(123), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1730] = 11,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    ACTIONS(163), 1,
      anon_sym_RBRACK,
    STATE(41), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [1773] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(165), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
    ACTIONS(167), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
  [1800] = 11,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_bshr,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(61), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(123), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1843] = 11,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_bshr,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(61), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(123), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1886] = 9,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(61), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(175), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(123), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1925] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(14), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [1965] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(43), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2005] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(54), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2045] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(12), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2085] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(42), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2125] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(16), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2165] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(23), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2205] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(15), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2245] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(38), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2285] = 10,
    ACTIONS(21), 1,
      anon_sym_nil,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DASH,
    ACTIONS(31), 1,
      anon_sym_as,
    STATE(13), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(23), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(35), 2,
      sym_string_literal,
      sym_number,
    STATE(22), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2325] = 9,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(59), 1,
      anon_sym_SLASH,
    ACTIONS(125), 1,
      anon_sym_bshr,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(57), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(61), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(123), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [2362] = 5,
    ACTIONS(181), 1,
      anon_sym_BANG,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_string_literal,
      sym_number,
    ACTIONS(184), 8,
      anon_sym_nil,
      anon_sym__,
      anon_sym_bnot,
      anon_sym_lnot,
      anon_sym_as,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [2390] = 4,
    ACTIONS(186), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 12,
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
  [2415] = 4,
    ACTIONS(186), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 12,
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
  [2440] = 4,
    ACTIONS(192), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 12,
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
  [2465] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_RBRACK,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [2485] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 13,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_RBRACK,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [2505] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 13,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_RBRACK,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [2525] = 3,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 12,
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
  [2547] = 4,
    ACTIONS(205), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 10,
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
  [2570] = 5,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(208), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2595] = 5,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(216), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2620] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 11,
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
  [2638] = 4,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(73), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(218), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2660] = 4,
    ACTIONS(224), 1,
      anon_sym_PIPE,
    STATE(68), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2682] = 8,
    ACTIONS(227), 1,
      anon_sym_LBRACK,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(59), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_primitive_type,
    STATE(77), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(96), 2,
      sym_union_type_expr,
      sym_record_type_expr,
    ACTIONS(229), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [2712] = 4,
    ACTIONS(235), 1,
      anon_sym_DOTplan,
    STATE(99), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2734] = 4,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(237), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2756] = 4,
    ACTIONS(244), 1,
      anon_sym_PIPE,
    STATE(68), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(242), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2778] = 4,
    ACTIONS(220), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2800] = 4,
    ACTIONS(235), 1,
      anon_sym_DOTplan,
    STATE(85), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2822] = 4,
    ACTIONS(244), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2844] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 10,
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
  [2861] = 3,
    ACTIONS(256), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2880] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 10,
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
  [2897] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 10,
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
  [2914] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 10,
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
  [2931] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 10,
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
  [2948] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(237), 10,
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
  [2965] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2981] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(99), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2997] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3013] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3029] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3045] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3061] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3077] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3093] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(276), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3109] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3125] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3141] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3157] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3173] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3189] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3205] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(284), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3221] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3237] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3253] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 9,
      ts_builtin_sym_end,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3269] = 6,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(59), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_primitive_type,
    STATE(83), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3292] = 6,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(59), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_primitive_type,
    STATE(75), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3315] = 6,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(59), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_primitive_type,
    STATE(161), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3338] = 6,
    ACTIONS(231), 1,
      sym_identifier,
    STATE(59), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_primitive_type,
    STATE(78), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3361] = 6,
    ACTIONS(292), 1,
      sym_identifier,
    STATE(59), 1,
      sym_qualified_name,
    STATE(60), 1,
      sym_primitive_type,
    STATE(182), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3384] = 6,
    ACTIONS(294), 1,
      sym_string_literal,
    ACTIONS(296), 1,
      sym_identifier,
    STATE(167), 1,
      sym_boolean_literal,
    STATE(169), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_true,
      anon_sym_false,
  [3405] = 4,
    ACTIONS(97), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3422] = 4,
    ACTIONS(298), 1,
      anon_sym_DOT,
    STATE(109), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3439] = 4,
    ACTIONS(97), 1,
      anon_sym_DOT,
    STATE(108), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3456] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3472] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(305), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3484] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3500] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3516] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(190), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [3528] = 4,
    ACTIONS(309), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3544] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3560] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3572] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3588] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3604] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3620] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3636] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3647] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(67), 1,
      sym_choice_domain_attribute,
    STATE(81), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3664] = 5,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(330), 1,
      anon_sym_COLON_DASH,
    ACTIONS(332), 1,
      anon_sym_DOT,
    STATE(152), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3681] = 4,
    ACTIONS(334), 1,
      anon_sym_EQ,
    ACTIONS(336), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(87), 2,
      sym_subtype_decl,
      sym_equivalence_type_decl,
  [3696] = 4,
    ACTIONS(338), 1,
      anon_sym_COMMA,
    STATE(127), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3711] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3726] = 4,
    ACTIONS(348), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [3741] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(351), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3752] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3763] = 4,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(132), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(356), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3778] = 4,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    STATE(129), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [3793] = 5,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(81), 1,
      sym_choice_domain_tuple_attribute,
    STATE(82), 1,
      sym_choice_domain_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3810] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(362), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3821] = 4,
    ACTIONS(360), 1,
      anon_sym_SEMI,
    STATE(133), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(364), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [3836] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(366), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3847] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(368), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3858] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RPAREN,
    STATE(156), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3872] = 4,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RPAREN,
    STATE(127), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3886] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(376), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3900] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3910] = 4,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3924] = 4,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(382), 1,
      anon_sym_RPAREN,
    STATE(132), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3938] = 4,
    ACTIONS(15), 1,
      sym_identifier,
    STATE(175), 1,
      sym_atom,
    STATE(189), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3952] = 4,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(127), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3966] = 4,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3980] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3994] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4008] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4022] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [4032] = 4,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_COLON_DASH,
    STATE(157), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4046] = 4,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_LPAREN,
    STATE(132), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4060] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_RPAREN,
    STATE(148), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4074] = 4,
    ACTIONS(378), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4088] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(405), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4102] = 4,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_COLON_DASH,
    STATE(157), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4116] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(356), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4126] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(412), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4140] = 4,
    ACTIONS(370), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4154] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4164] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4178] = 3,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(149), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4189] = 3,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(66), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4200] = 3,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(154), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4211] = 3,
    ACTIONS(422), 1,
      sym_identifier,
    STATE(64), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4222] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(426), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4231] = 3,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(139), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4242] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4251] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(389), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4260] = 3,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(160), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4271] = 3,
    ACTIONS(420), 1,
      sym_identifier,
    STATE(142), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4282] = 3,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(170), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4293] = 3,
    ACTIONS(424), 1,
      sym_identifier,
    STATE(162), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4304] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [4313] = 2,
    ACTIONS(430), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4321] = 2,
    ACTIONS(432), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4329] = 2,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4337] = 2,
    ACTIONS(436), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4345] = 2,
    ACTIONS(438), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4353] = 2,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4361] = 2,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4369] = 2,
    ACTIONS(444), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4377] = 2,
    ACTIONS(446), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4385] = 2,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4393] = 2,
    ACTIONS(450), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4401] = 2,
    ACTIONS(452), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4409] = 2,
    ACTIONS(454), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4417] = 2,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4425] = 2,
    ACTIONS(458), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4433] = 2,
    ACTIONS(460), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4441] = 2,
    ACTIONS(462), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4449] = 2,
    ACTIONS(464), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4457] = 2,
    ACTIONS(466), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4465] = 2,
    ACTIONS(468), 1,
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
  [SMALL_STATE(13)] = 744,
  [SMALL_STATE(14)] = 787,
  [SMALL_STATE(15)] = 824,
  [SMALL_STATE(16)] = 859,
  [SMALL_STATE(17)] = 900,
  [SMALL_STATE(18)] = 935,
  [SMALL_STATE(19)] = 970,
  [SMALL_STATE(20)] = 1005,
  [SMALL_STATE(21)] = 1040,
  [SMALL_STATE(22)] = 1075,
  [SMALL_STATE(23)] = 1110,
  [SMALL_STATE(24)] = 1145,
  [SMALL_STATE(25)] = 1180,
  [SMALL_STATE(26)] = 1219,
  [SMALL_STATE(27)] = 1257,
  [SMALL_STATE(28)] = 1295,
  [SMALL_STATE(29)] = 1333,
  [SMALL_STATE(30)] = 1371,
  [SMALL_STATE(31)] = 1409,
  [SMALL_STATE(32)] = 1447,
  [SMALL_STATE(33)] = 1491,
  [SMALL_STATE(34)] = 1529,
  [SMALL_STATE(35)] = 1567,
  [SMALL_STATE(36)] = 1600,
  [SMALL_STATE(37)] = 1645,
  [SMALL_STATE(38)] = 1690,
  [SMALL_STATE(39)] = 1730,
  [SMALL_STATE(40)] = 1773,
  [SMALL_STATE(41)] = 1800,
  [SMALL_STATE(42)] = 1843,
  [SMALL_STATE(43)] = 1886,
  [SMALL_STATE(44)] = 1925,
  [SMALL_STATE(45)] = 1965,
  [SMALL_STATE(46)] = 2005,
  [SMALL_STATE(47)] = 2045,
  [SMALL_STATE(48)] = 2085,
  [SMALL_STATE(49)] = 2125,
  [SMALL_STATE(50)] = 2165,
  [SMALL_STATE(51)] = 2205,
  [SMALL_STATE(52)] = 2245,
  [SMALL_STATE(53)] = 2285,
  [SMALL_STATE(54)] = 2325,
  [SMALL_STATE(55)] = 2362,
  [SMALL_STATE(56)] = 2390,
  [SMALL_STATE(57)] = 2415,
  [SMALL_STATE(58)] = 2440,
  [SMALL_STATE(59)] = 2465,
  [SMALL_STATE(60)] = 2485,
  [SMALL_STATE(61)] = 2505,
  [SMALL_STATE(62)] = 2525,
  [SMALL_STATE(63)] = 2547,
  [SMALL_STATE(64)] = 2570,
  [SMALL_STATE(65)] = 2595,
  [SMALL_STATE(66)] = 2620,
  [SMALL_STATE(67)] = 2638,
  [SMALL_STATE(68)] = 2660,
  [SMALL_STATE(69)] = 2682,
  [SMALL_STATE(70)] = 2712,
  [SMALL_STATE(71)] = 2734,
  [SMALL_STATE(72)] = 2756,
  [SMALL_STATE(73)] = 2778,
  [SMALL_STATE(74)] = 2800,
  [SMALL_STATE(75)] = 2822,
  [SMALL_STATE(76)] = 2844,
  [SMALL_STATE(77)] = 2861,
  [SMALL_STATE(78)] = 2880,
  [SMALL_STATE(79)] = 2897,
  [SMALL_STATE(80)] = 2914,
  [SMALL_STATE(81)] = 2931,
  [SMALL_STATE(82)] = 2948,
  [SMALL_STATE(83)] = 2965,
  [SMALL_STATE(84)] = 2981,
  [SMALL_STATE(85)] = 2997,
  [SMALL_STATE(86)] = 3013,
  [SMALL_STATE(87)] = 3029,
  [SMALL_STATE(88)] = 3045,
  [SMALL_STATE(89)] = 3061,
  [SMALL_STATE(90)] = 3077,
  [SMALL_STATE(91)] = 3093,
  [SMALL_STATE(92)] = 3109,
  [SMALL_STATE(93)] = 3125,
  [SMALL_STATE(94)] = 3141,
  [SMALL_STATE(95)] = 3157,
  [SMALL_STATE(96)] = 3173,
  [SMALL_STATE(97)] = 3189,
  [SMALL_STATE(98)] = 3205,
  [SMALL_STATE(99)] = 3221,
  [SMALL_STATE(100)] = 3237,
  [SMALL_STATE(101)] = 3253,
  [SMALL_STATE(102)] = 3269,
  [SMALL_STATE(103)] = 3292,
  [SMALL_STATE(104)] = 3315,
  [SMALL_STATE(105)] = 3338,
  [SMALL_STATE(106)] = 3361,
  [SMALL_STATE(107)] = 3384,
  [SMALL_STATE(108)] = 3405,
  [SMALL_STATE(109)] = 3422,
  [SMALL_STATE(110)] = 3439,
  [SMALL_STATE(111)] = 3456,
  [SMALL_STATE(112)] = 3472,
  [SMALL_STATE(113)] = 3484,
  [SMALL_STATE(114)] = 3500,
  [SMALL_STATE(115)] = 3516,
  [SMALL_STATE(116)] = 3528,
  [SMALL_STATE(117)] = 3544,
  [SMALL_STATE(118)] = 3560,
  [SMALL_STATE(119)] = 3572,
  [SMALL_STATE(120)] = 3588,
  [SMALL_STATE(121)] = 3604,
  [SMALL_STATE(122)] = 3620,
  [SMALL_STATE(123)] = 3636,
  [SMALL_STATE(124)] = 3647,
  [SMALL_STATE(125)] = 3664,
  [SMALL_STATE(126)] = 3681,
  [SMALL_STATE(127)] = 3696,
  [SMALL_STATE(128)] = 3711,
  [SMALL_STATE(129)] = 3726,
  [SMALL_STATE(130)] = 3741,
  [SMALL_STATE(131)] = 3752,
  [SMALL_STATE(132)] = 3763,
  [SMALL_STATE(133)] = 3778,
  [SMALL_STATE(134)] = 3793,
  [SMALL_STATE(135)] = 3810,
  [SMALL_STATE(136)] = 3821,
  [SMALL_STATE(137)] = 3836,
  [SMALL_STATE(138)] = 3847,
  [SMALL_STATE(139)] = 3858,
  [SMALL_STATE(140)] = 3872,
  [SMALL_STATE(141)] = 3886,
  [SMALL_STATE(142)] = 3900,
  [SMALL_STATE(143)] = 3910,
  [SMALL_STATE(144)] = 3924,
  [SMALL_STATE(145)] = 3938,
  [SMALL_STATE(146)] = 3952,
  [SMALL_STATE(147)] = 3966,
  [SMALL_STATE(148)] = 3980,
  [SMALL_STATE(149)] = 3994,
  [SMALL_STATE(150)] = 4008,
  [SMALL_STATE(151)] = 4022,
  [SMALL_STATE(152)] = 4032,
  [SMALL_STATE(153)] = 4046,
  [SMALL_STATE(154)] = 4060,
  [SMALL_STATE(155)] = 4074,
  [SMALL_STATE(156)] = 4088,
  [SMALL_STATE(157)] = 4102,
  [SMALL_STATE(158)] = 4116,
  [SMALL_STATE(159)] = 4126,
  [SMALL_STATE(160)] = 4140,
  [SMALL_STATE(161)] = 4154,
  [SMALL_STATE(162)] = 4164,
  [SMALL_STATE(163)] = 4178,
  [SMALL_STATE(164)] = 4189,
  [SMALL_STATE(165)] = 4200,
  [SMALL_STATE(166)] = 4211,
  [SMALL_STATE(167)] = 4222,
  [SMALL_STATE(168)] = 4231,
  [SMALL_STATE(169)] = 4242,
  [SMALL_STATE(170)] = 4251,
  [SMALL_STATE(171)] = 4260,
  [SMALL_STATE(172)] = 4271,
  [SMALL_STATE(173)] = 4282,
  [SMALL_STATE(174)] = 4293,
  [SMALL_STATE(175)] = 4304,
  [SMALL_STATE(176)] = 4313,
  [SMALL_STATE(177)] = 4321,
  [SMALL_STATE(178)] = 4329,
  [SMALL_STATE(179)] = 4337,
  [SMALL_STATE(180)] = 4345,
  [SMALL_STATE(181)] = 4353,
  [SMALL_STATE(182)] = 4361,
  [SMALL_STATE(183)] = 4369,
  [SMALL_STATE(184)] = 4377,
  [SMALL_STATE(185)] = 4385,
  [SMALL_STATE(186)] = 4393,
  [SMALL_STATE(187)] = 4401,
  [SMALL_STATE(188)] = 4409,
  [SMALL_STATE(189)] = 4417,
  [SMALL_STATE(190)] = 4425,
  [SMALL_STATE(191)] = 4433,
  [SMALL_STATE(192)] = 4441,
  [SMALL_STATE(193)] = 4449,
  [SMALL_STATE(194)] = 4457,
  [SMALL_STATE(195)] = 4465,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 4),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(40),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(179),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(192),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(110),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(55),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(195),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(164),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_expr_repeat1, 2),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_expr_repeat1, 2), SHIFT_REPEAT(105),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(134),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_expr, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_expr, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 9),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalence_type_decl, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 4),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 5),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_expr, 4),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_expr, 3),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(187),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(9),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(45),
  [341] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(172),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(8),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(183),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(173),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(145),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 6),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 8),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [460] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_qualifier, 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
