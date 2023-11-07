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
#define STATE_COUNT 240
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 4
#define TOKEN_COUNT 77
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
  anon_sym_DOTpragma = 61,
  anon_sym_true = 62,
  anon_sym_false = 63,
  sym_string_literal = 64,
  sym_line_comment = 65,
  sym_block_comment = 66,
  sym_identifier = 67,
  sym_number = 68,
  sym_decl_kw = 69,
  sym_input_kw = 70,
  sym_output_kw = 71,
  sym_type_kw = 72,
  sym_include_kw = 73,
  sym_printsize_kw = 74,
  sym_limitsize_kw = 75,
  sym_plan_kw = 76,
  sym_source_file = 77,
  sym__element = 78,
  sym_preprocessor_directive = 79,
  sym_include_preprocessor_directive = 80,
  sym_relation_decl = 81,
  sym_relation_qualifier = 82,
  sym_choice_domain = 83,
  sym_choice_domain_attribute = 84,
  sym_choice_domain_tuple_attribute = 85,
  sym_rule = 86,
  sym_disjunction = 87,
  sym_conjunction = 88,
  sym_constraint = 89,
  sym_binary_constraint = 90,
  sym_query_plan = 91,
  sym_directive = 92,
  sym__directive_qualifier = 93,
  sym_directive_attribute_assignment = 94,
  sym_directive_value = 95,
  sym_include_directive = 96,
  sym_qualified_name = 97,
  sym_argument = 98,
  sym_constant = 99,
  sym_variable = 100,
  sym_argument_list = 101,
  sym_unary_operation = 102,
  sym_binary_operation = 103,
  sym_type_conversion = 104,
  sym_aggregator = 105,
  sym_range_expression = 106,
  sym_attribute = 107,
  sym_fact = 108,
  sym_type_decl = 109,
  sym_subtype_decl = 110,
  sym_eq_type_decl = 111,
  sym_union_type = 112,
  sym_type_name = 113,
  sym_record_type = 114,
  sym_abstract_data_type = 115,
  sym_adt_branch = 116,
  sym_primitive_type = 117,
  sym_pragma = 118,
  sym_atom = 119,
  sym_boolean_literal = 120,
  aux_sym_source_file_repeat1 = 121,
  aux_sym_relation_decl_repeat1 = 122,
  aux_sym_relation_decl_repeat2 = 123,
  aux_sym_relation_decl_repeat3 = 124,
  aux_sym_choice_domain_repeat1 = 125,
  aux_sym_rule_repeat1 = 126,
  aux_sym_disjunction_repeat1 = 127,
  aux_sym_conjunction_repeat1 = 128,
  aux_sym_conjunction_repeat2 = 129,
  aux_sym_directive_repeat1 = 130,
  aux_sym_directive_repeat2 = 131,
  aux_sym_qualified_name_repeat1 = 132,
  aux_sym_argument_list_repeat1 = 133,
  aux_sym_union_type_repeat1 = 134,
  aux_sym_abstract_data_type_repeat1 = 135,
  alias_sym_attribute_name = 136,
  alias_sym_choice_domain_single_attribute = 137,
  alias_sym_path_spec = 138,
  alias_sym_user_defined_type_name = 139,
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
  [anon_sym_DOTpragma] = ".pragma",
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
  [sym_pragma] = "pragma",
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
  [anon_sym_DOTpragma] = anon_sym_DOTpragma,
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
  [sym_pragma] = sym_pragma,
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
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 72,
  [139] = 73,
  [140] = 69,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 77,
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
  [163] = 104,
  [164] = 164,
  [165] = 107,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 95,
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
  [239] = 225,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(141);
      if (lookahead == '!') ADVANCE(168);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '%') ADVANCE(190);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(169);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '^') ADVANCE(187);
      if (lookahead == '_') ADVANCE(178);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'o') ADVANCE(134);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(130);
      if (lookahead == 't') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(94);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(220);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(167);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(190);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '^') ADVANCE(187);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(190);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '<') ADVANCE(170);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '>') ADVANCE(171);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '^') ADVANCE(187);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '-') ADVANCE(182);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == ']') ADVANCE(181);
      if (lookahead == '_') ADVANCE(179);
      if (lookahead == 'a') ADVANCE(319);
      if (lookahead == 'b') ADVANCE(295);
      if (lookahead == 'c') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(297);
      if (lookahead == 'm') ADVANCE(240);
      if (lookahead == 'n') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(242);
      if (lookahead == 's') ADVANCE(326);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(239);
      if (lookahead == 't') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(235);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(180);
      if (lookahead == 'f') ADVANCE(287);
      if (lookahead == 'n') ADVANCE(328);
      if (lookahead == 's') ADVANCE(332);
      if (lookahead == 'u') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(219);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'r') ADVANCE(63);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(108);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == 'o') ADVANCE(113);
      if (lookahead == 'x') ADVANCE(108);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(152);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(192);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'g') ADVANCE(67);
      if (lookahead == 'x') ADVANCE(203);
      END_STATE();
    case 58:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'g') ADVANCE(45);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 61:
      if (lookahead == 'h') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'h') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 64:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 66:
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(101);
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 85:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 86:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 87:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(205);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 111:
      if (lookahead == 'q') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(72);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 123:
      if (lookahead == 's') ADVANCE(201);
      END_STATE();
    case 124:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(227);
      END_STATE();
    case 130:
      if (lookahead == 'u') ADVANCE(84);
      if (lookahead == 'y') ADVANCE(85);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 134:
      if (lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 135:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 138:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 139:
      if (eof) ADVANCE(141);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == ',') ADVANCE(143);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(174);
      if (lookahead == '{') ADVANCE(215);
      if (lookahead == '|') ADVANCE(220);
      if (lookahead == '}') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(139)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 140:
      if (eof) ADVANCE(141);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(271);
      if (lookahead == 'e') ADVANCE(311);
      if (lookahead == 'i') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(330);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(172);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(235);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(235);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead == 'e') ADVANCE(244);
      if (lookahead == 'i') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(278);
      if (lookahead == 't') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(136);
      if (lookahead == '_') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(334);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(338);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 139, .external_lex_state = 2},
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
  [37] = {.lex_state = 139, .external_lex_state = 2},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 139, .external_lex_state = 2},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 140, .external_lex_state = 2},
  [54] = {.lex_state = 140, .external_lex_state = 2},
  [55] = {.lex_state = 140, .external_lex_state = 2},
  [56] = {.lex_state = 140, .external_lex_state = 2},
  [57] = {.lex_state = 140, .external_lex_state = 2},
  [58] = {.lex_state = 140, .external_lex_state = 2},
  [59] = {.lex_state = 140, .external_lex_state = 2},
  [60] = {.lex_state = 140, .external_lex_state = 2},
  [61] = {.lex_state = 140, .external_lex_state = 2},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 140, .external_lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 139, .external_lex_state = 2},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 139, .external_lex_state = 2},
  [73] = {.lex_state = 139, .external_lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 139, .external_lex_state = 2},
  [78] = {.lex_state = 139, .external_lex_state = 2},
  [79] = {.lex_state = 139, .external_lex_state = 2},
  [80] = {.lex_state = 139, .external_lex_state = 2},
  [81] = {.lex_state = 139, .external_lex_state = 2},
  [82] = {.lex_state = 139, .external_lex_state = 2},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 139, .external_lex_state = 2},
  [85] = {.lex_state = 139, .external_lex_state = 2},
  [86] = {.lex_state = 139, .external_lex_state = 2},
  [87] = {.lex_state = 139, .external_lex_state = 2},
  [88] = {.lex_state = 139, .external_lex_state = 2},
  [89] = {.lex_state = 139, .external_lex_state = 1},
  [90] = {.lex_state = 139, .external_lex_state = 2},
  [91] = {.lex_state = 139, .external_lex_state = 2},
  [92] = {.lex_state = 139, .external_lex_state = 2},
  [93] = {.lex_state = 139, .external_lex_state = 1},
  [94] = {.lex_state = 139, .external_lex_state = 2},
  [95] = {.lex_state = 139, .external_lex_state = 2},
  [96] = {.lex_state = 139, .external_lex_state = 2},
  [97] = {.lex_state = 139, .external_lex_state = 2},
  [98] = {.lex_state = 139, .external_lex_state = 2},
  [99] = {.lex_state = 139, .external_lex_state = 2},
  [100] = {.lex_state = 139, .external_lex_state = 2},
  [101] = {.lex_state = 139, .external_lex_state = 2},
  [102] = {.lex_state = 139, .external_lex_state = 2},
  [103] = {.lex_state = 139, .external_lex_state = 2},
  [104] = {.lex_state = 139, .external_lex_state = 2},
  [105] = {.lex_state = 139, .external_lex_state = 2},
  [106] = {.lex_state = 139, .external_lex_state = 2},
  [107] = {.lex_state = 139, .external_lex_state = 2},
  [108] = {.lex_state = 139, .external_lex_state = 2},
  [109] = {.lex_state = 139, .external_lex_state = 2},
  [110] = {.lex_state = 139, .external_lex_state = 2},
  [111] = {.lex_state = 139, .external_lex_state = 2},
  [112] = {.lex_state = 139, .external_lex_state = 2},
  [113] = {.lex_state = 139, .external_lex_state = 2},
  [114] = {.lex_state = 139, .external_lex_state = 2},
  [115] = {.lex_state = 139, .external_lex_state = 2},
  [116] = {.lex_state = 139, .external_lex_state = 2},
  [117] = {.lex_state = 139, .external_lex_state = 2},
  [118] = {.lex_state = 139, .external_lex_state = 2},
  [119] = {.lex_state = 139, .external_lex_state = 2},
  [120] = {.lex_state = 139, .external_lex_state = 2},
  [121] = {.lex_state = 139, .external_lex_state = 2},
  [122] = {.lex_state = 139, .external_lex_state = 2},
  [123] = {.lex_state = 139, .external_lex_state = 2},
  [124] = {.lex_state = 139, .external_lex_state = 2},
  [125] = {.lex_state = 139, .external_lex_state = 2},
  [126] = {.lex_state = 139, .external_lex_state = 2},
  [127] = {.lex_state = 139, .external_lex_state = 2},
  [128] = {.lex_state = 139, .external_lex_state = 2},
  [129] = {.lex_state = 139, .external_lex_state = 2},
  [130] = {.lex_state = 139, .external_lex_state = 2},
  [131] = {.lex_state = 139, .external_lex_state = 2},
  [132] = {.lex_state = 139, .external_lex_state = 2},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
  [136] = {.lex_state = 12},
  [137] = {.lex_state = 12},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 5},
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
  [162] = {.lex_state = 139},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 139},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 139},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 139},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 139},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 139},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 139},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 139},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 139},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 139},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 139},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 139},
  [203] = {.lex_state = 139},
  [204] = {.lex_state = 139},
  [205] = {.lex_state = 139},
  [206] = {.lex_state = 139},
  [207] = {.lex_state = 139},
  [208] = {.lex_state = 139},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 139},
  [213] = {.lex_state = 139},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 139},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 139},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 139},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 139},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 139},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 139},
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
    [anon_sym_DOTpragma] = ACTIONS(1),
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
    [sym__element] = STATE(37),
    [sym_preprocessor_directive] = STATE(37),
    [sym_include_preprocessor_directive] = STATE(118),
    [sym_relation_decl] = STATE(37),
    [sym_rule] = STATE(37),
    [sym_directive] = STATE(37),
    [sym__directive_qualifier] = STATE(208),
    [sym_include_directive] = STATE(37),
    [sym_qualified_name] = STATE(229),
    [sym_fact] = STATE(37),
    [sym_type_decl] = STATE(37),
    [sym_pragma] = STATE(37),
    [sym_atom] = STATE(172),
    [aux_sym_source_file_repeat1] = STATE(37),
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
  [0] = 23,
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
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(156), 1,
      sym_conjunction,
    STATE(218), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(143), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [86] = 23,
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
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(156), 1,
      sym_conjunction,
    STATE(219), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(143), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [172] = 23,
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
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(156), 1,
      sym_conjunction,
    STATE(215), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(143), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [258] = 23,
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
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(156), 1,
      sym_conjunction,
    STATE(222), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(143), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [344] = 23,
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
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(156), 1,
      sym_conjunction,
    STATE(223), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(143), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [430] = 23,
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
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(156), 1,
      sym_conjunction,
    STATE(221), 1,
      sym_disjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(143), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [516] = 23,
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
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(156), 1,
      sym_conjunction,
    STATE(229), 1,
      sym_qualified_name,
    STATE(236), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(143), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [602] = 23,
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
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(156), 1,
      sym_conjunction,
    STATE(229), 1,
      sym_qualified_name,
    STATE(230), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(143), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [688] = 22,
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
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(175), 1,
      sym_conjunction,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(143), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [771] = 21,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      anon_sym_BANG,
    STATE(62), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(150), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [851] = 21,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_BANG,
    STATE(13), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(154), 2,
      sym_constraint,
      sym_atom,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [931] = 21,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(27), 1,
      anon_sym__,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      aux_sym_conjunction_repeat1,
    STATE(63), 1,
      sym_argument,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    STATE(157), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(159), 2,
      sym_constraint,
      sym_atom,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
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
    ACTIONS(61), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(59), 24,
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
    ACTIONS(65), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(63), 24,
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
  [1087] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(69), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(67), 24,
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
  [1124] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(73), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(71), 24,
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
  [1161] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(75), 24,
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
  [1198] = 8,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(79), 16,
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
  [1245] = 7,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(79), 19,
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
  [1290] = 4,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(79), 23,
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
  [1329] = 3,
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
  [1366] = 3,
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
  [1403] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(103), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(101), 24,
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
  [1440] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(81), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(79), 24,
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
  [1477] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(107), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(105), 24,
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
    ACTIONS(111), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(109), 24,
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
  [1551] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(115), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(113), 24,
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
  [1588] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(119), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(117), 24,
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
  [1625] = 6,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(81), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(79), 21,
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
  [1668] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(123), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(121), 24,
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
    ACTIONS(127), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(125), 24,
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
    ACTIONS(131), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(129), 24,
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
    ACTIONS(135), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(133), 24,
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
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(67), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1873] = 14,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1930] = 14,
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
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_include_preprocessor_directive,
    STATE(172), 1,
      sym_atom,
    STATE(208), 1,
      sym__directive_qualifier,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(15), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(43), 10,
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
  [1986] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(30), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2040] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(25), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2094] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(75), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2148] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(21), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2202] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(71), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2256] = 14,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    ACTIONS(145), 1,
      anon_sym_POUNDinclude,
    ACTIONS(148), 1,
      anon_sym_DOTpragma,
    ACTIONS(151), 1,
      sym_identifier,
    ACTIONS(154), 1,
      sym_decl_kw,
    ACTIONS(160), 1,
      sym_type_kw,
    ACTIONS(163), 1,
      sym_include_kw,
    STATE(118), 1,
      sym_include_preprocessor_directive,
    STATE(172), 1,
      sym_atom,
    STATE(208), 1,
      sym__directive_qualifier,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(157), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(43), 10,
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
  [2312] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(32), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2366] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(65), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2420] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(70), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2474] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(20), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2528] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(66), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2582] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(76), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2636] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(68), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2690] = 13,
    ACTIONS(25), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_as,
    ACTIONS(39), 1,
      anon_sym_count,
    ACTIONS(41), 1,
      anon_sym_range,
    STATE(19), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(27), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(33), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(45), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(29), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2744] = 6,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(139), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(111), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(109), 17,
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
  [2783] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(132), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(59), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(172), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(170), 10,
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
  [2823] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(121), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(172), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(178), 10,
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
  [2863] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(122), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(172), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(182), 10,
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
  [2903] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(114), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(54), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(172), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(186), 10,
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
  [2943] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(116), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(58), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(172), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(190), 10,
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
  [2983] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(132), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(172), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(170), 10,
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
  [3023] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(120), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(172), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(194), 10,
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
  [3063] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(121), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(55), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(172), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(178), 10,
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
  [3103] = 5,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(200), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(198), 11,
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
  [3138] = 5,
    ACTIONS(207), 1,
      anon_sym_BANG,
    STATE(62), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_string_literal,
      sym_number,
    ACTIONS(210), 14,
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
  [3172] = 10,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(212), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(214), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3216] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(222), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
    ACTIONS(220), 11,
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
  [3245] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
    ACTIONS(224), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3286] = 11,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3329] = 11,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3372] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(232), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3411] = 4,
    ACTIONS(236), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 14,
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
  [3438] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3475] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3512] = 4,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 14,
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
  [3539] = 4,
    ACTIONS(243), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(245), 14,
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
  [3566] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3603] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3640] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(218), 1,
      anon_sym_bshr,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(87), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(216), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3677] = 3,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 14,
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
  [3701] = 5,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 12,
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
  [3729] = 5,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(261), 1,
      anon_sym_LPAREN,
    STATE(81), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(257), 11,
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
  [3756] = 4,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(80), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(263), 12,
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
  [3781] = 5,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 11,
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
  [3808] = 4,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 11,
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
  [3832] = 9,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(90), 1,
      sym_adt_branch,
    STATE(95), 1,
      sym_qualified_name,
    STATE(102), 1,
      sym_type_name,
    STATE(107), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(130), 3,
      sym_union_type,
      sym_record_type,
      sym_abstract_data_type,
    ACTIONS(278), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3866] = 4,
    ACTIONS(284), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 11,
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
  [3890] = 4,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    STATE(84), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(287), 11,
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
  [3914] = 4,
    ACTIONS(293), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(291), 11,
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
  [3938] = 4,
    ACTIONS(289), 1,
      anon_sym_PIPE,
    STATE(85), 1,
      aux_sym_union_type_repeat1,
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
  [3962] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(263), 13,
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
  [3982] = 4,
    ACTIONS(300), 1,
      sym_plan_kw,
    STATE(126), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 11,
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
  [4006] = 4,
    ACTIONS(304), 1,
      anon_sym_PIPE,
    STATE(92), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 11,
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
  [4030] = 4,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(86), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 11,
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
  [4054] = 4,
    ACTIONS(304), 1,
      anon_sym_PIPE,
    STATE(94), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 11,
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
  [4078] = 4,
    ACTIONS(300), 1,
      sym_plan_kw,
    STATE(131), 1,
      sym_query_plan,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4102] = 4,
    ACTIONS(314), 1,
      anon_sym_PIPE,
    STATE(94), 1,
      aux_sym_abstract_data_type_repeat1,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4126] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(317), 12,
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
  [4145] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(319), 12,
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
  [4164] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(321), 12,
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
  [4183] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(291), 12,
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
  [4202] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(323), 12,
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
  [4221] = 3,
    ACTIONS(327), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(325), 11,
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
  [4242] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 12,
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
  [4261] = 3,
    ACTIONS(333), 1,
      anon_sym_PIPE,
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
  [4282] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 12,
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
  [4301] = 2,
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
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [4320] = 2,
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
  [4339] = 2,
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
  [4358] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(341), 12,
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
  [4377] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 12,
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
  [4396] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(343), 12,
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
  [4415] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(345), 11,
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
  [4433] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 11,
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
  [4451] = 2,
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
  [4469] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(351), 11,
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
  [4487] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(178), 11,
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
  [4505] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(353), 11,
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
  [4523] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(170), 11,
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
  [4541] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(355), 11,
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
  [4559] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(357), 11,
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
  [4577] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(359), 11,
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
  [4595] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(361), 11,
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
  [4613] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 11,
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
  [4631] = 2,
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
  [4649] = 2,
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
  [4667] = 2,
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
  [4685] = 2,
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
  [4703] = 2,
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
  [4721] = 2,
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
  [4739] = 2,
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
  [4757] = 2,
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
  [4775] = 2,
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
  [4793] = 2,
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
  [4811] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(194), 11,
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
  [4829] = 6,
    ACTIONS(383), 1,
      sym_identifier,
    STATE(165), 1,
      sym_primitive_type,
    STATE(174), 1,
      sym_qualified_name,
    STATE(224), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(381), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4852] = 6,
    ACTIONS(385), 1,
      sym_identifier,
    STATE(95), 1,
      sym_qualified_name,
    STATE(107), 1,
      sym_primitive_type,
    STATE(112), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4875] = 6,
    ACTIONS(385), 1,
      sym_identifier,
    STATE(95), 1,
      sym_qualified_name,
    STATE(103), 1,
      sym_type_name,
    STATE(107), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4898] = 6,
    ACTIONS(385), 1,
      sym_identifier,
    STATE(87), 1,
      sym_type_name,
    STATE(95), 1,
      sym_qualified_name,
    STATE(107), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4921] = 6,
    ACTIONS(383), 1,
      sym_identifier,
    STATE(165), 1,
      sym_primitive_type,
    STATE(167), 1,
      sym_type_name,
    STATE(174), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(381), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4944] = 4,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(139), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(166), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4962] = 4,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(245), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4980] = 4,
    ACTIONS(387), 1,
      anon_sym_DOT,
    STATE(140), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4998] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(392), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5015] = 4,
    ACTIONS(394), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(397), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5032] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(149), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(399), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5049] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5066] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(403), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5083] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5100] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(392), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5117] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5130] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(405), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5147] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(405), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5164] = 6,
    ACTIONS(407), 1,
      sym_string_literal,
    ACTIONS(409), 1,
      sym_identifier,
    STATE(209), 1,
      sym_boolean_literal,
    STATE(210), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
  [5185] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(411), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5197] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(413), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5209] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(397), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5221] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5233] = 4,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    STATE(160), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5249] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(421), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5261] = 4,
    ACTIONS(425), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5277] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(428), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5289] = 4,
    ACTIONS(419), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(430), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5305] = 4,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5321] = 5,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(98), 1,
      sym_choice_domain_attribute,
    STATE(106), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5338] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5349] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(441), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_atom,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5366] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(341), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5377] = 4,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5392] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(446), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5403] = 4,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5418] = 4,
    ACTIONS(453), 1,
      anon_sym_EQ,
    ACTIONS(455), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(125), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [5433] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5444] = 5,
    ACTIONS(437), 1,
      anon_sym_LPAREN,
    ACTIONS(439), 1,
      sym_identifier,
    STATE(82), 1,
      sym_choice_domain_attribute,
    STATE(106), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5461] = 5,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(459), 1,
      anon_sym_COLON_DASH,
    ACTIONS(461), 1,
      anon_sym_DOT,
    STATE(178), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5478] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(463), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_atom,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5495] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(317), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5506] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5517] = 4,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5531] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5545] = 4,
    ACTIONS(457), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_COLON_DASH,
    STATE(195), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5559] = 4,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5573] = 4,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(477), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5587] = 4,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5601] = 4,
    ACTIONS(483), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(177), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5615] = 4,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(166), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5629] = 4,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
    STATE(197), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5643] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5657] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5671] = 4,
    ACTIONS(495), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5685] = 4,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(185), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5699] = 4,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5713] = 4,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5727] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(206), 1,
      sym_atom,
    STATE(229), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5741] = 4,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5755] = 4,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(506), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5769] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5779] = 4,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_COLON_DASH,
    STATE(195), 1,
      aux_sym_rule_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5793] = 4,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RPAREN,
    STATE(180), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5807] = 4,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5821] = 4,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5835] = 4,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_LPAREN,
    STATE(181), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5849] = 4,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(184), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5863] = 4,
    ACTIONS(469), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(187), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5877] = 3,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(198), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5888] = 3,
    ACTIONS(525), 1,
      sym_identifier,
    STATE(88), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5899] = 3,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(211), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5910] = 3,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(196), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5921] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(511), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [5930] = 3,
    ACTIONS(527), 1,
      sym_identifier,
    STATE(108), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5941] = 3,
    ACTIONS(525), 1,
      sym_identifier,
    STATE(79), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5952] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5961] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(531), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5970] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(498), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5979] = 3,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(170), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5990] = 3,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(193), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6001] = 2,
    ACTIONS(533), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6009] = 2,
    ACTIONS(535), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6017] = 2,
    ACTIONS(537), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6025] = 2,
    ACTIONS(539), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6033] = 2,
    ACTIONS(541), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6041] = 2,
    ACTIONS(543), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6049] = 2,
    ACTIONS(545), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6057] = 2,
    ACTIONS(547), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6065] = 2,
    ACTIONS(549), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6073] = 2,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6081] = 2,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6089] = 2,
    ACTIONS(555), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6097] = 2,
    ACTIONS(557), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6105] = 2,
    ACTIONS(559), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6113] = 2,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6121] = 2,
    ACTIONS(561), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6129] = 2,
    ACTIONS(563), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6137] = 2,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6145] = 2,
    ACTIONS(567), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6153] = 2,
    ACTIONS(569), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6161] = 2,
    ACTIONS(571), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6169] = 2,
    ACTIONS(573), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6177] = 2,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6185] = 2,
    ACTIONS(577), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6193] = 2,
    ACTIONS(579), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6201] = 2,
    ACTIONS(581), 1,
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
  [SMALL_STATE(17)] = 1124,
  [SMALL_STATE(18)] = 1161,
  [SMALL_STATE(19)] = 1198,
  [SMALL_STATE(20)] = 1245,
  [SMALL_STATE(21)] = 1290,
  [SMALL_STATE(22)] = 1329,
  [SMALL_STATE(23)] = 1366,
  [SMALL_STATE(24)] = 1403,
  [SMALL_STATE(25)] = 1440,
  [SMALL_STATE(26)] = 1477,
  [SMALL_STATE(27)] = 1514,
  [SMALL_STATE(28)] = 1551,
  [SMALL_STATE(29)] = 1588,
  [SMALL_STATE(30)] = 1625,
  [SMALL_STATE(31)] = 1668,
  [SMALL_STATE(32)] = 1705,
  [SMALL_STATE(33)] = 1742,
  [SMALL_STATE(34)] = 1779,
  [SMALL_STATE(35)] = 1816,
  [SMALL_STATE(36)] = 1873,
  [SMALL_STATE(37)] = 1930,
  [SMALL_STATE(38)] = 1986,
  [SMALL_STATE(39)] = 2040,
  [SMALL_STATE(40)] = 2094,
  [SMALL_STATE(41)] = 2148,
  [SMALL_STATE(42)] = 2202,
  [SMALL_STATE(43)] = 2256,
  [SMALL_STATE(44)] = 2312,
  [SMALL_STATE(45)] = 2366,
  [SMALL_STATE(46)] = 2420,
  [SMALL_STATE(47)] = 2474,
  [SMALL_STATE(48)] = 2528,
  [SMALL_STATE(49)] = 2582,
  [SMALL_STATE(50)] = 2636,
  [SMALL_STATE(51)] = 2690,
  [SMALL_STATE(52)] = 2744,
  [SMALL_STATE(53)] = 2783,
  [SMALL_STATE(54)] = 2823,
  [SMALL_STATE(55)] = 2863,
  [SMALL_STATE(56)] = 2903,
  [SMALL_STATE(57)] = 2943,
  [SMALL_STATE(58)] = 2983,
  [SMALL_STATE(59)] = 3023,
  [SMALL_STATE(60)] = 3063,
  [SMALL_STATE(61)] = 3103,
  [SMALL_STATE(62)] = 3138,
  [SMALL_STATE(63)] = 3172,
  [SMALL_STATE(64)] = 3216,
  [SMALL_STATE(65)] = 3245,
  [SMALL_STATE(66)] = 3286,
  [SMALL_STATE(67)] = 3329,
  [SMALL_STATE(68)] = 3372,
  [SMALL_STATE(69)] = 3411,
  [SMALL_STATE(70)] = 3438,
  [SMALL_STATE(71)] = 3475,
  [SMALL_STATE(72)] = 3512,
  [SMALL_STATE(73)] = 3539,
  [SMALL_STATE(74)] = 3566,
  [SMALL_STATE(75)] = 3603,
  [SMALL_STATE(76)] = 3640,
  [SMALL_STATE(77)] = 3677,
  [SMALL_STATE(78)] = 3701,
  [SMALL_STATE(79)] = 3729,
  [SMALL_STATE(80)] = 3756,
  [SMALL_STATE(81)] = 3781,
  [SMALL_STATE(82)] = 3808,
  [SMALL_STATE(83)] = 3832,
  [SMALL_STATE(84)] = 3866,
  [SMALL_STATE(85)] = 3890,
  [SMALL_STATE(86)] = 3914,
  [SMALL_STATE(87)] = 3938,
  [SMALL_STATE(88)] = 3962,
  [SMALL_STATE(89)] = 3982,
  [SMALL_STATE(90)] = 4006,
  [SMALL_STATE(91)] = 4030,
  [SMALL_STATE(92)] = 4054,
  [SMALL_STATE(93)] = 4078,
  [SMALL_STATE(94)] = 4102,
  [SMALL_STATE(95)] = 4126,
  [SMALL_STATE(96)] = 4145,
  [SMALL_STATE(97)] = 4164,
  [SMALL_STATE(98)] = 4183,
  [SMALL_STATE(99)] = 4202,
  [SMALL_STATE(100)] = 4221,
  [SMALL_STATE(101)] = 4242,
  [SMALL_STATE(102)] = 4261,
  [SMALL_STATE(103)] = 4282,
  [SMALL_STATE(104)] = 4301,
  [SMALL_STATE(105)] = 4320,
  [SMALL_STATE(106)] = 4339,
  [SMALL_STATE(107)] = 4358,
  [SMALL_STATE(108)] = 4377,
  [SMALL_STATE(109)] = 4396,
  [SMALL_STATE(110)] = 4415,
  [SMALL_STATE(111)] = 4433,
  [SMALL_STATE(112)] = 4451,
  [SMALL_STATE(113)] = 4469,
  [SMALL_STATE(114)] = 4487,
  [SMALL_STATE(115)] = 4505,
  [SMALL_STATE(116)] = 4523,
  [SMALL_STATE(117)] = 4541,
  [SMALL_STATE(118)] = 4559,
  [SMALL_STATE(119)] = 4577,
  [SMALL_STATE(120)] = 4595,
  [SMALL_STATE(121)] = 4613,
  [SMALL_STATE(122)] = 4631,
  [SMALL_STATE(123)] = 4649,
  [SMALL_STATE(124)] = 4667,
  [SMALL_STATE(125)] = 4685,
  [SMALL_STATE(126)] = 4703,
  [SMALL_STATE(127)] = 4721,
  [SMALL_STATE(128)] = 4739,
  [SMALL_STATE(129)] = 4757,
  [SMALL_STATE(130)] = 4775,
  [SMALL_STATE(131)] = 4793,
  [SMALL_STATE(132)] = 4811,
  [SMALL_STATE(133)] = 4829,
  [SMALL_STATE(134)] = 4852,
  [SMALL_STATE(135)] = 4875,
  [SMALL_STATE(136)] = 4898,
  [SMALL_STATE(137)] = 4921,
  [SMALL_STATE(138)] = 4944,
  [SMALL_STATE(139)] = 4962,
  [SMALL_STATE(140)] = 4980,
  [SMALL_STATE(141)] = 4998,
  [SMALL_STATE(142)] = 5015,
  [SMALL_STATE(143)] = 5032,
  [SMALL_STATE(144)] = 5049,
  [SMALL_STATE(145)] = 5066,
  [SMALL_STATE(146)] = 5083,
  [SMALL_STATE(147)] = 5100,
  [SMALL_STATE(148)] = 5117,
  [SMALL_STATE(149)] = 5130,
  [SMALL_STATE(150)] = 5147,
  [SMALL_STATE(151)] = 5164,
  [SMALL_STATE(152)] = 5185,
  [SMALL_STATE(153)] = 5197,
  [SMALL_STATE(154)] = 5209,
  [SMALL_STATE(155)] = 5221,
  [SMALL_STATE(156)] = 5233,
  [SMALL_STATE(157)] = 5249,
  [SMALL_STATE(158)] = 5261,
  [SMALL_STATE(159)] = 5277,
  [SMALL_STATE(160)] = 5289,
  [SMALL_STATE(161)] = 5305,
  [SMALL_STATE(162)] = 5321,
  [SMALL_STATE(163)] = 5338,
  [SMALL_STATE(164)] = 5349,
  [SMALL_STATE(165)] = 5366,
  [SMALL_STATE(166)] = 5377,
  [SMALL_STATE(167)] = 5392,
  [SMALL_STATE(168)] = 5403,
  [SMALL_STATE(169)] = 5418,
  [SMALL_STATE(170)] = 5433,
  [SMALL_STATE(171)] = 5444,
  [SMALL_STATE(172)] = 5461,
  [SMALL_STATE(173)] = 5478,
  [SMALL_STATE(174)] = 5495,
  [SMALL_STATE(175)] = 5506,
  [SMALL_STATE(176)] = 5517,
  [SMALL_STATE(177)] = 5531,
  [SMALL_STATE(178)] = 5545,
  [SMALL_STATE(179)] = 5559,
  [SMALL_STATE(180)] = 5573,
  [SMALL_STATE(181)] = 5587,
  [SMALL_STATE(182)] = 5601,
  [SMALL_STATE(183)] = 5615,
  [SMALL_STATE(184)] = 5629,
  [SMALL_STATE(185)] = 5643,
  [SMALL_STATE(186)] = 5657,
  [SMALL_STATE(187)] = 5671,
  [SMALL_STATE(188)] = 5685,
  [SMALL_STATE(189)] = 5699,
  [SMALL_STATE(190)] = 5713,
  [SMALL_STATE(191)] = 5727,
  [SMALL_STATE(192)] = 5741,
  [SMALL_STATE(193)] = 5755,
  [SMALL_STATE(194)] = 5769,
  [SMALL_STATE(195)] = 5779,
  [SMALL_STATE(196)] = 5793,
  [SMALL_STATE(197)] = 5807,
  [SMALL_STATE(198)] = 5821,
  [SMALL_STATE(199)] = 5835,
  [SMALL_STATE(200)] = 5849,
  [SMALL_STATE(201)] = 5863,
  [SMALL_STATE(202)] = 5877,
  [SMALL_STATE(203)] = 5888,
  [SMALL_STATE(204)] = 5899,
  [SMALL_STATE(205)] = 5910,
  [SMALL_STATE(206)] = 5921,
  [SMALL_STATE(207)] = 5930,
  [SMALL_STATE(208)] = 5941,
  [SMALL_STATE(209)] = 5952,
  [SMALL_STATE(210)] = 5961,
  [SMALL_STATE(211)] = 5970,
  [SMALL_STATE(212)] = 5979,
  [SMALL_STATE(213)] = 5990,
  [SMALL_STATE(214)] = 6001,
  [SMALL_STATE(215)] = 6009,
  [SMALL_STATE(216)] = 6017,
  [SMALL_STATE(217)] = 6025,
  [SMALL_STATE(218)] = 6033,
  [SMALL_STATE(219)] = 6041,
  [SMALL_STATE(220)] = 6049,
  [SMALL_STATE(221)] = 6057,
  [SMALL_STATE(222)] = 6065,
  [SMALL_STATE(223)] = 6073,
  [SMALL_STATE(224)] = 6081,
  [SMALL_STATE(225)] = 6089,
  [SMALL_STATE(226)] = 6097,
  [SMALL_STATE(227)] = 6105,
  [SMALL_STATE(228)] = 6113,
  [SMALL_STATE(229)] = 6121,
  [SMALL_STATE(230)] = 6129,
  [SMALL_STATE(231)] = 6137,
  [SMALL_STATE(232)] = 6145,
  [SMALL_STATE(233)] = 6153,
  [SMALL_STATE(234)] = 6161,
  [SMALL_STATE(235)] = 6169,
  [SMALL_STATE(236)] = 6177,
  [SMALL_STATE(237)] = 6185,
  [SMALL_STATE(238)] = 6193,
  [SMALL_STATE(239)] = 6201,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 11),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 11),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 12),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 12),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(138),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(237),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(234),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 8),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 8),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 8),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 8),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 8),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 8),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(64),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(62),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(239),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(203),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(135),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(162),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 6),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(207),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 10),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 5),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 8),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 6, .production_id = 6),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_preprocessor_directive, 2, .production_id = 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(225),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(12),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(10),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(212),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(50),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 7),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(220),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(204),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2), SHIFT_REPEAT(191),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_repeat1, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 9),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [565] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
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
