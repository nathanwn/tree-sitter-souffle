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
#define STATE_COUNT 236
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 134
#define ALIAS_COUNT 4
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 13

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
  anon_sym_max = 46,
  anon_sym_mean = 47,
  anon_sym_min = 48,
  anon_sym_sum = 49,
  anon_sym_count = 50,
  anon_sym_COLON = 51,
  anon_sym_LBRACE = 52,
  anon_sym_RBRACE = 53,
  anon_sym_range = 54,
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
  sym_decl_kw = 68,
  sym_input_kw = 69,
  sym_output_kw = 70,
  sym_type_kw = 71,
  sym_include_kw = 72,
  sym_printsize_kw = 73,
  sym_limitsize_kw = 74,
  sym_plan_kw = 75,
  sym_source_file = 76,
  sym__element = 77,
  sym_preprocessor_directive = 78,
  sym_include_preprocessor_directive = 79,
  sym_relation_decl = 80,
  sym_relation_qualifier = 81,
  sym_choice_domain = 82,
  sym_choice_domain_attribute = 83,
  sym_choice_domain_tuple_attribute = 84,
  sym_rule = 85,
  sym_disjunction = 86,
  sym_conjunction = 87,
  sym_constraint = 88,
  sym_binary_constraint = 89,
  sym_query_plan = 90,
  sym_directive = 91,
  sym__directive_qualifier = 92,
  sym_directive_attribute_assignment = 93,
  sym_directive_value = 94,
  sym_include_directive = 95,
  sym_qualified_name = 96,
  sym_argument = 97,
  sym_constant = 98,
  sym_variable = 99,
  sym_argument_list = 100,
  sym_unary_operation = 101,
  sym_binary_operation = 102,
  sym_type_conversion = 103,
  sym_aggregator = 104,
  sym_range_expression = 105,
  sym_attribute = 106,
  sym_fact = 107,
  sym_type_decl = 108,
  sym_subtype_decl = 109,
  sym_eq_type_decl = 110,
  sym_union_type = 111,
  sym_type_name = 112,
  sym_record_type = 113,
  sym_abstract_data_type = 114,
  sym_adt_branch = 115,
  sym_primitive_type = 116,
  sym_atom = 117,
  sym_boolean_literal = 118,
  aux_sym_source_file_repeat1 = 119,
  aux_sym_relation_decl_repeat1 = 120,
  aux_sym_relation_decl_repeat2 = 121,
  aux_sym_relation_decl_repeat3 = 122,
  aux_sym_choice_domain_repeat1 = 123,
  aux_sym_rule_repeat1 = 124,
  aux_sym_disjunction_repeat1 = 125,
  aux_sym_conjunction_repeat1 = 126,
  aux_sym_conjunction_repeat2 = 127,
  aux_sym_directive_repeat1 = 128,
  aux_sym_directive_repeat2 = 129,
  aux_sym_qualified_name_repeat1 = 130,
  aux_sym_argument_list_repeat1 = 131,
  aux_sym_union_type_repeat1 = 132,
  aux_sym_abstract_data_type_repeat1 = 133,
  alias_sym_attribute_name = 134,
  alias_sym_choice_domain_single_attribute = 135,
  alias_sym_path_spec = 136,
  alias_sym_user_defined_type_name = 137,
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
  field_directive_attribute = 1,
  field_directive_value = 2,
  field_range_from = 3,
  field_range_step = 4,
  field_range_to = 5,
  field_relation_name = 6,
  field_rule_name = 7,
  field_type_ref = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_directive_attribute] = "directive_attribute",
  [field_directive_value] = "directive_value",
  [field_range_from] = "range_from",
  [field_range_step] = "range_step",
  [field_range_to] = "range_to",
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
  [11] = {.index = 9, .length = 2},
  [12] = {.index = 11, .length = 3},
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
  [9] =
    {field_range_from, 2},
    {field_range_to, 4},
  [11] =
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
  [135] = 75,
  [136] = 74,
  [137] = 76,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 78,
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
  [161] = 106,
  [162] = 100,
  [163] = 163,
  [164] = 164,
  [165] = 95,
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
  [235] = 227,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(132);
      if (lookahead == '!') ADVANCE(158);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == '[') ADVANCE(170);
      if (lookahead == ']') ADVANCE(171);
      if (lookahead == '^') ADVANCE(177);
      if (lookahead == '_') ADVANCE(168);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'b') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == 'l') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == 't') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(90);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(157);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == '[') ADVANCE(170);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(284);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == ']') ADVANCE(171);
      if (lookahead == '^') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(180);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '+') ADVANCE(181);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(179);
      if (lookahead == ':') ADVANCE(203);
      if (lookahead == ';') ADVANCE(156);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '>') ADVANCE(161);
      if (lookahead == ']') ADVANCE(171);
      if (lookahead == '^') ADVANCE(177);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == ')') ADVANCE(136);
      if (lookahead == '-') ADVANCE(172);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(170);
      if (lookahead == ']') ADVANCE(171);
      if (lookahead == '_') ADVANCE(169);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'b') ADVANCE(284);
      if (lookahead == 'c') ADVANCE(295);
      if (lookahead == 'l') ADVANCE(286);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead == 'n') ADVANCE(263);
      if (lookahead == 'r') ADVANCE(231);
      if (lookahead == 's') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(228);
      if (lookahead == 't') ADVANCE(303);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(223);
      if (lookahead == '\\') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(225);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(276);
      if (lookahead == 'n') ADVANCE(317);
      if (lookahead == 's') ADVANCE(321);
      if (lookahead == 'u') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(209);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 't') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 's') ADVANCE(58);
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'n') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(105);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(77);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(185);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(215);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(102);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(66);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(95);
      END_STATE();
    case 58:
      if (lookahead == 'h') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'h') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(72);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(199);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(153);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 106:
      if (lookahead == 'q') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(186);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(81);
      if (lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 126:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 127:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 128:
      if (lookahead == 'v') ADVANCE(52);
      END_STATE();
    case 129:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 130:
      if (eof) ADVANCE(132);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '(') ADVANCE(135);
      if (lookahead == ',') ADVANCE(134);
      if (lookahead == '.') ADVANCE(155);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(164);
      if (lookahead == '{') ADVANCE(205);
      if (lookahead == '|') ADVANCE(210);
      if (lookahead == '}') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(130)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 131:
      if (eof) ADVANCE(132);
      if (lookahead == '#') ADVANCE(63);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(302);
      if (lookahead == 'c') ADVANCE(260);
      if (lookahead == 'e') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(287);
      if (lookahead == 'm') ADVANCE(230);
      if (lookahead == 'n') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(319);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(131)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(209);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(162);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(163);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(224);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(224);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'e') ADVANCE(233);
      if (lookahead == 'i') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(267);
      if (lookahead == 't') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(322);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 130, .external_lex_state = 2},
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
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 130, .external_lex_state = 2},
  [52] = {.lex_state = 130, .external_lex_state = 2},
  [53] = {.lex_state = 131, .external_lex_state = 2},
  [54] = {.lex_state = 131, .external_lex_state = 2},
  [55] = {.lex_state = 131, .external_lex_state = 2},
  [56] = {.lex_state = 131, .external_lex_state = 2},
  [57] = {.lex_state = 131, .external_lex_state = 2},
  [58] = {.lex_state = 131, .external_lex_state = 2},
  [59] = {.lex_state = 131, .external_lex_state = 2},
  [60] = {.lex_state = 131, .external_lex_state = 2},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 131, .external_lex_state = 2},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 131, .external_lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 130, .external_lex_state = 2},
  [75] = {.lex_state = 130, .external_lex_state = 2},
  [76] = {.lex_state = 130, .external_lex_state = 2},
  [77] = {.lex_state = 130, .external_lex_state = 2},
  [78] = {.lex_state = 130, .external_lex_state = 2},
  [79] = {.lex_state = 130, .external_lex_state = 2},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 130, .external_lex_state = 2},
  [82] = {.lex_state = 130, .external_lex_state = 2},
  [83] = {.lex_state = 130, .external_lex_state = 2},
  [84] = {.lex_state = 130, .external_lex_state = 1},
  [85] = {.lex_state = 130, .external_lex_state = 2},
  [86] = {.lex_state = 130, .external_lex_state = 2},
  [87] = {.lex_state = 130, .external_lex_state = 1},
  [88] = {.lex_state = 130, .external_lex_state = 2},
  [89] = {.lex_state = 130, .external_lex_state = 2},
  [90] = {.lex_state = 130, .external_lex_state = 2},
  [91] = {.lex_state = 130, .external_lex_state = 2},
  [92] = {.lex_state = 130, .external_lex_state = 2},
  [93] = {.lex_state = 130, .external_lex_state = 2},
  [94] = {.lex_state = 130, .external_lex_state = 2},
  [95] = {.lex_state = 130, .external_lex_state = 2},
  [96] = {.lex_state = 130, .external_lex_state = 2},
  [97] = {.lex_state = 130, .external_lex_state = 2},
  [98] = {.lex_state = 130, .external_lex_state = 2},
  [99] = {.lex_state = 130, .external_lex_state = 2},
  [100] = {.lex_state = 130, .external_lex_state = 2},
  [101] = {.lex_state = 130, .external_lex_state = 2},
  [102] = {.lex_state = 130, .external_lex_state = 2},
  [103] = {.lex_state = 130, .external_lex_state = 2},
  [104] = {.lex_state = 130, .external_lex_state = 2},
  [105] = {.lex_state = 130, .external_lex_state = 2},
  [106] = {.lex_state = 130, .external_lex_state = 2},
  [107] = {.lex_state = 130, .external_lex_state = 2},
  [108] = {.lex_state = 130, .external_lex_state = 2},
  [109] = {.lex_state = 130, .external_lex_state = 2},
  [110] = {.lex_state = 130, .external_lex_state = 2},
  [111] = {.lex_state = 130, .external_lex_state = 2},
  [112] = {.lex_state = 130, .external_lex_state = 2},
  [113] = {.lex_state = 130, .external_lex_state = 2},
  [114] = {.lex_state = 130, .external_lex_state = 2},
  [115] = {.lex_state = 130, .external_lex_state = 2},
  [116] = {.lex_state = 130, .external_lex_state = 2},
  [117] = {.lex_state = 130, .external_lex_state = 2},
  [118] = {.lex_state = 130, .external_lex_state = 2},
  [119] = {.lex_state = 130, .external_lex_state = 2},
  [120] = {.lex_state = 130, .external_lex_state = 2},
  [121] = {.lex_state = 130, .external_lex_state = 2},
  [122] = {.lex_state = 130, .external_lex_state = 2},
  [123] = {.lex_state = 130, .external_lex_state = 2},
  [124] = {.lex_state = 130, .external_lex_state = 2},
  [125] = {.lex_state = 130, .external_lex_state = 2},
  [126] = {.lex_state = 130, .external_lex_state = 2},
  [127] = {.lex_state = 130, .external_lex_state = 2},
  [128] = {.lex_state = 130, .external_lex_state = 2},
  [129] = {.lex_state = 130, .external_lex_state = 2},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 5},
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
  [159] = {.lex_state = 130},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 130},
  [164] = {.lex_state = 130},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 130},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 130},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 130},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 130},
  [178] = {.lex_state = 130},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 130},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 130},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 130},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 130},
  [200] = {.lex_state = 130},
  [201] = {.lex_state = 130},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 130},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 130},
  [206] = {.lex_state = 130},
  [207] = {.lex_state = 130},
  [208] = {.lex_state = 130},
  [209] = {.lex_state = 130},
  [210] = {.lex_state = 130},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 130},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 130},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 130},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 130},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 130},
  [235] = {.lex_state = 130},
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
    [sym_source_file] = STATE(231),
    [sym__element] = STATE(51),
    [sym_preprocessor_directive] = STATE(51),
    [sym_include_preprocessor_directive] = STATE(120),
    [sym_relation_decl] = STATE(51),
    [sym_rule] = STATE(51),
    [sym_directive] = STATE(51),
    [sym__directive_qualifier] = STATE(199),
    [sym_include_directive] = STATE(51),
    [sym_qualified_name] = STATE(229),
    [sym_fact] = STATE(51),
    [sym_type_decl] = STATE(51),
    [sym_atom] = STATE(163),
    [aux_sym_source_file_repeat1] = STATE(51),
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
  [0] = 23,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(220), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(139), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [86] = 23,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(224), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(139), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [172] = 23,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(226), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(139), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [258] = 23,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(221), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(139), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [344] = 23,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(228), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(139), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [430] = 23,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(214), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(139), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [516] = 23,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(211), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(139), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [602] = 23,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(222), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(139), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [688] = 22,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(160), 1,
      sym_conjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(139), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [771] = 21,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      anon_sym_BANG,
    STATE(61), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(144), 2,
      sym_constraint,
      sym_atom,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [851] = 21,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_BANG,
    ACTIONS(51), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(158), 2,
      sym_constraint,
      sym_atom,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [931] = 21,
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
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_BANG,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(62), 1,
      sym_argument,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(31), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    STATE(155), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(156), 2,
      sym_constraint,
      sym_atom,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1011] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(59), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(57), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
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
      anon_sym_RBRACE,
  [1049] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(63), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(61), 24,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON_DASH,
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
      anon_sym_RBRACE,
  [1087] = 7,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(65), 19,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1132] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1169] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(81), 24,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1206] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(87), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(85), 24,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1243] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(91), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(89), 24,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1280] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(95), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(93), 24,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1317] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(99), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(97), 24,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1354] = 8,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(65), 16,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1401] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1438] = 4,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(65), 23,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1477] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(65), 24,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1514] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1551] = 6,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(67), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(65), 21,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1594] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1631] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1668] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1705] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1742] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1779] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [1816] = 14,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1873] = 14,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(68), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1930] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(66), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1984] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(64), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2038] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(73), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2092] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2146] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2200] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(70), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2254] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(25), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2308] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2362] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(26), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2416] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(69), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2470] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(28), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2524] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(67), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2578] = 13,
    ACTIONS(23), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      anon_sym_as,
    ACTIONS(37), 1,
      anon_sym_count,
    ACTIONS(39), 1,
      anon_sym_range,
    STATE(71), 1,
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
    ACTIONS(43), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(35), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(17), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2632] = 6,
    ACTIONS(139), 1,
      anon_sym_LPAREN,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(136), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(121), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(119), 17,
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
  [2671] = 13,
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
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(120), 1,
      sym_include_preprocessor_directive,
    STATE(163), 1,
      sym_atom,
    STATE(199), 1,
      sym__directive_qualifier,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(13), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(52), 9,
      sym__element,
      sym_preprocessor_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [2723] = 13,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    ACTIONS(147), 1,
      anon_sym_POUNDinclude,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(153), 1,
      sym_decl_kw,
    ACTIONS(159), 1,
      sym_type_kw,
    ACTIONS(162), 1,
      sym_include_kw,
    STATE(120), 1,
      sym_include_preprocessor_directive,
    STATE(163), 1,
      sym_atom,
    STATE(199), 1,
      sym__directive_qualifier,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(52), 9,
      sym__element,
      sym_preprocessor_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      aux_sym_source_file_repeat1,
  [2775] = 7,
    ACTIONS(169), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(171), 1,
      sym_identifier,
    STATE(115), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(56), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(167), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(165), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [2814] = 7,
    ACTIONS(169), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(175), 1,
      sym_identifier,
    STATE(124), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(59), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(167), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(173), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [2853] = 7,
    ACTIONS(169), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(109), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(58), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(167), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(177), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [2892] = 7,
    ACTIONS(169), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(109), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(167), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(177), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [2931] = 7,
    ACTIONS(169), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(110), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(167), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(181), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [2970] = 7,
    ACTIONS(169), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(125), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(167), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(185), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [3009] = 7,
    ACTIONS(169), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(119), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(167), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(189), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [3048] = 7,
    ACTIONS(169), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(119), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(167), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(189), 9,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
  [3087] = 5,
    ACTIONS(195), 1,
      anon_sym_BANG,
    STATE(61), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_string_literal,
      sym_number,
    ACTIONS(198), 14,
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
  [3121] = 10,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(200), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(202), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3165] = 5,
    ACTIONS(213), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(210), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(208), 10,
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
  [3199] = 9,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
    ACTIONS(215), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3240] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(219), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
    ACTIONS(217), 10,
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
  [3268] = 11,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3311] = 9,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(225), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3350] = 11,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3393] = 9,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(229), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3430] = 9,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(231), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3467] = 9,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(233), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3504] = 9,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3541] = 9,
    ACTIONS(71), 1,
      anon_sym_CARET,
    ACTIONS(75), 1,
      anon_sym_SLASH,
    ACTIONS(206), 1,
      anon_sym_bshr,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(73), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(101), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(204), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3578] = 4,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 13,
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
  [3604] = 4,
    ACTIONS(241), 1,
      anon_sym_DOT,
    STATE(74), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 13,
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
  [3630] = 4,
    ACTIONS(245), 1,
      anon_sym_DOT,
    STATE(76), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 13,
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
  [3656] = 5,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 11,
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
  [3683] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 14,
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
  [3704] = 5,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 10,
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
  [3730] = 9,
    ACTIONS(256), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      sym_identifier,
    STATE(89), 1,
      sym_adt_branch,
    STATE(95), 1,
      sym_qualified_name,
    STATE(100), 1,
      sym_primitive_type,
    STATE(103), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(118), 3,
      sym_union_type,
      sym_record_type,
      sym_abstract_data_type,
    ACTIONS(258), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3764] = 4,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    STATE(81), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 11,
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
  [3788] = 5,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      aux_sym_directive_repeat1,
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
  [3814] = 4,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      aux_sym_abstract_data_type_repeat1,
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
  [3837] = 4,
    ACTIONS(278), 1,
      sym_plan_kw,
    STATE(128), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(276), 10,
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
  [3860] = 4,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    STATE(94), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 10,
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
  [3883] = 4,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(284), 10,
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
  [3906] = 4,
    ACTIONS(278), 1,
      sym_plan_kw,
    STATE(127), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 10,
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
  [3929] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 10,
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
  [3952] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(88), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 10,
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
  [3975] = 4,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(296), 10,
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
  [3998] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 12,
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
  [4017] = 4,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    STATE(85), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(301), 10,
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
  [4040] = 4,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 10,
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
  [4063] = 4,
    ACTIONS(307), 1,
      anon_sym_PIPE,
    STATE(94), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(305), 10,
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
  [4086] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 11,
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
  [4104] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 11,
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
  [4122] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(271), 11,
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
  [4140] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(305), 11,
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
  [4158] = 2,
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
      anon_sym_COMMA,
      sym_identifier,
  [4176] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 11,
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
  [4194] = 2,
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
      anon_sym_COMMA,
      sym_identifier,
  [4212] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 11,
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
  [4230] = 3,
    ACTIONS(324), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 10,
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
  [4250] = 2,
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
      anon_sym_COMMA,
      sym_identifier,
  [4268] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 11,
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
  [4286] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 11,
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
  [4304] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 11,
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
  [4322] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(332), 11,
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
  [4340] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 10,
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
  [4357] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 10,
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
  [4374] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 10,
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
  [4391] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(338), 10,
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
  [4408] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 10,
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
  [4425] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(342), 10,
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
  [4442] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(177), 10,
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
  [4459] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 10,
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
  [4476] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(346), 10,
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
  [4493] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 10,
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
  [4510] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 10,
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
  [4527] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 10,
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
  [4544] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 10,
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
  [4561] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(352), 10,
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
  [4578] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 10,
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
  [4595] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 10,
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
  [4612] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(356), 10,
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
  [4629] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(358), 10,
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
  [4646] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(360), 10,
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
  [4663] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(362), 10,
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
  [4680] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(364), 10,
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
  [4697] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(162), 1,
      sym_primitive_type,
    STATE(165), 1,
      sym_qualified_name,
    STATE(230), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(366), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4720] = 6,
    ACTIONS(368), 1,
      sym_identifier,
    STATE(162), 1,
      sym_primitive_type,
    STATE(165), 1,
      sym_qualified_name,
    STATE(172), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(366), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4743] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(95), 1,
      sym_qualified_name,
    STATE(98), 1,
      sym_type_name,
    STATE(100), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4766] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(95), 1,
      sym_qualified_name,
    STATE(100), 1,
      sym_primitive_type,
    STATE(114), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4789] = 6,
    ACTIONS(370), 1,
      sym_identifier,
    STATE(92), 1,
      sym_type_name,
    STATE(95), 1,
      sym_qualified_name,
    STATE(100), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(258), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4812] = 4,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(136), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4830] = 4,
    ACTIONS(141), 1,
      anon_sym_DOT,
    STATE(137), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(239), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4848] = 4,
    ACTIONS(372), 1,
      anon_sym_DOT,
    STATE(137), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4866] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(377), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4883] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(143), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4900] = 4,
    ACTIONS(381), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(384), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4917] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(377), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4934] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(243), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4947] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4964] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(386), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4981] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(388), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4998] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(390), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5015] = 4,
    ACTIONS(375), 1,
      anon_sym_COMMA,
    STATE(146), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(388), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5032] = 6,
    ACTIONS(392), 1,
      sym_string_literal,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(198), 1,
      sym_boolean_literal,
    STATE(202), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
  [5053] = 4,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    STATE(150), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(396), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5069] = 4,
    ACTIONS(398), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(400), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5085] = 4,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(405), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5101] = 4,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    STATE(152), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(407), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5117] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(412), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5129] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(414), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5141] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5153] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(384), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5165] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(418), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5177] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(420), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5189] = 4,
    ACTIONS(422), 1,
      anon_sym_EQ,
    ACTIONS(424), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(112), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [5204] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(407), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5215] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5226] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5237] = 5,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_COLON_DASH,
    ACTIONS(430), 1,
      anon_sym_DOT,
    STATE(178), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5254] = 5,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(432), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_atom,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5271] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5282] = 5,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_atom,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5299] = 4,
    ACTIONS(436), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(225), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5314] = 5,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(99), 1,
      sym_choice_domain_tuple_attribute,
    STATE(104), 1,
      sym_choice_domain_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5331] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(169), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(446), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5346] = 5,
    ACTIONS(439), 1,
      anon_sym_LPAREN,
    ACTIONS(441), 1,
      sym_identifier,
    STATE(93), 1,
      sym_choice_domain_attribute,
    STATE(99), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5363] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(405), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5374] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(448), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5385] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(446), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5395] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5409] = 4,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    STATE(179), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5423] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(151), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5437] = 4,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(208), 1,
      sym_atom,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5451] = 4,
    ACTIONS(426), 1,
      anon_sym_COMMA,
    ACTIONS(460), 1,
      anon_sym_COLON_DASH,
    STATE(181), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5465] = 4,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_LPAREN,
    STATE(169), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5479] = 4,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(464), 1,
      anon_sym_RPAREN,
    STATE(169), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5493] = 4,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_COLON_DASH,
    STATE(181), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5507] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(151), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5521] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5535] = 4,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5549] = 4,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(482), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5563] = 4,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
    STATE(167), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5577] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(486), 1,
      anon_sym_RBRACE,
    STATE(195), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5591] = 4,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5605] = 4,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(490), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5619] = 4,
    ACTIONS(480), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5633] = 4,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5647] = 4,
    ACTIONS(221), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(167), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5661] = 4,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(187), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5675] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5689] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
    STATE(151), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5703] = 4,
    ACTIONS(450), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5717] = 3,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(188), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5728] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5737] = 3,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(82), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5748] = 3,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(171), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5759] = 3,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(183), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5770] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(512), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5779] = 3,
    ACTIONS(510), 1,
      sym_identifier,
    STATE(91), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5790] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(478), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5799] = 3,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(189), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5810] = 3,
    ACTIONS(514), 1,
      sym_identifier,
    STATE(97), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5821] = 3,
    ACTIONS(506), 1,
      sym_identifier,
    STATE(204), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5832] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(469), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [5841] = 3,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(194), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5852] = 3,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(196), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5863] = 2,
    ACTIONS(516), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5871] = 2,
    ACTIONS(518), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5879] = 2,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5887] = 2,
    ACTIONS(522), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5895] = 2,
    ACTIONS(524), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5903] = 2,
    ACTIONS(526), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5911] = 2,
    ACTIONS(528), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5919] = 2,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5927] = 2,
    ACTIONS(248), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5935] = 2,
    ACTIONS(532), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5943] = 2,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5951] = 2,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5959] = 2,
    ACTIONS(538), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5967] = 2,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5975] = 2,
    ACTIONS(542), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5983] = 2,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5991] = 2,
    ACTIONS(546), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5999] = 2,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6007] = 2,
    ACTIONS(550), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6015] = 2,
    ACTIONS(552), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6023] = 2,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6031] = 2,
    ACTIONS(556), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6039] = 2,
    ACTIONS(558), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6047] = 2,
    ACTIONS(560), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6055] = 2,
    ACTIONS(562), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 344,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 516,
  [SMALL_STATE(9)] = 602,
  [SMALL_STATE(10)] = 688,
  [SMALL_STATE(11)] = 771,
  [SMALL_STATE(12)] = 851,
  [SMALL_STATE(13)] = 931,
  [SMALL_STATE(14)] = 1011,
  [SMALL_STATE(15)] = 1049,
  [SMALL_STATE(16)] = 1087,
  [SMALL_STATE(17)] = 1132,
  [SMALL_STATE(18)] = 1169,
  [SMALL_STATE(19)] = 1206,
  [SMALL_STATE(20)] = 1243,
  [SMALL_STATE(21)] = 1280,
  [SMALL_STATE(22)] = 1317,
  [SMALL_STATE(23)] = 1354,
  [SMALL_STATE(24)] = 1401,
  [SMALL_STATE(25)] = 1438,
  [SMALL_STATE(26)] = 1477,
  [SMALL_STATE(27)] = 1514,
  [SMALL_STATE(28)] = 1551,
  [SMALL_STATE(29)] = 1594,
  [SMALL_STATE(30)] = 1631,
  [SMALL_STATE(31)] = 1668,
  [SMALL_STATE(32)] = 1705,
  [SMALL_STATE(33)] = 1742,
  [SMALL_STATE(34)] = 1779,
  [SMALL_STATE(35)] = 1816,
  [SMALL_STATE(36)] = 1873,
  [SMALL_STATE(37)] = 1930,
  [SMALL_STATE(38)] = 1984,
  [SMALL_STATE(39)] = 2038,
  [SMALL_STATE(40)] = 2092,
  [SMALL_STATE(41)] = 2146,
  [SMALL_STATE(42)] = 2200,
  [SMALL_STATE(43)] = 2254,
  [SMALL_STATE(44)] = 2308,
  [SMALL_STATE(45)] = 2362,
  [SMALL_STATE(46)] = 2416,
  [SMALL_STATE(47)] = 2470,
  [SMALL_STATE(48)] = 2524,
  [SMALL_STATE(49)] = 2578,
  [SMALL_STATE(50)] = 2632,
  [SMALL_STATE(51)] = 2671,
  [SMALL_STATE(52)] = 2723,
  [SMALL_STATE(53)] = 2775,
  [SMALL_STATE(54)] = 2814,
  [SMALL_STATE(55)] = 2853,
  [SMALL_STATE(56)] = 2892,
  [SMALL_STATE(57)] = 2931,
  [SMALL_STATE(58)] = 2970,
  [SMALL_STATE(59)] = 3009,
  [SMALL_STATE(60)] = 3048,
  [SMALL_STATE(61)] = 3087,
  [SMALL_STATE(62)] = 3121,
  [SMALL_STATE(63)] = 3165,
  [SMALL_STATE(64)] = 3199,
  [SMALL_STATE(65)] = 3240,
  [SMALL_STATE(66)] = 3268,
  [SMALL_STATE(67)] = 3311,
  [SMALL_STATE(68)] = 3350,
  [SMALL_STATE(69)] = 3393,
  [SMALL_STATE(70)] = 3430,
  [SMALL_STATE(71)] = 3467,
  [SMALL_STATE(72)] = 3504,
  [SMALL_STATE(73)] = 3541,
  [SMALL_STATE(74)] = 3578,
  [SMALL_STATE(75)] = 3604,
  [SMALL_STATE(76)] = 3630,
  [SMALL_STATE(77)] = 3656,
  [SMALL_STATE(78)] = 3683,
  [SMALL_STATE(79)] = 3704,
  [SMALL_STATE(80)] = 3730,
  [SMALL_STATE(81)] = 3764,
  [SMALL_STATE(82)] = 3788,
  [SMALL_STATE(83)] = 3814,
  [SMALL_STATE(84)] = 3837,
  [SMALL_STATE(85)] = 3860,
  [SMALL_STATE(86)] = 3883,
  [SMALL_STATE(87)] = 3906,
  [SMALL_STATE(88)] = 3929,
  [SMALL_STATE(89)] = 3952,
  [SMALL_STATE(90)] = 3975,
  [SMALL_STATE(91)] = 3998,
  [SMALL_STATE(92)] = 4017,
  [SMALL_STATE(93)] = 4040,
  [SMALL_STATE(94)] = 4063,
  [SMALL_STATE(95)] = 4086,
  [SMALL_STATE(96)] = 4104,
  [SMALL_STATE(97)] = 4122,
  [SMALL_STATE(98)] = 4140,
  [SMALL_STATE(99)] = 4158,
  [SMALL_STATE(100)] = 4176,
  [SMALL_STATE(101)] = 4194,
  [SMALL_STATE(102)] = 4212,
  [SMALL_STATE(103)] = 4230,
  [SMALL_STATE(104)] = 4250,
  [SMALL_STATE(105)] = 4268,
  [SMALL_STATE(106)] = 4286,
  [SMALL_STATE(107)] = 4304,
  [SMALL_STATE(108)] = 4322,
  [SMALL_STATE(109)] = 4340,
  [SMALL_STATE(110)] = 4357,
  [SMALL_STATE(111)] = 4374,
  [SMALL_STATE(112)] = 4391,
  [SMALL_STATE(113)] = 4408,
  [SMALL_STATE(114)] = 4425,
  [SMALL_STATE(115)] = 4442,
  [SMALL_STATE(116)] = 4459,
  [SMALL_STATE(117)] = 4476,
  [SMALL_STATE(118)] = 4493,
  [SMALL_STATE(119)] = 4510,
  [SMALL_STATE(120)] = 4527,
  [SMALL_STATE(121)] = 4544,
  [SMALL_STATE(122)] = 4561,
  [SMALL_STATE(123)] = 4578,
  [SMALL_STATE(124)] = 4595,
  [SMALL_STATE(125)] = 4612,
  [SMALL_STATE(126)] = 4629,
  [SMALL_STATE(127)] = 4646,
  [SMALL_STATE(128)] = 4663,
  [SMALL_STATE(129)] = 4680,
  [SMALL_STATE(130)] = 4697,
  [SMALL_STATE(131)] = 4720,
  [SMALL_STATE(132)] = 4743,
  [SMALL_STATE(133)] = 4766,
  [SMALL_STATE(134)] = 4789,
  [SMALL_STATE(135)] = 4812,
  [SMALL_STATE(136)] = 4830,
  [SMALL_STATE(137)] = 4848,
  [SMALL_STATE(138)] = 4866,
  [SMALL_STATE(139)] = 4883,
  [SMALL_STATE(140)] = 4900,
  [SMALL_STATE(141)] = 4917,
  [SMALL_STATE(142)] = 4934,
  [SMALL_STATE(143)] = 4947,
  [SMALL_STATE(144)] = 4964,
  [SMALL_STATE(145)] = 4981,
  [SMALL_STATE(146)] = 4998,
  [SMALL_STATE(147)] = 5015,
  [SMALL_STATE(148)] = 5032,
  [SMALL_STATE(149)] = 5053,
  [SMALL_STATE(150)] = 5069,
  [SMALL_STATE(151)] = 5085,
  [SMALL_STATE(152)] = 5101,
  [SMALL_STATE(153)] = 5117,
  [SMALL_STATE(154)] = 5129,
  [SMALL_STATE(155)] = 5141,
  [SMALL_STATE(156)] = 5153,
  [SMALL_STATE(157)] = 5165,
  [SMALL_STATE(158)] = 5177,
  [SMALL_STATE(159)] = 5189,
  [SMALL_STATE(160)] = 5204,
  [SMALL_STATE(161)] = 5215,
  [SMALL_STATE(162)] = 5226,
  [SMALL_STATE(163)] = 5237,
  [SMALL_STATE(164)] = 5254,
  [SMALL_STATE(165)] = 5271,
  [SMALL_STATE(166)] = 5282,
  [SMALL_STATE(167)] = 5299,
  [SMALL_STATE(168)] = 5314,
  [SMALL_STATE(169)] = 5331,
  [SMALL_STATE(170)] = 5346,
  [SMALL_STATE(171)] = 5363,
  [SMALL_STATE(172)] = 5374,
  [SMALL_STATE(173)] = 5385,
  [SMALL_STATE(174)] = 5395,
  [SMALL_STATE(175)] = 5409,
  [SMALL_STATE(176)] = 5423,
  [SMALL_STATE(177)] = 5437,
  [SMALL_STATE(178)] = 5451,
  [SMALL_STATE(179)] = 5465,
  [SMALL_STATE(180)] = 5479,
  [SMALL_STATE(181)] = 5493,
  [SMALL_STATE(182)] = 5507,
  [SMALL_STATE(183)] = 5521,
  [SMALL_STATE(184)] = 5535,
  [SMALL_STATE(185)] = 5549,
  [SMALL_STATE(186)] = 5563,
  [SMALL_STATE(187)] = 5577,
  [SMALL_STATE(188)] = 5591,
  [SMALL_STATE(189)] = 5605,
  [SMALL_STATE(190)] = 5619,
  [SMALL_STATE(191)] = 5633,
  [SMALL_STATE(192)] = 5647,
  [SMALL_STATE(193)] = 5661,
  [SMALL_STATE(194)] = 5675,
  [SMALL_STATE(195)] = 5689,
  [SMALL_STATE(196)] = 5703,
  [SMALL_STATE(197)] = 5717,
  [SMALL_STATE(198)] = 5728,
  [SMALL_STATE(199)] = 5737,
  [SMALL_STATE(200)] = 5748,
  [SMALL_STATE(201)] = 5759,
  [SMALL_STATE(202)] = 5770,
  [SMALL_STATE(203)] = 5779,
  [SMALL_STATE(204)] = 5790,
  [SMALL_STATE(205)] = 5799,
  [SMALL_STATE(206)] = 5810,
  [SMALL_STATE(207)] = 5821,
  [SMALL_STATE(208)] = 5832,
  [SMALL_STATE(209)] = 5841,
  [SMALL_STATE(210)] = 5852,
  [SMALL_STATE(211)] = 5863,
  [SMALL_STATE(212)] = 5871,
  [SMALL_STATE(213)] = 5879,
  [SMALL_STATE(214)] = 5887,
  [SMALL_STATE(215)] = 5895,
  [SMALL_STATE(216)] = 5903,
  [SMALL_STATE(217)] = 5911,
  [SMALL_STATE(218)] = 5919,
  [SMALL_STATE(219)] = 5927,
  [SMALL_STATE(220)] = 5935,
  [SMALL_STATE(221)] = 5943,
  [SMALL_STATE(222)] = 5951,
  [SMALL_STATE(223)] = 5959,
  [SMALL_STATE(224)] = 5967,
  [SMALL_STATE(225)] = 5975,
  [SMALL_STATE(226)] = 5983,
  [SMALL_STATE(227)] = 5991,
  [SMALL_STATE(228)] = 5999,
  [SMALL_STATE(229)] = 6007,
  [SMALL_STATE(230)] = 6015,
  [SMALL_STATE(231)] = 6023,
  [SMALL_STATE(232)] = 6031,
  [SMALL_STATE(233)] = 6039,
  [SMALL_STATE(234)] = 6047,
  [SMALL_STATE(235)] = 6055,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 11),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 11),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 12),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 12),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(135),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(225),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(234),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 8),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 8),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 8),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(61),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(65),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(235),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(203),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(206),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(168),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(132),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 10),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 5),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_preprocessor_directive, 2, .production_id = 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 8),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 6),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(227),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(13),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(200),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(10),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(48),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(232),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 7),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(177),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(207),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 9),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [554] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
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
