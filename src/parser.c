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
#define SYMBOL_COUNT 140
#define ALIAS_COUNT 4
#define TOKEN_COUNT 78
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
  sym_number = 69,
  sym_decl_kw = 70,
  sym_input_kw = 71,
  sym_output_kw = 72,
  sym_type_kw = 73,
  sym_include_kw = 74,
  sym_printsize_kw = 75,
  sym_limitsize_kw = 76,
  sym_plan_kw = 77,
  sym_source_file = 78,
  sym__element = 79,
  sym_preprocessor_directive = 80,
  sym_include_preprocessor_directive = 81,
  sym_relation_decl = 82,
  sym_relation_qualifier = 83,
  sym_choice_domain = 84,
  sym_choice_domain_attribute = 85,
  sym_choice_domain_tuple_attribute = 86,
  sym_rule = 87,
  sym_rule_head = 88,
  sym_subsumption_head = 89,
  sym_disjunction = 90,
  sym_conjunction = 91,
  sym_constraint = 92,
  sym_binary_constraint = 93,
  sym_query_plan = 94,
  sym_directive = 95,
  sym__directive_qualifier = 96,
  sym_directive_attribute_assignment = 97,
  sym_directive_value = 98,
  sym_include_directive = 99,
  sym_qualified_name = 100,
  sym_argument = 101,
  sym_constant = 102,
  sym_variable = 103,
  sym_argument_list = 104,
  sym_branch_init = 105,
  sym_unary_operation = 106,
  sym_binary_operation = 107,
  sym_type_conversion = 108,
  sym_aggregator = 109,
  sym_range_expression = 110,
  sym_attribute = 111,
  sym_fact = 112,
  sym_type_decl = 113,
  sym_subtype_decl = 114,
  sym_eq_type_decl = 115,
  sym_union_type = 116,
  sym_type_name = 117,
  sym_record_type = 118,
  sym_abstract_data_type = 119,
  sym_adt_branch = 120,
  sym_primitive_type = 121,
  sym_pragma = 122,
  sym_atom = 123,
  sym_boolean_literal = 124,
  aux_sym_source_file_repeat1 = 125,
  aux_sym_relation_decl_repeat1 = 126,
  aux_sym_relation_decl_repeat2 = 127,
  aux_sym_relation_decl_repeat3 = 128,
  aux_sym_choice_domain_repeat1 = 129,
  aux_sym_rule_head_repeat1 = 130,
  aux_sym_disjunction_repeat1 = 131,
  aux_sym_conjunction_repeat1 = 132,
  aux_sym_conjunction_repeat2 = 133,
  aux_sym_directive_repeat1 = 134,
  aux_sym_directive_repeat2 = 135,
  aux_sym_qualified_name_repeat1 = 136,
  aux_sym_argument_list_repeat1 = 137,
  aux_sym_union_type_repeat1 = 138,
  aux_sym_abstract_data_type_repeat1 = 139,
  alias_sym_attribute_name = 140,
  alias_sym_choice_domain_single_attribute = 141,
  alias_sym_path_spec = 142,
  alias_sym_user_defined_type_name = 143,
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
      if (eof) ADVANCE(142);
      if (lookahead == '!') ADVANCE(170);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '%') ADVANCE(192);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(173);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '^') ADVANCE(189);
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
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(222);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(169);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(297);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(192);
      if (lookahead == '(') ADVANCE(145);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(173);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '^') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(192);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '+') ADVANCE(193);
      if (lookahead == ',') ADVANCE(144);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(191);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == ';') ADVANCE(168);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(175);
      if (lookahead == '>') ADVANCE(173);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '^') ADVANCE(189);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(183);
      if (lookahead == ')') ADVANCE(146);
      if (lookahead == '-') ADVANCE(184);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(215);
      if (lookahead == '[') ADVANCE(181);
      if (lookahead == ']') ADVANCE(182);
      if (lookahead == '_') ADVANCE(180);
      if (lookahead == 'a') ADVANCE(321);
      if (lookahead == 'b') ADVANCE(297);
      if (lookahead == 'c') ADVANCE(308);
      if (lookahead == 'l') ADVANCE(299);
      if (lookahead == 'm') ADVANCE(242);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead == 'r') ADVANCE(244);
      if (lookahead == 's') ADVANCE(328);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(236);
      if (lookahead == '\\') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(237);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(238);
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
      if (lookahead == 'f') ADVANCE(289);
      if (lookahead == 'n') ADVANCE(330);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead == 'u') ADVANCE(298);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(221);
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
      if (lookahead == 'a') ADVANCE(231);
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
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(227);
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
      if (lookahead == 'e') ADVANCE(232);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(234);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(219);
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
      if (lookahead == 'x') ADVANCE(205);
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
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(225);
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
      if (lookahead == 'm') ADVANCE(211);
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
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(207);
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
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(223);
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
      if (lookahead == 's') ADVANCE(203);
      END_STATE();
    case 125:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 126:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(185);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(187);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(229);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
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
      if (lookahead == '{') ADVANCE(217);
      if (lookahead == '|') ADVANCE(222);
      if (lookahead == '}') ADVANCE(218);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(140)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 141:
      if (eof) ADVANCE(142);
      if (lookahead == '#') ADVANCE(66);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead == 'c') ADVANCE(273);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(300);
      if (lookahead == 'm') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(141)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
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
      if (lookahead == ':') ADVANCE(221);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(237);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'e') ADVANCE(246);
      if (lookahead == 'i') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == 'm') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(280);
      if (lookahead == 't') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(137);
      if (lookahead == '_') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(336);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(340);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(339);
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
  [15] = {.lex_state = 4},
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
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 140, .external_lex_state = 2},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 140, .external_lex_state = 2},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 141, .external_lex_state = 2},
  [57] = {.lex_state = 141, .external_lex_state = 2},
  [58] = {.lex_state = 141, .external_lex_state = 2},
  [59] = {.lex_state = 141, .external_lex_state = 2},
  [60] = {.lex_state = 141, .external_lex_state = 2},
  [61] = {.lex_state = 141, .external_lex_state = 2},
  [62] = {.lex_state = 141, .external_lex_state = 2},
  [63] = {.lex_state = 141, .external_lex_state = 2},
  [64] = {.lex_state = 141, .external_lex_state = 2},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 141, .external_lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 140, .external_lex_state = 2},
  [76] = {.lex_state = 140, .external_lex_state = 2},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 140, .external_lex_state = 2},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 140, .external_lex_state = 2},
  [82] = {.lex_state = 140, .external_lex_state = 2},
  [83] = {.lex_state = 140, .external_lex_state = 2},
  [84] = {.lex_state = 140, .external_lex_state = 2},
  [85] = {.lex_state = 140, .external_lex_state = 2},
  [86] = {.lex_state = 140, .external_lex_state = 2},
  [87] = {.lex_state = 140, .external_lex_state = 2},
  [88] = {.lex_state = 12},
  [89] = {.lex_state = 140, .external_lex_state = 2},
  [90] = {.lex_state = 140, .external_lex_state = 2},
  [91] = {.lex_state = 140, .external_lex_state = 2},
  [92] = {.lex_state = 140, .external_lex_state = 2},
  [93] = {.lex_state = 140, .external_lex_state = 1},
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
  [130] = {.lex_state = 140, .external_lex_state = 2},
  [131] = {.lex_state = 140, .external_lex_state = 2},
  [132] = {.lex_state = 140, .external_lex_state = 2},
  [133] = {.lex_state = 140, .external_lex_state = 2},
  [134] = {.lex_state = 140, .external_lex_state = 2},
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
  [165] = {.lex_state = 140},
  [166] = {.lex_state = 140},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 140},
  [172] = {.lex_state = 140},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 140},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 140},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 140},
  [186] = {.lex_state = 140},
  [187] = {.lex_state = 140},
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
  [198] = {.lex_state = 140},
  [199] = {.lex_state = 140},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 140},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 140},
  [207] = {.lex_state = 140},
  [208] = {.lex_state = 140},
  [209] = {.lex_state = 140},
  [210] = {.lex_state = 140},
  [211] = {.lex_state = 140},
  [212] = {.lex_state = 140},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 140},
  [216] = {.lex_state = 140},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 140},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 4},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 140},
  [225] = {.lex_state = 140},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 140},
  [229] = {.lex_state = 4},
  [230] = {.lex_state = 140},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 140},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 140},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 140},
  [246] = {.lex_state = 140},
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
    [sym_source_file] = STATE(238),
    [sym__element] = STATE(47),
    [sym_preprocessor_directive] = STATE(47),
    [sym_include_preprocessor_directive] = STATE(123),
    [sym_relation_decl] = STATE(47),
    [sym_rule] = STATE(47),
    [sym_rule_head] = STATE(237),
    [sym_subsumption_head] = STATE(237),
    [sym_directive] = STATE(47),
    [sym__directive_qualifier] = STATE(209),
    [sym_include_directive] = STATE(47),
    [sym_qualified_name] = STATE(235),
    [sym_fact] = STATE(47),
    [sym_type_decl] = STATE(47),
    [sym_pragma] = STATE(47),
    [sym_atom] = STATE(160),
    [aux_sym_source_file_repeat1] = STATE(47),
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
  [0] = 24,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [90] = 24,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [180] = 24,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [270] = 24,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [360] = 24,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [450] = 24,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [540] = 24,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [630] = 23,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [717] = 22,
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
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      anon_sym_BANG,
    STATE(65), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [801] = 22,
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
    ACTIONS(53), 1,
      anon_sym_BANG,
    ACTIONS(55), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [885] = 22,
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
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_BANG,
    STATE(10), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
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
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [969] = 3,
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
  [1007] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(67), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(65), 24,
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
  [1045] = 15,
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
    ACTIONS(69), 1,
      anon_sym_RPAREN,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1106] = 3,
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
  [1143] = 3,
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
  [1180] = 8,
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
  [1227] = 3,
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
  [1264] = 3,
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
  [1301] = 7,
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
  [1346] = 4,
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
  [1385] = 3,
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
  [1422] = 6,
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
  [1465] = 3,
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
  [1502] = 15,
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
    ACTIONS(105), 1,
      anon_sym_RPAREN,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [1563] = 3,
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
  [1600] = 3,
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
  [1637] = 3,
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
  [1674] = 3,
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
  [1711] = 3,
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
  [1748] = 3,
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
  [1785] = 3,
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
  [1822] = 3,
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
  [1859] = 3,
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
  [1896] = 3,
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
  [1933] = 3,
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
  [1970] = 3,
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
  [2007] = 15,
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
    ACTIONS(155), 1,
      anon_sym_RBRACK,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2068] = 14,
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
    STATE(19), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2126] = 14,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2184] = 14,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2242] = 14,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2300] = 14,
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
    STATE(21), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2358] = 14,
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
    STATE(22), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2416] = 14,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2474] = 15,
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
    ACTIONS(157), 1,
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
    STATE(52), 10,
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
  [2534] = 14,
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
    STATE(23), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2592] = 14,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2650] = 14,
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
    STATE(67), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2708] = 14,
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
    STATE(24), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2766] = 15,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
    ACTIONS(161), 1,
      anon_sym_POUNDinclude,
    ACTIONS(164), 1,
      anon_sym_DOTpragma,
    ACTIONS(167), 1,
      sym_identifier,
    ACTIONS(170), 1,
      sym_decl_kw,
    ACTIONS(176), 1,
      sym_type_kw,
    ACTIONS(179), 1,
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
    ACTIONS(173), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(52), 10,
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
  [2826] = 14,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2884] = 14,
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
    STATE(18), 1,
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
    ACTIONS(47), 2,
      sym_string_literal,
      sym_number,
    ACTIONS(39), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    STATE(16), 9,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
  [2942] = 6,
    ACTIONS(182), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(147), 17,
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
  [2981] = 7,
    ACTIONS(190), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(118), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(188), 8,
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
  [3021] = 7,
    ACTIONS(190), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(196), 1,
      sym_identifier,
    STATE(126), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(64), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(188), 8,
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
  [3061] = 7,
    ACTIONS(190), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(122), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(57), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(188), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(198), 10,
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
  [3101] = 7,
    ACTIONS(190), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(122), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(64), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(188), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(198), 10,
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
  [3141] = 7,
    ACTIONS(190), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(204), 1,
      sym_identifier,
    STATE(113), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(64), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(188), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(202), 10,
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
  [3181] = 7,
    ACTIONS(190), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(130), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(64), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(188), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
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
      anon_sym_DOTpragma,
  [3221] = 7,
    ACTIONS(190), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(212), 1,
      sym_identifier,
    STATE(115), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(59), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(188), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(210), 10,
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
  [3261] = 7,
    ACTIONS(190), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(130), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(60), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(188), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
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
      anon_sym_DOTpragma,
  [3301] = 5,
    ACTIONS(219), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(64), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(216), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(214), 11,
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
  [3336] = 5,
    ACTIONS(223), 1,
      anon_sym_BANG,
    STATE(65), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(221), 6,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      sym_string_literal,
      sym_number,
    ACTIONS(226), 14,
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
  [3371] = 10,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
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
    ACTIONS(230), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(228), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3415] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
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
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
    ACTIONS(236), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [3456] = 3,
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
  [3485] = 11,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_bshr,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
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
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3528] = 11,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_bshr,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(246), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
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
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3571] = 11,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_bshr,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
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
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3614] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
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
    ACTIONS(250), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3653] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_bshr,
    ACTIONS(252), 1,
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
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3690] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_bshr,
    ACTIONS(254), 1,
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
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3727] = 4,
    ACTIONS(258), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 14,
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
  [3754] = 4,
    ACTIONS(258), 1,
      anon_sym_DOT,
    STATE(75), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 14,
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
  [3781] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_bshr,
    ACTIONS(260), 1,
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
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3818] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_bshr,
    ACTIONS(262), 1,
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
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3855] = 4,
    ACTIONS(266), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 14,
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
  [3882] = 9,
    ACTIONS(85), 1,
      anon_sym_CARET,
    ACTIONS(89), 1,
      anon_sym_SLASH,
    ACTIONS(234), 1,
      anon_sym_bshr,
    ACTIONS(269), 1,
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
    ACTIONS(232), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3919] = 3,
    ACTIONS(271), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 14,
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
  [3943] = 5,
    ACTIONS(258), 1,
      anon_sym_DOT,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 12,
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
  [3971] = 5,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(275), 11,
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
  [3998] = 4,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    STATE(84), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(281), 12,
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
  [4023] = 5,
    ACTIONS(277), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_LPAREN,
    STATE(83), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 11,
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
  [4050] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(87), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 11,
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
  [4074] = 4,
    ACTIONS(296), 1,
      anon_sym_PIPE,
    STATE(87), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 11,
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
  [4098] = 9,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(303), 1,
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
    ACTIONS(301), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [4132] = 4,
    ACTIONS(292), 1,
      anon_sym_PIPE,
    STATE(86), 1,
      aux_sym_abstract_data_type_repeat1,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4156] = 4,
    ACTIONS(309), 1,
      anon_sym_PIPE,
    STATE(90), 1,
      aux_sym_union_type_repeat1,
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
  [4180] = 4,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_choice_domain_repeat1,
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
  [4204] = 4,
    ACTIONS(318), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_choice_domain_repeat1,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4228] = 4,
    ACTIONS(323), 1,
      sym_plan_kw,
    STATE(129), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(321), 11,
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
  [4252] = 4,
    ACTIONS(327), 1,
      anon_sym_PIPE,
    STATE(90), 1,
      aux_sym_union_type_repeat1,
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
  [4276] = 4,
    ACTIONS(327), 1,
      anon_sym_PIPE,
    STATE(94), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 11,
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
  [4300] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(281), 13,
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
  [4320] = 4,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(91), 1,
      aux_sym_choice_domain_repeat1,
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
  [4344] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 12,
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
  [4363] = 2,
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
  [4382] = 2,
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
  [4401] = 3,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 11,
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
  [4422] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 12,
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
  [4441] = 2,
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
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [4460] = 2,
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
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [4479] = 3,
    ACTIONS(349), 1,
      sym_string_literal,
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
  [4500] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 12,
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
  [4519] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(351), 12,
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
  [4538] = 2,
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
  [4557] = 2,
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
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [4576] = 2,
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
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [4595] = 2,
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
  [4614] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 12,
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
  [4633] = 2,
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
  [4651] = 2,
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
  [4669] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
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
      anon_sym_DOTpragma,
      sym_identifier,
  [4687] = 2,
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
  [4705] = 2,
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
  [4723] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(206), 11,
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
  [4741] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 11,
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
  [4759] = 2,
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
  [4777] = 2,
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
  [4795] = 2,
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
  [4813] = 2,
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
  [4831] = 2,
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
  [4849] = 2,
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
  [4867] = 2,
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
  [4885] = 2,
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
  [4903] = 2,
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
  [4921] = 2,
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
  [4939] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(202), 11,
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
  [4957] = 2,
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
  [4975] = 2,
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
  [4993] = 2,
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
  [5011] = 2,
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
  [5029] = 6,
    ACTIONS(397), 1,
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
    ACTIONS(395), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5052] = 6,
    ACTIONS(397), 1,
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
    ACTIONS(395), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5075] = 6,
    ACTIONS(399), 1,
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
    ACTIONS(301), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5098] = 6,
    ACTIONS(399), 1,
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
    ACTIONS(301), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5121] = 6,
    ACTIONS(399), 1,
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
    ACTIONS(301), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5144] = 4,
    ACTIONS(184), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(182), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5162] = 4,
    ACTIONS(184), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5180] = 4,
    ACTIONS(401), 1,
      anon_sym_DOT,
    STATE(142), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5198] = 4,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(406), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5215] = 4,
    ACTIONS(404), 1,
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
  [5232] = 4,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(406), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5249] = 6,
    ACTIONS(410), 1,
      sym_string_literal,
    ACTIONS(412), 1,
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
  [5270] = 4,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(145), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(414), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5287] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5300] = 4,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(408), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5317] = 4,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(419), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5334] = 4,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(152), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(421), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5351] = 4,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(414), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5368] = 4,
    ACTIONS(404), 1,
      anon_sym_COMMA,
    STATE(150), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5385] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5397] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(427), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5409] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(419), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5421] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(429), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5433] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(431), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5449] = 4,
    ACTIONS(437), 1,
      anon_sym_SEMI,
    STATE(159), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5465] = 6,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_COLON_DASH,
    ACTIONS(444), 1,
      anon_sym_DOT,
    ACTIONS(446), 1,
      anon_sym_LT_EQ,
    STATE(187), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5485] = 4,
    ACTIONS(448), 1,
      anon_sym_COMMA,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5501] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(453), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5513] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5525] = 4,
    ACTIONS(433), 1,
      anon_sym_SEMI,
    STATE(158), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [5541] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym_atom,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5558] = 5,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(102), 1,
      sym_choice_domain_attribute,
    STATE(109), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5575] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(353), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5586] = 4,
    ACTIONS(465), 1,
      anon_sym_COMMA,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(468), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5601] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(345), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5612] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(351), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5623] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_atom,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5640] = 5,
    ACTIONS(461), 1,
      anon_sym_LPAREN,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(97), 1,
      sym_choice_domain_attribute,
    STATE(109), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5657] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5668] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(472), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [5679] = 4,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [5694] = 4,
    ACTIONS(477), 1,
      anon_sym_EQ,
    ACTIONS(479), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(125), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [5709] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5720] = 4,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(205), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5734] = 4,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5748] = 4,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5762] = 4,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5776] = 4,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(493), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5790] = 4,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_LPAREN,
    STATE(188), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5804] = 4,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(499), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5818] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(212), 1,
      sym_atom,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5832] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(228), 1,
      sym_atom,
    STATE(235), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5846] = 4,
    ACTIONS(440), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      anon_sym_COLON_DASH,
    STATE(198), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5860] = 4,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(503), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5874] = 4,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5888] = 4,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    STATE(189), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5902] = 4,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5916] = 4,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RBRACE,
    STATE(200), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5930] = 4,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    STATE(179), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5944] = 4,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5958] = 4,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5972] = 4,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [5986] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(468), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [5996] = 4,
    ACTIONS(524), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_COLON_DASH,
    STATE(198), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6010] = 4,
    ACTIONS(483), 1,
      sym_identifier,
    ACTIONS(529), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6024] = 4,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(531), 1,
      anon_sym_RBRACE,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6038] = 4,
    ACTIONS(533), 1,
      anon_sym_RBRACE,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(192), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6052] = 4,
    ACTIONS(497), 1,
      anon_sym_COMMA,
    ACTIONS(537), 1,
      anon_sym_RPAREN,
    STATE(161), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6066] = 4,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6080] = 4,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(175), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6094] = 4,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RPAREN,
    STATE(190), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6108] = 3,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(194), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6119] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(226), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6130] = 3,
    ACTIONS(543), 1,
      sym_identifier,
    STATE(112), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6141] = 3,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(85), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6152] = 3,
    ACTIONS(545), 1,
      sym_identifier,
    STATE(96), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6163] = 3,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(173), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6174] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(527), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [6183] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6192] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6201] = 3,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(217), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6212] = 3,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(191), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6223] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(508), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6232] = 3,
    ACTIONS(535), 1,
      sym_identifier,
    STATE(196), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6243] = 2,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6251] = 2,
    ACTIONS(553), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6259] = 2,
    ACTIONS(555), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6267] = 2,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6275] = 2,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6283] = 2,
    ACTIONS(561), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6291] = 2,
    ACTIONS(563), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6299] = 2,
    ACTIONS(565), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6307] = 2,
    ACTIONS(567), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6315] = 2,
    ACTIONS(569), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6323] = 2,
    ACTIONS(571), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6331] = 2,
    ACTIONS(573), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6339] = 2,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6347] = 2,
    ACTIONS(577), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6355] = 2,
    ACTIONS(579), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6363] = 2,
    ACTIONS(581), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6371] = 2,
    ACTIONS(583), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6379] = 2,
    ACTIONS(585), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6387] = 2,
    ACTIONS(587), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6395] = 2,
    ACTIONS(589), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6403] = 2,
    ACTIONS(591), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6411] = 2,
    ACTIONS(593), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6419] = 2,
    ACTIONS(595), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6427] = 2,
    ACTIONS(597), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6435] = 2,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6443] = 2,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6451] = 2,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6459] = 2,
    ACTIONS(603), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 90,
  [SMALL_STATE(4)] = 180,
  [SMALL_STATE(5)] = 270,
  [SMALL_STATE(6)] = 360,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 540,
  [SMALL_STATE(9)] = 630,
  [SMALL_STATE(10)] = 717,
  [SMALL_STATE(11)] = 801,
  [SMALL_STATE(12)] = 885,
  [SMALL_STATE(13)] = 969,
  [SMALL_STATE(14)] = 1007,
  [SMALL_STATE(15)] = 1045,
  [SMALL_STATE(16)] = 1106,
  [SMALL_STATE(17)] = 1143,
  [SMALL_STATE(18)] = 1180,
  [SMALL_STATE(19)] = 1227,
  [SMALL_STATE(20)] = 1264,
  [SMALL_STATE(21)] = 1301,
  [SMALL_STATE(22)] = 1346,
  [SMALL_STATE(23)] = 1385,
  [SMALL_STATE(24)] = 1422,
  [SMALL_STATE(25)] = 1465,
  [SMALL_STATE(26)] = 1502,
  [SMALL_STATE(27)] = 1563,
  [SMALL_STATE(28)] = 1600,
  [SMALL_STATE(29)] = 1637,
  [SMALL_STATE(30)] = 1674,
  [SMALL_STATE(31)] = 1711,
  [SMALL_STATE(32)] = 1748,
  [SMALL_STATE(33)] = 1785,
  [SMALL_STATE(34)] = 1822,
  [SMALL_STATE(35)] = 1859,
  [SMALL_STATE(36)] = 1896,
  [SMALL_STATE(37)] = 1933,
  [SMALL_STATE(38)] = 1970,
  [SMALL_STATE(39)] = 2007,
  [SMALL_STATE(40)] = 2068,
  [SMALL_STATE(41)] = 2126,
  [SMALL_STATE(42)] = 2184,
  [SMALL_STATE(43)] = 2242,
  [SMALL_STATE(44)] = 2300,
  [SMALL_STATE(45)] = 2358,
  [SMALL_STATE(46)] = 2416,
  [SMALL_STATE(47)] = 2474,
  [SMALL_STATE(48)] = 2534,
  [SMALL_STATE(49)] = 2592,
  [SMALL_STATE(50)] = 2650,
  [SMALL_STATE(51)] = 2708,
  [SMALL_STATE(52)] = 2766,
  [SMALL_STATE(53)] = 2826,
  [SMALL_STATE(54)] = 2884,
  [SMALL_STATE(55)] = 2942,
  [SMALL_STATE(56)] = 2981,
  [SMALL_STATE(57)] = 3021,
  [SMALL_STATE(58)] = 3061,
  [SMALL_STATE(59)] = 3101,
  [SMALL_STATE(60)] = 3141,
  [SMALL_STATE(61)] = 3181,
  [SMALL_STATE(62)] = 3221,
  [SMALL_STATE(63)] = 3261,
  [SMALL_STATE(64)] = 3301,
  [SMALL_STATE(65)] = 3336,
  [SMALL_STATE(66)] = 3371,
  [SMALL_STATE(67)] = 3415,
  [SMALL_STATE(68)] = 3456,
  [SMALL_STATE(69)] = 3485,
  [SMALL_STATE(70)] = 3528,
  [SMALL_STATE(71)] = 3571,
  [SMALL_STATE(72)] = 3614,
  [SMALL_STATE(73)] = 3653,
  [SMALL_STATE(74)] = 3690,
  [SMALL_STATE(75)] = 3727,
  [SMALL_STATE(76)] = 3754,
  [SMALL_STATE(77)] = 3781,
  [SMALL_STATE(78)] = 3818,
  [SMALL_STATE(79)] = 3855,
  [SMALL_STATE(80)] = 3882,
  [SMALL_STATE(81)] = 3919,
  [SMALL_STATE(82)] = 3943,
  [SMALL_STATE(83)] = 3971,
  [SMALL_STATE(84)] = 3998,
  [SMALL_STATE(85)] = 4023,
  [SMALL_STATE(86)] = 4050,
  [SMALL_STATE(87)] = 4074,
  [SMALL_STATE(88)] = 4098,
  [SMALL_STATE(89)] = 4132,
  [SMALL_STATE(90)] = 4156,
  [SMALL_STATE(91)] = 4180,
  [SMALL_STATE(92)] = 4204,
  [SMALL_STATE(93)] = 4228,
  [SMALL_STATE(94)] = 4252,
  [SMALL_STATE(95)] = 4276,
  [SMALL_STATE(96)] = 4300,
  [SMALL_STATE(97)] = 4320,
  [SMALL_STATE(98)] = 4344,
  [SMALL_STATE(99)] = 4363,
  [SMALL_STATE(100)] = 4382,
  [SMALL_STATE(101)] = 4401,
  [SMALL_STATE(102)] = 4422,
  [SMALL_STATE(103)] = 4441,
  [SMALL_STATE(104)] = 4460,
  [SMALL_STATE(105)] = 4479,
  [SMALL_STATE(106)] = 4500,
  [SMALL_STATE(107)] = 4519,
  [SMALL_STATE(108)] = 4538,
  [SMALL_STATE(109)] = 4557,
  [SMALL_STATE(110)] = 4576,
  [SMALL_STATE(111)] = 4595,
  [SMALL_STATE(112)] = 4614,
  [SMALL_STATE(113)] = 4633,
  [SMALL_STATE(114)] = 4651,
  [SMALL_STATE(115)] = 4669,
  [SMALL_STATE(116)] = 4687,
  [SMALL_STATE(117)] = 4705,
  [SMALL_STATE(118)] = 4723,
  [SMALL_STATE(119)] = 4741,
  [SMALL_STATE(120)] = 4759,
  [SMALL_STATE(121)] = 4777,
  [SMALL_STATE(122)] = 4795,
  [SMALL_STATE(123)] = 4813,
  [SMALL_STATE(124)] = 4831,
  [SMALL_STATE(125)] = 4849,
  [SMALL_STATE(126)] = 4867,
  [SMALL_STATE(127)] = 4885,
  [SMALL_STATE(128)] = 4903,
  [SMALL_STATE(129)] = 4921,
  [SMALL_STATE(130)] = 4939,
  [SMALL_STATE(131)] = 4957,
  [SMALL_STATE(132)] = 4975,
  [SMALL_STATE(133)] = 4993,
  [SMALL_STATE(134)] = 5011,
  [SMALL_STATE(135)] = 5029,
  [SMALL_STATE(136)] = 5052,
  [SMALL_STATE(137)] = 5075,
  [SMALL_STATE(138)] = 5098,
  [SMALL_STATE(139)] = 5121,
  [SMALL_STATE(140)] = 5144,
  [SMALL_STATE(141)] = 5162,
  [SMALL_STATE(142)] = 5180,
  [SMALL_STATE(143)] = 5198,
  [SMALL_STATE(144)] = 5215,
  [SMALL_STATE(145)] = 5232,
  [SMALL_STATE(146)] = 5249,
  [SMALL_STATE(147)] = 5270,
  [SMALL_STATE(148)] = 5287,
  [SMALL_STATE(149)] = 5300,
  [SMALL_STATE(150)] = 5317,
  [SMALL_STATE(151)] = 5334,
  [SMALL_STATE(152)] = 5351,
  [SMALL_STATE(153)] = 5368,
  [SMALL_STATE(154)] = 5385,
  [SMALL_STATE(155)] = 5397,
  [SMALL_STATE(156)] = 5409,
  [SMALL_STATE(157)] = 5421,
  [SMALL_STATE(158)] = 5433,
  [SMALL_STATE(159)] = 5449,
  [SMALL_STATE(160)] = 5465,
  [SMALL_STATE(161)] = 5485,
  [SMALL_STATE(162)] = 5501,
  [SMALL_STATE(163)] = 5513,
  [SMALL_STATE(164)] = 5525,
  [SMALL_STATE(165)] = 5541,
  [SMALL_STATE(166)] = 5558,
  [SMALL_STATE(167)] = 5575,
  [SMALL_STATE(168)] = 5586,
  [SMALL_STATE(169)] = 5601,
  [SMALL_STATE(170)] = 5612,
  [SMALL_STATE(171)] = 5623,
  [SMALL_STATE(172)] = 5640,
  [SMALL_STATE(173)] = 5657,
  [SMALL_STATE(174)] = 5668,
  [SMALL_STATE(175)] = 5679,
  [SMALL_STATE(176)] = 5694,
  [SMALL_STATE(177)] = 5709,
  [SMALL_STATE(178)] = 5720,
  [SMALL_STATE(179)] = 5734,
  [SMALL_STATE(180)] = 5748,
  [SMALL_STATE(181)] = 5762,
  [SMALL_STATE(182)] = 5776,
  [SMALL_STATE(183)] = 5790,
  [SMALL_STATE(184)] = 5804,
  [SMALL_STATE(185)] = 5818,
  [SMALL_STATE(186)] = 5832,
  [SMALL_STATE(187)] = 5846,
  [SMALL_STATE(188)] = 5860,
  [SMALL_STATE(189)] = 5874,
  [SMALL_STATE(190)] = 5888,
  [SMALL_STATE(191)] = 5902,
  [SMALL_STATE(192)] = 5916,
  [SMALL_STATE(193)] = 5930,
  [SMALL_STATE(194)] = 5944,
  [SMALL_STATE(195)] = 5958,
  [SMALL_STATE(196)] = 5972,
  [SMALL_STATE(197)] = 5986,
  [SMALL_STATE(198)] = 5996,
  [SMALL_STATE(199)] = 6010,
  [SMALL_STATE(200)] = 6024,
  [SMALL_STATE(201)] = 6038,
  [SMALL_STATE(202)] = 6052,
  [SMALL_STATE(203)] = 6066,
  [SMALL_STATE(204)] = 6080,
  [SMALL_STATE(205)] = 6094,
  [SMALL_STATE(206)] = 6108,
  [SMALL_STATE(207)] = 6119,
  [SMALL_STATE(208)] = 6130,
  [SMALL_STATE(209)] = 6141,
  [SMALL_STATE(210)] = 6152,
  [SMALL_STATE(211)] = 6163,
  [SMALL_STATE(212)] = 6174,
  [SMALL_STATE(213)] = 6183,
  [SMALL_STATE(214)] = 6192,
  [SMALL_STATE(215)] = 6201,
  [SMALL_STATE(216)] = 6212,
  [SMALL_STATE(217)] = 6223,
  [SMALL_STATE(218)] = 6232,
  [SMALL_STATE(219)] = 6243,
  [SMALL_STATE(220)] = 6251,
  [SMALL_STATE(221)] = 6259,
  [SMALL_STATE(222)] = 6267,
  [SMALL_STATE(223)] = 6275,
  [SMALL_STATE(224)] = 6283,
  [SMALL_STATE(225)] = 6291,
  [SMALL_STATE(226)] = 6299,
  [SMALL_STATE(227)] = 6307,
  [SMALL_STATE(228)] = 6315,
  [SMALL_STATE(229)] = 6323,
  [SMALL_STATE(230)] = 6331,
  [SMALL_STATE(231)] = 6339,
  [SMALL_STATE(232)] = 6347,
  [SMALL_STATE(233)] = 6355,
  [SMALL_STATE(234)] = 6363,
  [SMALL_STATE(235)] = 6371,
  [SMALL_STATE(236)] = 6379,
  [SMALL_STATE(237)] = 6387,
  [SMALL_STATE(238)] = 6395,
  [SMALL_STATE(239)] = 6403,
  [SMALL_STATE(240)] = 6411,
  [SMALL_STATE(241)] = 6419,
  [SMALL_STATE(242)] = 6427,
  [SMALL_STATE(243)] = 6435,
  [SMALL_STATE(244)] = 6443,
  [SMALL_STATE(245)] = 6451,
  [SMALL_STATE(246)] = 6459,
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
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 7),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 7),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 15),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 15),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 16),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 16),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 5, .production_id = 13),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 5, .production_id = 13),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 6, .production_id = 14),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 6, .production_id = 14),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 4, .production_id = 10),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 4, .production_id = 10),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(140),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(245),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(209),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(242),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 6),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 6),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 9),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 9),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 9),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 9),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 6),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 9),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 9),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(68),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(65),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(246),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(210),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(208),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(138),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(166),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 12),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 9),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_preprocessor_directive, 2, .production_id = 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(230),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(12),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(9),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 1),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(211),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(225),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 8),
  [474] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(53),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(215),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2), SHIFT_REPEAT(185),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 11),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumption_head, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [589] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
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
