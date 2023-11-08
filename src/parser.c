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
#define STATE_COUNT 247
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 144
#define ALIAS_COUNT 4
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_LT_EQ = 16,
  anon_sym_SEMI = 17,
  anon_sym_BANG = 18,
  anon_sym_LT = 19,
  anon_sym_GT = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_EQ = 22,
  anon_sym_BANG_EQ = 23,
  anon_sym_nil = 24,
  anon_sym__ = 25,
  anon_sym_LBRACK = 26,
  anon_sym_RBRACK = 27,
  anon_sym_DOLLAR = 28,
  anon_sym_DASH = 29,
  anon_sym_bnot = 30,
  anon_sym_lnot = 31,
  anon_sym_CARET = 32,
  anon_sym_STAR = 33,
  anon_sym_SLASH = 34,
  anon_sym_PERCENT = 35,
  anon_sym_PLUS = 36,
  anon_sym_land = 37,
  anon_sym_lor = 38,
  anon_sym_lxor = 39,
  anon_sym_band = 40,
  anon_sym_bor = 41,
  anon_sym_bxor = 42,
  anon_sym_bshl = 43,
  anon_sym_bshr = 44,
  anon_sym_bshru = 45,
  anon_sym_as = 46,
  anon_sym_max = 47,
  anon_sym_mean = 48,
  anon_sym_min = 49,
  anon_sym_sum = 50,
  anon_sym_count = 51,
  anon_sym_COLON = 52,
  anon_sym_LBRACE = 53,
  anon_sym_RBRACE = 54,
  anon_sym_range = 55,
  anon_sym_LT_COLON = 56,
  anon_sym_PIPE = 57,
  anon_sym_number = 58,
  anon_sym_symbol = 59,
  anon_sym_unsigned = 60,
  anon_sym_float = 61,
  anon_sym_DOTpragma = 62,
  anon_sym_true = 63,
  anon_sym_false = 64,
  sym_string_literal = 65,
  sym_line_comment = 66,
  sym_block_comment = 67,
  sym_identifier = 68,
  sym_hex = 69,
  sym_binary = 70,
  sym_decimal = 71,
  sym_float = 72,
  sym_decl_kw = 73,
  sym_input_kw = 74,
  sym_output_kw = 75,
  sym_type_kw = 76,
  sym_include_kw = 77,
  sym_printsize_kw = 78,
  sym_limitsize_kw = 79,
  sym_plan_kw = 80,
  sym_source_file = 81,
  sym__element = 82,
  sym_preprocessor_directive = 83,
  sym_include_preprocessor_directive = 84,
  sym_relation_decl = 85,
  sym_relation_qualifier = 86,
  sym_choice_domain = 87,
  sym_choice_domain_attribute = 88,
  sym_choice_domain_tuple_attribute = 89,
  sym_rule = 90,
  sym_rule_head = 91,
  sym_subsumption_head = 92,
  sym_disjunction = 93,
  sym_conjunction = 94,
  sym_constraint = 95,
  sym_binary_constraint = 96,
  sym_query_plan = 97,
  sym_directive = 98,
  sym__directive_qualifier = 99,
  sym_directive_attribute_assignment = 100,
  sym_directive_value = 101,
  sym_include_directive = 102,
  sym_qualified_name = 103,
  sym_argument = 104,
  sym_constant = 105,
  sym_variable = 106,
  sym_argument_list = 107,
  sym_branch_init = 108,
  sym_unary_operation = 109,
  sym_binary_operation = 110,
  sym_type_conversion = 111,
  sym_aggregator = 112,
  sym_range_expression = 113,
  sym_attribute = 114,
  sym_fact = 115,
  sym_type_decl = 116,
  sym_subtype_decl = 117,
  sym_eq_type_decl = 118,
  sym_union_type = 119,
  sym_type_name = 120,
  sym_record_type = 121,
  sym_abstract_data_type = 122,
  sym_adt_branch = 123,
  sym_primitive_type = 124,
  sym_pragma = 125,
  sym_atom = 126,
  sym_boolean_literal = 127,
  sym__number = 128,
  aux_sym_source_file_repeat1 = 129,
  aux_sym_relation_decl_repeat1 = 130,
  aux_sym_relation_decl_repeat2 = 131,
  aux_sym_relation_decl_repeat3 = 132,
  aux_sym_choice_domain_repeat1 = 133,
  aux_sym_rule_head_repeat1 = 134,
  aux_sym_disjunction_repeat1 = 135,
  aux_sym_conjunction_repeat1 = 136,
  aux_sym_conjunction_repeat2 = 137,
  aux_sym_directive_repeat1 = 138,
  aux_sym_directive_repeat2 = 139,
  aux_sym_qualified_name_repeat1 = 140,
  aux_sym_argument_list_repeat1 = 141,
  aux_sym_union_type_repeat1 = 142,
  aux_sym_abstract_data_type_repeat1 = 143,
  alias_sym_attribute_name = 144,
  alias_sym_choice_domain_single_attribute = 145,
  alias_sym_path_spec = 146,
  alias_sym_user_defined_type_name = 147,
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
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_nil] = "nil",
  [anon_sym__] = "_",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOLLAR] = "$",
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
  [anon_sym_max] = "max",
  [anon_sym_mean] = "mean",
  [anon_sym_min] = "min",
  [anon_sym_sum] = "sum",
  [anon_sym_count] = "count",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_range] = "range",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_PIPE] = "|",
  [anon_sym_number] = "number",
  [anon_sym_symbol] = "symbol",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_float] = "float",
  [anon_sym_DOTpragma] = ".pragma",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_string_literal] = "string_literal",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_identifier] = "identifier",
  [sym_hex] = "hex",
  [sym_binary] = "binary",
  [sym_decimal] = "decimal",
  [sym_float] = "float",
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
  [sym_rule_head] = "rule_head",
  [sym_subsumption_head] = "subsumption_head",
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
  [sym_branch_init] = "branch_init",
  [sym_unary_operation] = "unary_operation",
  [sym_binary_operation] = "binary_operation",
  [sym_type_conversion] = "type_conversion",
  [sym_aggregator] = "aggregator",
  [sym_range_expression] = "range_expression",
  [sym_attribute] = "attribute",
  [sym_fact] = "fact",
  [sym_type_decl] = "type_decl",
  [sym_subtype_decl] = "subtype_decl",
  [sym_eq_type_decl] = "eq_type_decl",
  [sym_union_type] = "union_type",
  [sym_type_name] = "type_name",
  [sym_record_type] = "record_type",
  [sym_abstract_data_type] = "abstract_data_type",
  [sym_adt_branch] = "adt_branch",
  [sym_primitive_type] = "primitive_type",
  [sym_pragma] = "pragma",
  [sym_atom] = "atom",
  [sym_boolean_literal] = "boolean_literal",
  [sym__number] = "_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_relation_decl_repeat1] = "relation_decl_repeat1",
  [aux_sym_relation_decl_repeat2] = "relation_decl_repeat2",
  [aux_sym_relation_decl_repeat3] = "relation_decl_repeat3",
  [aux_sym_choice_domain_repeat1] = "choice_domain_repeat1",
  [aux_sym_rule_head_repeat1] = "rule_head_repeat1",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_directive_repeat2] = "directive_repeat2",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_union_type_repeat1] = "union_type_repeat1",
  [aux_sym_abstract_data_type_repeat1] = "abstract_data_type_repeat1",
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
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
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
  [anon_sym_max] = anon_sym_max,
  [anon_sym_mean] = anon_sym_mean,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_DOTpragma] = anon_sym_DOTpragma,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_string_literal] = sym_string_literal,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_identifier] = sym_identifier,
  [sym_hex] = sym_hex,
  [sym_binary] = sym_binary,
  [sym_decimal] = sym_decimal,
  [sym_float] = sym_float,
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
  [sym_rule_head] = sym_rule_head,
  [sym_subsumption_head] = sym_subsumption_head,
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
  [sym_branch_init] = sym_branch_init,
  [sym_unary_operation] = sym_unary_operation,
  [sym_binary_operation] = sym_binary_operation,
  [sym_type_conversion] = sym_type_conversion,
  [sym_aggregator] = sym_aggregator,
  [sym_range_expression] = sym_range_expression,
  [sym_attribute] = sym_attribute,
  [sym_fact] = sym_fact,
  [sym_type_decl] = sym_type_decl,
  [sym_subtype_decl] = sym_subtype_decl,
  [sym_eq_type_decl] = sym_eq_type_decl,
  [sym_union_type] = sym_union_type,
  [sym_type_name] = sym_type_name,
  [sym_record_type] = sym_record_type,
  [sym_abstract_data_type] = sym_abstract_data_type,
  [sym_adt_branch] = sym_adt_branch,
  [sym_primitive_type] = sym_primitive_type,
  [sym_pragma] = sym_pragma,
  [sym_atom] = sym_atom,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym__number] = sym__number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_relation_decl_repeat1] = aux_sym_relation_decl_repeat1,
  [aux_sym_relation_decl_repeat2] = aux_sym_relation_decl_repeat2,
  [aux_sym_relation_decl_repeat3] = aux_sym_relation_decl_repeat3,
  [aux_sym_choice_domain_repeat1] = aux_sym_choice_domain_repeat1,
  [aux_sym_rule_head_repeat1] = aux_sym_rule_head_repeat1,
  [aux_sym_disjunction_repeat1] = aux_sym_disjunction_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_directive_repeat2] = aux_sym_directive_repeat2,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_union_type_repeat1] = aux_sym_union_type_repeat1,
  [aux_sym_abstract_data_type_repeat1] = aux_sym_abstract_data_type_repeat1,
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
  [anon_sym_LT_EQ] = {
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
  [anon_sym_DOLLAR] = {
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
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_range] = {
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
  [anon_sym_DOTpragma] = {
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
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
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
  [sym_rule_head] = {
    .visible = true,
    .named = true,
  },
  [sym_subsumption_head] = {
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
  [sym_branch_init] = {
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
  [sym_aggregator] = {
    .visible = true,
    .named = true,
  },
  [sym_range_expression] = {
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
  [sym_eq_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym_record_type] = {
    .visible = true,
    .named = true,
  },
  [sym_abstract_data_type] = {
    .visible = true,
    .named = true,
  },
  [sym_adt_branch] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
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
  [sym__number] = {
    .visible = false,
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
  [aux_sym_rule_head_repeat1] = {
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
  [aux_sym_union_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abstract_data_type_repeat1] = {
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
  field_args = 1,
  field_body = 2,
  field_directive_attribute = 3,
  field_directive_value = 4,
  field_head = 5,
  field_name = 6,
  field_range_from = 7,
  field_range_step = 8,
  field_range_to = 9,
  field_relation_name = 10,
  field_type_ref = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
  [field_directive_attribute] = "directive_attribute",
  [field_directive_value] = "directive_value",
  [field_head] = "head",
  [field_name] = "name",
  [field_range_from] = "range_from",
  [field_range_step] = "range_step",
  [field_range_to] = "range_to",
  [field_relation_name] = "relation_name",
  [field_type_ref] = "type_ref",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 3},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 2},
  [13] = {.index = 14, .length = 2},
  [14] = {.index = 16, .length = 3},
  [15] = {.index = 19, .length = 2},
  [16] = {.index = 21, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type_ref, 1},
  [1] =
    {field_body, 2},
    {field_head, 0},
  [3] =
    {field_args, 2},
    {field_name, 0},
  [5] =
    {field_relation_name, 1},
  [6] =
    {field_args, 2},
    {field_args, 3},
    {field_name, 0},
  [9] =
    {field_relation_name, 1},
    {field_relation_name, 2},
  [11] =
    {field_name, 1},
  [12] =
    {field_directive_attribute, 0},
    {field_directive_value, 2},
  [14] =
    {field_args, 3},
    {field_name, 1},
  [16] =
    {field_args, 3},
    {field_args, 4},
    {field_name, 1},
  [19] =
    {field_range_from, 2},
    {field_range_to, 4},
  [21] =
    {field_range_from, 2},
    {field_range_step, 6},
    {field_range_to, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_path_spec,
  },
  [3] = {
    [0] = alias_sym_user_defined_type_name,
  },
  [8] = {
    [0] = alias_sym_attribute_name,
  },
  [12] = {
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
  [140] = 76,
  [141] = 75,
  [142] = 79,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 81,
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
  [167] = 108,
  [168] = 168,
  [169] = 104,
  [170] = 107,
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
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 230,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(144);
      if (lookahead == '!') ADVANCE(172);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '$') ADVANCE(185);
      if (lookahead == '%') ADVANCE(194);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == '0') ADVANCE(340);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(173);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '^') ADVANCE(191);
      if (lookahead == '_') ADVANCE(181);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'c') ADVANCE(63);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(131);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(95);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '|') ADVANCE(224);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(171);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(185);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(340);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '_') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'b') ADVANCE(299);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(194);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(174);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '^') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(194);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == '*') ADVANCE(192);
      if (lookahead == '+') ADVANCE(195);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '.') ADVANCE(167);
      if (lookahead == '/') ADVANCE(193);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == ';') ADVANCE(170);
      if (lookahead == '<') ADVANCE(174);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '>') ADVANCE(175);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '^') ADVANCE(191);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(185);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == '-') ADVANCE(186);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(340);
      if (lookahead == ':') ADVANCE(217);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == ']') ADVANCE(184);
      if (lookahead == '_') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(323);
      if (lookahead == 'b') ADVANCE(299);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'm') ADVANCE(244);
      if (lookahead == 'n') ADVANCE(278);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead == 's') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(243);
      if (lookahead == 't') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(238);
      if (lookahead == '\\') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(239);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(183);
      if (lookahead == 'f') ADVANCE(291);
      if (lookahead == 'n') ADVANCE(332);
      if (lookahead == 's') ADVANCE(336);
      if (lookahead == 'u') ADVANCE(300);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(223);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'r') ADVANCE(64);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(108);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'o') ADVANCE(114);
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(56);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(157);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(229);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(236);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(70);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(46);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == 'h') ADVANCE(105);
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(202);
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(126);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(213);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(211);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 112:
      if (lookahead == 'q') ADVANCE(121);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(225);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(205);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(85);
      if (lookahead == 'y') ADVANCE(86);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 135:
      if (lookahead == 'v') ADVANCE(55);
      END_STATE();
    case 136:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 137:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 141:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 142:
      if (eof) ADVANCE(144);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '(') ADVANCE(147);
      if (lookahead == ')') ADVANCE(148);
      if (lookahead == ',') ADVANCE(146);
      if (lookahead == '.') ADVANCE(168);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(177);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '|') ADVANCE(224);
      if (lookahead == '}') ADVANCE(220);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(142)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 143:
      if (eof) ADVANCE(144);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(317);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead == 'e') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(143)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(178);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(169);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(239);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(166);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(239);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead == 'e') ADVANCE(248);
      if (lookahead == 'i') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 't') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'b') ADVANCE(137);
      if (lookahead == 'x') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 142, .external_lex_state = 2},
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
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 142, .external_lex_state = 2},
  [54] = {.lex_state = 142, .external_lex_state = 2},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 143, .external_lex_state = 2},
  [58] = {.lex_state = 143, .external_lex_state = 2},
  [59] = {.lex_state = 143, .external_lex_state = 2},
  [60] = {.lex_state = 143, .external_lex_state = 2},
  [61] = {.lex_state = 143, .external_lex_state = 2},
  [62] = {.lex_state = 143, .external_lex_state = 2},
  [63] = {.lex_state = 143, .external_lex_state = 2},
  [64] = {.lex_state = 143, .external_lex_state = 2},
  [65] = {.lex_state = 143, .external_lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 143, .external_lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 142, .external_lex_state = 2},
  [76] = {.lex_state = 142, .external_lex_state = 2},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 142, .external_lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 142, .external_lex_state = 2},
  [82] = {.lex_state = 142, .external_lex_state = 2},
  [83] = {.lex_state = 142, .external_lex_state = 2},
  [84] = {.lex_state = 142, .external_lex_state = 2},
  [85] = {.lex_state = 142, .external_lex_state = 2},
  [86] = {.lex_state = 142, .external_lex_state = 2},
  [87] = {.lex_state = 142, .external_lex_state = 2},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 142, .external_lex_state = 2},
  [90] = {.lex_state = 142, .external_lex_state = 2},
  [91] = {.lex_state = 142, .external_lex_state = 2},
  [92] = {.lex_state = 142, .external_lex_state = 2},
  [93] = {.lex_state = 142, .external_lex_state = 1},
  [94] = {.lex_state = 142, .external_lex_state = 2},
  [95] = {.lex_state = 142, .external_lex_state = 2},
  [96] = {.lex_state = 142, .external_lex_state = 2},
  [97] = {.lex_state = 142, .external_lex_state = 2},
  [98] = {.lex_state = 142, .external_lex_state = 2},
  [99] = {.lex_state = 142, .external_lex_state = 2},
  [100] = {.lex_state = 142, .external_lex_state = 2},
  [101] = {.lex_state = 142, .external_lex_state = 2},
  [102] = {.lex_state = 142, .external_lex_state = 2},
  [103] = {.lex_state = 142, .external_lex_state = 2},
  [104] = {.lex_state = 142, .external_lex_state = 2},
  [105] = {.lex_state = 142, .external_lex_state = 2},
  [106] = {.lex_state = 142, .external_lex_state = 2},
  [107] = {.lex_state = 142, .external_lex_state = 2},
  [108] = {.lex_state = 142, .external_lex_state = 2},
  [109] = {.lex_state = 142, .external_lex_state = 2},
  [110] = {.lex_state = 142, .external_lex_state = 2},
  [111] = {.lex_state = 142, .external_lex_state = 2},
  [112] = {.lex_state = 142, .external_lex_state = 2},
  [113] = {.lex_state = 142, .external_lex_state = 2},
  [114] = {.lex_state = 142, .external_lex_state = 2},
  [115] = {.lex_state = 142, .external_lex_state = 2},
  [116] = {.lex_state = 142, .external_lex_state = 2},
  [117] = {.lex_state = 142, .external_lex_state = 2},
  [118] = {.lex_state = 142, .external_lex_state = 2},
  [119] = {.lex_state = 142, .external_lex_state = 2},
  [120] = {.lex_state = 142, .external_lex_state = 2},
  [121] = {.lex_state = 142, .external_lex_state = 2},
  [122] = {.lex_state = 142, .external_lex_state = 2},
  [123] = {.lex_state = 142, .external_lex_state = 2},
  [124] = {.lex_state = 142, .external_lex_state = 2},
  [125] = {.lex_state = 142, .external_lex_state = 2},
  [126] = {.lex_state = 142, .external_lex_state = 2},
  [127] = {.lex_state = 142, .external_lex_state = 2},
  [128] = {.lex_state = 142, .external_lex_state = 2},
  [129] = {.lex_state = 142, .external_lex_state = 2},
  [130] = {.lex_state = 142, .external_lex_state = 2},
  [131] = {.lex_state = 142, .external_lex_state = 2},
  [132] = {.lex_state = 142, .external_lex_state = 2},
  [133] = {.lex_state = 142, .external_lex_state = 2},
  [134] = {.lex_state = 142, .external_lex_state = 2},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 12},
  [139] = {.lex_state = 12},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 142},
  [166] = {.lex_state = 142},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 142},
  [172] = {.lex_state = 142},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 142},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 142},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 142},
  [186] = {.lex_state = 142},
  [187] = {.lex_state = 142},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 142},
  [199] = {.lex_state = 142},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 142},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 142},
  [207] = {.lex_state = 142},
  [208] = {.lex_state = 142},
  [209] = {.lex_state = 142},
  [210] = {.lex_state = 142},
  [211] = {.lex_state = 142},
  [212] = {.lex_state = 142},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 142},
  [216] = {.lex_state = 142},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 142},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 142},
  [225] = {.lex_state = 142},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 142},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 142},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 142},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 142},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 142},
  [246] = {.lex_state = 142},
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
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
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
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_mean] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_DOTpragma] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_hex] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [sym_decimal] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
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
    [sym_source_file] = STATE(238),
    [sym__element] = STATE(53),
    [sym_preprocessor_directive] = STATE(53),
    [sym_include_preprocessor_directive] = STATE(123),
    [sym_relation_decl] = STATE(53),
    [sym_rule] = STATE(53),
    [sym_rule_head] = STATE(237),
    [sym_subsumption_head] = STATE(237),
    [sym_directive] = STATE(53),
    [sym__directive_qualifier] = STATE(209),
    [sym_include_directive] = STATE(53),
    [sym_qualified_name] = STATE(235),
    [sym_fact] = STATE(53),
    [sym_type_decl] = STATE(53),
    [sym_pragma] = STATE(53),
    [sym_atom] = STATE(160),
    [aux_sym_source_file_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_DOTpragma] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(11),
    [sym_decl_kw] = ACTIONS(13),
    [sym_input_kw] = ACTIONS(15),
    [sym_output_kw] = ACTIONS(15),
    [sym_type_kw] = ACTIONS(17),
    [sym_include_kw] = ACTIONS(19),
    [sym_printsize_kw] = ACTIONS(15),
    [sym_limitsize_kw] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 26,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(50), 1,
      sym__number,
    STATE(66), 1,
      sym_argument,
    STATE(164), 1,
      sym_conjunction,
    STATE(220), 1,
      sym_disjunction,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [98] = 26,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(50), 1,
      sym__number,
    STATE(66), 1,
      sym_argument,
    STATE(164), 1,
      sym_conjunction,
    STATE(219), 1,
      sym_disjunction,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [196] = 26,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(50), 1,
      sym__number,
    STATE(66), 1,
      sym_argument,
    STATE(164), 1,
      sym_conjunction,
    STATE(235), 1,
      sym_qualified_name,
    STATE(244), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [294] = 26,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(50), 1,
      sym__number,
    STATE(66), 1,
      sym_argument,
    STATE(164), 1,
      sym_conjunction,
    STATE(234), 1,
      sym_disjunction,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [392] = 26,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(50), 1,
      sym__number,
    STATE(66), 1,
      sym_argument,
    STATE(164), 1,
      sym_conjunction,
    STATE(231), 1,
      sym_disjunction,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [490] = 26,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(50), 1,
      sym__number,
    STATE(66), 1,
      sym_argument,
    STATE(164), 1,
      sym_conjunction,
    STATE(235), 1,
      sym_qualified_name,
    STATE(236), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [588] = 26,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(50), 1,
      sym__number,
    STATE(66), 1,
      sym_argument,
    STATE(164), 1,
      sym_conjunction,
    STATE(223), 1,
      sym_disjunction,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [686] = 25,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_BANG,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(50), 1,
      sym__number,
    STATE(66), 1,
      sym_argument,
    STATE(177), 1,
      sym_conjunction,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(151), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [781] = 24,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_BANG,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(50), 1,
      sym__number,
    STATE(66), 1,
      sym_argument,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [873] = 24,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_BANG,
    STATE(50), 1,
      sym__number,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    STATE(66), 1,
      sym_argument,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(157), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [965] = 24,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      sym_decimal,
    ACTIONS(59), 1,
      anon_sym_BANG,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym__number,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    STATE(66), 1,
      sym_argument,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(147), 2,
      sym_constraint,
      sym_atom,
    STATE(162), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1057] = 17,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym__number,
    STATE(72), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1126] = 17,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym__number,
    STATE(78), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1195] = 17,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    ACTIONS(67), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      sym__number,
    STATE(71), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1264] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(50), 1,
      sym__number,
    STATE(69), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1330] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(50), 1,
      sym__number,
    STATE(73), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1396] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(50), 1,
      sym__number,
    STATE(80), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1462] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(48), 1,
      sym_argument,
    STATE(50), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1528] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(50), 1,
      sym__number,
    STATE(77), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1594] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(44), 1,
      sym_argument,
    STATE(50), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1660] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(46), 1,
      sym_argument,
    STATE(50), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1726] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(43), 1,
      sym_argument,
    STATE(50), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1792] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(50), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1858] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(50), 1,
      sym__number,
    STATE(68), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1924] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(32), 1,
      sym_argument,
    STATE(50), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1990] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(50), 1,
      sym__number,
    STATE(74), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2056] = 16,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_as,
    ACTIONS(41), 1,
      anon_sym_count,
    ACTIONS(43), 1,
      anon_sym_range,
    ACTIONS(51), 1,
      sym_decimal,
    STATE(31), 1,
      sym_argument,
    STATE(50), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(35), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(47), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(40), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2122] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(71), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(69), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_RBRACE,
  [2160] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(75), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(73), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_RBRACE,
  [2198] = 6,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(77), 21,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2241] = 8,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(77), 16,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2288] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(93), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(91), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2325] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(95), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2362] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(99), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2399] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(105), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(103), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2436] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(109), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(107), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2473] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(113), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(111), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2510] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(115), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2547] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(121), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(119), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2584] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(123), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2621] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(129), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(127), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2658] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(77), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2695] = 4,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(77), 23,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2734] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(133), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(131), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2771] = 7,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(79), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(77), 19,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2816] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(137), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(135), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2853] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(139), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2890] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(143), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2927] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(147), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2964] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(153), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(151), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [3001] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(155), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [3038] = 15,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_DOTpragma,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_decl_kw,
    ACTIONS(17), 1,
      sym_type_kw,
    ACTIONS(19), 1,
      sym_include_kw,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_include_preprocessor_directive,
    STATE(160), 1,
      sym_atom,
    STATE(209), 1,
      sym__directive_qualifier,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(237), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(15), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(54), 10,
      sym__element,
      sym_preprocessor_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      sym_pragma,
      aux_sym_source_file_repeat1,
  [3098] = 15,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    ACTIONS(163), 1,
      anon_sym_POUNDinclude,
    ACTIONS(166), 1,
      anon_sym_DOTpragma,
    ACTIONS(169), 1,
      sym_identifier,
    ACTIONS(172), 1,
      sym_decl_kw,
    ACTIONS(178), 1,
      sym_type_kw,
    ACTIONS(181), 1,
      sym_include_kw,
    STATE(123), 1,
      sym_include_preprocessor_directive,
    STATE(160), 1,
      sym_atom,
    STATE(209), 1,
      sym__directive_qualifier,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(237), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(175), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(54), 10,
      sym__element,
      sym_preprocessor_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      sym_pragma,
      aux_sym_source_file_repeat1,
  [3158] = 5,
    ACTIONS(186), 1,
      anon_sym_BANG,
    STATE(55), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 8,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(189), 15,
      anon_sym_nil,
      anon_sym__,
      anon_sym_bnot,
      anon_sym_lnot,
      anon_sym_as,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
      anon_sym_count,
      anon_sym_range,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_decimal,
  [3196] = 6,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(125), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(123), 17,
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
  [3235] = 7,
    ACTIONS(199), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(115), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(197), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(195), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3275] = 7,
    ACTIONS(199), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(130), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(62), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(197), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(203), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3315] = 7,
    ACTIONS(199), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(118), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(64), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(197), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(207), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3355] = 7,
    ACTIONS(199), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(122), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(197), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(211), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3395] = 7,
    ACTIONS(199), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(122), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(197), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(211), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3435] = 7,
    ACTIONS(199), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(113), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(197), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
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
      anon_sym_DOTpragma,
  [3475] = 7,
    ACTIONS(199), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(126), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(197), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
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
      anon_sym_DOTpragma,
  [3515] = 7,
    ACTIONS(199), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(205), 1,
      sym_identifier,
    STATE(130), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(197), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(203), 10,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3555] = 5,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(225), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(223), 11,
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
      anon_sym_DOTpragma,
  [3590] = 10,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(232), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(230), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3634] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(240), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
    ACTIONS(238), 11,
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
      anon_sym_DOTpragma,
  [3663] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
    ACTIONS(242), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3704] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(244), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3743] = 11,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3786] = 11,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3829] = 11,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(252), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3872] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3909] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3946] = 4,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 14,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [3973] = 4,
    ACTIONS(260), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_qualified_name_repeat1,
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
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [4000] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4037] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4074] = 4,
    ACTIONS(268), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 14,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4101] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(236), 1,
      anon_sym_bshr,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(87), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(89), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(234), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4138] = 3,
    ACTIONS(273), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 14,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4162] = 5,
    ACTIONS(260), 1,
      anon_sym_DOT,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4190] = 5,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(277), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4217] = 4,
    ACTIONS(285), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(283), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4242] = 5,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4269] = 4,
    ACTIONS(294), 1,
      anon_sym_PIPE,
    STATE(87), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(292), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4293] = 4,
    ACTIONS(298), 1,
      anon_sym_PIPE,
    STATE(87), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(296), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4317] = 9,
    ACTIONS(301), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(89), 1,
      sym_adt_branch,
    STATE(101), 1,
      sym_type_name,
    STATE(104), 1,
      sym_primitive_type,
    STATE(107), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(119), 3,
      sym_union_type,
      sym_record_type,
      sym_abstract_data_type,
    ACTIONS(303), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4351] = 4,
    ACTIONS(294), 1,
      anon_sym_PIPE,
    STATE(86), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4375] = 4,
    ACTIONS(311), 1,
      anon_sym_PIPE,
    STATE(90), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4399] = 4,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4423] = 4,
    ACTIONS(320), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4447] = 4,
    ACTIONS(325), 1,
      sym_plan_kw,
    STATE(129), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(323), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4471] = 4,
    ACTIONS(329), 1,
      anon_sym_PIPE,
    STATE(90), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4495] = 4,
    ACTIONS(329), 1,
      anon_sym_PIPE,
    STATE(94), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4519] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(283), 13,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4539] = 4,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4563] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4582] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(337), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4601] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4620] = 3,
    ACTIONS(343), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(341), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4641] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(318), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4660] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(345), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4679] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4698] = 3,
    ACTIONS(351), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(349), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4719] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4738] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(353), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4757] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(355), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4776] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(357), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4795] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(359), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4814] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(361), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4833] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(296), 12,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4852] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(363), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4870] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(365), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4888] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(211), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4906] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(367), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4924] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4942] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4960] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(341), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4978] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4996] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5014] = 2,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [5032] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(375), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5050] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(377), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5068] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5086] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(381), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5104] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5122] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(385), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5140] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5158] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5176] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(389), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5194] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(391), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5212] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5230] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(395), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5248] = 6,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(169), 1,
      sym_primitive_type,
    STATE(170), 1,
      sym_qualified_name,
    STATE(174), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(397), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5271] = 6,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(169), 1,
      sym_primitive_type,
    STATE(170), 1,
      sym_qualified_name,
    STATE(227), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(397), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5294] = 6,
    ACTIONS(401), 1,
      sym_identifier,
    STATE(104), 1,
      sym_primitive_type,
    STATE(107), 1,
      sym_qualified_name,
    STATE(132), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5317] = 6,
    ACTIONS(401), 1,
      sym_identifier,
    STATE(104), 1,
      sym_primitive_type,
    STATE(106), 1,
      sym_type_name,
    STATE(107), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5340] = 6,
    ACTIONS(401), 1,
      sym_identifier,
    STATE(95), 1,
      sym_type_name,
    STATE(104), 1,
      sym_primitive_type,
    STATE(107), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5363] = 4,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5381] = 4,
    ACTIONS(193), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5399] = 4,
    ACTIONS(403), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5417] = 4,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(408), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5434] = 4,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5451] = 4,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(408), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5468] = 6,
    ACTIONS(412), 1,
      sym_string_literal,
    ACTIONS(414), 1,
      sym_identifier,
    STATE(213), 1,
      sym_boolean_literal,
    STATE(214), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(45), 2,
      anon_sym_true,
      anon_sym_false,
  [5489] = 4,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5506] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5519] = 4,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(410), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5536] = 4,
    ACTIONS(418), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(421), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5553] = 4,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5570] = 4,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5587] = 4,
    ACTIONS(406), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5604] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(427), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5616] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(429), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5628] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(421), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5640] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(431), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5652] = 4,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(433), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5668] = 4,
    ACTIONS(439), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(437), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5684] = 6,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_COLON_DASH,
    ACTIONS(446), 1,
      anon_sym_DOT,
    ACTIONS(448), 1,
      anon_sym_LT_EQ,
    STATE(187), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5704] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(453), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5720] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5732] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5744] = 4,
    ACTIONS(435), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(459), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5760] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(461), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_atom,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5777] = 5,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(102), 1,
      sym_choice_domain_attribute,
    STATE(109), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5794] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(355), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5805] = 4,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5820] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5831] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(353), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5842] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_atom,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5859] = 5,
    ACTIONS(463), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(97), 1,
      sym_choice_domain_attribute,
    STATE(109), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5876] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(453), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5887] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(474), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5898] = 4,
    ACTIONS(476), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5913] = 4,
    ACTIONS(479), 1,
      anon_sym_EQ,
    ACTIONS(481), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(125), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [5928] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(437), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5939] = 4,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(205), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5953] = 4,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5967] = 4,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5981] = 4,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5995] = 4,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6009] = 4,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(497), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6023] = 4,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6037] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(212), 1,
      sym_atom,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6051] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(228), 1,
      sym_atom,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6065] = 4,
    ACTIONS(442), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_COLON_DASH,
    STATE(198), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6079] = 4,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(505), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6093] = 4,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6107] = 4,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6121] = 4,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6135] = 4,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6149] = 4,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6163] = 4,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6177] = 4,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6191] = 4,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6205] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(470), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6215] = 4,
    ACTIONS(526), 1,
      anon_sym_COMMA,
    ACTIONS(529), 1,
      anon_sym_COLON_DASH,
    STATE(198), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6229] = 4,
    ACTIONS(485), 1,
      sym_identifier,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6243] = 4,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6257] = 4,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    ACTIONS(537), 1,
      sym_identifier,
    STATE(192), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6271] = 4,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6285] = 4,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6299] = 4,
    ACTIONS(246), 1,
      anon_sym_COMMA,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6313] = 4,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6327] = 3,
    ACTIONS(537), 1,
      sym_identifier,
    STATE(194), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6338] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(226), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6349] = 3,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(112), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6360] = 3,
    ACTIONS(547), 1,
      sym_identifier,
    STATE(85), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6371] = 3,
    ACTIONS(547), 1,
      sym_identifier,
    STATE(96), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6382] = 3,
    ACTIONS(537), 1,
      sym_identifier,
    STATE(173), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6393] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [6402] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6411] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(551), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6420] = 3,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(217), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6431] = 3,
    ACTIONS(537), 1,
      sym_identifier,
    STATE(191), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6442] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(510), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6451] = 3,
    ACTIONS(537), 1,
      sym_identifier,
    STATE(196), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6462] = 2,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6470] = 2,
    ACTIONS(555), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6478] = 2,
    ACTIONS(557), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6486] = 2,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6494] = 2,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6502] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6510] = 2,
    ACTIONS(565), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6518] = 2,
    ACTIONS(567), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6526] = 2,
    ACTIONS(569), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6534] = 2,
    ACTIONS(571), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6542] = 2,
    ACTIONS(573), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6550] = 2,
    ACTIONS(575), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6558] = 2,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6566] = 2,
    ACTIONS(579), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6574] = 2,
    ACTIONS(581), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6582] = 2,
    ACTIONS(583), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6590] = 2,
    ACTIONS(585), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6598] = 2,
    ACTIONS(587), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6606] = 2,
    ACTIONS(589), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6614] = 2,
    ACTIONS(591), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6622] = 2,
    ACTIONS(593), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6630] = 2,
    ACTIONS(595), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6638] = 2,
    ACTIONS(597), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6646] = 2,
    ACTIONS(599), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6654] = 2,
    ACTIONS(275), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6662] = 2,
    ACTIONS(601), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6670] = 2,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6678] = 2,
    ACTIONS(605), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 98,
  [SMALL_STATE(4)] = 196,
  [SMALL_STATE(5)] = 294,
  [SMALL_STATE(6)] = 392,
  [SMALL_STATE(7)] = 490,
  [SMALL_STATE(8)] = 588,
  [SMALL_STATE(9)] = 686,
  [SMALL_STATE(10)] = 781,
  [SMALL_STATE(11)] = 873,
  [SMALL_STATE(12)] = 965,
  [SMALL_STATE(13)] = 1057,
  [SMALL_STATE(14)] = 1126,
  [SMALL_STATE(15)] = 1195,
  [SMALL_STATE(16)] = 1264,
  [SMALL_STATE(17)] = 1330,
  [SMALL_STATE(18)] = 1396,
  [SMALL_STATE(19)] = 1462,
  [SMALL_STATE(20)] = 1528,
  [SMALL_STATE(21)] = 1594,
  [SMALL_STATE(22)] = 1660,
  [SMALL_STATE(23)] = 1726,
  [SMALL_STATE(24)] = 1792,
  [SMALL_STATE(25)] = 1858,
  [SMALL_STATE(26)] = 1924,
  [SMALL_STATE(27)] = 1990,
  [SMALL_STATE(28)] = 2056,
  [SMALL_STATE(29)] = 2122,
  [SMALL_STATE(30)] = 2160,
  [SMALL_STATE(31)] = 2198,
  [SMALL_STATE(32)] = 2241,
  [SMALL_STATE(33)] = 2288,
  [SMALL_STATE(34)] = 2325,
  [SMALL_STATE(35)] = 2362,
  [SMALL_STATE(36)] = 2399,
  [SMALL_STATE(37)] = 2436,
  [SMALL_STATE(38)] = 2473,
  [SMALL_STATE(39)] = 2510,
  [SMALL_STATE(40)] = 2547,
  [SMALL_STATE(41)] = 2584,
  [SMALL_STATE(42)] = 2621,
  [SMALL_STATE(43)] = 2658,
  [SMALL_STATE(44)] = 2695,
  [SMALL_STATE(45)] = 2734,
  [SMALL_STATE(46)] = 2771,
  [SMALL_STATE(47)] = 2816,
  [SMALL_STATE(48)] = 2853,
  [SMALL_STATE(49)] = 2890,
  [SMALL_STATE(50)] = 2927,
  [SMALL_STATE(51)] = 2964,
  [SMALL_STATE(52)] = 3001,
  [SMALL_STATE(53)] = 3038,
  [SMALL_STATE(54)] = 3098,
  [SMALL_STATE(55)] = 3158,
  [SMALL_STATE(56)] = 3196,
  [SMALL_STATE(57)] = 3235,
  [SMALL_STATE(58)] = 3275,
  [SMALL_STATE(59)] = 3315,
  [SMALL_STATE(60)] = 3355,
  [SMALL_STATE(61)] = 3395,
  [SMALL_STATE(62)] = 3435,
  [SMALL_STATE(63)] = 3475,
  [SMALL_STATE(64)] = 3515,
  [SMALL_STATE(65)] = 3555,
  [SMALL_STATE(66)] = 3590,
  [SMALL_STATE(67)] = 3634,
  [SMALL_STATE(68)] = 3663,
  [SMALL_STATE(69)] = 3704,
  [SMALL_STATE(70)] = 3743,
  [SMALL_STATE(71)] = 3786,
  [SMALL_STATE(72)] = 3829,
  [SMALL_STATE(73)] = 3872,
  [SMALL_STATE(74)] = 3909,
  [SMALL_STATE(75)] = 3946,
  [SMALL_STATE(76)] = 3973,
  [SMALL_STATE(77)] = 4000,
  [SMALL_STATE(78)] = 4037,
  [SMALL_STATE(79)] = 4074,
  [SMALL_STATE(80)] = 4101,
  [SMALL_STATE(81)] = 4138,
  [SMALL_STATE(82)] = 4162,
  [SMALL_STATE(83)] = 4190,
  [SMALL_STATE(84)] = 4217,
  [SMALL_STATE(85)] = 4242,
  [SMALL_STATE(86)] = 4269,
  [SMALL_STATE(87)] = 4293,
  [SMALL_STATE(88)] = 4317,
  [SMALL_STATE(89)] = 4351,
  [SMALL_STATE(90)] = 4375,
  [SMALL_STATE(91)] = 4399,
  [SMALL_STATE(92)] = 4423,
  [SMALL_STATE(93)] = 4447,
  [SMALL_STATE(94)] = 4471,
  [SMALL_STATE(95)] = 4495,
  [SMALL_STATE(96)] = 4519,
  [SMALL_STATE(97)] = 4539,
  [SMALL_STATE(98)] = 4563,
  [SMALL_STATE(99)] = 4582,
  [SMALL_STATE(100)] = 4601,
  [SMALL_STATE(101)] = 4620,
  [SMALL_STATE(102)] = 4641,
  [SMALL_STATE(103)] = 4660,
  [SMALL_STATE(104)] = 4679,
  [SMALL_STATE(105)] = 4698,
  [SMALL_STATE(106)] = 4719,
  [SMALL_STATE(107)] = 4738,
  [SMALL_STATE(108)] = 4757,
  [SMALL_STATE(109)] = 4776,
  [SMALL_STATE(110)] = 4795,
  [SMALL_STATE(111)] = 4814,
  [SMALL_STATE(112)] = 4833,
  [SMALL_STATE(113)] = 4852,
  [SMALL_STATE(114)] = 4870,
  [SMALL_STATE(115)] = 4888,
  [SMALL_STATE(116)] = 4906,
  [SMALL_STATE(117)] = 4924,
  [SMALL_STATE(118)] = 4942,
  [SMALL_STATE(119)] = 4960,
  [SMALL_STATE(120)] = 4978,
  [SMALL_STATE(121)] = 4996,
  [SMALL_STATE(122)] = 5014,
  [SMALL_STATE(123)] = 5032,
  [SMALL_STATE(124)] = 5050,
  [SMALL_STATE(125)] = 5068,
  [SMALL_STATE(126)] = 5086,
  [SMALL_STATE(127)] = 5104,
  [SMALL_STATE(128)] = 5122,
  [SMALL_STATE(129)] = 5140,
  [SMALL_STATE(130)] = 5158,
  [SMALL_STATE(131)] = 5176,
  [SMALL_STATE(132)] = 5194,
  [SMALL_STATE(133)] = 5212,
  [SMALL_STATE(134)] = 5230,
  [SMALL_STATE(135)] = 5248,
  [SMALL_STATE(136)] = 5271,
  [SMALL_STATE(137)] = 5294,
  [SMALL_STATE(138)] = 5317,
  [SMALL_STATE(139)] = 5340,
  [SMALL_STATE(140)] = 5363,
  [SMALL_STATE(141)] = 5381,
  [SMALL_STATE(142)] = 5399,
  [SMALL_STATE(143)] = 5417,
  [SMALL_STATE(144)] = 5434,
  [SMALL_STATE(145)] = 5451,
  [SMALL_STATE(146)] = 5468,
  [SMALL_STATE(147)] = 5489,
  [SMALL_STATE(148)] = 5506,
  [SMALL_STATE(149)] = 5519,
  [SMALL_STATE(150)] = 5536,
  [SMALL_STATE(151)] = 5553,
  [SMALL_STATE(152)] = 5570,
  [SMALL_STATE(153)] = 5587,
  [SMALL_STATE(154)] = 5604,
  [SMALL_STATE(155)] = 5616,
  [SMALL_STATE(156)] = 5628,
  [SMALL_STATE(157)] = 5640,
  [SMALL_STATE(158)] = 5652,
  [SMALL_STATE(159)] = 5668,
  [SMALL_STATE(160)] = 5684,
  [SMALL_STATE(161)] = 5704,
  [SMALL_STATE(162)] = 5720,
  [SMALL_STATE(163)] = 5732,
  [SMALL_STATE(164)] = 5744,
  [SMALL_STATE(165)] = 5760,
  [SMALL_STATE(166)] = 5777,
  [SMALL_STATE(167)] = 5794,
  [SMALL_STATE(168)] = 5805,
  [SMALL_STATE(169)] = 5820,
  [SMALL_STATE(170)] = 5831,
  [SMALL_STATE(171)] = 5842,
  [SMALL_STATE(172)] = 5859,
  [SMALL_STATE(173)] = 5876,
  [SMALL_STATE(174)] = 5887,
  [SMALL_STATE(175)] = 5898,
  [SMALL_STATE(176)] = 5913,
  [SMALL_STATE(177)] = 5928,
  [SMALL_STATE(178)] = 5939,
  [SMALL_STATE(179)] = 5953,
  [SMALL_STATE(180)] = 5967,
  [SMALL_STATE(181)] = 5981,
  [SMALL_STATE(182)] = 5995,
  [SMALL_STATE(183)] = 6009,
  [SMALL_STATE(184)] = 6023,
  [SMALL_STATE(185)] = 6037,
  [SMALL_STATE(186)] = 6051,
  [SMALL_STATE(187)] = 6065,
  [SMALL_STATE(188)] = 6079,
  [SMALL_STATE(189)] = 6093,
  [SMALL_STATE(190)] = 6107,
  [SMALL_STATE(191)] = 6121,
  [SMALL_STATE(192)] = 6135,
  [SMALL_STATE(193)] = 6149,
  [SMALL_STATE(194)] = 6163,
  [SMALL_STATE(195)] = 6177,
  [SMALL_STATE(196)] = 6191,
  [SMALL_STATE(197)] = 6205,
  [SMALL_STATE(198)] = 6215,
  [SMALL_STATE(199)] = 6229,
  [SMALL_STATE(200)] = 6243,
  [SMALL_STATE(201)] = 6257,
  [SMALL_STATE(202)] = 6271,
  [SMALL_STATE(203)] = 6285,
  [SMALL_STATE(204)] = 6299,
  [SMALL_STATE(205)] = 6313,
  [SMALL_STATE(206)] = 6327,
  [SMALL_STATE(207)] = 6338,
  [SMALL_STATE(208)] = 6349,
  [SMALL_STATE(209)] = 6360,
  [SMALL_STATE(210)] = 6371,
  [SMALL_STATE(211)] = 6382,
  [SMALL_STATE(212)] = 6393,
  [SMALL_STATE(213)] = 6402,
  [SMALL_STATE(214)] = 6411,
  [SMALL_STATE(215)] = 6420,
  [SMALL_STATE(216)] = 6431,
  [SMALL_STATE(217)] = 6442,
  [SMALL_STATE(218)] = 6451,
  [SMALL_STATE(219)] = 6462,
  [SMALL_STATE(220)] = 6470,
  [SMALL_STATE(221)] = 6478,
  [SMALL_STATE(222)] = 6486,
  [SMALL_STATE(223)] = 6494,
  [SMALL_STATE(224)] = 6502,
  [SMALL_STATE(225)] = 6510,
  [SMALL_STATE(226)] = 6518,
  [SMALL_STATE(227)] = 6526,
  [SMALL_STATE(228)] = 6534,
  [SMALL_STATE(229)] = 6542,
  [SMALL_STATE(230)] = 6550,
  [SMALL_STATE(231)] = 6558,
  [SMALL_STATE(232)] = 6566,
  [SMALL_STATE(233)] = 6574,
  [SMALL_STATE(234)] = 6582,
  [SMALL_STATE(235)] = 6590,
  [SMALL_STATE(236)] = 6598,
  [SMALL_STATE(237)] = 6606,
  [SMALL_STATE(238)] = 6614,
  [SMALL_STATE(239)] = 6622,
  [SMALL_STATE(240)] = 6630,
  [SMALL_STATE(241)] = 6638,
  [SMALL_STATE(242)] = 6646,
  [SMALL_STATE(243)] = 6654,
  [SMALL_STATE(244)] = 6662,
  [SMALL_STATE(245)] = 6670,
  [SMALL_STATE(246)] = 6678,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 5),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 7),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 6, .production_id = 14),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 6, .production_id = 14),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 15),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 15),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 16),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 16),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 4, .production_id = 10),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 4, .production_id = 10),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 5, .production_id = 13),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 5, .production_id = 13),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(55),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 9),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 9),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 6),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 6),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 6),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 9),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 9),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 9),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 9),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(67),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(246),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(210),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(208),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(138),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(166),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 12),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 9),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_preprocessor_directive, 2, .production_id = 1),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(230),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(10),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(9),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(211),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [467] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(225),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 8),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(16),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(215),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2), SHIFT_REPEAT(185),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 11),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumption_head, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [591] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
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
