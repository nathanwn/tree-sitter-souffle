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
#define STATE_COUNT 239
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 138
#define ALIAS_COUNT 4
#define TOKEN_COUNT 77
#define EXTERNAL_TOKEN_COUNT 8
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 12

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
  sym_rule_head = 87,
  sym_subsumption_head = 88,
  sym_disjunction = 89,
  sym_conjunction = 90,
  sym_constraint = 91,
  sym_binary_constraint = 92,
  sym_query_plan = 93,
  sym_directive = 94,
  sym__directive_qualifier = 95,
  sym_directive_attribute_assignment = 96,
  sym_directive_value = 97,
  sym_include_directive = 98,
  sym_qualified_name = 99,
  sym_argument = 100,
  sym_constant = 101,
  sym_variable = 102,
  sym_argument_list = 103,
  sym_unary_operation = 104,
  sym_binary_operation = 105,
  sym_type_conversion = 106,
  sym_aggregator = 107,
  sym_range_expression = 108,
  sym_attribute = 109,
  sym_fact = 110,
  sym_type_decl = 111,
  sym_subtype_decl = 112,
  sym_eq_type_decl = 113,
  sym_union_type = 114,
  sym_type_name = 115,
  sym_record_type = 116,
  sym_abstract_data_type = 117,
  sym_adt_branch = 118,
  sym_primitive_type = 119,
  sym_pragma = 120,
  sym_atom = 121,
  sym_boolean_literal = 122,
  aux_sym_source_file_repeat1 = 123,
  aux_sym_relation_decl_repeat1 = 124,
  aux_sym_relation_decl_repeat2 = 125,
  aux_sym_relation_decl_repeat3 = 126,
  aux_sym_choice_domain_repeat1 = 127,
  aux_sym_rule_head_repeat1 = 128,
  aux_sym_disjunction_repeat1 = 129,
  aux_sym_conjunction_repeat1 = 130,
  aux_sym_conjunction_repeat2 = 131,
  aux_sym_directive_repeat1 = 132,
  aux_sym_directive_repeat2 = 133,
  aux_sym_qualified_name_repeat1 = 134,
  aux_sym_argument_list_repeat1 = 135,
  aux_sym_union_type_repeat1 = 136,
  aux_sym_abstract_data_type_repeat1 = 137,
  alias_sym_attribute_name = 138,
  alias_sym_choice_domain_single_attribute = 139,
  alias_sym_path_spec = 140,
  alias_sym_user_defined_type_name = 141,
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
  field_body = 1,
  field_directive_attribute = 2,
  field_directive_value = 3,
  field_head = 4,
  field_range_from = 5,
  field_range_step = 6,
  field_range_to = 7,
  field_relation_name = 8,
  field_type_ref = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_directive_attribute] = "directive_attribute",
  [field_directive_value] = "directive_value",
  [field_head] = "head",
  [field_range_from] = "range_from",
  [field_range_step] = "range_step",
  [field_range_to] = "range_to",
  [field_relation_name] = "relation_name",
  [field_type_ref] = "type_ref",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 2},
  [5] = {.index = 3, .length = 1},
  [7] = {.index = 4, .length = 2},
  [8] = {.index = 6, .length = 2},
  [10] = {.index = 8, .length = 2},
  [11] = {.index = 10, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type_ref, 1},
  [1] =
    {field_body, 2},
    {field_head, 0},
  [3] =
    {field_relation_name, 1},
  [4] =
    {field_relation_name, 1},
    {field_relation_name, 2},
  [6] =
    {field_directive_attribute, 0},
    {field_directive_value, 2},
  [8] =
    {field_range_from, 2},
    {field_range_to, 4},
  [10] =
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
  [135] = 71,
  [136] = 68,
  [137] = 69,
  [138] = 138,
  [139] = 76,
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
  [162] = 96,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 102,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 95,
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
  [238] = 222,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(142);
      if (lookahead == '!') ADVANCE(170);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(173);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == '_') ADVANCE(179);
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
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(173);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(191);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(189);
      if (lookahead == '+') ADVANCE(192);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(190);
      if (lookahead == ':') ADVANCE(214);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(173);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '^') ADVANCE(188);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(320);
      if (lookahead == 'b') ADVANCE(296);
      if (lookahead == 'c') ADVANCE(307);
      if (lookahead == 'l') ADVANCE(298);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 'n') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(240);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(237);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(288);
      if (lookahead == 'n') ADVANCE(329);
      if (lookahead == 's') ADVANCE(333);
      if (lookahead == 'u') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(220);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(167);
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
      if (lookahead == 'a') ADVANCE(230);
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
      if (lookahead == 'c') ADVANCE(155);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(193);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(226);
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
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(233);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(157);
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
      if (lookahead == 'x') ADVANCE(204);
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
      if (lookahead == 'l') ADVANCE(177);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(199);
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(224);
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
      if (lookahead == 'm') ADVANCE(210);
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
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(206);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(163);
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
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(222);
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
      if (lookahead == 's') ADVANCE(202);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(184);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(212);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(228);
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
          lookahead == '-') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 139:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 140:
      if (eof) ADVANCE(142);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '|') ADVANCE(221);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 141:
      if (eof) ADVANCE(142);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'c') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead == 'i') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(306);
      if (lookahead == 'o') ADVANCE(331);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(220);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(167);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(236);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(236);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(332);
      if (lookahead == 'e') ADVANCE(245);
      if (lookahead == 'i') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(304);
      if (lookahead == 'm') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 't') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '_') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(335);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(339);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 140, .external_lex_state = 2},
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
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
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
  [34] = {.lex_state = 140, .external_lex_state = 2},
  [35] = {.lex_state = 140, .external_lex_state = 2},
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
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 141, .external_lex_state = 2},
  [53] = {.lex_state = 141, .external_lex_state = 2},
  [54] = {.lex_state = 141, .external_lex_state = 2},
  [55] = {.lex_state = 141, .external_lex_state = 2},
  [56] = {.lex_state = 141, .external_lex_state = 2},
  [57] = {.lex_state = 141, .external_lex_state = 2},
  [58] = {.lex_state = 141, .external_lex_state = 2},
  [59] = {.lex_state = 141, .external_lex_state = 2},
  [60] = {.lex_state = 141, .external_lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 141, .external_lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 140, .external_lex_state = 2},
  [69] = {.lex_state = 140, .external_lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 140, .external_lex_state = 2},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 140, .external_lex_state = 2},
  [77] = {.lex_state = 140, .external_lex_state = 2},
  [78] = {.lex_state = 140, .external_lex_state = 2},
  [79] = {.lex_state = 140, .external_lex_state = 2},
  [80] = {.lex_state = 140, .external_lex_state = 2},
  [81] = {.lex_state = 140, .external_lex_state = 2},
  [82] = {.lex_state = 140, .external_lex_state = 2},
  [83] = {.lex_state = 140, .external_lex_state = 2},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 140, .external_lex_state = 1},
  [86] = {.lex_state = 140, .external_lex_state = 2},
  [87] = {.lex_state = 140, .external_lex_state = 2},
  [88] = {.lex_state = 140, .external_lex_state = 2},
  [89] = {.lex_state = 140, .external_lex_state = 2},
  [90] = {.lex_state = 140, .external_lex_state = 2},
  [91] = {.lex_state = 140, .external_lex_state = 2},
  [92] = {.lex_state = 140, .external_lex_state = 2},
  [93] = {.lex_state = 140, .external_lex_state = 2},
  [94] = {.lex_state = 140, .external_lex_state = 2},
  [95] = {.lex_state = 140, .external_lex_state = 2},
  [96] = {.lex_state = 140, .external_lex_state = 2},
  [97] = {.lex_state = 140, .external_lex_state = 2},
  [98] = {.lex_state = 140, .external_lex_state = 2},
  [99] = {.lex_state = 140, .external_lex_state = 2},
  [100] = {.lex_state = 140, .external_lex_state = 2},
  [101] = {.lex_state = 140, .external_lex_state = 2},
  [102] = {.lex_state = 140, .external_lex_state = 2},
  [103] = {.lex_state = 140, .external_lex_state = 2},
  [104] = {.lex_state = 140, .external_lex_state = 2},
  [105] = {.lex_state = 140, .external_lex_state = 2},
  [106] = {.lex_state = 140, .external_lex_state = 2},
  [107] = {.lex_state = 140, .external_lex_state = 2},
  [108] = {.lex_state = 140, .external_lex_state = 2},
  [109] = {.lex_state = 140, .external_lex_state = 2},
  [110] = {.lex_state = 140, .external_lex_state = 2},
  [111] = {.lex_state = 140, .external_lex_state = 2},
  [112] = {.lex_state = 140, .external_lex_state = 2},
  [113] = {.lex_state = 140, .external_lex_state = 2},
  [114] = {.lex_state = 140, .external_lex_state = 2},
  [115] = {.lex_state = 140, .external_lex_state = 2},
  [116] = {.lex_state = 140, .external_lex_state = 2},
  [117] = {.lex_state = 140, .external_lex_state = 2},
  [118] = {.lex_state = 140, .external_lex_state = 2},
  [119] = {.lex_state = 140, .external_lex_state = 2},
  [120] = {.lex_state = 140, .external_lex_state = 2},
  [121] = {.lex_state = 140, .external_lex_state = 2},
  [122] = {.lex_state = 140, .external_lex_state = 2},
  [123] = {.lex_state = 140, .external_lex_state = 2},
  [124] = {.lex_state = 140, .external_lex_state = 2},
  [125] = {.lex_state = 140, .external_lex_state = 2},
  [126] = {.lex_state = 140, .external_lex_state = 2},
  [127] = {.lex_state = 140, .external_lex_state = 2},
  [128] = {.lex_state = 140, .external_lex_state = 2},
  [129] = {.lex_state = 140, .external_lex_state = 2},
  [130] = {.lex_state = 12},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 12},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
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
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 140},
  [161] = {.lex_state = 140},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 140},
  [164] = {.lex_state = 140},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 140},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 140},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 140},
  [182] = {.lex_state = 140},
  [183] = {.lex_state = 140},
  [184] = {.lex_state = 140},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 140},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 140},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 140},
  [201] = {.lex_state = 140},
  [202] = {.lex_state = 140},
  [203] = {.lex_state = 140},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 140},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 140},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 140},
  [210] = {.lex_state = 140},
  [211] = {.lex_state = 140},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 3},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 140},
  [218] = {.lex_state = 140},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 140},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 140},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 140},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 140},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 140},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 140},
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
    [sym_source_file] = STATE(230),
    [sym__element] = STATE(35),
    [sym_preprocessor_directive] = STATE(35),
    [sym_include_preprocessor_directive] = STATE(111),
    [sym_relation_decl] = STATE(35),
    [sym_rule] = STATE(35),
    [sym_rule_head] = STATE(229),
    [sym_subsumption_head] = STATE(229),
    [sym_directive] = STATE(35),
    [sym__directive_qualifier] = STATE(202),
    [sym_include_directive] = STATE(35),
    [sym_qualified_name] = STATE(227),
    [sym_fact] = STATE(35),
    [sym_type_decl] = STATE(35),
    [sym_pragma] = STATE(35),
    [sym_atom] = STATE(154),
    [aux_sym_source_file_repeat1] = STATE(35),
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
    STATE(61), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(227), 1,
      sym_qualified_name,
    STATE(228), 1,
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
    STATE(146), 2,
      sym_constraint,
      sym_atom,
    STATE(150), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
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
    STATE(61), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(221), 1,
      sym_disjunction,
    STATE(227), 1,
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
    STATE(146), 2,
      sym_constraint,
      sym_atom,
    STATE(150), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
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
    STATE(61), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(212), 1,
      sym_disjunction,
    STATE(227), 1,
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
    STATE(146), 2,
      sym_constraint,
      sym_atom,
    STATE(150), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
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
    STATE(61), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(227), 1,
      sym_qualified_name,
    STATE(235), 1,
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
    STATE(146), 2,
      sym_constraint,
      sym_atom,
    STATE(150), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
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
    STATE(61), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(213), 1,
      sym_disjunction,
    STATE(227), 1,
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
    STATE(146), 2,
      sym_constraint,
      sym_atom,
    STATE(150), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
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
    STATE(61), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(224), 1,
      sym_disjunction,
    STATE(227), 1,
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
    STATE(146), 2,
      sym_constraint,
      sym_atom,
    STATE(150), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
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
    STATE(61), 1,
      sym_argument,
    STATE(149), 1,
      sym_conjunction,
    STATE(227), 1,
      sym_qualified_name,
    STATE(237), 1,
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
    STATE(146), 2,
      sym_constraint,
      sym_atom,
    STATE(150), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [602] = 22,
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
    STATE(61), 1,
      sym_argument,
    STATE(169), 1,
      sym_conjunction,
    STATE(227), 1,
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
    STATE(146), 2,
      sym_constraint,
      sym_atom,
    STATE(150), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [685] = 21,
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
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(61), 1,
      sym_argument,
    STATE(227), 1,
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
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(153), 2,
      sym_constraint,
      sym_atom,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [765] = 21,
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
    STATE(61), 1,
      sym_argument,
    STATE(62), 1,
      aux_sym_conjunction_repeat1,
    STATE(227), 1,
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
    STATE(141), 2,
      sym_constraint,
      sym_atom,
    STATE(150), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [845] = 21,
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
    ACTIONS(55), 1,
      anon_sym_BANG,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_argument,
    STATE(62), 1,
      aux_sym_conjunction_repeat1,
    STATE(227), 1,
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
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(151), 2,
      sym_constraint,
      sym_atom,
    ACTIONS(37), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [925] = 3,
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
  [963] = 3,
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
  [1001] = 3,
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
  [1038] = 3,
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
  [1075] = 7,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(75), 19,
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
  [1120] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(89), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(87), 24,
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
  [1157] = 3,
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
  [1194] = 4,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(75), 23,
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
  [1233] = 3,
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
  [1270] = 6,
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
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(75), 21,
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
  [1313] = 8,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(77), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(75), 16,
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
  [1360] = 3,
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
  [1397] = 3,
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
  [1434] = 3,
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
  [1471] = 3,
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
  [1508] = 3,
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
  [1545] = 3,
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
  [1582] = 3,
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
  [1619] = 3,
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
  [1656] = 3,
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
  [1693] = 3,
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
  [1730] = 15,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    ACTIONS(139), 1,
      anon_sym_POUNDinclude,
    ACTIONS(142), 1,
      anon_sym_DOTpragma,
    ACTIONS(145), 1,
      sym_identifier,
    ACTIONS(148), 1,
      sym_decl_kw,
    ACTIONS(154), 1,
      sym_type_kw,
    ACTIONS(157), 1,
      sym_include_kw,
    STATE(111), 1,
      sym_include_preprocessor_directive,
    STATE(154), 1,
      sym_atom,
    STATE(202), 1,
      sym__directive_qualifier,
    STATE(227), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(229), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(151), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(34), 10,
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
  [1790] = 15,
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
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      sym_include_preprocessor_directive,
    STATE(154), 1,
      sym_atom,
    STATE(202), 1,
      sym__directive_qualifier,
    STATE(227), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(229), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(15), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(34), 10,
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
  [1850] = 14,
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
    ACTIONS(162), 1,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1907] = 14,
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
    ACTIONS(164), 1,
      anon_sym_RPAREN,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1964] = 13,
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
    STATE(73), 1,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2018] = 13,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2072] = 13,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2126] = 13,
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
    STATE(64), 1,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2180] = 13,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2234] = 13,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2288] = 13,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2342] = 13,
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
    STATE(72), 1,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2396] = 13,
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
    STATE(22), 1,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2450] = 13,
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
    STATE(23), 1,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2504] = 13,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2558] = 13,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2612] = 13,
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
    STATE(17), 1,
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
    STATE(26), 8,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2666] = 6,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(135), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(135), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(133), 17,
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
  [2705] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(128), 1,
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
  [2745] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(180), 1,
      sym_identifier,
    STATE(116), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(60), 2,
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
  [2785] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(124), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(60), 2,
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
  [2825] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(119), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(53), 2,
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
  [2865] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(184), 1,
      sym_identifier,
    STATE(124), 1,
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
  [2905] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(117), 1,
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
  [2945] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(188), 1,
      sym_identifier,
    STATE(119), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(60), 2,
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
  [2985] = 7,
    ACTIONS(174), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(115), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(60), 2,
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
  [3025] = 5,
    ACTIONS(203), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(60), 2,
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
  [3060] = 10,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(207), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(205), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(209), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3104] = 5,
    ACTIONS(215), 1,
      anon_sym_BANG,
    STATE(62), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(213), 5,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DASH,
      sym_string_literal,
      sym_number,
    ACTIONS(218), 14,
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
  [3138] = 3,
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
  [3167] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(209), 5,
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
  [3208] = 11,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(228), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(209), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3251] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(230), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(209), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3290] = 11,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(209), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3333] = 4,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(71), 1,
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
  [3360] = 4,
    ACTIONS(238), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(236), 14,
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
  [3387] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(209), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3424] = 4,
    ACTIONS(234), 1,
      anon_sym_DOT,
    STATE(69), 1,
      aux_sym_qualified_name_repeat1,
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
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [3451] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(245), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(209), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3488] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(209), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3525] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(249), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(209), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3562] = 9,
    ACTIONS(81), 1,
      anon_sym_CARET,
    ACTIONS(85), 1,
      anon_sym_SLASH,
    ACTIONS(211), 1,
      anon_sym_bshr,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(83), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(95), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(209), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3599] = 3,
    ACTIONS(253), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(236), 14,
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
  [3623] = 5,
    ACTIONS(234), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
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
  [3651] = 4,
    ACTIONS(259), 1,
      anon_sym_COMMA,
    STATE(78), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(257), 12,
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
  [3676] = 5,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [3703] = 5,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_LPAREN,
    STATE(78), 1,
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
  [3730] = 4,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(87), 1,
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
  [3754] = 4,
    ACTIONS(278), 1,
      anon_sym_PIPE,
    STATE(91), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(276), 11,
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
  [3778] = 4,
    ACTIONS(282), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 11,
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
  [3802] = 9,
    ACTIONS(285), 1,
      anon_sym_LBRACK,
    ACTIONS(289), 1,
      sym_identifier,
    STATE(88), 1,
      sym_adt_branch,
    STATE(95), 1,
      sym_qualified_name,
    STATE(96), 1,
      sym_primitive_type,
    STATE(101), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(118), 3,
      sym_union_type,
      sym_record_type,
      sym_abstract_data_type,
    ACTIONS(287), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [3836] = 4,
    ACTIONS(293), 1,
      sym_plan_kw,
    STATE(126), 1,
      sym_query_plan,
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
  [3860] = 4,
    ACTIONS(297), 1,
      anon_sym_PIPE,
    STATE(92), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(295), 11,
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
  [3884] = 4,
    ACTIONS(301), 1,
      anon_sym_COMMA,
    STATE(87), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(299), 11,
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
  [3908] = 4,
    ACTIONS(278), 1,
      anon_sym_PIPE,
    STATE(82), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(304), 11,
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
  [3932] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(257), 13,
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
  [3952] = 4,
    ACTIONS(274), 1,
      anon_sym_COMMA,
    STATE(81), 1,
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
  [3976] = 4,
    ACTIONS(310), 1,
      anon_sym_PIPE,
    STATE(91), 1,
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
  [4000] = 4,
    ACTIONS(297), 1,
      anon_sym_PIPE,
    STATE(83), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(313), 11,
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
  [4024] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(315), 12,
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
  [4043] = 2,
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
  [4062] = 2,
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
  [4081] = 2,
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
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [4100] = 2,
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
  [4119] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(299), 12,
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
  [4138] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(325), 12,
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
  [4157] = 3,
    ACTIONS(329), 1,
      sym_string_literal,
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
  [4178] = 3,
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
  [4199] = 2,
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
  [4218] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 12,
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
  [4237] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 12,
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
  [4256] = 2,
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
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [4275] = 2,
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
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [4294] = 2,
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
  [4313] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(343), 11,
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
  [4331] = 2,
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
  [4349] = 2,
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
  [4367] = 2,
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
  [4385] = 2,
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
  [4403] = 2,
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
  [4421] = 2,
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
  [4439] = 2,
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
  [4457] = 2,
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
  [4475] = 2,
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
  [4493] = 2,
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
  [4511] = 2,
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
  [4529] = 2,
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
  [4547] = 2,
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
  [4565] = 2,
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
  [4583] = 2,
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
  [4601] = 2,
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
  [4619] = 2,
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
  [4637] = 2,
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
  [4655] = 2,
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
  [4673] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(186), 11,
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
  [4691] = 2,
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
  [4709] = 6,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(95), 1,
      sym_qualified_name,
    STATE(96), 1,
      sym_primitive_type,
    STATE(123), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(287), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4732] = 6,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(86), 1,
      sym_type_name,
    STATE(95), 1,
      sym_qualified_name,
    STATE(96), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(287), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4755] = 6,
    ACTIONS(377), 1,
      sym_identifier,
    STATE(95), 1,
      sym_qualified_name,
    STATE(96), 1,
      sym_primitive_type,
    STATE(103), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(287), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4778] = 6,
    ACTIONS(381), 1,
      sym_identifier,
    STATE(162), 1,
      sym_primitive_type,
    STATE(171), 1,
      sym_type_name,
    STATE(172), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4801] = 6,
    ACTIONS(381), 1,
      sym_identifier,
    STATE(162), 1,
      sym_primitive_type,
    STATE(172), 1,
      sym_qualified_name,
    STATE(219), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4824] = 4,
    ACTIONS(168), 1,
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
  [4842] = 4,
    ACTIONS(168), 1,
      anon_sym_DOT,
    STATE(135), 1,
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
  [4860] = 4,
    ACTIONS(383), 1,
      anon_sym_DOT,
    STATE(137), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(236), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4878] = 4,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(388), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4895] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(236), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [4908] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4925] = 4,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(142), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(395), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4942] = 4,
    ACTIONS(386), 1,
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
  [4959] = 6,
    ACTIONS(397), 1,
      sym_string_literal,
    ACTIONS(399), 1,
      sym_identifier,
    STATE(204), 1,
      sym_boolean_literal,
    STATE(206), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(43), 2,
      anon_sym_true,
      anon_sym_false,
  [4980] = 4,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4997] = 4,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(148), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5014] = 4,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(147), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(403), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5031] = 4,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(395), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5048] = 4,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    STATE(140), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(405), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5065] = 4,
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
  [5081] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(411), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5093] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(413), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5105] = 4,
    ACTIONS(409), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5121] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5133] = 6,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_COLON_DASH,
    ACTIONS(421), 1,
      anon_sym_DOT,
    ACTIONS(423), 1,
      anon_sym_LT_EQ,
    STATE(184), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5153] = 4,
    ACTIONS(427), 1,
      anon_sym_SEMI,
    STATE(155), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5169] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(430), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5181] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(432), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5193] = 4,
    ACTIONS(434), 1,
      anon_sym_COMMA,
    STATE(158), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(437), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5209] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5221] = 5,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      sym_identifier,
    STATE(98), 1,
      sym_choice_domain_attribute,
    STATE(105), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5238] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(445), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_atom,
    STATE(227), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5255] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(321), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5266] = 4,
    ACTIONS(447), 1,
      anon_sym_EQ,
    ACTIONS(449), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(121), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [5281] = 5,
    ACTIONS(441), 1,
      anon_sym_LPAREN,
    ACTIONS(443), 1,
      sym_identifier,
    STATE(90), 1,
      sym_choice_domain_attribute,
    STATE(105), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5298] = 4,
    ACTIONS(451), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(230), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5313] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5324] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(437), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5335] = 4,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5350] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5361] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(30), 1,
      sym_atom,
    STATE(227), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5378] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(461), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5389] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(319), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5400] = 4,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5414] = 4,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5428] = 4,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(471), 1,
      anon_sym_RPAREN,
    STATE(165), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5442] = 4,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(475), 1,
      sym_identifier,
    STATE(179), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5456] = 4,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(178), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5470] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5484] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(479), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5498] = 4,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_LPAREN,
    STATE(187), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5512] = 4,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(199), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5526] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(207), 1,
      sym_atom,
    STATE(227), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5540] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(220), 1,
      sym_atom,
    STATE(227), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5554] = 4,
    ACTIONS(417), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_COLON_DASH,
    STATE(193), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5568] = 4,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5582] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
    STATE(185), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5596] = 4,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5610] = 4,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(498), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5624] = 4,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5638] = 4,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(165), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5652] = 4,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(504), 1,
      anon_sym_RPAREN,
    STATE(174), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5666] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5676] = 4,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_COLON_DASH,
    STATE(193), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5690] = 4,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5704] = 4,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(513), 1,
      anon_sym_RBRACK,
    STATE(158), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5718] = 4,
    ACTIONS(475), 1,
      sym_identifier,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5732] = 4,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    STATE(158), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5746] = 4,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RBRACE,
    STATE(158), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5760] = 4,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5774] = 3,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(167), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5785] = 3,
    ACTIONS(475), 1,
      sym_identifier,
    STATE(208), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5796] = 3,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(79), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5807] = 3,
    ACTIONS(525), 1,
      sym_identifier,
    STATE(104), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5818] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(527), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5827] = 3,
    ACTIONS(523), 1,
      sym_identifier,
    STATE(89), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5838] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5847] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [5856] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5865] = 3,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(173), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5876] = 3,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(194), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5887] = 3,
    ACTIONS(485), 1,
      sym_identifier,
    STATE(188), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5898] = 2,
    ACTIONS(531), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5906] = 2,
    ACTIONS(533), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5914] = 2,
    ACTIONS(535), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5922] = 2,
    ACTIONS(537), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5930] = 2,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5938] = 2,
    ACTIONS(541), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5946] = 2,
    ACTIONS(543), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5954] = 2,
    ACTIONS(545), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5962] = 2,
    ACTIONS(547), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5970] = 2,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5978] = 2,
    ACTIONS(551), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5986] = 2,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5994] = 2,
    ACTIONS(553), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6002] = 2,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6010] = 2,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6018] = 2,
    ACTIONS(559), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6026] = 2,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6034] = 2,
    ACTIONS(563), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6042] = 2,
    ACTIONS(565), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6050] = 2,
    ACTIONS(567), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6058] = 2,
    ACTIONS(569), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6066] = 2,
    ACTIONS(571), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6074] = 2,
    ACTIONS(573), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6082] = 2,
    ACTIONS(575), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6090] = 2,
    ACTIONS(577), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6098] = 2,
    ACTIONS(579), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6106] = 2,
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
  [SMALL_STATE(10)] = 685,
  [SMALL_STATE(11)] = 765,
  [SMALL_STATE(12)] = 845,
  [SMALL_STATE(13)] = 925,
  [SMALL_STATE(14)] = 963,
  [SMALL_STATE(15)] = 1001,
  [SMALL_STATE(16)] = 1038,
  [SMALL_STATE(17)] = 1075,
  [SMALL_STATE(18)] = 1120,
  [SMALL_STATE(19)] = 1157,
  [SMALL_STATE(20)] = 1194,
  [SMALL_STATE(21)] = 1233,
  [SMALL_STATE(22)] = 1270,
  [SMALL_STATE(23)] = 1313,
  [SMALL_STATE(24)] = 1360,
  [SMALL_STATE(25)] = 1397,
  [SMALL_STATE(26)] = 1434,
  [SMALL_STATE(27)] = 1471,
  [SMALL_STATE(28)] = 1508,
  [SMALL_STATE(29)] = 1545,
  [SMALL_STATE(30)] = 1582,
  [SMALL_STATE(31)] = 1619,
  [SMALL_STATE(32)] = 1656,
  [SMALL_STATE(33)] = 1693,
  [SMALL_STATE(34)] = 1730,
  [SMALL_STATE(35)] = 1790,
  [SMALL_STATE(36)] = 1850,
  [SMALL_STATE(37)] = 1907,
  [SMALL_STATE(38)] = 1964,
  [SMALL_STATE(39)] = 2018,
  [SMALL_STATE(40)] = 2072,
  [SMALL_STATE(41)] = 2126,
  [SMALL_STATE(42)] = 2180,
  [SMALL_STATE(43)] = 2234,
  [SMALL_STATE(44)] = 2288,
  [SMALL_STATE(45)] = 2342,
  [SMALL_STATE(46)] = 2396,
  [SMALL_STATE(47)] = 2450,
  [SMALL_STATE(48)] = 2504,
  [SMALL_STATE(49)] = 2558,
  [SMALL_STATE(50)] = 2612,
  [SMALL_STATE(51)] = 2666,
  [SMALL_STATE(52)] = 2705,
  [SMALL_STATE(53)] = 2745,
  [SMALL_STATE(54)] = 2785,
  [SMALL_STATE(55)] = 2825,
  [SMALL_STATE(56)] = 2865,
  [SMALL_STATE(57)] = 2905,
  [SMALL_STATE(58)] = 2945,
  [SMALL_STATE(59)] = 2985,
  [SMALL_STATE(60)] = 3025,
  [SMALL_STATE(61)] = 3060,
  [SMALL_STATE(62)] = 3104,
  [SMALL_STATE(63)] = 3138,
  [SMALL_STATE(64)] = 3167,
  [SMALL_STATE(65)] = 3208,
  [SMALL_STATE(66)] = 3251,
  [SMALL_STATE(67)] = 3290,
  [SMALL_STATE(68)] = 3333,
  [SMALL_STATE(69)] = 3360,
  [SMALL_STATE(70)] = 3387,
  [SMALL_STATE(71)] = 3424,
  [SMALL_STATE(72)] = 3451,
  [SMALL_STATE(73)] = 3488,
  [SMALL_STATE(74)] = 3525,
  [SMALL_STATE(75)] = 3562,
  [SMALL_STATE(76)] = 3599,
  [SMALL_STATE(77)] = 3623,
  [SMALL_STATE(78)] = 3651,
  [SMALL_STATE(79)] = 3676,
  [SMALL_STATE(80)] = 3703,
  [SMALL_STATE(81)] = 3730,
  [SMALL_STATE(82)] = 3754,
  [SMALL_STATE(83)] = 3778,
  [SMALL_STATE(84)] = 3802,
  [SMALL_STATE(85)] = 3836,
  [SMALL_STATE(86)] = 3860,
  [SMALL_STATE(87)] = 3884,
  [SMALL_STATE(88)] = 3908,
  [SMALL_STATE(89)] = 3932,
  [SMALL_STATE(90)] = 3952,
  [SMALL_STATE(91)] = 3976,
  [SMALL_STATE(92)] = 4000,
  [SMALL_STATE(93)] = 4024,
  [SMALL_STATE(94)] = 4043,
  [SMALL_STATE(95)] = 4062,
  [SMALL_STATE(96)] = 4081,
  [SMALL_STATE(97)] = 4100,
  [SMALL_STATE(98)] = 4119,
  [SMALL_STATE(99)] = 4138,
  [SMALL_STATE(100)] = 4157,
  [SMALL_STATE(101)] = 4178,
  [SMALL_STATE(102)] = 4199,
  [SMALL_STATE(103)] = 4218,
  [SMALL_STATE(104)] = 4237,
  [SMALL_STATE(105)] = 4256,
  [SMALL_STATE(106)] = 4275,
  [SMALL_STATE(107)] = 4294,
  [SMALL_STATE(108)] = 4313,
  [SMALL_STATE(109)] = 4331,
  [SMALL_STATE(110)] = 4349,
  [SMALL_STATE(111)] = 4367,
  [SMALL_STATE(112)] = 4385,
  [SMALL_STATE(113)] = 4403,
  [SMALL_STATE(114)] = 4421,
  [SMALL_STATE(115)] = 4439,
  [SMALL_STATE(116)] = 4457,
  [SMALL_STATE(117)] = 4475,
  [SMALL_STATE(118)] = 4493,
  [SMALL_STATE(119)] = 4511,
  [SMALL_STATE(120)] = 4529,
  [SMALL_STATE(121)] = 4547,
  [SMALL_STATE(122)] = 4565,
  [SMALL_STATE(123)] = 4583,
  [SMALL_STATE(124)] = 4601,
  [SMALL_STATE(125)] = 4619,
  [SMALL_STATE(126)] = 4637,
  [SMALL_STATE(127)] = 4655,
  [SMALL_STATE(128)] = 4673,
  [SMALL_STATE(129)] = 4691,
  [SMALL_STATE(130)] = 4709,
  [SMALL_STATE(131)] = 4732,
  [SMALL_STATE(132)] = 4755,
  [SMALL_STATE(133)] = 4778,
  [SMALL_STATE(134)] = 4801,
  [SMALL_STATE(135)] = 4824,
  [SMALL_STATE(136)] = 4842,
  [SMALL_STATE(137)] = 4860,
  [SMALL_STATE(138)] = 4878,
  [SMALL_STATE(139)] = 4895,
  [SMALL_STATE(140)] = 4908,
  [SMALL_STATE(141)] = 4925,
  [SMALL_STATE(142)] = 4942,
  [SMALL_STATE(143)] = 4959,
  [SMALL_STATE(144)] = 4980,
  [SMALL_STATE(145)] = 4997,
  [SMALL_STATE(146)] = 5014,
  [SMALL_STATE(147)] = 5031,
  [SMALL_STATE(148)] = 5048,
  [SMALL_STATE(149)] = 5065,
  [SMALL_STATE(150)] = 5081,
  [SMALL_STATE(151)] = 5093,
  [SMALL_STATE(152)] = 5105,
  [SMALL_STATE(153)] = 5121,
  [SMALL_STATE(154)] = 5133,
  [SMALL_STATE(155)] = 5153,
  [SMALL_STATE(156)] = 5169,
  [SMALL_STATE(157)] = 5181,
  [SMALL_STATE(158)] = 5193,
  [SMALL_STATE(159)] = 5209,
  [SMALL_STATE(160)] = 5221,
  [SMALL_STATE(161)] = 5238,
  [SMALL_STATE(162)] = 5255,
  [SMALL_STATE(163)] = 5266,
  [SMALL_STATE(164)] = 5281,
  [SMALL_STATE(165)] = 5298,
  [SMALL_STATE(166)] = 5313,
  [SMALL_STATE(167)] = 5324,
  [SMALL_STATE(168)] = 5335,
  [SMALL_STATE(169)] = 5350,
  [SMALL_STATE(170)] = 5361,
  [SMALL_STATE(171)] = 5378,
  [SMALL_STATE(172)] = 5389,
  [SMALL_STATE(173)] = 5400,
  [SMALL_STATE(174)] = 5414,
  [SMALL_STATE(175)] = 5428,
  [SMALL_STATE(176)] = 5442,
  [SMALL_STATE(177)] = 5456,
  [SMALL_STATE(178)] = 5470,
  [SMALL_STATE(179)] = 5484,
  [SMALL_STATE(180)] = 5498,
  [SMALL_STATE(181)] = 5512,
  [SMALL_STATE(182)] = 5526,
  [SMALL_STATE(183)] = 5540,
  [SMALL_STATE(184)] = 5554,
  [SMALL_STATE(185)] = 5568,
  [SMALL_STATE(186)] = 5582,
  [SMALL_STATE(187)] = 5596,
  [SMALL_STATE(188)] = 5610,
  [SMALL_STATE(189)] = 5624,
  [SMALL_STATE(190)] = 5638,
  [SMALL_STATE(191)] = 5652,
  [SMALL_STATE(192)] = 5666,
  [SMALL_STATE(193)] = 5676,
  [SMALL_STATE(194)] = 5690,
  [SMALL_STATE(195)] = 5704,
  [SMALL_STATE(196)] = 5718,
  [SMALL_STATE(197)] = 5732,
  [SMALL_STATE(198)] = 5746,
  [SMALL_STATE(199)] = 5760,
  [SMALL_STATE(200)] = 5774,
  [SMALL_STATE(201)] = 5785,
  [SMALL_STATE(202)] = 5796,
  [SMALL_STATE(203)] = 5807,
  [SMALL_STATE(204)] = 5818,
  [SMALL_STATE(205)] = 5827,
  [SMALL_STATE(206)] = 5838,
  [SMALL_STATE(207)] = 5847,
  [SMALL_STATE(208)] = 5856,
  [SMALL_STATE(209)] = 5865,
  [SMALL_STATE(210)] = 5876,
  [SMALL_STATE(211)] = 5887,
  [SMALL_STATE(212)] = 5898,
  [SMALL_STATE(213)] = 5906,
  [SMALL_STATE(214)] = 5914,
  [SMALL_STATE(215)] = 5922,
  [SMALL_STATE(216)] = 5930,
  [SMALL_STATE(217)] = 5938,
  [SMALL_STATE(218)] = 5946,
  [SMALL_STATE(219)] = 5954,
  [SMALL_STATE(220)] = 5962,
  [SMALL_STATE(221)] = 5970,
  [SMALL_STATE(222)] = 5978,
  [SMALL_STATE(223)] = 5986,
  [SMALL_STATE(224)] = 5994,
  [SMALL_STATE(225)] = 6002,
  [SMALL_STATE(226)] = 6010,
  [SMALL_STATE(227)] = 6018,
  [SMALL_STATE(228)] = 6026,
  [SMALL_STATE(229)] = 6034,
  [SMALL_STATE(230)] = 6042,
  [SMALL_STATE(231)] = 6050,
  [SMALL_STATE(232)] = 6058,
  [SMALL_STATE(233)] = 6066,
  [SMALL_STATE(234)] = 6074,
  [SMALL_STATE(235)] = 6082,
  [SMALL_STATE(236)] = 6090,
  [SMALL_STATE(237)] = 6098,
  [SMALL_STATE(238)] = 6106,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 11),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 11),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 10),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 10),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(136),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(234),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 5),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(63),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(62),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(238),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [259] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(205),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [282] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(132),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(160),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(203),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_preprocessor_directive, 2, .production_id = 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 7),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(222),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(10),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [427] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(9),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [434] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(200),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(40),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(218),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 6),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 2),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(201),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2), SHIFT_REPEAT(182),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 8),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumption_head, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [565] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
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
