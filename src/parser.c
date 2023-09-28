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
#define STATE_COUNT 199
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 121
#define ALIAS_COUNT 4
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 11

enum {
  anon_sym_POUNDinclude = 1,
  anon_sym_DOTdecl = 2,
  anon_sym_COMMA = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_eqrel = 6,
  anon_sym_btree = 7,
  anon_sym_brie = 8,
  anon_sym_no_magic = 9,
  anon_sym_magic = 10,
  anon_sym_no_inline = 11,
  anon_sym_inline = 12,
  anon_sym_override = 13,
  anon_sym_choice_DASHdomain = 14,
  anon_sym_COLON_DASH = 15,
  anon_sym_DOT = 16,
  anon_sym_SEMI = 17,
  anon_sym_BANG = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_LT_EQ = 21,
  anon_sym_GT_EQ = 22,
  anon_sym_EQ = 23,
  anon_sym_BANG_EQ = 24,
  anon_sym_DOTplan = 25,
  anon_sym_DOTinput = 26,
  anon_sym_DOToutput = 27,
  anon_sym_DOTprintsize = 28,
  anon_sym_DOTlimitsize = 29,
  anon_sym_DOTinclude = 30,
  anon_sym_nil = 31,
  anon_sym__ = 32,
  anon_sym_LBRACK = 33,
  anon_sym_RBRACK = 34,
  anon_sym_DASH = 35,
  anon_sym_bnot = 36,
  anon_sym_lnot = 37,
  anon_sym_CARET = 38,
  anon_sym_STAR = 39,
  anon_sym_SLASH = 40,
  anon_sym_PERCENT = 41,
  anon_sym_PLUS = 42,
  anon_sym_land = 43,
  anon_sym_lor = 44,
  anon_sym_lxor = 45,
  anon_sym_band = 46,
  anon_sym_bor = 47,
  anon_sym_bxor = 48,
  anon_sym_bshl = 49,
  anon_sym_bshr = 50,
  anon_sym_bshru = 51,
  anon_sym_as = 52,
  anon_sym_COLON = 53,
  anon_sym_DOTtype = 54,
  anon_sym_LT_COLON = 55,
  anon_sym_PIPE = 56,
  anon_sym_number = 57,
  anon_sym_symbol = 58,
  anon_sym_unsigned = 59,
  anon_sym_float = 60,
  anon_sym_true = 61,
  anon_sym_false = 62,
  sym_string_literal = 63,
  sym_line_comment = 64,
  sym_block_comment = 65,
  sym_identifier = 66,
  sym_number = 67,
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
  sym_directive_qualifier = 84,
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
  [alias_sym_path_spec] = "path_spec",
  [alias_sym_user_defined_type_name] = "user_defined_type_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
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
  [109] = 109,
  [110] = 58,
  [111] = 57,
  [112] = 56,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 62,
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
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 185,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(161);
      if (lookahead == '!') ADVANCE(189);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == ';') ADVANCE(187);
      if (lookahead == '<') ADVANCE(190);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == '^') ADVANCE(214);
      if (lookahead == '_') ADVANCE(205);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == 'b') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'm') ADVANCE(16);
      if (lookahead == 'n') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(152);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == 'u') ADVANCE(103);
      if (lookahead == '|') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(188);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(187);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(299);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(13);
      if (lookahead == '%') ADVANCE(217);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == '*') ADVANCE(215);
      if (lookahead == '+') ADVANCE(218);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(230);
      if (lookahead == ';') ADVANCE(187);
      if (lookahead == '<') ADVANCE(191);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == '>') ADVANCE(192);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == '^') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '-') ADVANCE(209);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == '_') ADVANCE(206);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(299);
      if (lookahead == 'l') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(282);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'f') ADVANCE(252);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(248);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(249);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '[') ADVANCE(207);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(233);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(140);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(112);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == 'x') ADVANCE(116);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(122);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(116);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(118);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(175);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(93);
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'p') ADVANCE(90);
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(201);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(107);
      END_STATE();
    case 64:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(115);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(155);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(225);
      if (lookahead == 'r') ADVANCE(226);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 90:
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 92:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 93:
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 96:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 97:
      if (lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(183);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 107:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 115:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 116:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 117:
      if (lookahead == 'o') ADVANCE(125);
      END_STATE();
    case 118:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 119:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 120:
      if (lookahead == 'p') ADVANCE(150);
      END_STATE();
    case 121:
      if (lookahead == 'q') ADVANCE(129);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(223);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 132:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(228);
      END_STATE();
    case 134:
      if (lookahead == 's') ADVANCE(67);
      END_STATE();
    case 135:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(79);
      END_STATE();
    case 138:
      if (lookahead == 't') ADVANCE(210);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 140:
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 141:
      if (lookahead == 't') ADVANCE(198);
      END_STATE();
    case 142:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 143:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 144:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 145:
      if (lookahead == 't') ADVANCE(137);
      END_STATE();
    case 146:
      if (lookahead == 'u') ADVANCE(143);
      END_STATE();
    case 147:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 148:
      if (lookahead == 'u') ADVANCE(141);
      END_STATE();
    case 149:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 150:
      if (lookahead == 'u') ADVANCE(142);
      END_STATE();
    case 151:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 152:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 153:
      if (lookahead == 'y') ADVANCE(119);
      END_STATE();
    case 154:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 155:
      if (lookahead == 'z') ADVANCE(53);
      END_STATE();
    case 156:
      if (lookahead == 'z') ADVANCE(54);
      END_STATE();
    case 157:
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 158:
      if (eof) ADVANCE(161);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '(') ADVANCE(165);
      if (lookahead == ')') ADVANCE(166);
      if (lookahead == ',') ADVANCE(164);
      if (lookahead == '.') ADVANCE(186);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '<') ADVANCE(12);
      if (lookahead == '=') ADVANCE(195);
      if (lookahead == ']') ADVANCE(208);
      if (lookahead == '|') ADVANCE(234);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 159:
      if (eof) ADVANCE(161);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '.') ADVANCE(33);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'b') ADVANCE(316);
      if (lookahead == 'c') ADVANCE(279);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(253);
      if (lookahead == 'n') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(329);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 160:
      if (eof) ADVANCE(161);
      if (lookahead == '#') ADVANCE(70);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DOTdecl);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'd') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'l') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(146);
      if (lookahead == 'p') ADVANCE(132);
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(196);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_DOTplan);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_DOTinput);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_DOToutput);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DOTprintsize);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DOTlimitsize);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_DOTinclude);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(248);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(184);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_DOTtype);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(248);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(306);
      if (lookahead == 'm') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
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
  [26] = {.lex_state = 158},
  [27] = {.lex_state = 158},
  [28] = {.lex_state = 159},
  [29] = {.lex_state = 159},
  [30] = {.lex_state = 159},
  [31] = {.lex_state = 159},
  [32] = {.lex_state = 159},
  [33] = {.lex_state = 159},
  [34] = {.lex_state = 159},
  [35] = {.lex_state = 159},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 159},
  [38] = {.lex_state = 159},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
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
  [56] = {.lex_state = 158},
  [57] = {.lex_state = 158},
  [58] = {.lex_state = 158},
  [59] = {.lex_state = 158},
  [60] = {.lex_state = 158},
  [61] = {.lex_state = 158},
  [62] = {.lex_state = 158},
  [63] = {.lex_state = 158},
  [64] = {.lex_state = 158},
  [65] = {.lex_state = 158},
  [66] = {.lex_state = 158},
  [67] = {.lex_state = 158},
  [68] = {.lex_state = 160},
  [69] = {.lex_state = 158},
  [70] = {.lex_state = 158},
  [71] = {.lex_state = 158},
  [72] = {.lex_state = 158},
  [73] = {.lex_state = 160},
  [74] = {.lex_state = 158},
  [75] = {.lex_state = 158},
  [76] = {.lex_state = 158},
  [77] = {.lex_state = 158},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 158},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 158},
  [82] = {.lex_state = 158},
  [83] = {.lex_state = 158},
  [84] = {.lex_state = 158},
  [85] = {.lex_state = 158},
  [86] = {.lex_state = 158},
  [87] = {.lex_state = 158},
  [88] = {.lex_state = 158},
  [89] = {.lex_state = 158},
  [90] = {.lex_state = 158},
  [91] = {.lex_state = 158},
  [92] = {.lex_state = 158},
  [93] = {.lex_state = 158},
  [94] = {.lex_state = 158},
  [95] = {.lex_state = 158},
  [96] = {.lex_state = 158},
  [97] = {.lex_state = 158},
  [98] = {.lex_state = 158},
  [99] = {.lex_state = 158},
  [100] = {.lex_state = 158},
  [101] = {.lex_state = 158},
  [102] = {.lex_state = 158},
  [103] = {.lex_state = 158},
  [104] = {.lex_state = 11},
  [105] = {.lex_state = 11},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 11},
  [108] = {.lex_state = 11},
  [109] = {.lex_state = 4},
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
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 158},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 158},
  [136] = {.lex_state = 158},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 158},
  [149] = {.lex_state = 158},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 158},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 158},
  [166] = {.lex_state = 158},
  [167] = {.lex_state = 158},
  [168] = {.lex_state = 158},
  [169] = {.lex_state = 158},
  [170] = {.lex_state = 158},
  [171] = {.lex_state = 158},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 158},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 158},
  [177] = {.lex_state = 158},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 158},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 158},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 158},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 158},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 158},
  [197] = {.lex_state = 158},
  [198] = {.lex_state = 158},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
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
    [sym_source_file] = STATE(193),
    [sym__element] = STATE(27),
    [sym_preprocessor_directive] = STATE(27),
    [sym_include_preprocessor_directive] = STATE(91),
    [sym_relation_decl] = STATE(27),
    [sym_rule] = STATE(27),
    [sym_directive] = STATE(27),
    [sym_directive_qualifier] = STATE(169),
    [sym_include_directive] = STATE(27),
    [sym_qualified_name] = STATE(191),
    [sym_fact] = STATE(27),
    [sym_type_decl] = STATE(27),
    [sym_atom] = STATE(130),
    [aux_sym_source_file_repeat1] = STATE(27),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_DOTdecl] = ACTIONS(9),
    [anon_sym_DOTinput] = ACTIONS(11),
    [anon_sym_DOToutput] = ACTIONS(11),
    [anon_sym_DOTprintsize] = ACTIONS(11),
    [anon_sym_DOTlimitsize] = ACTIONS(11),
    [anon_sym_DOTinclude] = ACTIONS(13),
    [anon_sym_DOTtype] = ACTIONS(15),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(17),
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
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(36), 1,
      sym_argument,
    STATE(125), 1,
      sym_conjunction,
    STATE(186), 1,
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
    STATE(113), 2,
      sym_constraint,
      sym_atom,
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(16), 6,
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
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(36), 1,
      sym_argument,
    STATE(125), 1,
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
    STATE(113), 2,
      sym_constraint,
      sym_atom,
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(16), 6,
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
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(36), 1,
      sym_argument,
    STATE(125), 1,
      sym_conjunction,
    STATE(183), 1,
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
    STATE(113), 2,
      sym_constraint,
      sym_atom,
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(16), 6,
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
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(36), 1,
      sym_argument,
    STATE(125), 1,
      sym_conjunction,
    STATE(187), 1,
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
    STATE(113), 2,
      sym_constraint,
      sym_atom,
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(16), 6,
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
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(36), 1,
      sym_argument,
    STATE(125), 1,
      sym_conjunction,
    STATE(180), 1,
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
    STATE(113), 2,
      sym_constraint,
      sym_atom,
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(16), 6,
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
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(36), 1,
      sym_argument,
    STATE(125), 1,
      sym_conjunction,
    STATE(181), 1,
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
    STATE(113), 2,
      sym_constraint,
      sym_atom,
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(16), 6,
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
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(36), 1,
      sym_argument,
    STATE(152), 1,
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
    STATE(113), 2,
      sym_constraint,
      sym_atom,
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(16), 6,
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
    STATE(36), 1,
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
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(132), 2,
      sym_constraint,
      sym_atom,
    STATE(16), 6,
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
    ACTIONS(43), 1,
      anon_sym_BANG,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
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
    STATE(121), 2,
      sym_constraint,
      sym_atom,
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(16), 6,
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
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    STATE(9), 1,
      aux_sym_conjunction_repeat1,
    STATE(36), 1,
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
    STATE(126), 2,
      sym_constraint,
      sym_atom,
    STATE(127), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(16), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [699] = 4,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(53), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(51), 21,
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
  [736] = 3,
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
  [771] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(57), 22,
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
  [806] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(63), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(61), 22,
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
  [841] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(65), 22,
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
  [876] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(71), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(69), 22,
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
  [911] = 8,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(79), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(51), 14,
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
  [956] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(81), 22,
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
  [991] = 7,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(51), 17,
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
  [1034] = 3,
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
  [1069] = 3,
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
  [1104] = 6,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(53), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(51), 19,
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
    ACTIONS(63), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(61), 17,
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
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_POUNDinclude,
    ACTIONS(106), 1,
      anon_sym_DOTdecl,
    ACTIONS(112), 1,
      anon_sym_DOTinclude,
    ACTIONS(115), 1,
      anon_sym_DOTtype,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(91), 1,
      sym_include_preprocessor_directive,
    STATE(130), 1,
      sym_atom,
    STATE(169), 1,
      sym_directive_qualifier,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(26), 9,
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
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_DOTdecl,
    ACTIONS(13), 1,
      anon_sym_DOTinclude,
    ACTIONS(15), 1,
      anon_sym_DOTtype,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym_include_preprocessor_directive,
    STATE(130), 1,
      sym_atom,
    STATE(169), 1,
      sym_directive_qualifier,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 4,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
    STATE(26), 9,
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
    STATE(99), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
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
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1362] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(100), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
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
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1401] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(86), 1,
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
    ACTIONS(135), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1440] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(141), 1,
      sym_identifier,
    STATE(87), 1,
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
    ACTIONS(139), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1479] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(145), 1,
      sym_identifier,
    STATE(95), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(35), 2,
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
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1518] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(101), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
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
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1557] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(149), 1,
      sym_identifier,
    STATE(101), 1,
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
    ACTIONS(147), 9,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1596] = 7,
    ACTIONS(127), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(86), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
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
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1635] = 10,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(153), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(155), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1679] = 5,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(37), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(161), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(159), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1713] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
    ACTIONS(166), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
  [1741] = 9,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(79), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(170), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(155), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1781] = 11,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_bshr,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(79), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(155), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1824] = 11,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(176), 1,
      anon_sym_RBRACK,
    STATE(42), 1,
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
    STATE(16), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [1867] = 11,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_bshr,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(164), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(79), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(155), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [1910] = 9,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(79), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(180), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(155), 5,
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
    STATE(16), 6,
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
    STATE(23), 1,
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
    STATE(16), 6,
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
    STATE(16), 6,
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
    STATE(16), 6,
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
    STATE(16), 6,
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
    STATE(39), 1,
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
    STATE(16), 6,
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
    STATE(16), 6,
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
    STATE(12), 1,
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
    STATE(16), 6,
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
    STATE(20), 1,
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
    STATE(16), 6,
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
    STATE(18), 1,
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
    STATE(16), 6,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
  [2349] = 9,
    ACTIONS(55), 1,
      anon_sym_CARET,
    ACTIONS(77), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_bshr,
    ACTIONS(182), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(79), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(155), 5,
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
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(57), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 13,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
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
    ACTIONS(191), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 13,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
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
  [2466] = 4,
    ACTIONS(197), 1,
      anon_sym_DOT,
    STATE(58), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
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
  [2492] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 14,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
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
  [2513] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 14,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
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
  [2534] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 14,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
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
  [2555] = 3,
    ACTIONS(206), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
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
  [2578] = 5,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(212), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(208), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2604] = 4,
    ACTIONS(216), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_LPAREN,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2628] = 5,
    ACTIONS(210), 1,
      anon_sym_COMMA,
    ACTIONS(221), 1,
      anon_sym_LPAREN,
    STATE(64), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(219), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2654] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2677] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(227), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2700] = 4,
    ACTIONS(231), 1,
      anon_sym_DOTplan,
    STATE(92), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(229), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2723] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 12,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
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
  [2742] = 4,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    STATE(71), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(233), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2765] = 4,
    ACTIONS(235), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(237), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2788] = 4,
    ACTIONS(241), 1,
      anon_sym_PIPE,
    STATE(72), 1,
      aux_sym_union_type_expr_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2811] = 4,
    ACTIONS(231), 1,
      anon_sym_DOTplan,
    STATE(84), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2834] = 4,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2857] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(251), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2875] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(253), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2893] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      anon_sym_PIPE,
      sym_identifier,
  [2911] = 8,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(60), 1,
      sym_qualified_name,
    STATE(61), 1,
      sym_primitive_type,
    STATE(80), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(88), 2,
      sym_union_type_expr,
      sym_record_type_expr,
    ACTIONS(257), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [2941] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(261), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2959] = 3,
    ACTIONS(265), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(263), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [2979] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
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
    ACTIONS(267), 11,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_COMMA,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3015] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(269), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3032] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(271), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3049] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(273), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3066] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(131), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3083] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3100] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(263), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3117] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(275), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3134] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(277), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3151] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(279), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3168] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(281), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3185] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(283), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3202] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(285), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3219] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3236] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(287), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
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
    ACTIONS(289), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3270] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(291), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3287] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(293), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3304] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(295), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3321] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3338] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(297), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3355] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(299), 10,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTdecl,
      anon_sym_DOTinput,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTlimitsize,
      anon_sym_DOTinclude,
      anon_sym_DOTtype,
      sym_identifier,
  [3372] = 6,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(60), 1,
      sym_qualified_name,
    STATE(61), 1,
      sym_primitive_type,
    STATE(178), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(257), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3395] = 6,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(60), 1,
      sym_qualified_name,
    STATE(61), 1,
      sym_primitive_type,
    STATE(70), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(257), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3418] = 6,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(60), 1,
      sym_qualified_name,
    STATE(61), 1,
      sym_primitive_type,
    STATE(103), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(257), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3441] = 6,
    ACTIONS(301), 1,
      sym_identifier,
    STATE(60), 1,
      sym_qualified_name,
    STATE(61), 1,
      sym_primitive_type,
    STATE(157), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(257), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3464] = 6,
    ACTIONS(259), 1,
      sym_identifier,
    STATE(60), 1,
      sym_qualified_name,
    STATE(61), 1,
      sym_primitive_type,
    STATE(77), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(257), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3487] = 6,
    ACTIONS(303), 1,
      sym_string_literal,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(172), 1,
      sym_boolean_literal,
    STATE(174), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
  [3508] = 4,
    ACTIONS(307), 1,
      anon_sym_DOT,
    STATE(110), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3525] = 4,
    ACTIONS(99), 1,
      anon_sym_DOT,
    STATE(110), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 4,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3542] = 4,
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
  [3559] = 4,
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
  [3575] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3587] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(118), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3603] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3619] = 4,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(323), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3635] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(325), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3651] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3667] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [3679] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(119), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3695] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(117), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3711] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(116), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(325), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3727] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3739] = 4,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    STATE(134), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [3754] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(323), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3765] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3776] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(128), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [3791] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(342), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3802] = 5,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_COLON_DASH,
    ACTIONS(348), 1,
      anon_sym_DOT,
    STATE(149), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3819] = 4,
    ACTIONS(350), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3834] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(353), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3845] = 5,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(76), 1,
      sym_choice_domain_tuple_attribute,
    STATE(81), 1,
      sym_choice_domain_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3862] = 4,
    ACTIONS(333), 1,
      anon_sym_SEMI,
    STATE(139), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(359), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [3877] = 4,
    ACTIONS(361), 1,
      anon_sym_EQ,
    ACTIONS(363), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(97), 2,
      sym_subtype_decl,
      sym_equivalence_type_decl,
  [3892] = 5,
    ACTIONS(355), 1,
      anon_sym_LPAREN,
    ACTIONS(357), 1,
      sym_identifier,
    STATE(67), 1,
      sym_choice_domain_attribute,
    STATE(76), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3909] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(365), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3920] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(367), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [3931] = 4,
    ACTIONS(371), 1,
      anon_sym_SEMI,
    STATE(139), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [3946] = 4,
    ACTIONS(374), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(377), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3961] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(381), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3975] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(383), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [3989] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4003] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(389), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4017] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_LPAREN,
    STATE(153), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4031] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      anon_sym_RPAREN,
    STATE(140), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4045] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4059] = 4,
    ACTIONS(17), 1,
      sym_identifier,
    STATE(171), 1,
      sym_atom,
    STATE(191), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4073] = 4,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(397), 1,
      anon_sym_COLON_DASH,
    STATE(163), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4087] = 4,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4101] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(404), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4115] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
  [4125] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_LPAREN,
    STATE(128), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4139] = 4,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4153] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(377), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4163] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(410), 1,
      anon_sym_RPAREN,
    STATE(159), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4177] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(412), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4187] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4201] = 4,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(416), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4215] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RPAREN,
    STATE(144), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4229] = 4,
    ACTIONS(379), 1,
      anon_sym_COMMA,
    ACTIONS(420), 1,
      anon_sym_RPAREN,
    STATE(146), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4243] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [4253] = 4,
    ACTIONS(422), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_COLON_DASH,
    STATE(163), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4267] = 4,
    ACTIONS(172), 1,
      anon_sym_COMMA,
    ACTIONS(427), 1,
      anon_sym_RBRACK,
    STATE(131), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4281] = 3,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(155), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4292] = 3,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(143), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4303] = 3,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(160), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4314] = 3,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(142), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4325] = 3,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(63), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4336] = 3,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(175), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4347] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [4356] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4365] = 3,
    ACTIONS(431), 1,
      sym_identifier,
    STATE(158), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4376] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(437), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4385] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4394] = 3,
    ACTIONS(429), 1,
      sym_identifier,
    STATE(161), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4405] = 3,
    ACTIONS(433), 1,
      sym_identifier,
    STATE(69), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4416] = 2,
    ACTIONS(439), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4424] = 2,
    ACTIONS(441), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4432] = 2,
    ACTIONS(443), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4440] = 2,
    ACTIONS(445), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4448] = 2,
    ACTIONS(447), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4456] = 2,
    ACTIONS(449), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4464] = 2,
    ACTIONS(451), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4472] = 2,
    ACTIONS(453), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4480] = 2,
    ACTIONS(455), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4488] = 2,
    ACTIONS(457), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4496] = 2,
    ACTIONS(459), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4504] = 2,
    ACTIONS(461), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4512] = 2,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4520] = 2,
    ACTIONS(465), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4528] = 2,
    ACTIONS(467), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4536] = 2,
    ACTIONS(469), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4544] = 2,
    ACTIONS(471), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4552] = 2,
    ACTIONS(473), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4560] = 2,
    ACTIONS(475), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4568] = 2,
    ACTIONS(477), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [4576] = 2,
    ACTIONS(479), 1,
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
  [SMALL_STATE(13)] = 736,
  [SMALL_STATE(14)] = 771,
  [SMALL_STATE(15)] = 806,
  [SMALL_STATE(16)] = 841,
  [SMALL_STATE(17)] = 876,
  [SMALL_STATE(18)] = 911,
  [SMALL_STATE(19)] = 956,
  [SMALL_STATE(20)] = 991,
  [SMALL_STATE(21)] = 1034,
  [SMALL_STATE(22)] = 1069,
  [SMALL_STATE(23)] = 1104,
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
  [SMALL_STATE(37)] = 1679,
  [SMALL_STATE(38)] = 1713,
  [SMALL_STATE(39)] = 1741,
  [SMALL_STATE(40)] = 1781,
  [SMALL_STATE(41)] = 1824,
  [SMALL_STATE(42)] = 1867,
  [SMALL_STATE(43)] = 1910,
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
  [SMALL_STATE(61)] = 2534,
  [SMALL_STATE(62)] = 2555,
  [SMALL_STATE(63)] = 2578,
  [SMALL_STATE(64)] = 2604,
  [SMALL_STATE(65)] = 2628,
  [SMALL_STATE(66)] = 2654,
  [SMALL_STATE(67)] = 2677,
  [SMALL_STATE(68)] = 2700,
  [SMALL_STATE(69)] = 2723,
  [SMALL_STATE(70)] = 2742,
  [SMALL_STATE(71)] = 2765,
  [SMALL_STATE(72)] = 2788,
  [SMALL_STATE(73)] = 2811,
  [SMALL_STATE(74)] = 2834,
  [SMALL_STATE(75)] = 2857,
  [SMALL_STATE(76)] = 2875,
  [SMALL_STATE(77)] = 2893,
  [SMALL_STATE(78)] = 2911,
  [SMALL_STATE(79)] = 2941,
  [SMALL_STATE(80)] = 2959,
  [SMALL_STATE(81)] = 2979,
  [SMALL_STATE(82)] = 2997,
  [SMALL_STATE(83)] = 3015,
  [SMALL_STATE(84)] = 3032,
  [SMALL_STATE(85)] = 3049,
  [SMALL_STATE(86)] = 3066,
  [SMALL_STATE(87)] = 3083,
  [SMALL_STATE(88)] = 3100,
  [SMALL_STATE(89)] = 3117,
  [SMALL_STATE(90)] = 3134,
  [SMALL_STATE(91)] = 3151,
  [SMALL_STATE(92)] = 3168,
  [SMALL_STATE(93)] = 3185,
  [SMALL_STATE(94)] = 3202,
  [SMALL_STATE(95)] = 3219,
  [SMALL_STATE(96)] = 3236,
  [SMALL_STATE(97)] = 3253,
  [SMALL_STATE(98)] = 3270,
  [SMALL_STATE(99)] = 3287,
  [SMALL_STATE(100)] = 3304,
  [SMALL_STATE(101)] = 3321,
  [SMALL_STATE(102)] = 3338,
  [SMALL_STATE(103)] = 3355,
  [SMALL_STATE(104)] = 3372,
  [SMALL_STATE(105)] = 3395,
  [SMALL_STATE(106)] = 3418,
  [SMALL_STATE(107)] = 3441,
  [SMALL_STATE(108)] = 3464,
  [SMALL_STATE(109)] = 3487,
  [SMALL_STATE(110)] = 3508,
  [SMALL_STATE(111)] = 3525,
  [SMALL_STATE(112)] = 3542,
  [SMALL_STATE(113)] = 3559,
  [SMALL_STATE(114)] = 3575,
  [SMALL_STATE(115)] = 3587,
  [SMALL_STATE(116)] = 3603,
  [SMALL_STATE(117)] = 3619,
  [SMALL_STATE(118)] = 3635,
  [SMALL_STATE(119)] = 3651,
  [SMALL_STATE(120)] = 3667,
  [SMALL_STATE(121)] = 3679,
  [SMALL_STATE(122)] = 3695,
  [SMALL_STATE(123)] = 3711,
  [SMALL_STATE(124)] = 3727,
  [SMALL_STATE(125)] = 3739,
  [SMALL_STATE(126)] = 3754,
  [SMALL_STATE(127)] = 3765,
  [SMALL_STATE(128)] = 3776,
  [SMALL_STATE(129)] = 3791,
  [SMALL_STATE(130)] = 3802,
  [SMALL_STATE(131)] = 3819,
  [SMALL_STATE(132)] = 3834,
  [SMALL_STATE(133)] = 3845,
  [SMALL_STATE(134)] = 3862,
  [SMALL_STATE(135)] = 3877,
  [SMALL_STATE(136)] = 3892,
  [SMALL_STATE(137)] = 3909,
  [SMALL_STATE(138)] = 3920,
  [SMALL_STATE(139)] = 3931,
  [SMALL_STATE(140)] = 3946,
  [SMALL_STATE(141)] = 3961,
  [SMALL_STATE(142)] = 3975,
  [SMALL_STATE(143)] = 3989,
  [SMALL_STATE(144)] = 4003,
  [SMALL_STATE(145)] = 4017,
  [SMALL_STATE(146)] = 4031,
  [SMALL_STATE(147)] = 4045,
  [SMALL_STATE(148)] = 4059,
  [SMALL_STATE(149)] = 4073,
  [SMALL_STATE(150)] = 4087,
  [SMALL_STATE(151)] = 4101,
  [SMALL_STATE(152)] = 4115,
  [SMALL_STATE(153)] = 4125,
  [SMALL_STATE(154)] = 4139,
  [SMALL_STATE(155)] = 4153,
  [SMALL_STATE(156)] = 4163,
  [SMALL_STATE(157)] = 4177,
  [SMALL_STATE(158)] = 4187,
  [SMALL_STATE(159)] = 4201,
  [SMALL_STATE(160)] = 4215,
  [SMALL_STATE(161)] = 4229,
  [SMALL_STATE(162)] = 4243,
  [SMALL_STATE(163)] = 4253,
  [SMALL_STATE(164)] = 4267,
  [SMALL_STATE(165)] = 4281,
  [SMALL_STATE(166)] = 4292,
  [SMALL_STATE(167)] = 4303,
  [SMALL_STATE(168)] = 4314,
  [SMALL_STATE(169)] = 4325,
  [SMALL_STATE(170)] = 4336,
  [SMALL_STATE(171)] = 4347,
  [SMALL_STATE(172)] = 4356,
  [SMALL_STATE(173)] = 4365,
  [SMALL_STATE(174)] = 4376,
  [SMALL_STATE(175)] = 4385,
  [SMALL_STATE(176)] = 4394,
  [SMALL_STATE(177)] = 4405,
  [SMALL_STATE(178)] = 4416,
  [SMALL_STATE(179)] = 4424,
  [SMALL_STATE(180)] = 4432,
  [SMALL_STATE(181)] = 4440,
  [SMALL_STATE(182)] = 4448,
  [SMALL_STATE(183)] = 4456,
  [SMALL_STATE(184)] = 4464,
  [SMALL_STATE(185)] = 4472,
  [SMALL_STATE(186)] = 4480,
  [SMALL_STATE(187)] = 4488,
  [SMALL_STATE(188)] = 4496,
  [SMALL_STATE(189)] = 4504,
  [SMALL_STATE(190)] = 4512,
  [SMALL_STATE(191)] = 4520,
  [SMALL_STATE(192)] = 4528,
  [SMALL_STATE(193)] = 4536,
  [SMALL_STATE(194)] = 4544,
  [SMALL_STATE(195)] = 4552,
  [SMALL_STATE(196)] = 4560,
  [SMALL_STATE(197)] = 4568,
  [SMALL_STATE(198)] = 4576,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(189),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(197),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(196),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(195),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(194),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(112),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 8),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 8),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 8),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 8),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 8),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [161] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(38),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(55),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(198),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(177),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_expr, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_expr, 4),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_expr_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_expr_repeat1, 2), SHIFT_REPEAT(108),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 6),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(133),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 10),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equivalence_type_decl, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_expr, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 6),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_preprocessor_directive, 2, .production_id = 1),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type_expr, 3),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 8),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 5),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(185),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(11),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(182),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(46),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(8),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(165),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(170),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 7),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(148),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 9),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [469] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_qualifier, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
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
