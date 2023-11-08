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
#define STATE_COUNT 282
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 160
#define ALIAS_COUNT 4
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 21

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
  anon_sym_ord = 57,
  anon_sym_to_float = 58,
  anon_sym_to_number = 59,
  anon_sym_to_string = 60,
  anon_sym_to_unsigned = 61,
  anon_sym_cat = 62,
  anon_sym_strlen = 63,
  anon_sym_substr = 64,
  anon_sym_autoinc = 65,
  anon_sym_LT_COLON = 66,
  anon_sym_PIPE = 67,
  anon_sym_number = 68,
  anon_sym_symbol = 69,
  anon_sym_unsigned = 70,
  anon_sym_float = 71,
  sym_stateful = 72,
  anon_sym_DOTpragma = 73,
  anon_sym_true = 74,
  anon_sym_false = 75,
  sym_string_literal = 76,
  sym_line_comment = 77,
  sym_block_comment = 78,
  sym_identifier = 79,
  sym_hex = 80,
  sym_binary = 81,
  sym_decimal = 82,
  sym_float = 83,
  sym_decl_kw = 84,
  sym_input_kw = 85,
  sym_output_kw = 86,
  sym_type_kw = 87,
  sym_functor_kw = 88,
  sym_include_kw = 89,
  sym_printsize_kw = 90,
  sym_limitsize_kw = 91,
  sym_plan_kw = 92,
  sym_source_file = 93,
  sym__element = 94,
  sym_preprocessor_directive = 95,
  sym_include_preprocessor_directive = 96,
  sym_relation_decl = 97,
  sym_relation_qualifier = 98,
  sym_choice_domain = 99,
  sym_choice_domain_attribute = 100,
  sym_choice_domain_tuple_attribute = 101,
  sym_rule = 102,
  sym_rule_head = 103,
  sym_subsumption_head = 104,
  sym_disjunction = 105,
  sym_conjunction = 106,
  sym_constraint = 107,
  sym_binary_constraint = 108,
  sym_query_plan = 109,
  sym_directive = 110,
  sym__directive_qualifier = 111,
  sym_directive_attribute_assignment = 112,
  sym_directive_value = 113,
  sym_include_directive = 114,
  sym_qualified_name = 115,
  sym_argument = 116,
  sym_constant = 117,
  sym_variable = 118,
  sym_argument_list = 119,
  sym_branch_init = 120,
  sym_unary_operation = 121,
  sym_binary_operation = 122,
  sym_type_conversion = 123,
  sym_aggregator = 124,
  sym_range_expression = 125,
  sym_functor_invocation = 126,
  sym_user_defined_functor_name = 127,
  sym_intrinsic_functor_name = 128,
  sym_attribute = 129,
  sym_fact = 130,
  sym_type_decl = 131,
  sym_subtype_decl = 132,
  sym_eq_type_decl = 133,
  sym_union_type = 134,
  sym_type_name = 135,
  sym_record_type = 136,
  sym_abstract_data_type = 137,
  sym_adt_branch = 138,
  sym_primitive_type = 139,
  sym_functor_decl = 140,
  sym_pragma = 141,
  sym_atom = 142,
  sym_boolean_literal = 143,
  sym__number = 144,
  aux_sym_source_file_repeat1 = 145,
  aux_sym_relation_decl_repeat1 = 146,
  aux_sym_relation_decl_repeat2 = 147,
  aux_sym_relation_decl_repeat3 = 148,
  aux_sym_choice_domain_repeat1 = 149,
  aux_sym_rule_head_repeat1 = 150,
  aux_sym_disjunction_repeat1 = 151,
  aux_sym_conjunction_repeat1 = 152,
  aux_sym_conjunction_repeat2 = 153,
  aux_sym_directive_repeat1 = 154,
  aux_sym_directive_repeat2 = 155,
  aux_sym_qualified_name_repeat1 = 156,
  aux_sym_argument_list_repeat1 = 157,
  aux_sym_union_type_repeat1 = 158,
  aux_sym_abstract_data_type_repeat1 = 159,
  alias_sym_attribute_name = 160,
  alias_sym_choice_domain_single_attribute = 161,
  alias_sym_path_spec = 162,
  alias_sym_user_defined_type_name = 163,
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
  [anon_sym_ord] = "ord",
  [anon_sym_to_float] = "to_float",
  [anon_sym_to_number] = "to_number",
  [anon_sym_to_string] = "to_string",
  [anon_sym_to_unsigned] = "to_unsigned",
  [anon_sym_cat] = "cat",
  [anon_sym_strlen] = "strlen",
  [anon_sym_substr] = "substr",
  [anon_sym_autoinc] = "autoinc",
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
  [sym_user_defined_functor_name] = "user_defined_functor_name",
  [sym_intrinsic_functor_name] = "intrinsic_functor_name",
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
  [anon_sym_ord] = anon_sym_ord,
  [anon_sym_to_float] = anon_sym_to_float,
  [anon_sym_to_number] = anon_sym_to_number,
  [anon_sym_to_string] = anon_sym_to_string,
  [anon_sym_to_unsigned] = anon_sym_to_unsigned,
  [anon_sym_cat] = anon_sym_cat,
  [anon_sym_strlen] = anon_sym_strlen,
  [anon_sym_substr] = anon_sym_substr,
  [anon_sym_autoinc] = anon_sym_autoinc,
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
  [sym_user_defined_functor_name] = sym_user_defined_functor_name,
  [sym_intrinsic_functor_name] = sym_intrinsic_functor_name,
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
  [anon_sym_ord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strlen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_substr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoinc] = {
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
  [sym_user_defined_functor_name] = {
    .visible = true,
    .named = true,
  },
  [sym_intrinsic_functor_name] = {
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
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 3},
  [10] = {.index = 10, .length = 2},
  [11] = {.index = 12, .length = 1},
  [12] = {.index = 13, .length = 2},
  [14] = {.index = 15, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 2},
  [17] = {.index = 21, .length = 3},
  [18] = {.index = 24, .length = 2},
  [19] = {.index = 26, .length = 2},
  [20] = {.index = 28, .length = 3},
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
    {field_name, 0},
  [7] =
    {field_args, 2},
    {field_args, 3},
    {field_name, 0},
  [10] =
    {field_relation_name, 1},
    {field_relation_name, 2},
  [12] =
    {field_name, 1},
  [13] =
    {field_directive_attribute, 0},
    {field_directive_value, 2},
  [15] =
    {field_name, 1},
    {field_stateful, 6},
  [17] =
    {field_args, 3},
    {field_name, 1},
  [19] =
    {field_name, 1},
    {field_stateful, 7},
  [21] =
    {field_args, 3},
    {field_args, 4},
    {field_name, 1},
  [24] =
    {field_name, 1},
    {field_stateful, 8},
  [26] =
    {field_range_from, 2},
    {field_range_to, 4},
  [28] =
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
  [9] = {
    [0] = alias_sym_attribute_name,
  },
  [13] = {
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
  [89] = 80,
  [90] = 90,
  [91] = 91,
  [92] = 78,
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
  [104] = 84,
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
  [118] = 108,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 111,
  [124] = 124,
  [125] = 109,
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
  [161] = 79,
  [162] = 80,
  [163] = 78,
  [164] = 164,
  [165] = 84,
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
  [187] = 109,
  [188] = 108,
  [189] = 189,
  [190] = 111,
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
  [278] = 278,
  [279] = 279,
  [280] = 268,
  [281] = 268,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(187);
      if (lookahead == '!') ADVANCE(215);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(235);
      if (lookahead == '+') ADVANCE(238);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == '0') ADVANCE(451);
      if (lookahead == ':') ADVANCE(261);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(216);
      if (lookahead == '=') ADVANCE(220);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '^') ADVANCE(234);
      if (lookahead == '_') ADVANCE(224);
      if (lookahead == 'a') ADVANCE(157);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'e') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'l') ADVANCE(26);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(83);
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'u') ADVANCE(111);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(286);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(214);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(451);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(15);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '_') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == 't') ADVANCE(400);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(235);
      if (lookahead == '+') ADVANCE(238);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == ':') ADVANCE(261);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(220);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '^') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(14);
      if (lookahead == '%') ADVANCE(237);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '*') ADVANCE(235);
      if (lookahead == '+') ADVANCE(238);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '.') ADVANCE(210);
      if (lookahead == '/') ADVANCE(236);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '<') ADVANCE(217);
      if (lookahead == '=') ADVANCE(220);
      if (lookahead == '>') ADVANCE(218);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '^') ADVANCE(234);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'l') ADVANCE(27);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(228);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == '-') ADVANCE(229);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(451);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '@') ADVANCE(266);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == ']') ADVANCE(227);
      if (lookahead == '_') ADVANCE(225);
      if (lookahead == 'a') ADVANCE(423);
      if (lookahead == 'b') ADVANCE(383);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead == 'l') ADVANCE(397);
      if (lookahead == 'm') ADVANCE(309);
      if (lookahead == 'n') ADVANCE(357);
      if (lookahead == 'o') ADVANCE(411);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead == 's') ADVANCE(434);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(452);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(302);
      if (lookahead == '\\') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(303);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '[') ADVANCE(226);
      if (lookahead == 'f') ADVANCE(377);
      if (lookahead == 'n') ADVANCE(444);
      if (lookahead == 's') ADVANCE(447);
      if (lookahead == 'u') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(285);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(221);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(94);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(100);
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(297);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'h') ADVANCE(131);
      if (lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(80);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 's') ADVANCE(79);
      if (lookahead == 'x') ADVANCE(135);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(134);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'o') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(136);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(114);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(168);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 34:
      if (lookahead == 'b') ADVANCE(160);
      if (lookahead == 'm') ADVANCE(256);
      END_STATE();
    case 35:
      if (lookahead == 'b') ADVANCE(137);
      END_STATE();
    case 36:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 38:
      if (lookahead == 'c') ADVANCE(200);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(283);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(198);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(101);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(267);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(291);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(275);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(59);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(298);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(177);
      if (lookahead == 's') ADVANCE(172);
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(273);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 74:
      if (lookahead == 'g') ADVANCE(84);
      if (lookahead == 'x') ADVANCE(250);
      END_STATE();
    case 75:
      if (lookahead == 'g') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'g') ADVANCE(55);
      END_STATE();
    case 77:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(127);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(96);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(95);
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(124);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(121);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(245);
      if (lookahead == 'r') ADVANCE(246);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(289);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(295);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 105:
      if (lookahead == 'l') ADVANCE(92);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 109:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 110:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(252);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(165);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 142:
      if (lookahead == 'q') ADVANCE(153);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(244);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(241);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(287);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(281);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 157:
      if (lookahead == 's') ADVANCE(248);
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 158:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 159:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 166:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 167:
      if (lookahead == 't') ADVANCE(293);
      END_STATE();
    case 168:
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 169:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 170:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 171:
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 172:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 173:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 174:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 175:
      if (lookahead == 'u') ADVANCE(123);
      END_STATE();
    case 176:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 177:
      if (lookahead == 'u') ADVANCE(110);
      END_STATE();
    case 178:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 179:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(449);
      END_STATE();
    case 183:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 184:
      if (eof) ADVANCE(187);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '(') ADVANCE(190);
      if (lookahead == ')') ADVANCE(191);
      if (lookahead == ',') ADVANCE(189);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '=') ADVANCE(220);
      if (lookahead == '{') ADVANCE(262);
      if (lookahead == '|') ADVANCE(286);
      if (lookahead == '}') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(184)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 185:
      if (eof) ADVANCE(187);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '.') ADVANCE(211);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 's') ADVANCE(439);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(185)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 186:
      if (eof) ADVANCE(187);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '.') ADVANCE(141);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(417);
      if (lookahead == 'c') ADVANCE(356);
      if (lookahead == 'e') ADVANCE(410);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'm') ADVANCE(312);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead == 'o') ADVANCE(445);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(186)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(221);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(212);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(219);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(303);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_ord);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_ord);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_to_float);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_to_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_to_number);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_to_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_to_string);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_to_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_cat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_strlen);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_strlen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_substr);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_substr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_autoinc);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_autoinc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_stateful);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(303);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(446);
      if (lookahead == 'e') ADVANCE(313);
      if (lookahead == 'i') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(428);
      if (lookahead == 'o') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(426);
      if (lookahead == 'm') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(375);
      if (lookahead == 'n') ADVANCE(441);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead == 'u') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead == 'm') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(280);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(306);
      if (lookahead == 'r') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(364);
      if (lookahead == 't') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(249);
      if (lookahead == 'u') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead == 'u') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(448);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(449);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(450);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(180);
      if (lookahead == 'b') ADVANCE(179);
      if (lookahead == 'x') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(452);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(454);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 184, .external_lex_state = 2},
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
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 184, .external_lex_state = 2},
  [33] = {.lex_state = 184, .external_lex_state = 2},
  [34] = {.lex_state = 2},
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
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 186, .external_lex_state = 2},
  [61] = {.lex_state = 186, .external_lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 186, .external_lex_state = 2},
  [64] = {.lex_state = 186, .external_lex_state = 2},
  [65] = {.lex_state = 186, .external_lex_state = 2},
  [66] = {.lex_state = 186, .external_lex_state = 2},
  [67] = {.lex_state = 186, .external_lex_state = 2},
  [68] = {.lex_state = 186, .external_lex_state = 2},
  [69] = {.lex_state = 186, .external_lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 186, .external_lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 184, .external_lex_state = 2},
  [79] = {.lex_state = 184, .external_lex_state = 2},
  [80] = {.lex_state = 184, .external_lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 184, .external_lex_state = 2},
  [85] = {.lex_state = 184, .external_lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 185, .external_lex_state = 2},
  [89] = {.lex_state = 185, .external_lex_state = 2},
  [90] = {.lex_state = 184, .external_lex_state = 2},
  [91] = {.lex_state = 184, .external_lex_state = 2},
  [92] = {.lex_state = 185, .external_lex_state = 2},
  [93] = {.lex_state = 184, .external_lex_state = 2},
  [94] = {.lex_state = 184, .external_lex_state = 2},
  [95] = {.lex_state = 184, .external_lex_state = 2},
  [96] = {.lex_state = 184, .external_lex_state = 2},
  [97] = {.lex_state = 184, .external_lex_state = 1},
  [98] = {.lex_state = 184, .external_lex_state = 2},
  [99] = {.lex_state = 184, .external_lex_state = 2},
  [100] = {.lex_state = 184, .external_lex_state = 2},
  [101] = {.lex_state = 184, .external_lex_state = 2},
  [102] = {.lex_state = 184, .external_lex_state = 2},
  [103] = {.lex_state = 184, .external_lex_state = 2},
  [104] = {.lex_state = 185, .external_lex_state = 2},
  [105] = {.lex_state = 184, .external_lex_state = 2},
  [106] = {.lex_state = 184, .external_lex_state = 2},
  [107] = {.lex_state = 184, .external_lex_state = 2},
  [108] = {.lex_state = 185, .external_lex_state = 2},
  [109] = {.lex_state = 185, .external_lex_state = 2},
  [110] = {.lex_state = 184, .external_lex_state = 2},
  [111] = {.lex_state = 185, .external_lex_state = 2},
  [112] = {.lex_state = 184, .external_lex_state = 2},
  [113] = {.lex_state = 185, .external_lex_state = 2},
  [114] = {.lex_state = 184, .external_lex_state = 2},
  [115] = {.lex_state = 184, .external_lex_state = 2},
  [116] = {.lex_state = 184, .external_lex_state = 2},
  [117] = {.lex_state = 184, .external_lex_state = 2},
  [118] = {.lex_state = 184, .external_lex_state = 2},
  [119] = {.lex_state = 184, .external_lex_state = 2},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 184, .external_lex_state = 2},
  [122] = {.lex_state = 185, .external_lex_state = 2},
  [123] = {.lex_state = 184, .external_lex_state = 2},
  [124] = {.lex_state = 185, .external_lex_state = 2},
  [125] = {.lex_state = 184, .external_lex_state = 2},
  [126] = {.lex_state = 184, .external_lex_state = 2},
  [127] = {.lex_state = 184, .external_lex_state = 2},
  [128] = {.lex_state = 184, .external_lex_state = 2},
  [129] = {.lex_state = 184, .external_lex_state = 2},
  [130] = {.lex_state = 184, .external_lex_state = 2},
  [131] = {.lex_state = 184, .external_lex_state = 2},
  [132] = {.lex_state = 184, .external_lex_state = 2},
  [133] = {.lex_state = 184, .external_lex_state = 2},
  [134] = {.lex_state = 184, .external_lex_state = 2},
  [135] = {.lex_state = 184, .external_lex_state = 2},
  [136] = {.lex_state = 184, .external_lex_state = 2},
  [137] = {.lex_state = 184, .external_lex_state = 2},
  [138] = {.lex_state = 184, .external_lex_state = 2},
  [139] = {.lex_state = 184, .external_lex_state = 2},
  [140] = {.lex_state = 184, .external_lex_state = 2},
  [141] = {.lex_state = 184, .external_lex_state = 2},
  [142] = {.lex_state = 184, .external_lex_state = 2},
  [143] = {.lex_state = 184, .external_lex_state = 2},
  [144] = {.lex_state = 184, .external_lex_state = 2},
  [145] = {.lex_state = 184, .external_lex_state = 2},
  [146] = {.lex_state = 184, .external_lex_state = 2},
  [147] = {.lex_state = 184, .external_lex_state = 2},
  [148] = {.lex_state = 184, .external_lex_state = 2},
  [149] = {.lex_state = 184, .external_lex_state = 2},
  [150] = {.lex_state = 184, .external_lex_state = 2},
  [151] = {.lex_state = 184, .external_lex_state = 2},
  [152] = {.lex_state = 184, .external_lex_state = 2},
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
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 1},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 184},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 184},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 184},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 184},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 184},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 184},
  [206] = {.lex_state = 184},
  [207] = {.lex_state = 184},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 184},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 184},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 184},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 184},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 184},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 184},
  [233] = {.lex_state = 184},
  [234] = {.lex_state = 184},
  [235] = {.lex_state = 184},
  [236] = {.lex_state = 184},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 184},
  [239] = {.lex_state = 184},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 184},
  [242] = {.lex_state = 184},
  [243] = {.lex_state = 184},
  [244] = {.lex_state = 184},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 184},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 184},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 1},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 4},
  [258] = {.lex_state = 4},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 184},
  [261] = {.lex_state = 184},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 4},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 184},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 184},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 184},
  [279] = {.lex_state = 184},
  [280] = {.lex_state = 184},
  [281] = {.lex_state = 184},
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
    [anon_sym_ord] = ACTIONS(1),
    [anon_sym_to_float] = ACTIONS(1),
    [anon_sym_to_number] = ACTIONS(1),
    [anon_sym_to_string] = ACTIONS(1),
    [anon_sym_to_unsigned] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_strlen] = ACTIONS(1),
    [anon_sym_substr] = ACTIONS(1),
    [anon_sym_autoinc] = ACTIONS(1),
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
    [sym_source_file] = STATE(274),
    [sym__element] = STATE(32),
    [sym_preprocessor_directive] = STATE(32),
    [sym_include_preprocessor_directive] = STATE(152),
    [sym_relation_decl] = STATE(32),
    [sym_rule] = STATE(32),
    [sym_rule_head] = STATE(273),
    [sym_subsumption_head] = STATE(273),
    [sym_directive] = STATE(32),
    [sym__directive_qualifier] = STATE(235),
    [sym_include_directive] = STATE(32),
    [sym_qualified_name] = STATE(271),
    [sym_fact] = STATE(32),
    [sym_type_decl] = STATE(32),
    [sym_functor_decl] = STATE(32),
    [sym_pragma] = STATE(32),
    [sym_atom] = STATE(184),
    [aux_sym_source_file_repeat1] = STATE(32),
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
  [0] = 29,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(181), 1,
      sym_conjunction,
    STATE(253), 1,
      sym_disjunction,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(169), 2,
      sym_constraint,
      sym_atom,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [117] = 29,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(181), 1,
      sym_conjunction,
    STATE(263), 1,
      sym_disjunction,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(169), 2,
      sym_constraint,
      sym_atom,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [234] = 29,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(181), 1,
      sym_conjunction,
    STATE(271), 1,
      sym_qualified_name,
    STATE(272), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(169), 2,
      sym_constraint,
      sym_atom,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [351] = 29,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(181), 1,
      sym_conjunction,
    STATE(249), 1,
      sym_disjunction,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(169), 2,
      sym_constraint,
      sym_atom,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [468] = 29,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(181), 1,
      sym_conjunction,
    STATE(270), 1,
      sym_disjunction,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(169), 2,
      sym_constraint,
      sym_atom,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [585] = 29,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(181), 1,
      sym_conjunction,
    STATE(245), 1,
      sym_disjunction,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(169), 2,
      sym_constraint,
      sym_atom,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [702] = 29,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(181), 1,
      sym_conjunction,
    STATE(251), 1,
      sym_disjunction,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(169), 2,
      sym_constraint,
      sym_atom,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [819] = 28,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(194), 1,
      sym_conjunction,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(169), 2,
      sym_constraint,
      sym_atom,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [933] = 27,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    ACTIONS(59), 1,
      anon_sym_LPAREN,
    ACTIONS(61), 1,
      anon_sym_BANG,
    STATE(30), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(170), 2,
      sym_constraint,
      sym_atom,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1044] = 27,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    ACTIONS(61), 1,
      anon_sym_BANG,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(183), 2,
      sym_constraint,
      sym_atom,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1155] = 27,
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
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      sym_decimal,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    ACTIONS(67), 1,
      anon_sym_BANG,
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(55), 1,
      sym__number,
    STATE(70), 1,
      sym_argument,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(37), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(178), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(180), 2,
      sym_constraint,
      sym_atom,
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1266] = 20,
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
    ACTIONS(57), 1,
      sym_decimal,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1354] = 20,
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
    ACTIONS(57), 1,
      sym_decimal,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1442] = 20,
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
    ACTIONS(57), 1,
      sym_decimal,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1530] = 20,
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
    ACTIONS(57), 1,
      sym_decimal,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1618] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1703] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(39), 1,
      sym_argument,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1788] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1873] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [1958] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [2043] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(50), 1,
      sym_argument,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [2128] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [2213] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(35), 1,
      sym_argument,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [2298] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(41), 1,
      sym_argument,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [2383] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [2468] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(46), 1,
      sym_argument,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [2553] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [2638] = 19,
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
    ACTIONS(57), 1,
      sym_decimal,
    STATE(40), 1,
      sym_argument,
    STATE(55), 1,
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
    STATE(252), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(41), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(53), 4,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(49), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(43), 10,
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
  [2723] = 5,
    ACTIONS(79), 1,
      anon_sym_BANG,
    STATE(30), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(77), 9,
      anon_sym_LPAREN,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
      anon_sym_DASH,
      anon_sym_AT,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_float,
    ACTIONS(82), 24,
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
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
      sym_decimal,
  [2771] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(86), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(84), 24,
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
  [2809] = 16,
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
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(152), 1,
      sym_include_preprocessor_directive,
    STATE(184), 1,
      sym_atom,
    STATE(235), 1,
      sym__directive_qualifier,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(273), 2,
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
  [2873] = 16,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_POUNDinclude,
    ACTIONS(95), 1,
      anon_sym_DOTpragma,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(101), 1,
      sym_decl_kw,
    ACTIONS(107), 1,
      sym_type_kw,
    ACTIONS(110), 1,
      sym_functor_kw,
    ACTIONS(113), 1,
      sym_include_kw,
    STATE(152), 1,
      sym_include_preprocessor_directive,
    STATE(184), 1,
      sym_atom,
    STATE(235), 1,
      sym__directive_qualifier,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(273), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(104), 4,
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
  [2937] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(118), 5,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(116), 24,
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
  [2975] = 8,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(120), 16,
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
  [3022] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(136), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(134), 24,
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
  [3059] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(140), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(138), 24,
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
  [3096] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(144), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(142), 24,
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
  [3133] = 7,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(120), 19,
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
  [3178] = 4,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(120), 23,
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
  [3217] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(122), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(120), 24,
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
  [3254] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(148), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(146), 24,
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
  [3291] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(152), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(150), 24,
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
  [3328] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(154), 24,
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
  [3365] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(160), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(158), 24,
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
  [3402] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(164), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(162), 24,
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
  [3439] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(168), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(166), 24,
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
  [3476] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(172), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(170), 24,
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
  [3513] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(176), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(174), 24,
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
  [3550] = 6,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(122), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(120), 21,
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
  [3593] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(180), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(178), 24,
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
  [3630] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(184), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(182), 24,
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
  [3667] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(188), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(186), 24,
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
  [3704] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(192), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(190), 24,
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
  [3741] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(196), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(194), 24,
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
  [3778] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(200), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(198), 24,
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
  [3815] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(204), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(202), 24,
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
  [3852] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(208), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(206), 24,
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
  [3889] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(210), 24,
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
  [3926] = 7,
    ACTIONS(218), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(220), 1,
      sym_identifier,
    STATE(129), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(68), 2,
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
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [3967] = 7,
    ACTIONS(218), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(224), 1,
      sym_identifier,
    STATE(140), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(65), 2,
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
    ACTIONS(222), 11,
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
  [4008] = 6,
    ACTIONS(226), 1,
      anon_sym_LPAREN,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(156), 4,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_SLASH,
      anon_sym_bshr,
    ACTIONS(154), 17,
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
  [4047] = 7,
    ACTIONS(218), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(220), 1,
      sym_identifier,
    STATE(129), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
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
      sym_functor_kw,
      sym_include_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
      ts_builtin_sym_end,
      anon_sym_POUNDinclude,
      anon_sym_DOTpragma,
  [4088] = 7,
    ACTIONS(218), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(151), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
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
    ACTIONS(230), 11,
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
  [4129] = 7,
    ACTIONS(218), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(236), 1,
      sym_identifier,
    STATE(139), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
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
    ACTIONS(234), 11,
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
  [4170] = 7,
    ACTIONS(218), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(236), 1,
      sym_identifier,
    STATE(139), 1,
      sym_choice_domain,
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
    ACTIONS(234), 11,
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
  [4211] = 7,
    ACTIONS(218), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(240), 1,
      sym_identifier,
    STATE(136), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(63), 2,
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
    ACTIONS(238), 11,
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
  [4252] = 7,
    ACTIONS(218), 1,
      anon_sym_choice_DASHdomain,
    ACTIONS(244), 1,
      sym_identifier,
    STATE(137), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
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
    ACTIONS(242), 11,
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
  [4293] = 5,
    ACTIONS(251), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(69), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(248), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(246), 12,
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
  [4329] = 10,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(255), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(253), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4373] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(263), 9,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
    ACTIONS(261), 12,
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
  [4403] = 9,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
    ACTIONS(265), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [4444] = 11,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4487] = 11,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(203), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4530] = 11,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(230), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4573] = 9,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(275), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4612] = 11,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    STATE(219), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4655] = 4,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(80), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 15,
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
  [4683] = 4,
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
  [4711] = 4,
    ACTIONS(279), 1,
      anon_sym_DOT,
    STATE(79), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 15,
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
  [4739] = 9,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(288), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4776] = 9,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4813] = 9,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4850] = 3,
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
  [4875] = 5,
    ACTIONS(279), 1,
      anon_sym_DOT,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 13,
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
  [4904] = 9,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(298), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4941] = 9,
    ACTIONS(126), 1,
      anon_sym_CARET,
    ACTIONS(130), 1,
      anon_sym_SLASH,
    ACTIONS(259), 1,
      anon_sym_bshr,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(124), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(128), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(132), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(257), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [4978] = 5,
    ACTIONS(302), 1,
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
  [5006] = 5,
    ACTIONS(305), 1,
      anon_sym_DOT,
    STATE(88), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(307), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(286), 11,
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
  [5034] = 4,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 13,
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
  [5060] = 5,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(318), 1,
      anon_sym_LPAREN,
    STATE(90), 1,
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
  [5088] = 5,
    ACTIONS(305), 1,
      anon_sym_DOT,
    STATE(89), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(226), 11,
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
  [5116] = 5,
    ACTIONS(316), 1,
      anon_sym_COMMA,
    ACTIONS(324), 1,
      anon_sym_LPAREN,
    STATE(91), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 12,
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
  [5144] = 4,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 12,
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
  [5169] = 4,
    ACTIONS(332), 1,
      anon_sym_PIPE,
    STATE(95), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 12,
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
  [5194] = 4,
    ACTIONS(337), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 12,
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
  [5219] = 4,
    ACTIONS(342), 1,
      sym_plan_kw,
    STATE(145), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(340), 12,
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
  [5244] = 4,
    ACTIONS(346), 1,
      anon_sym_PIPE,
    STATE(100), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(344), 12,
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
  [5269] = 4,
    ACTIONS(350), 1,
      anon_sym_PIPE,
    STATE(99), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 12,
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
  [5294] = 4,
    ACTIONS(346), 1,
      anon_sym_PIPE,
    STATE(95), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(353), 12,
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
  [5319] = 4,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(355), 12,
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
  [5344] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(309), 14,
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
  [5365] = 4,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(99), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(357), 12,
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
  [5390] = 3,
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
  [5413] = 4,
    ACTIONS(359), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(361), 12,
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
  [5438] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(335), 13,
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
  [5458] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(363), 13,
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
  [5478] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(367), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(365), 11,
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
  [5500] = 3,
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
  [5522] = 2,
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
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [5542] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(377), 2,
      sym_stateful,
      sym_identifier,
    ACTIONS(375), 11,
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
  [5564] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 13,
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
  [5584] = 4,
    ACTIONS(383), 1,
      sym_stateful,
    ACTIONS(385), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(381), 11,
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
  [5608] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(348), 13,
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
  [5628] = 3,
    ACTIONS(389), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 12,
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
  [5650] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(391), 13,
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
  [5670] = 2,
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
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [5690] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(365), 13,
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
  [5710] = 3,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(395), 12,
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
  [5732] = 9,
    ACTIONS(399), 1,
      anon_sym_LBRACK,
    ACTIONS(403), 1,
      sym_identifier,
    STATE(105), 1,
      sym_adt_branch,
    STATE(118), 1,
      sym_primitive_type,
    STATE(119), 1,
      sym_type_name,
    STATE(125), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(130), 3,
      sym_union_type,
      sym_record_type,
      sym_abstract_data_type,
    ACTIONS(401), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [5766] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 13,
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
  [5786] = 4,
    ACTIONS(407), 1,
      sym_stateful,
    ACTIONS(409), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(405), 11,
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
  [5810] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(375), 13,
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
  [5830] = 4,
    ACTIONS(413), 1,
      sym_stateful,
    ACTIONS(415), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(411), 11,
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
  [5854] = 2,
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
  [5874] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(417), 13,
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
  [5894] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(419), 13,
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
  [5914] = 2,
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
  [5933] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(242), 12,
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
  [5952] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(395), 12,
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
  [5971] = 2,
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
  [5990] = 2,
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
  [6009] = 2,
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
  [6028] = 2,
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
  [6047] = 2,
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
  [6066] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(214), 12,
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
  [6085] = 2,
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
  [6104] = 2,
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
  [6123] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(230), 12,
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
  [6142] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 12,
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
  [6161] = 2,
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
  [6180] = 2,
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
  [6199] = 2,
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
  [6218] = 2,
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
  [6237] = 2,
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
  [6256] = 2,
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
  [6275] = 2,
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
  [6294] = 2,
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
  [6313] = 2,
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
  [6332] = 2,
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
  [6351] = 2,
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
  [6370] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(459), 12,
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
  [6389] = 6,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(118), 1,
      sym_primitive_type,
    STATE(125), 1,
      sym_qualified_name,
    STATE(133), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6412] = 6,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(108), 1,
      sym_primitive_type,
    STATE(109), 1,
      sym_qualified_name,
    STATE(122), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(463), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6435] = 6,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(98), 1,
      sym_type_name,
    STATE(118), 1,
      sym_primitive_type,
    STATE(125), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6458] = 6,
    ACTIONS(469), 1,
      sym_identifier,
    STATE(187), 1,
      sym_qualified_name,
    STATE(188), 1,
      sym_primitive_type,
    STATE(267), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6481] = 6,
    ACTIONS(461), 1,
      sym_identifier,
    STATE(118), 1,
      sym_primitive_type,
    STATE(121), 1,
      sym_type_name,
    STATE(125), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6504] = 6,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(108), 1,
      sym_primitive_type,
    STATE(109), 1,
      sym_qualified_name,
    STATE(113), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(463), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6527] = 6,
    ACTIONS(465), 1,
      sym_identifier,
    STATE(108), 1,
      sym_primitive_type,
    STATE(109), 1,
      sym_qualified_name,
    STATE(124), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(463), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6550] = 6,
    ACTIONS(469), 1,
      sym_identifier,
    STATE(186), 1,
      sym_type_name,
    STATE(187), 1,
      sym_qualified_name,
    STATE(188), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [6573] = 4,
    ACTIONS(471), 1,
      anon_sym_DOT,
    STATE(161), 1,
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
  [6591] = 4,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(161), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6609] = 4,
    ACTIONS(228), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(226), 5,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6627] = 4,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(476), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6644] = 2,
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
  [6657] = 4,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(478), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6674] = 4,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(480), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6691] = 4,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(167), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(476), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6708] = 4,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(482), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6725] = 4,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(164), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(484), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6742] = 4,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(166), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(480), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6759] = 6,
    ACTIONS(486), 1,
      sym_string_literal,
    ACTIONS(488), 1,
      sym_identifier,
    STATE(231), 1,
      sym_boolean_literal,
    STATE(240), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(51), 2,
      anon_sym_true,
      anon_sym_false,
  [6780] = 4,
    ACTIONS(474), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(484), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6797] = 4,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    STATE(174), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(493), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6814] = 4,
    ACTIONS(497), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(495), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [6830] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(500), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6842] = 4,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(177), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(505), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6858] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(507), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6870] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6882] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(493), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6894] = 4,
    ACTIONS(513), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(511), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [6910] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(515), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6922] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(517), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6934] = 6,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_COLON_DASH,
    ACTIONS(523), 1,
      anon_sym_DOT,
    ACTIONS(525), 1,
      anon_sym_LT_EQ,
    STATE(207), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [6954] = 4,
    ACTIONS(513), 1,
      anon_sym_SEMI,
    STATE(175), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(527), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [6970] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(529), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6981] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(369), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [6992] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(365), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [7003] = 5,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(94), 1,
      sym_choice_domain_attribute,
    STATE(110), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7020] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(375), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [7031] = 4,
    ACTIONS(535), 1,
      anon_sym_EQ,
    ACTIONS(537), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(150), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [7046] = 4,
    ACTIONS(539), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(275), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [7061] = 5,
    ACTIONS(531), 1,
      anon_sym_LPAREN,
    ACTIONS(533), 1,
      sym_identifier,
    STATE(106), 1,
      sym_choice_domain_attribute,
    STATE(110), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7078] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(495), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [7089] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_atom,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7106] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(505), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [7117] = 4,
    ACTIONS(544), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7132] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(549), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym_atom,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7149] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [7159] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(553), 1,
      anon_sym_RPAREN,
    STATE(220), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7173] = 4,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(208), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7187] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(559), 1,
      anon_sym_RBRACE,
    STATE(223), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7201] = 4,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(561), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7215] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7229] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(232), 1,
      sym_atom,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7243] = 4,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(250), 1,
      sym_atom,
    STATE(271), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7257] = 4,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(567), 1,
      anon_sym_COLON_DASH,
    STATE(217), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7271] = 4,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(569), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7285] = 4,
    ACTIONS(571), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7299] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(576), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7313] = 4,
    ACTIONS(578), 1,
      anon_sym_RPAREN,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(200), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7327] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    STATE(210), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7341] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7355] = 4,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RPAREN,
    STATE(197), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7369] = 4,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(222), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7383] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
    STATE(177), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7397] = 4,
    ACTIONS(592), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_COLON_DASH,
    STATE(217), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7411] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(227), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7425] = 4,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7439] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(601), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7453] = 4,
    ACTIONS(555), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(214), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7467] = 4,
    ACTIONS(563), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(204), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7481] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RBRACE,
    STATE(177), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7495] = 4,
    ACTIONS(580), 1,
      sym_identifier,
    ACTIONS(609), 1,
      anon_sym_RBRACE,
    STATE(202), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7509] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(611), 1,
      anon_sym_RBRACK,
    STATE(216), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7523] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(613), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7537] = 4,
    ACTIONS(551), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7551] = 4,
    ACTIONS(588), 1,
      sym_identifier,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(212), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7565] = 4,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(617), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7579] = 4,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RPAREN,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7593] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(621), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7602] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(595), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [7611] = 3,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(196), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7622] = 3,
    ACTIONS(623), 1,
      sym_identifier,
    STATE(114), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7633] = 3,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(93), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7644] = 3,
    ACTIONS(588), 1,
      sym_identifier,
    STATE(237), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7655] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(574), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7664] = 3,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(218), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7675] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(265), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7686] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(627), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [7695] = 3,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(266), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7706] = 3,
    ACTIONS(625), 1,
      sym_identifier,
    STATE(102), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7717] = 3,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(225), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7728] = 3,
    ACTIONS(580), 1,
      sym_identifier,
    STATE(226), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7739] = 2,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7747] = 2,
    ACTIONS(631), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7755] = 2,
    ACTIONS(633), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7763] = 2,
    ACTIONS(635), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7771] = 2,
    ACTIONS(637), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7779] = 2,
    ACTIONS(639), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7787] = 2,
    ACTIONS(641), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7795] = 2,
    ACTIONS(643), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7803] = 2,
    ACTIONS(645), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7811] = 2,
    ACTIONS(647), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7819] = 2,
    ACTIONS(649), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7827] = 2,
    ACTIONS(651), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7835] = 2,
    ACTIONS(653), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7843] = 2,
    ACTIONS(655), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7851] = 2,
    ACTIONS(657), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7859] = 2,
    ACTIONS(659), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7867] = 2,
    ACTIONS(661), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7875] = 2,
    ACTIONS(296), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7883] = 2,
    ACTIONS(663), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7891] = 2,
    ACTIONS(665), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7899] = 2,
    ACTIONS(667), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7907] = 2,
    ACTIONS(669), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7915] = 2,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7923] = 2,
    ACTIONS(673), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7931] = 2,
    ACTIONS(675), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7939] = 2,
    ACTIONS(677), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7947] = 2,
    ACTIONS(679), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7955] = 2,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7963] = 2,
    ACTIONS(683), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7971] = 2,
    ACTIONS(685), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7979] = 2,
    ACTIONS(687), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7987] = 2,
    ACTIONS(689), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [7995] = 2,
    ACTIONS(691), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8003] = 2,
    ACTIONS(693), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8011] = 2,
    ACTIONS(695), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8019] = 2,
    ACTIONS(697), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [8027] = 2,
    ACTIONS(699), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 117,
  [SMALL_STATE(4)] = 234,
  [SMALL_STATE(5)] = 351,
  [SMALL_STATE(6)] = 468,
  [SMALL_STATE(7)] = 585,
  [SMALL_STATE(8)] = 702,
  [SMALL_STATE(9)] = 819,
  [SMALL_STATE(10)] = 933,
  [SMALL_STATE(11)] = 1044,
  [SMALL_STATE(12)] = 1155,
  [SMALL_STATE(13)] = 1266,
  [SMALL_STATE(14)] = 1354,
  [SMALL_STATE(15)] = 1442,
  [SMALL_STATE(16)] = 1530,
  [SMALL_STATE(17)] = 1618,
  [SMALL_STATE(18)] = 1703,
  [SMALL_STATE(19)] = 1788,
  [SMALL_STATE(20)] = 1873,
  [SMALL_STATE(21)] = 1958,
  [SMALL_STATE(22)] = 2043,
  [SMALL_STATE(23)] = 2128,
  [SMALL_STATE(24)] = 2213,
  [SMALL_STATE(25)] = 2298,
  [SMALL_STATE(26)] = 2383,
  [SMALL_STATE(27)] = 2468,
  [SMALL_STATE(28)] = 2553,
  [SMALL_STATE(29)] = 2638,
  [SMALL_STATE(30)] = 2723,
  [SMALL_STATE(31)] = 2771,
  [SMALL_STATE(32)] = 2809,
  [SMALL_STATE(33)] = 2873,
  [SMALL_STATE(34)] = 2937,
  [SMALL_STATE(35)] = 2975,
  [SMALL_STATE(36)] = 3022,
  [SMALL_STATE(37)] = 3059,
  [SMALL_STATE(38)] = 3096,
  [SMALL_STATE(39)] = 3133,
  [SMALL_STATE(40)] = 3178,
  [SMALL_STATE(41)] = 3217,
  [SMALL_STATE(42)] = 3254,
  [SMALL_STATE(43)] = 3291,
  [SMALL_STATE(44)] = 3328,
  [SMALL_STATE(45)] = 3365,
  [SMALL_STATE(46)] = 3402,
  [SMALL_STATE(47)] = 3439,
  [SMALL_STATE(48)] = 3476,
  [SMALL_STATE(49)] = 3513,
  [SMALL_STATE(50)] = 3550,
  [SMALL_STATE(51)] = 3593,
  [SMALL_STATE(52)] = 3630,
  [SMALL_STATE(53)] = 3667,
  [SMALL_STATE(54)] = 3704,
  [SMALL_STATE(55)] = 3741,
  [SMALL_STATE(56)] = 3778,
  [SMALL_STATE(57)] = 3815,
  [SMALL_STATE(58)] = 3852,
  [SMALL_STATE(59)] = 3889,
  [SMALL_STATE(60)] = 3926,
  [SMALL_STATE(61)] = 3967,
  [SMALL_STATE(62)] = 4008,
  [SMALL_STATE(63)] = 4047,
  [SMALL_STATE(64)] = 4088,
  [SMALL_STATE(65)] = 4129,
  [SMALL_STATE(66)] = 4170,
  [SMALL_STATE(67)] = 4211,
  [SMALL_STATE(68)] = 4252,
  [SMALL_STATE(69)] = 4293,
  [SMALL_STATE(70)] = 4329,
  [SMALL_STATE(71)] = 4373,
  [SMALL_STATE(72)] = 4403,
  [SMALL_STATE(73)] = 4444,
  [SMALL_STATE(74)] = 4487,
  [SMALL_STATE(75)] = 4530,
  [SMALL_STATE(76)] = 4573,
  [SMALL_STATE(77)] = 4612,
  [SMALL_STATE(78)] = 4655,
  [SMALL_STATE(79)] = 4683,
  [SMALL_STATE(80)] = 4711,
  [SMALL_STATE(81)] = 4739,
  [SMALL_STATE(82)] = 4776,
  [SMALL_STATE(83)] = 4813,
  [SMALL_STATE(84)] = 4850,
  [SMALL_STATE(85)] = 4875,
  [SMALL_STATE(86)] = 4904,
  [SMALL_STATE(87)] = 4941,
  [SMALL_STATE(88)] = 4978,
  [SMALL_STATE(89)] = 5006,
  [SMALL_STATE(90)] = 5034,
  [SMALL_STATE(91)] = 5060,
  [SMALL_STATE(92)] = 5088,
  [SMALL_STATE(93)] = 5116,
  [SMALL_STATE(94)] = 5144,
  [SMALL_STATE(95)] = 5169,
  [SMALL_STATE(96)] = 5194,
  [SMALL_STATE(97)] = 5219,
  [SMALL_STATE(98)] = 5244,
  [SMALL_STATE(99)] = 5269,
  [SMALL_STATE(100)] = 5294,
  [SMALL_STATE(101)] = 5319,
  [SMALL_STATE(102)] = 5344,
  [SMALL_STATE(103)] = 5365,
  [SMALL_STATE(104)] = 5390,
  [SMALL_STATE(105)] = 5413,
  [SMALL_STATE(106)] = 5438,
  [SMALL_STATE(107)] = 5458,
  [SMALL_STATE(108)] = 5478,
  [SMALL_STATE(109)] = 5500,
  [SMALL_STATE(110)] = 5522,
  [SMALL_STATE(111)] = 5542,
  [SMALL_STATE(112)] = 5564,
  [SMALL_STATE(113)] = 5584,
  [SMALL_STATE(114)] = 5608,
  [SMALL_STATE(115)] = 5628,
  [SMALL_STATE(116)] = 5650,
  [SMALL_STATE(117)] = 5670,
  [SMALL_STATE(118)] = 5690,
  [SMALL_STATE(119)] = 5710,
  [SMALL_STATE(120)] = 5732,
  [SMALL_STATE(121)] = 5766,
  [SMALL_STATE(122)] = 5786,
  [SMALL_STATE(123)] = 5810,
  [SMALL_STATE(124)] = 5830,
  [SMALL_STATE(125)] = 5854,
  [SMALL_STATE(126)] = 5874,
  [SMALL_STATE(127)] = 5894,
  [SMALL_STATE(128)] = 5914,
  [SMALL_STATE(129)] = 5933,
  [SMALL_STATE(130)] = 5952,
  [SMALL_STATE(131)] = 5971,
  [SMALL_STATE(132)] = 5990,
  [SMALL_STATE(133)] = 6009,
  [SMALL_STATE(134)] = 6028,
  [SMALL_STATE(135)] = 6047,
  [SMALL_STATE(136)] = 6066,
  [SMALL_STATE(137)] = 6085,
  [SMALL_STATE(138)] = 6104,
  [SMALL_STATE(139)] = 6123,
  [SMALL_STATE(140)] = 6142,
  [SMALL_STATE(141)] = 6161,
  [SMALL_STATE(142)] = 6180,
  [SMALL_STATE(143)] = 6199,
  [SMALL_STATE(144)] = 6218,
  [SMALL_STATE(145)] = 6237,
  [SMALL_STATE(146)] = 6256,
  [SMALL_STATE(147)] = 6275,
  [SMALL_STATE(148)] = 6294,
  [SMALL_STATE(149)] = 6313,
  [SMALL_STATE(150)] = 6332,
  [SMALL_STATE(151)] = 6351,
  [SMALL_STATE(152)] = 6370,
  [SMALL_STATE(153)] = 6389,
  [SMALL_STATE(154)] = 6412,
  [SMALL_STATE(155)] = 6435,
  [SMALL_STATE(156)] = 6458,
  [SMALL_STATE(157)] = 6481,
  [SMALL_STATE(158)] = 6504,
  [SMALL_STATE(159)] = 6527,
  [SMALL_STATE(160)] = 6550,
  [SMALL_STATE(161)] = 6573,
  [SMALL_STATE(162)] = 6591,
  [SMALL_STATE(163)] = 6609,
  [SMALL_STATE(164)] = 6627,
  [SMALL_STATE(165)] = 6644,
  [SMALL_STATE(166)] = 6657,
  [SMALL_STATE(167)] = 6674,
  [SMALL_STATE(168)] = 6691,
  [SMALL_STATE(169)] = 6708,
  [SMALL_STATE(170)] = 6725,
  [SMALL_STATE(171)] = 6742,
  [SMALL_STATE(172)] = 6759,
  [SMALL_STATE(173)] = 6780,
  [SMALL_STATE(174)] = 6797,
  [SMALL_STATE(175)] = 6814,
  [SMALL_STATE(176)] = 6830,
  [SMALL_STATE(177)] = 6842,
  [SMALL_STATE(178)] = 6858,
  [SMALL_STATE(179)] = 6870,
  [SMALL_STATE(180)] = 6882,
  [SMALL_STATE(181)] = 6894,
  [SMALL_STATE(182)] = 6910,
  [SMALL_STATE(183)] = 6922,
  [SMALL_STATE(184)] = 6934,
  [SMALL_STATE(185)] = 6954,
  [SMALL_STATE(186)] = 6970,
  [SMALL_STATE(187)] = 6981,
  [SMALL_STATE(188)] = 6992,
  [SMALL_STATE(189)] = 7003,
  [SMALL_STATE(190)] = 7020,
  [SMALL_STATE(191)] = 7031,
  [SMALL_STATE(192)] = 7046,
  [SMALL_STATE(193)] = 7061,
  [SMALL_STATE(194)] = 7078,
  [SMALL_STATE(195)] = 7089,
  [SMALL_STATE(196)] = 7106,
  [SMALL_STATE(197)] = 7117,
  [SMALL_STATE(198)] = 7132,
  [SMALL_STATE(199)] = 7149,
  [SMALL_STATE(200)] = 7159,
  [SMALL_STATE(201)] = 7173,
  [SMALL_STATE(202)] = 7187,
  [SMALL_STATE(203)] = 7201,
  [SMALL_STATE(204)] = 7215,
  [SMALL_STATE(205)] = 7229,
  [SMALL_STATE(206)] = 7243,
  [SMALL_STATE(207)] = 7257,
  [SMALL_STATE(208)] = 7271,
  [SMALL_STATE(209)] = 7285,
  [SMALL_STATE(210)] = 7299,
  [SMALL_STATE(211)] = 7313,
  [SMALL_STATE(212)] = 7327,
  [SMALL_STATE(213)] = 7341,
  [SMALL_STATE(214)] = 7355,
  [SMALL_STATE(215)] = 7369,
  [SMALL_STATE(216)] = 7383,
  [SMALL_STATE(217)] = 7397,
  [SMALL_STATE(218)] = 7411,
  [SMALL_STATE(219)] = 7425,
  [SMALL_STATE(220)] = 7439,
  [SMALL_STATE(221)] = 7453,
  [SMALL_STATE(222)] = 7467,
  [SMALL_STATE(223)] = 7481,
  [SMALL_STATE(224)] = 7495,
  [SMALL_STATE(225)] = 7509,
  [SMALL_STATE(226)] = 7523,
  [SMALL_STATE(227)] = 7537,
  [SMALL_STATE(228)] = 7551,
  [SMALL_STATE(229)] = 7565,
  [SMALL_STATE(230)] = 7579,
  [SMALL_STATE(231)] = 7593,
  [SMALL_STATE(232)] = 7602,
  [SMALL_STATE(233)] = 7611,
  [SMALL_STATE(234)] = 7622,
  [SMALL_STATE(235)] = 7633,
  [SMALL_STATE(236)] = 7644,
  [SMALL_STATE(237)] = 7655,
  [SMALL_STATE(238)] = 7664,
  [SMALL_STATE(239)] = 7675,
  [SMALL_STATE(240)] = 7686,
  [SMALL_STATE(241)] = 7695,
  [SMALL_STATE(242)] = 7706,
  [SMALL_STATE(243)] = 7717,
  [SMALL_STATE(244)] = 7728,
  [SMALL_STATE(245)] = 7739,
  [SMALL_STATE(246)] = 7747,
  [SMALL_STATE(247)] = 7755,
  [SMALL_STATE(248)] = 7763,
  [SMALL_STATE(249)] = 7771,
  [SMALL_STATE(250)] = 7779,
  [SMALL_STATE(251)] = 7787,
  [SMALL_STATE(252)] = 7795,
  [SMALL_STATE(253)] = 7803,
  [SMALL_STATE(254)] = 7811,
  [SMALL_STATE(255)] = 7819,
  [SMALL_STATE(256)] = 7827,
  [SMALL_STATE(257)] = 7835,
  [SMALL_STATE(258)] = 7843,
  [SMALL_STATE(259)] = 7851,
  [SMALL_STATE(260)] = 7859,
  [SMALL_STATE(261)] = 7867,
  [SMALL_STATE(262)] = 7875,
  [SMALL_STATE(263)] = 7883,
  [SMALL_STATE(264)] = 7891,
  [SMALL_STATE(265)] = 7899,
  [SMALL_STATE(266)] = 7907,
  [SMALL_STATE(267)] = 7915,
  [SMALL_STATE(268)] = 7923,
  [SMALL_STATE(269)] = 7931,
  [SMALL_STATE(270)] = 7939,
  [SMALL_STATE(271)] = 7947,
  [SMALL_STATE(272)] = 7955,
  [SMALL_STATE(273)] = 7963,
  [SMALL_STATE(274)] = 7971,
  [SMALL_STATE(275)] = 7979,
  [SMALL_STATE(276)] = 7987,
  [SMALL_STATE(277)] = 7995,
  [SMALL_STATE(278)] = 8003,
  [SMALL_STATE(279)] = 8011,
  [SMALL_STATE(280)] = 8019,
  [SMALL_STATE(281)] = 8027,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(30),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(276),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(256),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(163),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(260),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(278),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(277),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 8),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 8),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 3, .production_id = 7),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 3, .production_id = 7),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 5, .production_id = 8),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 5, .production_id = 8),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 19),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 19),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 5, .production_id = 15),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 5, .production_id = 15),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 4, .production_id = 5),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 4, .production_id = 5),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 20),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 20),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 4, .production_id = 11),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 4, .production_id = 11),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 6, .production_id = 17),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 6, .production_id = 17),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 6),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 10),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 10),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 10),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 10),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 10),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 10),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 6),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 6),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 6),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(71),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(280),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(281),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(242),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(157),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(193),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 4),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(234),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 13),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 11),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 11),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [401] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 11),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 11),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 11),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 11),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 14),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 6),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 18),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 16),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 4),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_preprocessor_directive, 2, .production_id = 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 10),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preprocessor_directive, 1),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(268),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(12),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [497] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(9),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(233),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 1),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 9),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(17),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(246),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(236),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2), SHIFT_REPEAT(205),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 12),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumption_head, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor_name, 1),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor_name, 2),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [685] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
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
