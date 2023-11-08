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
#define STATE_COUNT 280
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 149
#define ALIAS_COUNT 4
#define TOKEN_COUNT 84
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 20

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
  anon_sym_AT = 56,
  anon_sym_LT_COLON = 57,
  anon_sym_PIPE = 58,
  anon_sym_number = 59,
  anon_sym_symbol = 60,
  anon_sym_unsigned = 61,
  anon_sym_float = 62,
  sym_stateful = 63,
  anon_sym_DOTpragma = 64,
  anon_sym_true = 65,
  anon_sym_false = 66,
  sym_string_literal = 67,
  sym_line_comment = 68,
  sym_block_comment = 69,
  sym_identifier = 70,
  sym_hex = 71,
  sym_binary = 72,
  sym_decimal = 73,
  sym_float = 74,
  sym_decl_kw = 75,
  sym_input_kw = 76,
  sym_output_kw = 77,
  sym_type_kw = 78,
  sym_functor_kw = 79,
  sym_include_kw = 80,
  sym_printsize_kw = 81,
  sym_limitsize_kw = 82,
  sym_plan_kw = 83,
  sym_source_file = 84,
  sym__element = 85,
  sym_preprocessor_directive = 86,
  sym_include_preprocessor_directive = 87,
  sym_relation_decl = 88,
  sym_relation_qualifier = 89,
  sym_choice_domain = 90,
  sym_choice_domain_attribute = 91,
  sym_choice_domain_tuple_attribute = 92,
  sym_rule = 93,
  sym_rule_head = 94,
  sym_subsumption_head = 95,
  sym_disjunction = 96,
  sym_conjunction = 97,
  sym_constraint = 98,
  sym_binary_constraint = 99,
  sym_query_plan = 100,
  sym_directive = 101,
  sym__directive_qualifier = 102,
  sym_directive_attribute_assignment = 103,
  sym_directive_value = 104,
  sym_include_directive = 105,
  sym_qualified_name = 106,
  sym_argument = 107,
  sym_constant = 108,
  sym_variable = 109,
  sym_argument_list = 110,
  sym_branch_init = 111,
  sym_unary_operation = 112,
  sym_binary_operation = 113,
  sym_type_conversion = 114,
  sym_aggregator = 115,
  sym_range_expression = 116,
  sym_functor_invocation = 117,
  sym_attribute = 118,
  sym_fact = 119,
  sym_type_decl = 120,
  sym_subtype_decl = 121,
  sym_eq_type_decl = 122,
  sym_union_type = 123,
  sym_type_name = 124,
  sym_record_type = 125,
  sym_abstract_data_type = 126,
  sym_adt_branch = 127,
  sym_primitive_type = 128,
  sym_functor_decl = 129,
  sym_pragma = 130,
  sym_atom = 131,
  sym_boolean_literal = 132,
  sym__number = 133,
  aux_sym_source_file_repeat1 = 134,
  aux_sym_relation_decl_repeat1 = 135,
  aux_sym_relation_decl_repeat2 = 136,
  aux_sym_relation_decl_repeat3 = 137,
  aux_sym_choice_domain_repeat1 = 138,
  aux_sym_rule_head_repeat1 = 139,
  aux_sym_disjunction_repeat1 = 140,
  aux_sym_conjunction_repeat1 = 141,
  aux_sym_conjunction_repeat2 = 142,
  aux_sym_directive_repeat1 = 143,
  aux_sym_directive_repeat2 = 144,
  aux_sym_qualified_name_repeat1 = 145,
  aux_sym_argument_list_repeat1 = 146,
  aux_sym_union_type_repeat1 = 147,
  aux_sym_abstract_data_type_repeat1 = 148,
  alias_sym_attribute_name = 149,
  alias_sym_choice_domain_single_attribute = 150,
  alias_sym_path_spec = 151,
  alias_sym_user_defined_type_name = 152,
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
  [anon_sym_AT] = "@",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_PIPE] = "|",
  [anon_sym_number] = "number",
  [anon_sym_symbol] = "symbol",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_float] = "float",
  [sym_stateful] = "stateful",
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
  [sym_functor_kw] = "functor_kw",
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
  [sym_functor_invocation] = "functor_invocation",
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
  [sym_functor_decl] = "functor_decl",
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
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_float] = anon_sym_float,
  [sym_stateful] = sym_stateful,
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
  [sym_functor_kw] = sym_functor_kw,
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
  [sym_functor_invocation] = sym_functor_invocation,
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
  [sym_functor_decl] = sym_functor_decl,
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
  [anon_sym_AT] = {
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
  [sym_stateful] = {
    .visible = true,
    .named = true,
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
  [sym_functor_kw] = {
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
  [sym_functor_invocation] = {
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
  [sym_functor_decl] = {
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
  field_stateful = 11,
  field_type_ref = 12,
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
  [field_stateful] = "stateful",
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
  [14] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 2},
  [16] = {.index = 20, .length = 3},
  [17] = {.index = 23, .length = 2},
  [18] = {.index = 25, .length = 2},
  [19] = {.index = 27, .length = 3},
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
    {field_name, 1},
    {field_stateful, 6},
  [16] =
    {field_args, 3},
    {field_name, 1},
  [18] =
    {field_name, 1},
    {field_stateful, 7},
  [20] =
    {field_args, 3},
    {field_args, 4},
    {field_name, 1},
  [23] =
    {field_name, 1},
    {field_stateful, 8},
  [25] =
    {field_range_from, 2},
    {field_range_to, 4},
  [27] =
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
  [88] = 79,
  [89] = 89,
  [90] = 78,
  [91] = 80,
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
  [105] = 85,
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
  [123] = 109,
  [124] = 111,
  [125] = 108,
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
  [161] = 80,
  [162] = 78,
  [163] = 79,
  [164] = 164,
  [165] = 165,
  [166] = 85,
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
  [188] = 108,
  [189] = 109,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 111,
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
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 257,
  [279] = 257,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(151);
      if (lookahead == '!') ADVANCE(179);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '%') ADVANCE(201);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '<') ADVANCE(180);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == '^') ADVANCE(198);
      if (lookahead == '_') ADVANCE(188);
      if (lookahead == 'a') ADVANCE(128);
      if (lookahead == 'b') ADVANCE(22);
      if (lookahead == 'c') ADVANCE(66);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(70);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(28);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == 't') ADVANCE(122);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(232);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(178);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == '_') ADVANCE(189);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(201);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == ':') ADVANCE(225);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '<') ADVANCE(181);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == '^') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(201);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '*') ADVANCE(199);
      if (lookahead == '+') ADVANCE(202);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '.') ADVANCE(174);
      if (lookahead == '/') ADVANCE(200);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == ';') ADVANCE(177);
      if (lookahead == '<') ADVANCE(181);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == '^') ADVANCE(198);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(192);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == '-') ADVANCE(193);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == '@') ADVANCE(230);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == ']') ADVANCE(191);
      if (lookahead == '_') ADVANCE(189);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == 'l') ADVANCE(315);
      if (lookahead == 'm') ADVANCE(254);
      if (lookahead == 'n') ADVANCE(291);
      if (lookahead == 'r') ADVANCE(256);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(253);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(248);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(249);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(250);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(305);
      if (lookahead == 'n') ADVANCE(348);
      if (lookahead == 's') ADVANCE(353);
      if (lookahead == 'u') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(231);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(78);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'n') ADVANCE(107);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 'r') ADVANCE(67);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 's') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'n') ADVANCE(108);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(112);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'b') ADVANCE(110);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 39:
      if (lookahead == 'd') ADVANCE(237);
      END_STATE();
    case 40:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 41:
      if (lookahead == 'd') ADVANCE(51);
      END_STATE();
    case 42:
      if (lookahead == 'd') ADVANCE(52);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(158);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 59:
      if (lookahead == 'f') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 61:
      if (lookahead == 'g') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(214);
      END_STATE();
    case 62:
      if (lookahead == 'g') ADVANCE(73);
      END_STATE();
    case 63:
      if (lookahead == 'g') ADVANCE(47);
      END_STATE();
    case 64:
      if (lookahead == 'g') ADVANCE(104);
      END_STATE();
    case 65:
      if (lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 'h') ADVANCE(109);
      if (lookahead == 'o') ADVANCE(140);
      END_STATE();
    case 67:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 68:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 69:
      if (lookahead == 'i') ADVANCE(93);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 73:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 79:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 80:
      if (lookahead == 'l') ADVANCE(209);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 82:
      if (lookahead == 'l') ADVANCE(235);
      END_STATE();
    case 83:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 84:
      if (lookahead == 'l') ADVANCE(130);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(74);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(77);
      END_STATE();
    case 88:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(220);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 94:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 106:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 113:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 114:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 116:
      if (lookahead == 'q') ADVANCE(125);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(56);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(212);
      END_STATE();
    case 129:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 130:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(194);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(196);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(239);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(89);
      if (lookahead == 'y') ADVANCE(90);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 141:
      if (lookahead == 'v') ADVANCE(57);
      END_STATE();
    case 142:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 143:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(356);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 147:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 148:
      if (eof) ADVANCE(151);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '(') ADVANCE(154);
      if (lookahead == ')') ADVANCE(155);
      if (lookahead == ',') ADVANCE(153);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '{') ADVANCE(226);
      if (lookahead == '|') ADVANCE(232);
      if (lookahead == '}') ADVANCE(227);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(148)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 149:
      if (eof) ADVANCE(151);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '.') ADVANCE(175);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(149)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 150:
      if (eof) ADVANCE(151);
      if (lookahead == '#') ADVANCE(69);
      if (lookahead == '.') ADVANCE(115);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(331);
      if (lookahead == 'c') ADVANCE(288);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead == 'i') ADVANCE(316);
      if (lookahead == 'm') ADVANCE(255);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(150)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(185);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(231);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(176);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(249);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(211);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(173);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_stateful);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead == 'i') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(321);
      if (lookahead == 'm') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(295);
      if (lookahead == 't') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(356);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(144);
      if (lookahead == 'b') ADVANCE(143);
      if (lookahead == 'x') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(360);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 148, .external_lex_state = 2},
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
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 148, .external_lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 148, .external_lex_state = 2},
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
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 150, .external_lex_state = 2},
  [61] = {.lex_state = 150, .external_lex_state = 2},
  [62] = {.lex_state = 150, .external_lex_state = 2},
  [63] = {.lex_state = 150, .external_lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 150, .external_lex_state = 2},
  [66] = {.lex_state = 150, .external_lex_state = 2},
  [67] = {.lex_state = 150, .external_lex_state = 2},
  [68] = {.lex_state = 150, .external_lex_state = 2},
  [69] = {.lex_state = 150, .external_lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 150, .external_lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 148, .external_lex_state = 2},
  [79] = {.lex_state = 148, .external_lex_state = 2},
  [80] = {.lex_state = 148, .external_lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 148, .external_lex_state = 2},
  [85] = {.lex_state = 148, .external_lex_state = 2},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 149, .external_lex_state = 2},
  [89] = {.lex_state = 148, .external_lex_state = 2},
  [90] = {.lex_state = 149, .external_lex_state = 2},
  [91] = {.lex_state = 149, .external_lex_state = 2},
  [92] = {.lex_state = 148, .external_lex_state = 2},
  [93] = {.lex_state = 148, .external_lex_state = 2},
  [94] = {.lex_state = 148, .external_lex_state = 2},
  [95] = {.lex_state = 148, .external_lex_state = 1},
  [96] = {.lex_state = 148, .external_lex_state = 2},
  [97] = {.lex_state = 148, .external_lex_state = 2},
  [98] = {.lex_state = 148, .external_lex_state = 2},
  [99] = {.lex_state = 148, .external_lex_state = 2},
  [100] = {.lex_state = 148, .external_lex_state = 2},
  [101] = {.lex_state = 148, .external_lex_state = 2},
  [102] = {.lex_state = 148, .external_lex_state = 2},
  [103] = {.lex_state = 148, .external_lex_state = 2},
  [104] = {.lex_state = 148, .external_lex_state = 2},
  [105] = {.lex_state = 149, .external_lex_state = 2},
  [106] = {.lex_state = 148, .external_lex_state = 2},
  [107] = {.lex_state = 149, .external_lex_state = 2},
  [108] = {.lex_state = 149, .external_lex_state = 2},
  [109] = {.lex_state = 149, .external_lex_state = 2},
  [110] = {.lex_state = 12},
  [111] = {.lex_state = 149, .external_lex_state = 2},
  [112] = {.lex_state = 149, .external_lex_state = 2},
  [113] = {.lex_state = 148, .external_lex_state = 2},
  [114] = {.lex_state = 148, .external_lex_state = 2},
  [115] = {.lex_state = 148, .external_lex_state = 2},
  [116] = {.lex_state = 148, .external_lex_state = 2},
  [117] = {.lex_state = 149, .external_lex_state = 2},
  [118] = {.lex_state = 148, .external_lex_state = 2},
  [119] = {.lex_state = 148, .external_lex_state = 2},
  [120] = {.lex_state = 148, .external_lex_state = 2},
  [121] = {.lex_state = 148, .external_lex_state = 2},
  [122] = {.lex_state = 148, .external_lex_state = 2},
  [123] = {.lex_state = 148, .external_lex_state = 2},
  [124] = {.lex_state = 148, .external_lex_state = 2},
  [125] = {.lex_state = 148, .external_lex_state = 2},
  [126] = {.lex_state = 148, .external_lex_state = 2},
  [127] = {.lex_state = 148, .external_lex_state = 2},
  [128] = {.lex_state = 148, .external_lex_state = 2},
  [129] = {.lex_state = 148, .external_lex_state = 2},
  [130] = {.lex_state = 148, .external_lex_state = 2},
  [131] = {.lex_state = 148, .external_lex_state = 2},
  [132] = {.lex_state = 148, .external_lex_state = 2},
  [133] = {.lex_state = 148, .external_lex_state = 2},
  [134] = {.lex_state = 148, .external_lex_state = 2},
  [135] = {.lex_state = 148, .external_lex_state = 2},
  [136] = {.lex_state = 148, .external_lex_state = 2},
  [137] = {.lex_state = 148, .external_lex_state = 2},
  [138] = {.lex_state = 148, .external_lex_state = 2},
  [139] = {.lex_state = 148, .external_lex_state = 2},
  [140] = {.lex_state = 148, .external_lex_state = 2},
  [141] = {.lex_state = 148, .external_lex_state = 2},
  [142] = {.lex_state = 148, .external_lex_state = 2},
  [143] = {.lex_state = 148, .external_lex_state = 2},
  [144] = {.lex_state = 148, .external_lex_state = 2},
  [145] = {.lex_state = 148, .external_lex_state = 2},
  [146] = {.lex_state = 148, .external_lex_state = 2},
  [147] = {.lex_state = 148, .external_lex_state = 2},
  [148] = {.lex_state = 148, .external_lex_state = 2},
  [149] = {.lex_state = 148, .external_lex_state = 2},
  [150] = {.lex_state = 148, .external_lex_state = 2},
  [151] = {.lex_state = 148, .external_lex_state = 2},
  [152] = {.lex_state = 148, .external_lex_state = 2},
  [153] = {.lex_state = 12},
  [154] = {.lex_state = 12},
  [155] = {.lex_state = 12},
  [156] = {.lex_state = 12},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 12},
  [159] = {.lex_state = 12},
  [160] = {.lex_state = 12},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 148},
  [191] = {.lex_state = 148},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 148},
  [196] = {.lex_state = 148},
  [197] = {.lex_state = 148},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 148},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 148},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 148},
  [210] = {.lex_state = 148},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 148},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 148},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 148},
  [230] = {.lex_state = 148},
  [231] = {.lex_state = 148},
  [232] = {.lex_state = 148},
  [233] = {.lex_state = 148},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 148},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 148},
  [239] = {.lex_state = 148},
  [240] = {.lex_state = 148},
  [241] = {.lex_state = 148},
  [242] = {.lex_state = 148},
  [243] = {.lex_state = 148},
  [244] = {.lex_state = 148},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 148},
  [250] = {.lex_state = 4},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 4},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 148},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 148},
  [264] = {.lex_state = 148},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 148},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 148},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 148},
  [274] = {.lex_state = 148},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 148},
  [279] = {.lex_state = 148},
};

enum {
  ts_external_token_decl_kw = 0,
  ts_external_token_input_kw = 1,
  ts_external_token_output_kw = 2,
  ts_external_token_type_kw = 3,
  ts_external_token_functor_kw = 4,
  ts_external_token_include_kw = 5,
  ts_external_token_printsize_kw = 6,
  ts_external_token_limitsize_kw = 7,
  ts_external_token_plan_kw = 8,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_decl_kw] = sym_decl_kw,
  [ts_external_token_input_kw] = sym_input_kw,
  [ts_external_token_output_kw] = sym_output_kw,
  [ts_external_token_type_kw] = sym_type_kw,
  [ts_external_token_functor_kw] = sym_functor_kw,
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
    [ts_external_token_functor_kw] = true,
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
    [ts_external_token_functor_kw] = true,
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
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [sym_stateful] = ACTIONS(1),
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
    [sym_functor_kw] = ACTIONS(1),
    [sym_include_kw] = ACTIONS(1),
    [sym_printsize_kw] = ACTIONS(1),
    [sym_limitsize_kw] = ACTIONS(1),
    [sym_plan_kw] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(265),
    [sym__element] = STATE(30),
    [sym_preprocessor_directive] = STATE(30),
    [sym_include_preprocessor_directive] = STATE(147),
    [sym_relation_decl] = STATE(30),
    [sym_rule] = STATE(30),
    [sym_rule_head] = STATE(263),
    [sym_subsumption_head] = STATE(263),
    [sym_directive] = STATE(30),
    [sym__directive_qualifier] = STATE(231),
    [sym_include_directive] = STATE(30),
    [sym_qualified_name] = STATE(260),
    [sym_fact] = STATE(30),
    [sym_type_decl] = STATE(30),
    [sym_functor_decl] = STATE(30),
    [sym_pragma] = STATE(30),
    [sym_atom] = STATE(185),
    [aux_sym_source_file_repeat1] = STATE(30),
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
    [sym_functor_kw] = ACTIONS(19),
    [sym_include_kw] = ACTIONS(21),
    [sym_printsize_kw] = ACTIONS(15),
    [sym_limitsize_kw] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 27,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(54), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(179), 1,
      sym_conjunction,
    STATE(260), 1,
      sym_qualified_name,
    STATE(268), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(168), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [102] = 27,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(54), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(179), 1,
      sym_conjunction,
    STATE(252), 1,
      sym_disjunction,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(168), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [204] = 27,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(54), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(179), 1,
      sym_conjunction,
    STATE(256), 1,
      sym_disjunction,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(168), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [306] = 27,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(54), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(179), 1,
      sym_conjunction,
    STATE(260), 1,
      sym_qualified_name,
    STATE(262), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(168), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [408] = 27,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(54), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(179), 1,
      sym_conjunction,
    STATE(260), 1,
      sym_qualified_name,
    STATE(261), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(168), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [510] = 27,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(54), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(179), 1,
      sym_conjunction,
    STATE(246), 1,
      sym_disjunction,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(168), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [612] = 27,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(54), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(179), 1,
      sym_conjunction,
    STATE(259), 1,
      sym_disjunction,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(168), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [714] = 26,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_BANG,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(54), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(194), 1,
      sym_conjunction,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(168), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [813] = 25,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      anon_sym_BANG,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(54), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(175), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [909] = 25,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_BANG,
    STATE(54), 1,
      sym__number,
    STATE(59), 1,
      aux_sym_conjunction_repeat1,
    STATE(70), 1,
      sym_argument,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1005] = 25,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(29), 1,
      anon_sym__,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      sym_decimal,
    ACTIONS(63), 1,
      anon_sym_BANG,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym__number,
    STATE(59), 1,
      aux_sym_conjunction_repeat1,
    STATE(70), 1,
      sym_argument,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(172), 2,
      sym_constraint,
      sym_atom,
    STATE(180), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1101] = 18,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym__number,
    STATE(82), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1174] = 18,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym__number,
    STATE(73), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1247] = 18,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      sym__number,
    STATE(76), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1320] = 18,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    STATE(54), 1,
      sym__number,
    STATE(77), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1393] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(83), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1463] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(57), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1533] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(72), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1603] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(75), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1673] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(81), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1743] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(53), 1,
      sym_argument,
    STATE(54), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1813] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(41), 1,
      sym_argument,
    STATE(54), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1883] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(74), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [1953] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(55), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [2023] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(35), 1,
      sym_argument,
    STATE(54), 1,
      sym__number,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [2093] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(56), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [2163] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(86), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [2233] = 17,
    ACTIONS(27), 1,
      anon_sym_nil,
    ACTIONS(31), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_as,
    ACTIONS(43), 1,
      anon_sym_count,
    ACTIONS(45), 1,
      anon_sym_range,
    ACTIONS(47), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_decimal,
    STATE(54), 1,
      sym__number,
    STATE(87), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(51), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    STATE(47), 10,
      sym_constant,
      sym_variable,
      sym_argument_list,
      sym_branch_init,
      sym_unary_operation,
      sym_binary_operation,
      sym_type_conversion,
      sym_aggregator,
      sym_range_expression,
      sym_functor_invocation,
  [2303] = 16,
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
      sym_functor_kw,
    ACTIONS(21), 1,
      sym_include_kw,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    STATE(147), 1,
      sym_include_preprocessor_directive,
    STATE(185), 1,
      sym_atom,
    STATE(231), 1,
      sym__directive_qualifier,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(263), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(15), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(33), 11,
      sym__element,
      sym_preprocessor_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      sym_functor_decl,
      sym_pragma,
      aux_sym_source_file_repeat1,
  [2367] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(79), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(77), 24,
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
  [2405] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(83), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(81), 24,
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
  [2443] = 16,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      anon_sym_POUNDinclude,
    ACTIONS(90), 1,
      anon_sym_DOTpragma,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(96), 1,
      sym_decl_kw,
    ACTIONS(102), 1,
      sym_type_kw,
    ACTIONS(105), 1,
      sym_functor_kw,
    ACTIONS(108), 1,
      sym_include_kw,
    STATE(147), 1,
      sym_include_preprocessor_directive,
    STATE(185), 1,
      sym_atom,
    STATE(231), 1,
      sym__directive_qualifier,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(263), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(99), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(33), 11,
      sym__element,
      sym_preprocessor_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      sym_functor_decl,
      sym_pragma,
      aux_sym_source_file_repeat1,
  [2507] = 3,
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
  [2544] = 4,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(117), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(115), 23,
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
  [2583] = 3,
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
  [2620] = 3,
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
  [2657] = 3,
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
  [2694] = 3,
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
  [2731] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(137), 24,
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
  [2768] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(141), 24,
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
  [2805] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(145), 24,
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
  [2842] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(151), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(149), 24,
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
  [2879] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(153), 24,
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
  [2916] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(159), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(157), 24,
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
  [2953] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(163), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(161), 24,
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
  [2990] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(165), 24,
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
  [3027] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(169), 24,
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
  [3064] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(173), 24,
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
  [3101] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(177), 24,
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
  [3138] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(181), 24,
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
  [3175] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(185), 24,
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
  [3212] = 6,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(117), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(115), 21,
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
  [3255] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(193), 24,
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
  [3292] = 3,
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
  [3329] = 7,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(117), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(115), 19,
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
  [3374] = 8,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(117), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(115), 16,
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
  [3421] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(201), 24,
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
  [3458] = 5,
    ACTIONS(207), 1,
      anon_sym_BANG,
    STATE(59), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_AT,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(210), 15,
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
  [3497] = 7,
    ACTIONS(216), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(149), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(68), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(214), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(212), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3538] = 7,
    ACTIONS(216), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(218), 1,
      sym_identifier,
    STATE(149), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(214), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(212), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3579] = 7,
    ACTIONS(216), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(222), 1,
      sym_identifier,
    STATE(145), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(66), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(214), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(220), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3620] = 7,
    ACTIONS(216), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(226), 1,
      sym_identifier,
    STATE(136), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(214), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(224), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3661] = 6,
    ACTIONS(228), 1,
      anon_sym_LPAREN,
    ACTIONS(230), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(169), 17,
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
  [3700] = 7,
    ACTIONS(216), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(141), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(67), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(214), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(232), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3741] = 7,
    ACTIONS(216), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(234), 1,
      sym_identifier,
    STATE(141), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(214), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(232), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3782] = 7,
    ACTIONS(216), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(238), 1,
      sym_identifier,
    STATE(131), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(214), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(236), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3823] = 7,
    ACTIONS(216), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(242), 1,
      sym_identifier,
    STATE(152), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(214), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(240), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3864] = 5,
    ACTIONS(249), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(246), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(244), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTpragma,
  [3900] = 10,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(253), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(251), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [3944] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(261), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
    ACTIONS(259), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTpragma,
  [3974] = 9,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
    ACTIONS(263), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4015] = 11,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_RPAREN,
    STATE(226), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4058] = 11,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4101] = 9,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(271), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4140] = 11,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(228), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4183] = 11,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(214), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4226] = 4,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(277), 15,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
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
  [4254] = 4,
    ACTIONS(283), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(281), 15,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
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
  [4282] = 4,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(78), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 15,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
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
  [4310] = 9,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4347] = 9,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4384] = 9,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4421] = 5,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [4450] = 3,
    ACTIONS(294), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(281), 15,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
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
  [4475] = 9,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(296), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4512] = 9,
    ACTIONS(119), 1,
      anon_sym_CARET,
    ACTIONS(191), 1,
      anon_sym_SLASH,
    ACTIONS(257), 1,
      anon_sym_bshr,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(197), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(199), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(255), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4549] = 5,
    ACTIONS(300), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(281), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [4577] = 4,
    ACTIONS(305), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_LPAREN,
      anon_sym_DOTpragma,
      sym_identifier,
  [4603] = 5,
    ACTIONS(308), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(277), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [4631] = 5,
    ACTIONS(308), 1,
      anon_sym_DOT,
    STATE(90), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(228), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [4659] = 5,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    STATE(89), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4687] = 5,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
    STATE(92), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4715] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(303), 14,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_DOTpragma,
      sym_identifier,
  [4736] = 4,
    ACTIONS(326), 1,
      sym_plan_kw,
    STATE(144), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4761] = 4,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    STATE(97), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4786] = 4,
    ACTIONS(330), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(332), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4811] = 4,
    ACTIONS(336), 1,
      anon_sym_PIPE,
    STATE(98), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4836] = 4,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(339), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4861] = 4,
    ACTIONS(341), 1,
      anon_sym_PIPE,
    STATE(99), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(343), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4886] = 4,
    ACTIONS(347), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(345), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4911] = 4,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(350), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4936] = 4,
    ACTIONS(356), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4961] = 4,
    ACTIONS(352), 1,
      anon_sym_COMMA,
    STATE(102), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(359), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [4986] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 3,
      anon_sym_DOT,
      sym_stateful,
      sym_identifier,
    ACTIONS(281), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [5009] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(361), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [5029] = 4,
    ACTIONS(365), 1,
      sym_stateful,
    ACTIONS(367), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(363), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [5053] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(369), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [5075] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(375), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(373), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [5097] = 9,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    ACTIONS(381), 1,
      sym_identifier,
    STATE(96), 1,
      sym_adt_branch,
    STATE(123), 1,
      sym_qualified_name,
    STATE(125), 1,
      sym_primitive_type,
    STATE(126), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(142), 3,
      sym_union_type,
      sym_record_type,
      sym_abstract_data_type,
    ACTIONS(379), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5131] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(385), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(383), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [5153] = 4,
    ACTIONS(389), 1,
      sym_stateful,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [5177] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5197] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5217] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(395), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5237] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(397), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [5257] = 4,
    ACTIONS(401), 1,
      sym_stateful,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(399), 11,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [5281] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(405), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5301] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5321] = 3,
    ACTIONS(409), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(407), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5343] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(411), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [5363] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(413), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [5383] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5403] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5423] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5443] = 3,
    ACTIONS(417), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5465] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(345), 13,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [5485] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(419), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5504] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(421), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5523] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5542] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(425), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5561] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(427), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5580] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(429), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5599] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(431), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5618] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(433), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5637] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5656] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5675] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(437), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5694] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(439), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5713] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(441), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5732] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(236), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5751] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5770] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(443), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5789] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(445), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5808] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5827] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(447), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5846] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(449), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5865] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(451), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5884] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(240), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5903] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(453), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5922] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(455), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5941] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(457), 12,
      sym_decl_kw,
      sym_input_kw,
      sym_output_kw,
      sym_type_kw,
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
      sym_identifier,
  [5960] = 6,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(188), 1,
      sym_primitive_type,
    STATE(189), 1,
      sym_qualified_name,
    STATE(269), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(459), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5983] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(100), 1,
      sym_type_name,
    STATE(123), 1,
      sym_qualified_name,
    STATE(125), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6006] = 6,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(108), 1,
      sym_primitive_type,
    STATE(109), 1,
      sym_qualified_name,
    STATE(112), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6029] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(119), 1,
      sym_type_name,
    STATE(123), 1,
      sym_qualified_name,
    STATE(125), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6052] = 6,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(188), 1,
      sym_primitive_type,
    STATE(189), 1,
      sym_qualified_name,
    STATE(198), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(459), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6075] = 6,
    ACTIONS(463), 1,
      sym_identifier,
    STATE(123), 1,
      sym_qualified_name,
    STATE(125), 1,
      sym_primitive_type,
    STATE(140), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6098] = 6,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(108), 1,
      sym_primitive_type,
    STATE(109), 1,
      sym_qualified_name,
    STATE(117), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6121] = 6,
    ACTIONS(467), 1,
      sym_identifier,
    STATE(107), 1,
      sym_type_name,
    STATE(108), 1,
      sym_primitive_type,
    STATE(109), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6144] = 4,
    ACTIONS(230), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6162] = 4,
    ACTIONS(230), 1,
      anon_sym_DOT,
    STATE(163), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(277), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6180] = 4,
    ACTIONS(469), 1,
      anon_sym_DOT,
    STATE(163), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(281), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6198] = 4,
    ACTIONS(472), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(475), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6215] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(479), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6232] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(281), 6,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6245] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(481), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6262] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(483), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6279] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(479), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6296] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(485), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6313] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(170), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(481), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6330] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(165), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(487), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6347] = 6,
    ACTIONS(489), 1,
      sym_string_literal,
    ACTIONS(491), 1,
      sym_identifier,
    STATE(234), 1,
      sym_directive_value,
    STATE(237), 1,
      sym_boolean_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(49), 2,
      anon_sym_true,
      anon_sym_false,
  [6368] = 4,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(487), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6385] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(475), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6397] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(493), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6409] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(495), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6421] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(497), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6433] = 4,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    STATE(184), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(499), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [6449] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(503), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6461] = 4,
    ACTIONS(505), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(508), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6477] = 4,
    ACTIONS(512), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(510), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [6493] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(515), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6505] = 4,
    ACTIONS(501), 1,
      anon_sym_SEMI,
    STATE(182), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(517), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [6521] = 6,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_COLON_DASH,
    ACTIONS(523), 1,
      anon_sym_DOT,
    ACTIONS(525), 1,
      anon_sym_LT_EQ,
    STATE(225), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6541] = 4,
    ACTIONS(527), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(271), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [6556] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(508), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6567] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6578] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6589] = 5,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(532), 1,
      sym_identifier,
    STATE(106), 1,
      sym_choice_domain_tuple_attribute,
    STATE(127), 1,
      sym_choice_domain_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6606] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(534), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_atom,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6623] = 4,
    ACTIONS(536), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(539), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6638] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(383), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6649] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(510), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6660] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(541), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_atom,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6677] = 5,
    ACTIONS(530), 1,
      anon_sym_LPAREN,
    ACTIONS(532), 1,
      sym_identifier,
    STATE(104), 1,
      sym_choice_domain_attribute,
    STATE(106), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6694] = 4,
    ACTIONS(543), 1,
      anon_sym_EQ,
    ACTIONS(545), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(146), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [6709] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6720] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(551), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6734] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(235), 1,
      sym_atom,
    STATE(260), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6748] = 4,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6762] = 4,
    ACTIONS(555), 1,
      anon_sym_RPAREN,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(221), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6776] = 4,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6790] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6804] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6818] = 4,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(568), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6832] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(570), 1,
      anon_sym_RPAREN,
    STATE(224), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6846] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RBRACK,
    STATE(223), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6860] = 4,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(216), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6874] = 4,
    ACTIONS(576), 1,
      sym_identifier,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    STATE(222), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6888] = 4,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6902] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6916] = 4,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(586), 1,
      anon_sym_LPAREN,
    STATE(215), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6930] = 4,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_RBRACK,
    STATE(186), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6944] = 4,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_LPAREN,
    STATE(192), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6958] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6972] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(539), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [6982] = 4,
    ACTIONS(594), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_COLON_DASH,
    STATE(218), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6996] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACE,
    STATE(181), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7010] = 4,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(205), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7024] = 4,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(206), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7038] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RBRACE,
    STATE(219), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7052] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7066] = 4,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(181), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7080] = 4,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(609), 1,
      anon_sym_COLON_DASH,
    STATE(218), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7094] = 4,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7108] = 4,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7122] = 4,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7136] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(260), 1,
      sym_qualified_name,
    STATE(270), 1,
      sym_atom,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7150] = 4,
    ACTIONS(557), 1,
      sym_identifier,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(201), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7164] = 3,
    ACTIONS(619), 1,
      sym_identifier,
    STATE(93), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7175] = 3,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(207), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7186] = 3,
    ACTIONS(619), 1,
      sym_identifier,
    STATE(94), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7197] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(621), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7206] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(597), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [7215] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7224] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(623), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7233] = 3,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(187), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7244] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(277), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7255] = 3,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(236), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7266] = 3,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(113), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7277] = 3,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(208), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7288] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(276), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7299] = 3,
    ACTIONS(576), 1,
      sym_identifier,
    STATE(199), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7310] = 2,
    ACTIONS(627), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7318] = 2,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7326] = 2,
    ACTIONS(631), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7334] = 2,
    ACTIONS(633), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7342] = 2,
    ACTIONS(635), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7350] = 2,
    ACTIONS(637), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7358] = 2,
    ACTIONS(639), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7366] = 2,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7374] = 2,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7382] = 2,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7390] = 2,
    ACTIONS(645), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7398] = 2,
    ACTIONS(647), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7406] = 2,
    ACTIONS(649), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7414] = 2,
    ACTIONS(651), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7422] = 2,
    ACTIONS(653), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7430] = 2,
    ACTIONS(655), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7438] = 2,
    ACTIONS(657), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7446] = 2,
    ACTIONS(659), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7454] = 2,
    ACTIONS(661), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7462] = 2,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7470] = 2,
    ACTIONS(665), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7478] = 2,
    ACTIONS(667), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7486] = 2,
    ACTIONS(669), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7494] = 2,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7502] = 2,
    ACTIONS(673), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7510] = 2,
    ACTIONS(675), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7518] = 2,
    ACTIONS(677), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7526] = 2,
    ACTIONS(679), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7534] = 2,
    ACTIONS(681), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7542] = 2,
    ACTIONS(683), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7550] = 2,
    ACTIONS(685), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7558] = 2,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7566] = 2,
    ACTIONS(689), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7574] = 2,
    ACTIONS(691), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7582] = 2,
    ACTIONS(693), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 102,
  [SMALL_STATE(4)] = 204,
  [SMALL_STATE(5)] = 306,
  [SMALL_STATE(6)] = 408,
  [SMALL_STATE(7)] = 510,
  [SMALL_STATE(8)] = 612,
  [SMALL_STATE(9)] = 714,
  [SMALL_STATE(10)] = 813,
  [SMALL_STATE(11)] = 909,
  [SMALL_STATE(12)] = 1005,
  [SMALL_STATE(13)] = 1101,
  [SMALL_STATE(14)] = 1174,
  [SMALL_STATE(15)] = 1247,
  [SMALL_STATE(16)] = 1320,
  [SMALL_STATE(17)] = 1393,
  [SMALL_STATE(18)] = 1463,
  [SMALL_STATE(19)] = 1533,
  [SMALL_STATE(20)] = 1603,
  [SMALL_STATE(21)] = 1673,
  [SMALL_STATE(22)] = 1743,
  [SMALL_STATE(23)] = 1813,
  [SMALL_STATE(24)] = 1883,
  [SMALL_STATE(25)] = 1953,
  [SMALL_STATE(26)] = 2023,
  [SMALL_STATE(27)] = 2093,
  [SMALL_STATE(28)] = 2163,
  [SMALL_STATE(29)] = 2233,
  [SMALL_STATE(30)] = 2303,
  [SMALL_STATE(31)] = 2367,
  [SMALL_STATE(32)] = 2405,
  [SMALL_STATE(33)] = 2443,
  [SMALL_STATE(34)] = 2507,
  [SMALL_STATE(35)] = 2544,
  [SMALL_STATE(36)] = 2583,
  [SMALL_STATE(37)] = 2620,
  [SMALL_STATE(38)] = 2657,
  [SMALL_STATE(39)] = 2694,
  [SMALL_STATE(40)] = 2731,
  [SMALL_STATE(41)] = 2768,
  [SMALL_STATE(42)] = 2805,
  [SMALL_STATE(43)] = 2842,
  [SMALL_STATE(44)] = 2879,
  [SMALL_STATE(45)] = 2916,
  [SMALL_STATE(46)] = 2953,
  [SMALL_STATE(47)] = 2990,
  [SMALL_STATE(48)] = 3027,
  [SMALL_STATE(49)] = 3064,
  [SMALL_STATE(50)] = 3101,
  [SMALL_STATE(51)] = 3138,
  [SMALL_STATE(52)] = 3175,
  [SMALL_STATE(53)] = 3212,
  [SMALL_STATE(54)] = 3255,
  [SMALL_STATE(55)] = 3292,
  [SMALL_STATE(56)] = 3329,
  [SMALL_STATE(57)] = 3374,
  [SMALL_STATE(58)] = 3421,
  [SMALL_STATE(59)] = 3458,
  [SMALL_STATE(60)] = 3497,
  [SMALL_STATE(61)] = 3538,
  [SMALL_STATE(62)] = 3579,
  [SMALL_STATE(63)] = 3620,
  [SMALL_STATE(64)] = 3661,
  [SMALL_STATE(65)] = 3700,
  [SMALL_STATE(66)] = 3741,
  [SMALL_STATE(67)] = 3782,
  [SMALL_STATE(68)] = 3823,
  [SMALL_STATE(69)] = 3864,
  [SMALL_STATE(70)] = 3900,
  [SMALL_STATE(71)] = 3944,
  [SMALL_STATE(72)] = 3974,
  [SMALL_STATE(73)] = 4015,
  [SMALL_STATE(74)] = 4058,
  [SMALL_STATE(75)] = 4101,
  [SMALL_STATE(76)] = 4140,
  [SMALL_STATE(77)] = 4183,
  [SMALL_STATE(78)] = 4226,
  [SMALL_STATE(79)] = 4254,
  [SMALL_STATE(80)] = 4282,
  [SMALL_STATE(81)] = 4310,
  [SMALL_STATE(82)] = 4347,
  [SMALL_STATE(83)] = 4384,
  [SMALL_STATE(84)] = 4421,
  [SMALL_STATE(85)] = 4450,
  [SMALL_STATE(86)] = 4475,
  [SMALL_STATE(87)] = 4512,
  [SMALL_STATE(88)] = 4549,
  [SMALL_STATE(89)] = 4577,
  [SMALL_STATE(90)] = 4603,
  [SMALL_STATE(91)] = 4631,
  [SMALL_STATE(92)] = 4659,
  [SMALL_STATE(93)] = 4687,
  [SMALL_STATE(94)] = 4715,
  [SMALL_STATE(95)] = 4736,
  [SMALL_STATE(96)] = 4761,
  [SMALL_STATE(97)] = 4786,
  [SMALL_STATE(98)] = 4811,
  [SMALL_STATE(99)] = 4836,
  [SMALL_STATE(100)] = 4861,
  [SMALL_STATE(101)] = 4886,
  [SMALL_STATE(102)] = 4911,
  [SMALL_STATE(103)] = 4936,
  [SMALL_STATE(104)] = 4961,
  [SMALL_STATE(105)] = 4986,
  [SMALL_STATE(106)] = 5009,
  [SMALL_STATE(107)] = 5029,
  [SMALL_STATE(108)] = 5053,
  [SMALL_STATE(109)] = 5075,
  [SMALL_STATE(110)] = 5097,
  [SMALL_STATE(111)] = 5131,
  [SMALL_STATE(112)] = 5153,
  [SMALL_STATE(113)] = 5177,
  [SMALL_STATE(114)] = 5197,
  [SMALL_STATE(115)] = 5217,
  [SMALL_STATE(116)] = 5237,
  [SMALL_STATE(117)] = 5257,
  [SMALL_STATE(118)] = 5281,
  [SMALL_STATE(119)] = 5301,
  [SMALL_STATE(120)] = 5321,
  [SMALL_STATE(121)] = 5343,
  [SMALL_STATE(122)] = 5363,
  [SMALL_STATE(123)] = 5383,
  [SMALL_STATE(124)] = 5403,
  [SMALL_STATE(125)] = 5423,
  [SMALL_STATE(126)] = 5443,
  [SMALL_STATE(127)] = 5465,
  [SMALL_STATE(128)] = 5485,
  [SMALL_STATE(129)] = 5504,
  [SMALL_STATE(130)] = 5523,
  [SMALL_STATE(131)] = 5542,
  [SMALL_STATE(132)] = 5561,
  [SMALL_STATE(133)] = 5580,
  [SMALL_STATE(134)] = 5599,
  [SMALL_STATE(135)] = 5618,
  [SMALL_STATE(136)] = 5637,
  [SMALL_STATE(137)] = 5656,
  [SMALL_STATE(138)] = 5675,
  [SMALL_STATE(139)] = 5694,
  [SMALL_STATE(140)] = 5713,
  [SMALL_STATE(141)] = 5732,
  [SMALL_STATE(142)] = 5751,
  [SMALL_STATE(143)] = 5770,
  [SMALL_STATE(144)] = 5789,
  [SMALL_STATE(145)] = 5808,
  [SMALL_STATE(146)] = 5827,
  [SMALL_STATE(147)] = 5846,
  [SMALL_STATE(148)] = 5865,
  [SMALL_STATE(149)] = 5884,
  [SMALL_STATE(150)] = 5903,
  [SMALL_STATE(151)] = 5922,
  [SMALL_STATE(152)] = 5941,
  [SMALL_STATE(153)] = 5960,
  [SMALL_STATE(154)] = 5983,
  [SMALL_STATE(155)] = 6006,
  [SMALL_STATE(156)] = 6029,
  [SMALL_STATE(157)] = 6052,
  [SMALL_STATE(158)] = 6075,
  [SMALL_STATE(159)] = 6098,
  [SMALL_STATE(160)] = 6121,
  [SMALL_STATE(161)] = 6144,
  [SMALL_STATE(162)] = 6162,
  [SMALL_STATE(163)] = 6180,
  [SMALL_STATE(164)] = 6198,
  [SMALL_STATE(165)] = 6215,
  [SMALL_STATE(166)] = 6232,
  [SMALL_STATE(167)] = 6245,
  [SMALL_STATE(168)] = 6262,
  [SMALL_STATE(169)] = 6279,
  [SMALL_STATE(170)] = 6296,
  [SMALL_STATE(171)] = 6313,
  [SMALL_STATE(172)] = 6330,
  [SMALL_STATE(173)] = 6347,
  [SMALL_STATE(174)] = 6368,
  [SMALL_STATE(175)] = 6385,
  [SMALL_STATE(176)] = 6397,
  [SMALL_STATE(177)] = 6409,
  [SMALL_STATE(178)] = 6421,
  [SMALL_STATE(179)] = 6433,
  [SMALL_STATE(180)] = 6449,
  [SMALL_STATE(181)] = 6461,
  [SMALL_STATE(182)] = 6477,
  [SMALL_STATE(183)] = 6493,
  [SMALL_STATE(184)] = 6505,
  [SMALL_STATE(185)] = 6521,
  [SMALL_STATE(186)] = 6541,
  [SMALL_STATE(187)] = 6556,
  [SMALL_STATE(188)] = 6567,
  [SMALL_STATE(189)] = 6578,
  [SMALL_STATE(190)] = 6589,
  [SMALL_STATE(191)] = 6606,
  [SMALL_STATE(192)] = 6623,
  [SMALL_STATE(193)] = 6638,
  [SMALL_STATE(194)] = 6649,
  [SMALL_STATE(195)] = 6660,
  [SMALL_STATE(196)] = 6677,
  [SMALL_STATE(197)] = 6694,
  [SMALL_STATE(198)] = 6709,
  [SMALL_STATE(199)] = 6720,
  [SMALL_STATE(200)] = 6734,
  [SMALL_STATE(201)] = 6748,
  [SMALL_STATE(202)] = 6762,
  [SMALL_STATE(203)] = 6776,
  [SMALL_STATE(204)] = 6790,
  [SMALL_STATE(205)] = 6804,
  [SMALL_STATE(206)] = 6818,
  [SMALL_STATE(207)] = 6832,
  [SMALL_STATE(208)] = 6846,
  [SMALL_STATE(209)] = 6860,
  [SMALL_STATE(210)] = 6874,
  [SMALL_STATE(211)] = 6888,
  [SMALL_STATE(212)] = 6902,
  [SMALL_STATE(213)] = 6916,
  [SMALL_STATE(214)] = 6930,
  [SMALL_STATE(215)] = 6944,
  [SMALL_STATE(216)] = 6958,
  [SMALL_STATE(217)] = 6972,
  [SMALL_STATE(218)] = 6982,
  [SMALL_STATE(219)] = 6996,
  [SMALL_STATE(220)] = 7010,
  [SMALL_STATE(221)] = 7024,
  [SMALL_STATE(222)] = 7038,
  [SMALL_STATE(223)] = 7052,
  [SMALL_STATE(224)] = 7066,
  [SMALL_STATE(225)] = 7080,
  [SMALL_STATE(226)] = 7094,
  [SMALL_STATE(227)] = 7108,
  [SMALL_STATE(228)] = 7122,
  [SMALL_STATE(229)] = 7136,
  [SMALL_STATE(230)] = 7150,
  [SMALL_STATE(231)] = 7164,
  [SMALL_STATE(232)] = 7175,
  [SMALL_STATE(233)] = 7186,
  [SMALL_STATE(234)] = 7197,
  [SMALL_STATE(235)] = 7206,
  [SMALL_STATE(236)] = 7215,
  [SMALL_STATE(237)] = 7224,
  [SMALL_STATE(238)] = 7233,
  [SMALL_STATE(239)] = 7244,
  [SMALL_STATE(240)] = 7255,
  [SMALL_STATE(241)] = 7266,
  [SMALL_STATE(242)] = 7277,
  [SMALL_STATE(243)] = 7288,
  [SMALL_STATE(244)] = 7299,
  [SMALL_STATE(245)] = 7310,
  [SMALL_STATE(246)] = 7318,
  [SMALL_STATE(247)] = 7326,
  [SMALL_STATE(248)] = 7334,
  [SMALL_STATE(249)] = 7342,
  [SMALL_STATE(250)] = 7350,
  [SMALL_STATE(251)] = 7358,
  [SMALL_STATE(252)] = 7366,
  [SMALL_STATE(253)] = 7374,
  [SMALL_STATE(254)] = 7382,
  [SMALL_STATE(255)] = 7390,
  [SMALL_STATE(256)] = 7398,
  [SMALL_STATE(257)] = 7406,
  [SMALL_STATE(258)] = 7414,
  [SMALL_STATE(259)] = 7422,
  [SMALL_STATE(260)] = 7430,
  [SMALL_STATE(261)] = 7438,
  [SMALL_STATE(262)] = 7446,
  [SMALL_STATE(263)] = 7454,
  [SMALL_STATE(264)] = 7462,
  [SMALL_STATE(265)] = 7470,
  [SMALL_STATE(266)] = 7478,
  [SMALL_STATE(267)] = 7486,
  [SMALL_STATE(268)] = 7494,
  [SMALL_STATE(269)] = 7502,
  [SMALL_STATE(270)] = 7510,
  [SMALL_STATE(271)] = 7518,
  [SMALL_STATE(272)] = 7526,
  [SMALL_STATE(273)] = 7534,
  [SMALL_STATE(274)] = 7542,
  [SMALL_STATE(275)] = 7550,
  [SMALL_STATE(276)] = 7558,
  [SMALL_STATE(277)] = 7566,
  [SMALL_STATE(278)] = 7574,
  [SMALL_STATE(279)] = 7582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 7),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 7),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(271),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(267),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(161),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(249),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(274),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(273),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(272),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 19),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 19),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 5, .production_id = 14),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 5, .production_id = 14),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 18),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 18),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 6, .production_id = 16),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 6, .production_id = 16),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 4, .production_id = 10),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 4, .production_id = 10),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 6, .production_id = 16),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 6, .production_id = 16),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 4, .production_id = 10),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 4, .production_id = 10),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 5, .production_id = 14),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 5, .production_id = 14),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(59),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 6),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 6),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 9),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 9),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 6),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 6),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 9),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 9),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 9),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 9),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(71),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(278),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(279),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(233),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [336] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(241),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(190),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(156),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 10),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 10),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 10),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 10),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 12),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 10),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 10),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 17),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 9),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 13),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_preprocessor_directive, 2, .production_id = 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 15),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 6),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(257),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(10),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [491] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(238),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(9),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(20),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(266),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 8),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(240),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2), SHIFT_REPEAT(200),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 11),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [665] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumption_head, 3),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
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
