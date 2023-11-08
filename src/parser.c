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
#define STATE_COUNT 357
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 188
#define ALIAS_COUNT 4
#define TOKEN_COUNT 108
#define EXTERNAL_TOKEN_COUNT 9
#define FIELD_COUNT 15
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 22

enum {
  anon_sym_POUNDinclude = 1,
  anon_sym_POUNDif = 2,
  sym_preproc_else = 3,
  anon_sym_POUNDifdef = 4,
  anon_sym_POUNDifndef = 5,
  sym_preproc_endif = 6,
  anon_sym_POUNDdefine = 7,
  sym_preproc_macro = 8,
  anon_sym_defined = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_PLUS = 12,
  anon_sym_DASH = 13,
  anon_sym_STAR = 14,
  anon_sym_SLASH = 15,
  anon_sym_LT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT = 18,
  anon_sym_GT_EQ = 19,
  anon_sym_EQ_EQ = 20,
  anon_sym_AMP_AMP = 21,
  anon_sym_PIPE_PIPE = 22,
  anon_sym_LT_LT = 23,
  anon_sym_GT_GT = 24,
  anon_sym_define = 25,
  anon_sym_COMMA = 26,
  anon_sym_eqrel = 27,
  anon_sym_btree = 28,
  anon_sym_brie = 29,
  anon_sym_no_magic = 30,
  anon_sym_magic = 31,
  anon_sym_no_inline = 32,
  anon_sym_inline = 33,
  anon_sym_override = 34,
  anon_sym_choice_DASHdomain = 35,
  anon_sym_COLON_DASH = 36,
  anon_sym_DOT = 37,
  anon_sym_SEMI = 38,
  anon_sym_BANG = 39,
  anon_sym_EQ = 40,
  anon_sym_BANG_EQ = 41,
  anon_sym_COLON = 42,
  anon_sym_nil = 43,
  anon_sym__ = 44,
  anon_sym_LBRACK = 45,
  anon_sym_RBRACK = 46,
  anon_sym_DOLLAR = 47,
  anon_sym_bnot = 48,
  anon_sym_lnot = 49,
  anon_sym_CARET = 50,
  anon_sym_PERCENT = 51,
  anon_sym_land = 52,
  anon_sym_lor = 53,
  anon_sym_lxor = 54,
  anon_sym_band = 55,
  anon_sym_bor = 56,
  anon_sym_bxor = 57,
  anon_sym_bshl = 58,
  anon_sym_bshr = 59,
  anon_sym_bshru = 60,
  anon_sym_as = 61,
  anon_sym_max = 62,
  anon_sym_mean = 63,
  anon_sym_min = 64,
  anon_sym_sum = 65,
  anon_sym_count = 66,
  anon_sym_LBRACE = 67,
  anon_sym_RBRACE = 68,
  anon_sym_range = 69,
  anon_sym_AT = 70,
  anon_sym_ord = 71,
  anon_sym_to_float = 72,
  anon_sym_to_number = 73,
  anon_sym_to_string = 74,
  anon_sym_to_unsigned = 75,
  anon_sym_cat = 76,
  anon_sym_strlen = 77,
  anon_sym_substr = 78,
  anon_sym_autoinc = 79,
  anon_sym_LT_COLON = 80,
  anon_sym_PIPE = 81,
  anon_sym_number = 82,
  anon_sym_symbol = 83,
  anon_sym_unsigned = 84,
  anon_sym_float = 85,
  sym_stateful = 86,
  anon_sym_DOTpragma = 87,
  anon_sym_true = 88,
  anon_sym_false = 89,
  sym_string_literal = 90,
  sym_line_comment = 91,
  sym_block_comment = 92,
  sym_identifier = 93,
  sym_hex = 94,
  sym_binary = 95,
  sym_decimal = 96,
  sym_unsigned = 97,
  sym_float = 98,
  sym_decl_kw = 99,
  sym_input_kw = 100,
  sym_output_kw = 101,
  sym_type_kw = 102,
  sym_functor_kw = 103,
  sym_include_kw = 104,
  sym_printsize_kw = 105,
  sym_limitsize_kw = 106,
  sym_plan_kw = 107,
  sym_source_file = 108,
  sym__element = 109,
  sym_preproc_directive = 110,
  sym_preproc_include = 111,
  sym_preproc_if = 112,
  sym_preproc_ifdef = 113,
  sym_preproc_ifndef = 114,
  sym_preproc_define = 115,
  sym__preproc_exp = 116,
  sym_preproc_defined_exp = 117,
  sym_preproc_binary_exp = 118,
  sym_relation_decl = 119,
  sym_relation_qualifier = 120,
  sym_choice_domain = 121,
  sym_choice_domain_attribute = 122,
  sym_choice_domain_tuple_attribute = 123,
  sym_rule = 124,
  sym_rule_head = 125,
  sym_subsumption_head = 126,
  sym_disjunction = 127,
  sym_conjunction = 128,
  sym_constraint = 129,
  sym_binary_constraint = 130,
  sym_query_plan = 131,
  sym_directive = 132,
  sym__directive_qualifier = 133,
  sym_directive_attribute_assignment = 134,
  sym_directive_value = 135,
  sym_include_directive = 136,
  sym_qualified_name = 137,
  sym_argument = 138,
  sym_constant = 139,
  sym_variable = 140,
  sym_argument_list = 141,
  sym_branch_init = 142,
  sym_unary_operation = 143,
  sym_binary_operation = 144,
  sym_type_conversion = 145,
  sym_aggregator = 146,
  sym_range_expression = 147,
  sym_functor_invocation = 148,
  sym_user_defined_functor_name = 149,
  sym_intrinsic_functor_name = 150,
  sym_paren_argument = 151,
  sym_attribute = 152,
  sym_fact = 153,
  sym_type_decl = 154,
  sym_subtype_decl = 155,
  sym_eq_type_decl = 156,
  sym_union_type = 157,
  sym_type_name = 158,
  sym_record_type = 159,
  sym_abstract_data_type = 160,
  sym_adt_branch = 161,
  sym_primitive_type = 162,
  sym_functor_decl = 163,
  sym_functor_attribute = 164,
  sym_pragma = 165,
  sym_atom = 166,
  sym_boolean_literal = 167,
  sym__integer = 168,
  sym__number = 169,
  aux_sym_source_file_repeat1 = 170,
  aux_sym_relation_decl_repeat1 = 171,
  aux_sym_relation_decl_repeat2 = 172,
  aux_sym_relation_decl_repeat3 = 173,
  aux_sym_choice_domain_repeat1 = 174,
  aux_sym_rule_head_repeat1 = 175,
  aux_sym_disjunction_repeat1 = 176,
  aux_sym_conjunction_repeat1 = 177,
  aux_sym_conjunction_repeat2 = 178,
  aux_sym_query_plan_repeat1 = 179,
  aux_sym_query_plan_repeat2 = 180,
  aux_sym_directive_repeat1 = 181,
  aux_sym_directive_repeat2 = 182,
  aux_sym_qualified_name_repeat1 = 183,
  aux_sym_argument_list_repeat1 = 184,
  aux_sym_union_type_repeat1 = 185,
  aux_sym_abstract_data_type_repeat1 = 186,
  aux_sym_functor_decl_repeat1 = 187,
  alias_sym_attribute_name = 188,
  alias_sym_choice_domain_single_attribute = 189,
  alias_sym_path_spec = 190,
  alias_sym_user_defined_type_name = 191,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_POUNDif] = "#if",
  [sym_preproc_else] = "preproc_else",
  [anon_sym_POUNDifdef] = "#ifdef",
  [anon_sym_POUNDifndef] = "#ifndef",
  [sym_preproc_endif] = "preproc_endif",
  [anon_sym_POUNDdefine] = "#define",
  [sym_preproc_macro] = "preproc_macro",
  [anon_sym_defined] = "defined",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_define] = "define",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_EQ] = "=",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_COLON] = ":",
  [anon_sym_nil] = "nil",
  [anon_sym__] = "_",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_bnot] = "bnot",
  [anon_sym_lnot] = "lnot",
  [anon_sym_CARET] = "^",
  [anon_sym_PERCENT] = "%",
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
  [sym_unsigned] = "unsigned",
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
  [sym_preproc_directive] = "preproc_directive",
  [sym_preproc_include] = "preproc_include",
  [sym_preproc_if] = "preproc_if",
  [sym_preproc_ifdef] = "preproc_ifdef",
  [sym_preproc_ifndef] = "preproc_ifndef",
  [sym_preproc_define] = "preproc_define",
  [sym__preproc_exp] = "_preproc_exp",
  [sym_preproc_defined_exp] = "preproc_defined_exp",
  [sym_preproc_binary_exp] = "preproc_binary_exp",
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
  [sym_paren_argument] = "paren_argument",
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
  [sym_functor_attribute] = "functor_attribute",
  [sym_pragma] = "pragma",
  [sym_atom] = "atom",
  [sym_boolean_literal] = "boolean_literal",
  [sym__integer] = "_integer",
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
  [aux_sym_query_plan_repeat1] = "query_plan_repeat1",
  [aux_sym_query_plan_repeat2] = "query_plan_repeat2",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_directive_repeat2] = "directive_repeat2",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_union_type_repeat1] = "union_type_repeat1",
  [aux_sym_abstract_data_type_repeat1] = "abstract_data_type_repeat1",
  [aux_sym_functor_decl_repeat1] = "functor_decl_repeat1",
  [alias_sym_attribute_name] = "attribute_name",
  [alias_sym_choice_domain_single_attribute] = "choice_domain_single_attribute",
  [alias_sym_path_spec] = "path_spec",
  [alias_sym_user_defined_type_name] = "user_defined_type_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_POUNDif] = anon_sym_POUNDif,
  [sym_preproc_else] = sym_preproc_else,
  [anon_sym_POUNDifdef] = anon_sym_POUNDifdef,
  [anon_sym_POUNDifndef] = anon_sym_POUNDifndef,
  [sym_preproc_endif] = sym_preproc_endif,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [sym_preproc_macro] = sym_preproc_macro,
  [anon_sym_defined] = anon_sym_defined,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_bnot] = anon_sym_bnot,
  [anon_sym_lnot] = anon_sym_lnot,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
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
  [sym_unsigned] = sym_unsigned,
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
  [sym_preproc_directive] = sym_preproc_directive,
  [sym_preproc_include] = sym_preproc_include,
  [sym_preproc_if] = sym_preproc_if,
  [sym_preproc_ifdef] = sym_preproc_ifdef,
  [sym_preproc_ifndef] = sym_preproc_ifndef,
  [sym_preproc_define] = sym_preproc_define,
  [sym__preproc_exp] = sym__preproc_exp,
  [sym_preproc_defined_exp] = sym_preproc_defined_exp,
  [sym_preproc_binary_exp] = sym_preproc_binary_exp,
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
  [sym_paren_argument] = sym_paren_argument,
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
  [sym_functor_attribute] = sym_functor_attribute,
  [sym_pragma] = sym_pragma,
  [sym_atom] = sym_atom,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym__integer] = sym__integer,
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
  [aux_sym_query_plan_repeat1] = aux_sym_query_plan_repeat1,
  [aux_sym_query_plan_repeat2] = aux_sym_query_plan_repeat2,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_directive_repeat2] = aux_sym_directive_repeat2,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_union_type_repeat1] = aux_sym_union_type_repeat1,
  [aux_sym_abstract_data_type_repeat1] = aux_sym_abstract_data_type_repeat1,
  [aux_sym_functor_decl_repeat1] = aux_sym_functor_decl_repeat1,
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
  [anon_sym_POUNDif] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_else] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDifdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDifndef] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_endif] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_macro] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_defined] = {
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
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
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_PERCENT] = {
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
  [sym_unsigned] = {
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
  [sym_preproc_directive] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_include] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_if] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_ifdef] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_ifndef] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_define] = {
    .visible = true,
    .named = true,
  },
  [sym__preproc_exp] = {
    .visible = false,
    .named = true,
  },
  [sym_preproc_defined_exp] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_binary_exp] = {
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
  [sym_paren_argument] = {
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
  [sym_functor_attribute] = {
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
  [sym__integer] = {
    .visible = false,
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
  [aux_sym_query_plan_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_plan_repeat2] = {
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
  [aux_sym_functor_decl_repeat1] = {
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
  field_lhs = 6,
  field_name = 7,
  field_op = 8,
  field_range_from = 9,
  field_range_step = 10,
  field_range_to = 11,
  field_relation_name = 12,
  field_rhs = 13,
  field_stateful = 14,
  field_type_ref = 15,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_body] = "body",
  [field_directive_attribute] = "directive_attribute",
  [field_directive_value] = "directive_value",
  [field_head] = "head",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_range_from] = "range_from",
  [field_range_step] = "range_step",
  [field_range_to] = "range_to",
  [field_relation_name] = "relation_name",
  [field_rhs] = "rhs",
  [field_stateful] = "stateful",
  [field_type_ref] = "type_ref",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 3},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 3},
  [11] = {.index = 13, .length = 2},
  [12] = {.index = 15, .length = 1},
  [13] = {.index = 16, .length = 2},
  [15] = {.index = 18, .length = 2},
  [16] = {.index = 20, .length = 2},
  [17] = {.index = 22, .length = 2},
  [18] = {.index = 24, .length = 3},
  [19] = {.index = 27, .length = 2},
  [20] = {.index = 29, .length = 2},
  [21] = {.index = 31, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type_ref, 1},
  [1] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [4] =
    {field_body, 2},
    {field_head, 0},
  [6] =
    {field_args, 2},
    {field_name, 0},
  [8] =
    {field_relation_name, 1},
  [9] =
    {field_name, 0},
  [10] =
    {field_args, 2},
    {field_args, 3},
    {field_name, 0},
  [13] =
    {field_relation_name, 1},
    {field_relation_name, 2},
  [15] =
    {field_name, 1},
  [16] =
    {field_directive_attribute, 0},
    {field_directive_value, 2},
  [18] =
    {field_name, 1},
    {field_stateful, 6},
  [20] =
    {field_args, 3},
    {field_name, 1},
  [22] =
    {field_name, 1},
    {field_stateful, 7},
  [24] =
    {field_args, 3},
    {field_args, 4},
    {field_name, 1},
  [27] =
    {field_name, 1},
    {field_stateful, 8},
  [29] =
    {field_range_from, 2},
    {field_range_to, 4},
  [31] =
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
  [10] = {
    [0] = alias_sym_attribute_name,
  },
  [14] = {
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
  [90] = 84,
  [91] = 83,
  [92] = 92,
  [93] = 93,
  [94] = 82,
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
  [108] = 87,
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
  [120] = 118,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 124,
  [128] = 116,
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
  [178] = 35,
  [179] = 38,
  [180] = 34,
  [181] = 40,
  [182] = 41,
  [183] = 39,
  [184] = 177,
  [185] = 42,
  [186] = 36,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 189,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 192,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 193,
  [201] = 195,
  [202] = 197,
  [203] = 203,
  [204] = 198,
  [205] = 191,
  [206] = 203,
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
  [218] = 84,
  [219] = 219,
  [220] = 82,
  [221] = 221,
  [222] = 83,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 87,
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
  [253] = 124,
  [254] = 118,
  [255] = 116,
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
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 340,
  [354] = 354,
  [355] = 340,
  [356] = 356,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(213);
      if (lookahead == '!') ADVANCE(276);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '$') ADVANCE(288);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == '0') ADVANCE(512);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(240);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '@') ADVANCE(320);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == '^') ADVANCE(293);
      if (lookahead == '_') ADVANCE(284);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'b') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(57);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == 'l') ADVANCE(34);
      if (lookahead == 'm') ADVANCE(22);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(186);
      if (lookahead == 't') ADVANCE(154);
      if (lookahead == 'u') ADVANCE(133);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '|') ADVANCE(341);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(513);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(275);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(288);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(512);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '@') ADVANCE(320);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'b') ADVANCE(443);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(461);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == '^') ADVANCE(293);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(294);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == ';') ADVANCE(274);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(277);
      if (lookahead == '>') ADVANCE(244);
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == '^') ADVANCE(293);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(288);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(272);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(512);
      if (lookahead == ':') ADVANCE(280);
      if (lookahead == '@') ADVANCE(320);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == ']') ADVANCE(287);
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == 'a') ADVANCE(484);
      if (lookahead == 'b') ADVANCE(443);
      if (lookahead == 'c') ADVANCE(365);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead == 'm') ADVANCE(364);
      if (lookahead == 'n') ADVANCE(416);
      if (lookahead == 'o') ADVANCE(472);
      if (lookahead == 'r') ADVANCE(366);
      if (lookahead == 's') ADVANCE(495);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(363);
      if (lookahead == 't') ADVANCE(476);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(357);
      if (lookahead == '\\') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(248);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(514);
      if (lookahead == 'd') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == 'f') ADVANCE(437);
      if (lookahead == 'n') ADVANCE(505);
      if (lookahead == 's') ADVANCE(508);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(358);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(359);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(271);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(52);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(225);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(226);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(339);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(115);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'l') ADVANCE(155);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(352);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'h') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(191);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(160);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(262);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(337);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(260);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(321);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(298);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(295);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(346);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(329);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(82);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(355);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(318);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(266);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(178);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(171);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(217);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(106);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(200);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(125);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == 's') ADVANCE(195);
      if (lookahead == 'u') ADVANCE(151);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(112);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(327);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(130);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(103);
      if (lookahead == 'x') ADVANCE(306);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(150);
      END_STATE();
    case 98:
      if (lookahead == 'h') ADVANCE(117);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(128);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(302);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(344);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(350);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(182);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 133:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(308);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(333);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(270);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(190);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(188);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(107);
      END_STATE();
    case 164:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 165:
      if (lookahead == 'q') ADVANCE(176);
      END_STATE();
    case 166:
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 'v') ADVANCE(75);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(342);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(335);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(325);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 180:
      if (lookahead == 's') ADVANCE(304);
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 186:
      if (lookahead == 't') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'y') ADVANCE(129);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(289);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(291);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(314);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(323);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(163);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(179);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 197:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(53);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 202:
      if (lookahead == '|') ADVANCE(249);
      END_STATE();
    case 203:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 204:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      END_STATE();
    case 208:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 209:
      if (eof) ADVANCE(213);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ')') ADVANCE(235);
      if (lookahead == '*') ADVANCE(238);
      if (lookahead == '+') ADVANCE(236);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(239);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '|') ADVANCE(202);
      if (lookahead == '}') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(209)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 210:
      if (eof) ADVANCE(213);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '(') ADVANCE(234);
      if (lookahead == ',') ADVANCE(253);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '{') ADVANCE(316);
      if (lookahead == '|') ADVANCE(340);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(210)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 211:
      if (eof) ADVANCE(213);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 's') ADVANCE(500);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(211)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 212:
      if (eof) ADVANCE(213);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '.') ADVANCE(164);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(478);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead == 'm') ADVANCE(367);
      if (lookahead == 'n') ADVANCE(464);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(212)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_POUNDif);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_preproc_else);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_POUNDifdef);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUNDifndef);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_preproc_endif);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(228);
      if (lookahead != 0) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(224);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\n') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(226);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\\') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(230);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(226);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(222);
      if (lookahead == '*') ADVANCE(221);
      if (lookahead == '\\') ADVANCE(228);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(226);
      if (lookahead == '\\') ADVANCE(229);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_defined);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_defined);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(358);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(339);
      if (lookahead == '<') ADVANCE(250);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(250);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(246);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(246);
      if (lookahead == '>') ADVANCE(251);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == 'd') ADVANCE(232);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(279);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(271);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(303);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_ord);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_ord);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_to_float);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_to_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_to_number);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_to_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_to_string);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_to_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_cat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_strlen);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_strlen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_substr);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_substr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_autoinc);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_autoinc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(249);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_stateful);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(507);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(489);
      if (lookahead == 'o') ADVANCE(503);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(499);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(487);
      if (lookahead == 'm') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(435);
      if (lookahead == 'n') ADVANCE(502);
      if (lookahead == 's') ADVANCE(498);
      if (lookahead == 'u') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == 'm') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(485);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(488);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead == 'r') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(490);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(501);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(423);
      if (lookahead == 't') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(479);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(496);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(417);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == 'u') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(463);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(473);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(516);
      if (lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(516);
      if (lookahead == 'x') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'u') ADVANCE(516);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 209, .external_lex_state = 2},
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
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 209, .external_lex_state = 2},
  [32] = {.lex_state = 209, .external_lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 209, .external_lex_state = 2},
  [35] = {.lex_state = 209, .external_lex_state = 2},
  [36] = {.lex_state = 209, .external_lex_state = 2},
  [37] = {.lex_state = 209, .external_lex_state = 2},
  [38] = {.lex_state = 209, .external_lex_state = 2},
  [39] = {.lex_state = 209, .external_lex_state = 2},
  [40] = {.lex_state = 209, .external_lex_state = 2},
  [41] = {.lex_state = 209, .external_lex_state = 2},
  [42] = {.lex_state = 209, .external_lex_state = 2},
  [43] = {.lex_state = 212, .external_lex_state = 2},
  [44] = {.lex_state = 212, .external_lex_state = 2},
  [45] = {.lex_state = 212, .external_lex_state = 2},
  [46] = {.lex_state = 212, .external_lex_state = 2},
  [47] = {.lex_state = 212, .external_lex_state = 2},
  [48] = {.lex_state = 212, .external_lex_state = 2},
  [49] = {.lex_state = 212, .external_lex_state = 2},
  [50] = {.lex_state = 212, .external_lex_state = 2},
  [51] = {.lex_state = 212, .external_lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 3},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 3},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 212, .external_lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 210, .external_lex_state = 2},
  [83] = {.lex_state = 210, .external_lex_state = 2},
  [84] = {.lex_state = 210, .external_lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 210, .external_lex_state = 2},
  [87] = {.lex_state = 210, .external_lex_state = 2},
  [88] = {.lex_state = 209, .external_lex_state = 2},
  [89] = {.lex_state = 209, .external_lex_state = 2},
  [90] = {.lex_state = 211, .external_lex_state = 2},
  [91] = {.lex_state = 211, .external_lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 209, .external_lex_state = 2},
  [94] = {.lex_state = 211, .external_lex_state = 2},
  [95] = {.lex_state = 209, .external_lex_state = 2},
  [96] = {.lex_state = 209, .external_lex_state = 1},
  [97] = {.lex_state = 209, .external_lex_state = 2},
  [98] = {.lex_state = 210, .external_lex_state = 2},
  [99] = {.lex_state = 209, .external_lex_state = 2},
  [100] = {.lex_state = 209, .external_lex_state = 2},
  [101] = {.lex_state = 209, .external_lex_state = 2},
  [102] = {.lex_state = 210, .external_lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 209, .external_lex_state = 2},
  [105] = {.lex_state = 209, .external_lex_state = 2},
  [106] = {.lex_state = 210, .external_lex_state = 2},
  [107] = {.lex_state = 209, .external_lex_state = 2},
  [108] = {.lex_state = 211, .external_lex_state = 2},
  [109] = {.lex_state = 210, .external_lex_state = 2},
  [110] = {.lex_state = 210, .external_lex_state = 2},
  [111] = {.lex_state = 209, .external_lex_state = 2},
  [112] = {.lex_state = 210, .external_lex_state = 2},
  [113] = {.lex_state = 209, .external_lex_state = 2},
  [114] = {.lex_state = 209, .external_lex_state = 2},
  [115] = {.lex_state = 211, .external_lex_state = 2},
  [116] = {.lex_state = 210, .external_lex_state = 2},
  [117] = {.lex_state = 210, .external_lex_state = 2},
  [118] = {.lex_state = 211, .external_lex_state = 2},
  [119] = {.lex_state = 210, .external_lex_state = 2},
  [120] = {.lex_state = 210, .external_lex_state = 2},
  [121] = {.lex_state = 210, .external_lex_state = 2},
  [122] = {.lex_state = 210, .external_lex_state = 2},
  [123] = {.lex_state = 210, .external_lex_state = 2},
  [124] = {.lex_state = 211, .external_lex_state = 2},
  [125] = {.lex_state = 209, .external_lex_state = 2},
  [126] = {.lex_state = 209, .external_lex_state = 2},
  [127] = {.lex_state = 210, .external_lex_state = 2},
  [128] = {.lex_state = 211, .external_lex_state = 2},
  [129] = {.lex_state = 211, .external_lex_state = 2},
  [130] = {.lex_state = 209, .external_lex_state = 2},
  [131] = {.lex_state = 211, .external_lex_state = 2},
  [132] = {.lex_state = 209, .external_lex_state = 2},
  [133] = {.lex_state = 209, .external_lex_state = 2},
  [134] = {.lex_state = 209, .external_lex_state = 2},
  [135] = {.lex_state = 209, .external_lex_state = 2},
  [136] = {.lex_state = 209, .external_lex_state = 2},
  [137] = {.lex_state = 210, .external_lex_state = 2},
  [138] = {.lex_state = 209, .external_lex_state = 2},
  [139] = {.lex_state = 209, .external_lex_state = 2},
  [140] = {.lex_state = 209, .external_lex_state = 2},
  [141] = {.lex_state = 209, .external_lex_state = 2},
  [142] = {.lex_state = 209, .external_lex_state = 2},
  [143] = {.lex_state = 209, .external_lex_state = 2},
  [144] = {.lex_state = 209, .external_lex_state = 2},
  [145] = {.lex_state = 209, .external_lex_state = 2},
  [146] = {.lex_state = 209, .external_lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 209, .external_lex_state = 2},
  [149] = {.lex_state = 209, .external_lex_state = 2},
  [150] = {.lex_state = 209, .external_lex_state = 2},
  [151] = {.lex_state = 209, .external_lex_state = 2},
  [152] = {.lex_state = 209, .external_lex_state = 2},
  [153] = {.lex_state = 209, .external_lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 209, .external_lex_state = 2},
  [156] = {.lex_state = 209, .external_lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 209, .external_lex_state = 2},
  [159] = {.lex_state = 209, .external_lex_state = 2},
  [160] = {.lex_state = 209, .external_lex_state = 2},
  [161] = {.lex_state = 209, .external_lex_state = 2},
  [162] = {.lex_state = 209, .external_lex_state = 2},
  [163] = {.lex_state = 209, .external_lex_state = 2},
  [164] = {.lex_state = 209, .external_lex_state = 2},
  [165] = {.lex_state = 209, .external_lex_state = 2},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 209, .external_lex_state = 2},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 209, .external_lex_state = 2},
  [170] = {.lex_state = 209, .external_lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 209},
  [178] = {.lex_state = 209},
  [179] = {.lex_state = 209},
  [180] = {.lex_state = 209},
  [181] = {.lex_state = 209},
  [182] = {.lex_state = 209},
  [183] = {.lex_state = 209},
  [184] = {.lex_state = 209},
  [185] = {.lex_state = 209},
  [186] = {.lex_state = 209},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 9},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 8},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 9},
  [208] = {.lex_state = 9},
  [209] = {.lex_state = 9},
  [210] = {.lex_state = 9},
  [211] = {.lex_state = 9},
  [212] = {.lex_state = 9},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 9},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 209},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 209},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 209},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 209},
  [257] = {.lex_state = 1},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 209},
  [263] = {.lex_state = 209},
  [264] = {.lex_state = 209},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 209},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 209},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 209},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 209},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 209},
  [298] = {.lex_state = 209},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 209},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 209},
  [305] = {.lex_state = 209},
  [306] = {.lex_state = 209},
  [307] = {.lex_state = 209},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 209},
  [310] = {.lex_state = 209},
  [311] = {.lex_state = 209},
  [312] = {.lex_state = 209},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 1},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 4},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 209},
  [321] = {.lex_state = 4},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 209},
  [324] = {.lex_state = 4},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 1},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 4},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 4},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 4},
  [335] = {.lex_state = 209},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 4},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 209},
  [340] = {.lex_state = 209},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 209},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 15},
  [349] = {.lex_state = 209},
  [350] = {.lex_state = 209},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 209},
  [354] = {.lex_state = 209},
  [355] = {.lex_state = 209},
  [356] = {.lex_state = 209},
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
    [anon_sym_POUNDif] = ACTIONS(1),
    [sym_preproc_else] = ACTIONS(1),
    [anon_sym_POUNDifdef] = ACTIONS(1),
    [anon_sym_POUNDifndef] = ACTIONS(1),
    [sym_preproc_endif] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [anon_sym_defined] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_bnot] = ACTIONS(1),
    [anon_sym_lnot] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
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
    [sym_unsigned] = ACTIONS(1),
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
    [sym_source_file] = STATE(346),
    [sym__element] = STATE(31),
    [sym_preproc_directive] = STATE(31),
    [sym_preproc_include] = STATE(150),
    [sym_preproc_if] = STATE(150),
    [sym_preproc_ifdef] = STATE(150),
    [sym_preproc_ifndef] = STATE(150),
    [sym_preproc_define] = STATE(150),
    [sym_relation_decl] = STATE(31),
    [sym_rule] = STATE(31),
    [sym_rule_head] = STATE(345),
    [sym_subsumption_head] = STATE(345),
    [sym_directive] = STATE(31),
    [sym__directive_qualifier] = STATE(297),
    [sym_include_directive] = STATE(31),
    [sym_qualified_name] = STATE(343),
    [sym_fact] = STATE(31),
    [sym_type_decl] = STATE(31),
    [sym_functor_decl] = STATE(31),
    [sym_pragma] = STATE(31),
    [sym_atom] = STATE(243),
    [aux_sym_source_file_repeat1] = STATE(31),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_POUNDif] = ACTIONS(9),
    [sym_preproc_else] = ACTIONS(11),
    [anon_sym_POUNDifdef] = ACTIONS(13),
    [anon_sym_POUNDifndef] = ACTIONS(15),
    [sym_preproc_endif] = ACTIONS(11),
    [anon_sym_POUNDdefine] = ACTIONS(17),
    [anon_sym_DOTpragma] = ACTIONS(19),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
    [sym_identifier] = ACTIONS(21),
    [sym_decl_kw] = ACTIONS(23),
    [sym_input_kw] = ACTIONS(25),
    [sym_output_kw] = ACTIONS(25),
    [sym_type_kw] = ACTIONS(27),
    [sym_functor_kw] = ACTIONS(29),
    [sym_include_kw] = ACTIONS(31),
    [sym_printsize_kw] = ACTIONS(25),
    [sym_limitsize_kw] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(85), 1,
      sym_argument,
    STATE(240), 1,
      sym_conjunction,
    STATE(319), 1,
      sym_disjunction,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(225), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [120] = 29,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(92), 1,
      sym_argument,
    STATE(240), 1,
      sym_conjunction,
    STATE(325), 1,
      sym_disjunction,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(225), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [240] = 29,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(85), 1,
      sym_argument,
    STATE(240), 1,
      sym_conjunction,
    STATE(333), 1,
      sym_disjunction,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(225), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [360] = 29,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(92), 1,
      sym_argument,
    STATE(240), 1,
      sym_conjunction,
    STATE(327), 1,
      sym_disjunction,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(225), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [480] = 29,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(85), 1,
      sym_argument,
    STATE(240), 1,
      sym_conjunction,
    STATE(317), 1,
      sym_disjunction,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(225), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [600] = 29,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(92), 1,
      sym_argument,
    STATE(240), 1,
      sym_conjunction,
    STATE(326), 1,
      sym_disjunction,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(225), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [720] = 29,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(85), 1,
      sym_argument,
    STATE(240), 1,
      sym_conjunction,
    STATE(343), 1,
      sym_qualified_name,
    STATE(344), 1,
      sym_disjunction,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(225), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [840] = 28,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    STATE(10), 1,
      aux_sym_conjunction_repeat1,
    STATE(92), 1,
      sym_argument,
    STATE(249), 1,
      sym_conjunction,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(225), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [957] = 27,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      anon_sym_BANG,
    STATE(33), 1,
      aux_sym_conjunction_repeat1,
    STATE(92), 1,
      sym_argument,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(229), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1071] = 27,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 1,
      anon_sym_BANG,
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(92), 1,
      sym_argument,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(237), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1185] = 27,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(41), 1,
      anon_sym__,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_identifier,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(71), 1,
      anon_sym_BANG,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      aux_sym_conjunction_repeat1,
    STATE(92), 1,
      sym_argument,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(235), 2,
      sym_constraint,
      sym_atom,
    STATE(239), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1299] = 21,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(176), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1393] = 21,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(83), 1,
      anon_sym_RBRACK,
    STATE(166), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1487] = 21,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(168), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1581] = 21,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(154), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1675] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1766] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(171), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1857] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(174), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [1948] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(61), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2039] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(175), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2130] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(147), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2221] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(172), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2312] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(157), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2403] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2494] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(69), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2585] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(173), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2676] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2767] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(103), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2858] = 20,
    ACTIONS(35), 1,
      anon_sym_DASH,
    ACTIONS(39), 1,
      anon_sym_nil,
    ACTIONS(43), 1,
      anon_sym_LBRACK,
    ACTIONS(45), 1,
      anon_sym_DOLLAR,
    ACTIONS(49), 1,
      anon_sym_as,
    ACTIONS(53), 1,
      anon_sym_count,
    ACTIONS(55), 1,
      anon_sym_range,
    ACTIONS(57), 1,
      anon_sym_AT,
    ACTIONS(67), 1,
      sym_decimal,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_argument,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(41), 2,
      anon_sym__,
      sym_identifier,
    ACTIONS(47), 2,
      anon_sym_bnot,
      anon_sym_lnot,
    STATE(79), 2,
      sym__integer,
      sym__number,
    STATE(313), 2,
      sym_user_defined_functor_name,
      sym_intrinsic_functor_name,
    ACTIONS(51), 4,
      anon_sym_max,
      anon_sym_mean,
      anon_sym_min,
      anon_sym_sum,
    ACTIONS(63), 5,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(59), 9,
      anon_sym_ord,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_cat,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_autoinc,
    STATE(71), 11,
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
      sym_paren_argument,
  [2949] = 21,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDif,
    ACTIONS(13), 1,
      anon_sym_POUNDifdef,
    ACTIONS(15), 1,
      anon_sym_POUNDifndef,
    ACTIONS(17), 1,
      anon_sym_POUNDdefine,
    ACTIONS(19), 1,
      anon_sym_DOTpragma,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      sym_decl_kw,
    ACTIONS(27), 1,
      sym_type_kw,
    ACTIONS(29), 1,
      sym_functor_kw,
    ACTIONS(31), 1,
      sym_include_kw,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(243), 1,
      sym_atom,
    STATE(297), 1,
      sym__directive_qualifier,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 2,
      sym_preproc_else,
      sym_preproc_endif,
    STATE(345), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(25), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(150), 5,
      sym_preproc_include,
      sym_preproc_if,
      sym_preproc_ifdef,
      sym_preproc_ifndef,
      sym_preproc_define,
    STATE(32), 11,
      sym__element,
      sym_preproc_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      sym_functor_decl,
      sym_pragma,
      aux_sym_source_file_repeat1,
  [3033] = 21,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      anon_sym_POUNDinclude,
    ACTIONS(96), 1,
      anon_sym_POUNDif,
    ACTIONS(102), 1,
      anon_sym_POUNDifdef,
    ACTIONS(105), 1,
      anon_sym_POUNDifndef,
    ACTIONS(108), 1,
      anon_sym_POUNDdefine,
    ACTIONS(111), 1,
      anon_sym_DOTpragma,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(117), 1,
      sym_decl_kw,
    ACTIONS(123), 1,
      sym_type_kw,
    ACTIONS(126), 1,
      sym_functor_kw,
    ACTIONS(129), 1,
      sym_include_kw,
    STATE(243), 1,
      sym_atom,
    STATE(297), 1,
      sym__directive_qualifier,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(99), 2,
      sym_preproc_else,
      sym_preproc_endif,
    STATE(345), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(120), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(150), 5,
      sym_preproc_include,
      sym_preproc_if,
      sym_preproc_ifdef,
      sym_preproc_ifndef,
      sym_preproc_define,
    STATE(32), 11,
      sym__element,
      sym_preproc_directive,
      sym_relation_decl,
      sym_rule,
      sym_directive,
      sym_include_directive,
      sym_fact,
      sym_type_decl,
      sym_functor_decl,
      sym_pragma,
      aux_sym_source_file_repeat1,
  [3117] = 5,
    ACTIONS(134), 1,
      anon_sym_BANG,
    STATE(33), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(132), 10,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_LBRACK,
      anon_sym_DOLLAR,
      anon_sym_AT,
      sym_string_literal,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
    ACTIONS(137), 24,
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
  [3166] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 4,
      anon_sym_POUNDif,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 27,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOTpragma,
      sym_identifier,
  [3206] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 4,
      anon_sym_POUNDif,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 27,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOTpragma,
      sym_identifier,
  [3246] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 4,
      anon_sym_POUNDif,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 27,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOTpragma,
      sym_identifier,
  [3286] = 11,
    ACTIONS(153), 1,
      anon_sym_POUNDif,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(165), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(151), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [3342] = 5,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_POUNDif,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 26,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOTpragma,
      sym_identifier,
  [3386] = 9,
    ACTIONS(141), 1,
      anon_sym_POUNDif,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(139), 19,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [3438] = 6,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 3,
      anon_sym_POUNDif,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 24,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_DOTpragma,
      sym_identifier,
  [3484] = 10,
    ACTIONS(141), 1,
      anon_sym_POUNDif,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(165), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(161), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(163), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(139), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [3538] = 7,
    ACTIONS(157), 1,
      anon_sym_STAR,
    ACTIONS(159), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(169), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(141), 3,
      anon_sym_POUNDif,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 22,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [3586] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(170), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(51), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(175), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(171), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [3633] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(156), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(43), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(175), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(179), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [3680] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(146), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(47), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(175), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(183), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [3727] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(142), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(49), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(175), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(187), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [3774] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(167), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(51), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(175), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(191), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [3821] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(155), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(51), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(175), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(195), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [3868] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(156), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(51), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(175), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(179), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [3915] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(167), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(48), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(175), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(191), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [3962] = 5,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(201), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(51), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(203), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(199), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTpragma,
  [4004] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(208), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_bshr,
    ACTIONS(206), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4042] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(212), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_bshr,
    ACTIONS(210), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4080] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(216), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(214), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4117] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(220), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(218), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4154] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(224), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(222), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4191] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(228), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(226), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4228] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(232), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(230), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4265] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(236), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(234), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4302] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(240), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(238), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4339] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(244), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(242), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4376] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(246), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4413] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(252), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(250), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4450] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(254), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4487] = 8,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(266), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(258), 16,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4534] = 7,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(266), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(258), 19,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4579] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(258), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4616] = 4,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(258), 23,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4655] = 6,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(266), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(258), 21,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4698] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(274), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(272), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4735] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(278), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(276), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4772] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(280), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4809] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(286), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(284), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4846] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(290), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(288), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4883] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(294), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(292), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4920] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(298), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(296), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4957] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(302), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(300), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [4994] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(306), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(304), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [5031] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(310), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(308), 24,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_COLON,
      anon_sym_RBRACK,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_RBRACE,
  [5068] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(314), 10,
      anon_sym_POUNDif,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
      sym_identifier,
    ACTIONS(312), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTpragma,
  [5104] = 6,
    ACTIONS(316), 1,
      anon_sym_LPAREN,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(222), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(282), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(280), 18,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
      anon_sym_CARET,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [5144] = 5,
    ACTIONS(322), 1,
      anon_sym_POUNDif,
    ACTIONS(324), 1,
      anon_sym_DOT,
    STATE(82), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 20,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5180] = 5,
    ACTIONS(329), 1,
      anon_sym_POUNDif,
    ACTIONS(331), 1,
      anon_sym_DOT,
    STATE(82), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 20,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5216] = 5,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_POUNDif,
    STATE(83), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 20,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5252] = 11,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(337), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(339), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [5299] = 6,
    ACTIONS(331), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_POUNDif,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    STATE(83), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5336] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 2,
      anon_sym_POUNDif,
      anon_sym_DOT,
    ACTIONS(320), 20,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [5367] = 5,
    ACTIONS(349), 1,
      anon_sym_POUNDif,
    ACTIONS(351), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_LPAREN,
      anon_sym_DOTpragma,
      sym_identifier,
  [5401] = 6,
    ACTIONS(356), 1,
      anon_sym_POUNDif,
    ACTIONS(358), 1,
      anon_sym_LPAREN,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(354), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5437] = 5,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(91), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(333), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(316), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [5471] = 5,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(94), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(329), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(327), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [5505] = 10,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(337), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(339), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [5549] = 6,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(366), 1,
      anon_sym_POUNDif,
    ACTIONS(368), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(364), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5585] = 5,
    ACTIONS(370), 1,
      anon_sym_DOT,
    STATE(94), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(320), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [5619] = 5,
    ACTIONS(375), 1,
      anon_sym_POUNDif,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5652] = 5,
    ACTIONS(381), 1,
      anon_sym_POUNDif,
    ACTIONS(383), 1,
      sym_plan_kw,
    STATE(169), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(379), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5685] = 5,
    ACTIONS(387), 1,
      anon_sym_POUNDif,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(385), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5718] = 5,
    ACTIONS(394), 1,
      anon_sym_POUNDif,
    ACTIONS(396), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(392), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5751] = 3,
    ACTIONS(349), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 19,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [5780] = 5,
    ACTIONS(400), 1,
      anon_sym_POUNDif,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    STATE(114), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(398), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5813] = 5,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(406), 1,
      anon_sym_POUNDif,
    STATE(111), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(404), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5846] = 5,
    ACTIONS(410), 1,
      anon_sym_POUNDif,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    STATE(106), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(408), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5879] = 9,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
    ACTIONS(414), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5920] = 5,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_POUNDif,
    STATE(107), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5953] = 5,
    ACTIONS(375), 1,
      anon_sym_POUNDif,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(373), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [5986] = 5,
    ACTIONS(422), 1,
      anon_sym_POUNDif,
    ACTIONS(424), 1,
      anon_sym_PIPE,
    STATE(106), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(420), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6019] = 5,
    ACTIONS(429), 1,
      anon_sym_POUNDif,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(427), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6052] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(322), 4,
      anon_sym_POUNDif,
      anon_sym_DOT,
      sym_stateful,
      sym_identifier,
    ACTIONS(320), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [6081] = 5,
    ACTIONS(412), 1,
      anon_sym_PIPE,
    ACTIONS(436), 1,
      anon_sym_POUNDif,
    STATE(102), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(434), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6114] = 5,
    ACTIONS(440), 1,
      anon_sym_POUNDif,
    ACTIONS(442), 1,
      anon_sym_PIPE,
    STATE(110), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6147] = 5,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_POUNDif,
    STATE(107), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(445), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6180] = 5,
    ACTIONS(396), 1,
      anon_sym_PIPE,
    ACTIONS(451), 1,
      anon_sym_POUNDif,
    STATE(98), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(449), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6213] = 5,
    ACTIONS(377), 1,
      anon_sym_COMMA,
    ACTIONS(447), 1,
      anon_sym_POUNDif,
    STATE(95), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(445), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6246] = 5,
    ACTIONS(402), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_POUNDif,
    STATE(97), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(453), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6279] = 4,
    ACTIONS(461), 1,
      sym_stateful,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(459), 2,
      anon_sym_POUNDif,
      sym_identifier,
    ACTIONS(457), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [6309] = 3,
    ACTIONS(465), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(463), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [6337] = 4,
    ACTIONS(469), 1,
      anon_sym_POUNDif,
    ACTIONS(471), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6367] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(475), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(473), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [6395] = 3,
    ACTIONS(440), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [6423] = 3,
    ACTIONS(475), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(473), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [6451] = 3,
    ACTIONS(479), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(477), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [6479] = 3,
    ACTIONS(483), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(481), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [6507] = 3,
    ACTIONS(422), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(420), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [6535] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(487), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(485), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [6563] = 3,
    ACTIONS(491), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(489), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [6591] = 3,
    ACTIONS(387), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(385), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [6619] = 3,
    ACTIONS(487), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(485), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [6647] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(465), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(463), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [6675] = 4,
    ACTIONS(497), 1,
      sym_stateful,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(495), 2,
      anon_sym_POUNDif,
      sym_identifier,
    ACTIONS(493), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [6705] = 3,
    ACTIONS(501), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(499), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [6733] = 4,
    ACTIONS(507), 1,
      sym_stateful,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(505), 2,
      anon_sym_POUNDif,
      sym_identifier,
    ACTIONS(503), 16,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
  [6763] = 4,
    ACTIONS(511), 1,
      anon_sym_POUNDif,
    ACTIONS(513), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(509), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6793] = 3,
    ACTIONS(517), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(515), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [6821] = 3,
    ACTIONS(521), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(519), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [6849] = 3,
    ACTIONS(525), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(523), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [6877] = 3,
    ACTIONS(529), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(527), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [6905] = 3,
    ACTIONS(533), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(531), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [6933] = 3,
    ACTIONS(537), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(535), 18,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_DOTpragma,
      sym_identifier,
  [6961] = 3,
    ACTIONS(541), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(539), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [6988] = 3,
    ACTIONS(545), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(543), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7015] = 3,
    ACTIONS(549), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(547), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7042] = 3,
    ACTIONS(181), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(179), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7069] = 3,
    ACTIONS(553), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(551), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7096] = 3,
    ACTIONS(557), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(555), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7123] = 3,
    ACTIONS(561), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(559), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7150] = 3,
    ACTIONS(193), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7177] = 9,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(563), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7216] = 3,
    ACTIONS(567), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(565), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7243] = 3,
    ACTIONS(571), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(569), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7270] = 3,
    ACTIONS(575), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(573), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7297] = 3,
    ACTIONS(579), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(577), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7324] = 3,
    ACTIONS(583), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(581), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7351] = 3,
    ACTIONS(587), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(585), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7378] = 11,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(589), 1,
      anon_sym_RPAREN,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7421] = 3,
    ACTIONS(595), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(593), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7448] = 3,
    ACTIONS(173), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7475] = 11,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(597), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7518] = 3,
    ACTIONS(601), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(599), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7545] = 3,
    ACTIONS(605), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(603), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7572] = 3,
    ACTIONS(609), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(607), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7599] = 3,
    ACTIONS(469), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(467), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7626] = 3,
    ACTIONS(613), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(611), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7653] = 3,
    ACTIONS(617), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(615), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7680] = 3,
    ACTIONS(621), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(619), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7707] = 3,
    ACTIONS(625), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(623), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7734] = 11,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(289), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7777] = 3,
    ACTIONS(197), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7804] = 11,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RPAREN,
    STATE(265), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7847] = 3,
    ACTIONS(633), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(631), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7874] = 3,
    ACTIONS(637), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(635), 17,
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
      sym_preproc_else,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_POUNDdefine,
      anon_sym_DOTpragma,
      sym_identifier,
  [7901] = 9,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7938] = 9,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7975] = 9,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(643), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8012] = 9,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(645), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8049] = 9,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(335), 1,
      anon_sym_RPAREN,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8086] = 9,
    ACTIONS(264), 1,
      anon_sym_SLASH,
    ACTIONS(268), 1,
      anon_sym_CARET,
    ACTIONS(343), 1,
      anon_sym_bshr,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(262), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8123] = 10,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    ACTIONS(653), 1,
      anon_sym_STAR,
    ACTIONS(655), 1,
      anon_sym_SLASH,
    ACTIONS(661), 1,
      anon_sym_AMP_AMP,
    ACTIONS(663), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(657), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(665), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(659), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8160] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 11,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8183] = 5,
    ACTIONS(653), 1,
      anon_sym_STAR,
    ACTIONS(655), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 10,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8210] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 11,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8233] = 6,
    ACTIONS(653), 1,
      anon_sym_STAR,
    ACTIONS(655), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(139), 8,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8262] = 9,
    ACTIONS(653), 1,
      anon_sym_STAR,
    ACTIONS(655), 1,
      anon_sym_SLASH,
    ACTIONS(661), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(139), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(657), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(665), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(659), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8297] = 8,
    ACTIONS(653), 1,
      anon_sym_STAR,
    ACTIONS(655), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(657), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(665), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(139), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(659), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8330] = 10,
    ACTIONS(653), 1,
      anon_sym_STAR,
    ACTIONS(655), 1,
      anon_sym_SLASH,
    ACTIONS(661), 1,
      anon_sym_AMP_AMP,
    ACTIONS(663), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(667), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(657), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(665), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(659), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8367] = 7,
    ACTIONS(653), 1,
      anon_sym_STAR,
    ACTIONS(655), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(651), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(665), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(139), 6,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8398] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(149), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 11,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8421] = 9,
    ACTIONS(669), 1,
      anon_sym_LBRACK,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(112), 1,
      sym_adt_branch,
    STATE(116), 1,
      sym_primitive_type,
    STATE(117), 1,
      sym_type_name,
    STATE(120), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(161), 3,
      sym_union_type,
      sym_record_type,
      sym_abstract_data_type,
    ACTIONS(671), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8455] = 8,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(254), 1,
      sym_qualified_name,
    STATE(255), 1,
      sym_primitive_type,
    STATE(279), 1,
      sym_functor_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(308), 2,
      sym_attribute,
      sym_type_name,
    ACTIONS(677), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8485] = 6,
    ACTIONS(681), 1,
      anon_sym_defined,
    ACTIONS(683), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(685), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(687), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(186), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8511] = 6,
    ACTIONS(689), 1,
      anon_sym_defined,
    ACTIONS(691), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(693), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(695), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(36), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8537] = 5,
    ACTIONS(689), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(697), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(699), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(41), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8560] = 5,
    ACTIONS(681), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(701), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(703), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(185), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8583] = 5,
    ACTIONS(689), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(705), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(707), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(34), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8606] = 7,
    ACTIONS(679), 1,
      sym_identifier,
    STATE(254), 1,
      sym_qualified_name,
    STATE(255), 1,
      sym_primitive_type,
    STATE(302), 1,
      sym_functor_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(308), 2,
      sym_attribute,
      sym_type_name,
    ACTIONS(677), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8633] = 5,
    ACTIONS(681), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(709), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(711), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(179), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8656] = 5,
    ACTIONS(689), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(713), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(715), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(42), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8679] = 5,
    ACTIONS(689), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(717), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(719), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(39), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8702] = 5,
    ACTIONS(689), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(721), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(723), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(40), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8725] = 5,
    ACTIONS(689), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(725), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(727), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(37), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8748] = 5,
    ACTIONS(681), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(729), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(731), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(180), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8771] = 5,
    ACTIONS(689), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(733), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(735), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(38), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8794] = 5,
    ACTIONS(681), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(737), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(739), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(183), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8817] = 5,
    ACTIONS(681), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(741), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(743), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(184), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8840] = 5,
    ACTIONS(681), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(745), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(747), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(181), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8863] = 5,
    ACTIONS(681), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(749), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(751), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(182), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8886] = 5,
    ACTIONS(681), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(753), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(755), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(177), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8909] = 6,
    ACTIONS(759), 1,
      sym_identifier,
    STATE(118), 1,
      sym_qualified_name,
    STATE(128), 1,
      sym_primitive_type,
    STATE(131), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(757), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8932] = 6,
    ACTIONS(761), 1,
      sym_identifier,
    STATE(254), 1,
      sym_qualified_name,
    STATE(255), 1,
      sym_primitive_type,
    STATE(314), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(677), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8955] = 6,
    ACTIONS(759), 1,
      sym_identifier,
    STATE(118), 1,
      sym_qualified_name,
    STATE(128), 1,
      sym_primitive_type,
    STATE(129), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(757), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8978] = 6,
    ACTIONS(763), 1,
      sym_identifier,
    STATE(116), 1,
      sym_primitive_type,
    STATE(120), 1,
      sym_qualified_name,
    STATE(165), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(671), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9001] = 6,
    ACTIONS(761), 1,
      sym_identifier,
    STATE(254), 1,
      sym_qualified_name,
    STATE(255), 1,
      sym_primitive_type,
    STATE(258), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(677), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9024] = 6,
    ACTIONS(763), 1,
      sym_identifier,
    STATE(116), 1,
      sym_primitive_type,
    STATE(120), 1,
      sym_qualified_name,
    STATE(123), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(671), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9047] = 5,
    ACTIONS(765), 1,
      anon_sym_RPAREN,
    ACTIONS(769), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(271), 2,
      sym__integer,
      sym__number,
    ACTIONS(767), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9068] = 6,
    ACTIONS(759), 1,
      sym_identifier,
    STATE(115), 1,
      sym_type_name,
    STATE(118), 1,
      sym_qualified_name,
    STATE(128), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(757), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9091] = 5,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(280), 2,
      sym__integer,
      sym__number,
    ACTIONS(773), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9112] = 6,
    ACTIONS(763), 1,
      sym_identifier,
    STATE(109), 1,
      sym_type_name,
    STATE(116), 1,
      sym_primitive_type,
    STATE(120), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(671), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9135] = 4,
    ACTIONS(779), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(296), 2,
      sym__integer,
      sym__number,
    ACTIONS(777), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9153] = 4,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(222), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9171] = 4,
    ACTIONS(783), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(337), 2,
      sym__integer,
      sym__number,
    ACTIONS(781), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9189] = 4,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9207] = 4,
    ACTIONS(790), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(324), 2,
      sym__integer,
      sym__number,
    ACTIONS(788), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9225] = 4,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(327), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9243] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(792), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9260] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(796), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9277] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(223), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(798), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9294] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(232), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(796), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9311] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(800), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9328] = 6,
    ACTIONS(802), 1,
      sym_string_literal,
    ACTIONS(804), 1,
      sym_identifier,
    STATE(299), 1,
      sym_boolean_literal,
    STATE(301), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
  [9349] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(224), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(792), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9366] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9379] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9396] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(231), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(811), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9413] = 4,
    ACTIONS(794), 1,
      anon_sym_COMMA,
    STATE(227), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(811), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9430] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(813), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9442] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(815), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9454] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(817), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9466] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9478] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(819), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9490] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(821), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9502] = 4,
    ACTIONS(825), 1,
      anon_sym_SEMI,
    STATE(244), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(823), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [9518] = 4,
    ACTIONS(829), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(827), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [9534] = 4,
    ACTIONS(834), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9550] = 6,
    ACTIONS(837), 1,
      anon_sym_LT_EQ,
    ACTIONS(839), 1,
      anon_sym_COMMA,
    ACTIONS(841), 1,
      anon_sym_COLON_DASH,
    ACTIONS(843), 1,
      anon_sym_DOT,
    STATE(264), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9570] = 4,
    ACTIONS(825), 1,
      anon_sym_SEMI,
    STATE(241), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(845), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [9586] = 5,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(847), 1,
      anon_sym_COLON,
    STATE(222), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9604] = 4,
    ACTIONS(849), 1,
      anon_sym_COMMA,
    STATE(246), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(563), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [9619] = 4,
    ACTIONS(854), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(852), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9634] = 5,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_atom,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9651] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(827), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9662] = 5,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(126), 1,
      sym_choice_domain_attribute,
    STATE(138), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9679] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(832), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9690] = 5,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(863), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_atom,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9707] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(485), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9718] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(473), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9729] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(463), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9740] = 5,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
    ACTIONS(861), 1,
      sym_identifier,
    STATE(100), 1,
      sym_choice_domain_attribute,
    STATE(138), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9757] = 4,
    ACTIONS(865), 1,
      anon_sym_EQ,
    ACTIONS(867), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(163), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [9772] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(869), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9783] = 4,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    STATE(291), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9797] = 4,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9811] = 4,
    ACTIONS(879), 1,
      anon_sym_LPAREN,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    STATE(266), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9825] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(323), 1,
      sym_atom,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9839] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(310), 1,
      sym_atom,
    STATE(343), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9853] = 4,
    ACTIONS(839), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_COLON_DASH,
    STATE(272), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9867] = 4,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9881] = 4,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_LPAREN,
    STATE(247), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9895] = 4,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
    ACTIONS(891), 1,
      sym_identifier,
    STATE(281), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9909] = 4,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    ACTIONS(895), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9923] = 4,
    ACTIONS(898), 1,
      anon_sym_RPAREN,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    STATE(268), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9937] = 4,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(902), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9951] = 4,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9965] = 4,
    ACTIONS(906), 1,
      anon_sym_COMMA,
    ACTIONS(909), 1,
      anon_sym_COLON_DASH,
    STATE(272), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9979] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(852), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9989] = 4,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10003] = 4,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10017] = 4,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10031] = 4,
    ACTIONS(917), 1,
      anon_sym_RPAREN,
    ACTIONS(919), 1,
      anon_sym_COMMA,
    STATE(277), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10045] = 4,
    ACTIONS(922), 1,
      anon_sym_RPAREN,
    ACTIONS(924), 1,
      anon_sym_COMMA,
    STATE(278), 1,
      aux_sym_functor_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10059] = 4,
    ACTIONS(927), 1,
      anon_sym_RPAREN,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_functor_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10073] = 4,
    ACTIONS(877), 1,
      anon_sym_COMMA,
    ACTIONS(931), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10087] = 4,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10101] = 4,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(935), 1,
      anon_sym_RBRACE,
    STATE(274), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10115] = 4,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(937), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10129] = 4,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10143] = 4,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    STATE(269), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10157] = 4,
    ACTIONS(900), 1,
      anon_sym_COMMA,
    ACTIONS(941), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10171] = 4,
    ACTIONS(891), 1,
      sym_identifier,
    ACTIONS(933), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10185] = 4,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(943), 1,
      anon_sym_RPAREN,
    STATE(246), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10199] = 4,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(945), 1,
      anon_sym_RBRACK,
    STATE(246), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10213] = 4,
    ACTIONS(929), 1,
      anon_sym_COMMA,
    ACTIONS(947), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_functor_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10227] = 4,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(949), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10241] = 4,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(284), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10255] = 4,
    ACTIONS(953), 1,
      anon_sym_RBRACE,
    ACTIONS(955), 1,
      sym_identifier,
    STATE(282), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10269] = 4,
    ACTIONS(881), 1,
      anon_sym_COMMA,
    ACTIONS(957), 1,
      anon_sym_RPAREN,
    STATE(247), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10283] = 4,
    ACTIONS(873), 1,
      anon_sym_COMMA,
    ACTIONS(959), 1,
      anon_sym_RBRACK,
    STATE(283), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10297] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(917), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10306] = 3,
    ACTIONS(961), 1,
      sym_identifier,
    STATE(89), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10317] = 3,
    ACTIONS(955), 1,
      sym_identifier,
    STATE(251), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10328] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(963), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10337] = 3,
    ACTIONS(891), 1,
      sym_identifier,
    STATE(303), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10348] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(965), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10357] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(922), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10366] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(893), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10375] = 3,
    ACTIONS(955), 1,
      sym_identifier,
    STATE(259), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10386] = 3,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(336), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10397] = 3,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(338), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10408] = 3,
    ACTIONS(967), 1,
      sym_identifier,
    STATE(119), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10419] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(969), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10428] = 3,
    ACTIONS(961), 1,
      sym_identifier,
    STATE(99), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10439] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(909), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [10448] = 3,
    ACTIONS(955), 1,
      sym_identifier,
    STATE(292), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10459] = 3,
    ACTIONS(955), 1,
      sym_identifier,
    STATE(295), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10470] = 2,
    ACTIONS(971), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10478] = 2,
    ACTIONS(973), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10486] = 2,
    ACTIONS(975), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10494] = 2,
    ACTIONS(977), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10502] = 2,
    ACTIONS(979), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10510] = 2,
    ACTIONS(847), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10518] = 2,
    ACTIONS(981), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10526] = 2,
    ACTIONS(983), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10534] = 2,
    ACTIONS(985), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10542] = 2,
    ACTIONS(987), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10550] = 2,
    ACTIONS(989), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10558] = 2,
    ACTIONS(991), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10566] = 2,
    ACTIONS(993), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10574] = 2,
    ACTIONS(995), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10582] = 2,
    ACTIONS(997), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10590] = 2,
    ACTIONS(999), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10598] = 2,
    ACTIONS(1001), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10606] = 2,
    ACTIONS(1003), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10614] = 2,
    ACTIONS(1005), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10622] = 2,
    ACTIONS(1007), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10630] = 2,
    ACTIONS(1009), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10638] = 2,
    ACTIONS(1011), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10646] = 2,
    ACTIONS(1013), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10654] = 2,
    ACTIONS(1015), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10662] = 2,
    ACTIONS(1017), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10670] = 2,
    ACTIONS(1019), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10678] = 2,
    ACTIONS(1021), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10686] = 2,
    ACTIONS(1023), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10694] = 2,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10702] = 2,
    ACTIONS(345), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10710] = 2,
    ACTIONS(1027), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10718] = 2,
    ACTIONS(1029), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10726] = 2,
    ACTIONS(1031), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10734] = 2,
    ACTIONS(1033), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10742] = 2,
    ACTIONS(1035), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10750] = 2,
    ACTIONS(1037), 1,
      sym_preproc_macro,
    ACTIONS(1039), 2,
      sym_line_comment,
      sym_block_comment,
  [10758] = 2,
    ACTIONS(1041), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10766] = 2,
    ACTIONS(1043), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10774] = 2,
    ACTIONS(1045), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10782] = 2,
    ACTIONS(1047), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10790] = 2,
    ACTIONS(1049), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10798] = 2,
    ACTIONS(1051), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10806] = 2,
    ACTIONS(1053), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10814] = 2,
    ACTIONS(1055), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 120,
  [SMALL_STATE(4)] = 240,
  [SMALL_STATE(5)] = 360,
  [SMALL_STATE(6)] = 480,
  [SMALL_STATE(7)] = 600,
  [SMALL_STATE(8)] = 720,
  [SMALL_STATE(9)] = 840,
  [SMALL_STATE(10)] = 957,
  [SMALL_STATE(11)] = 1071,
  [SMALL_STATE(12)] = 1185,
  [SMALL_STATE(13)] = 1299,
  [SMALL_STATE(14)] = 1393,
  [SMALL_STATE(15)] = 1487,
  [SMALL_STATE(16)] = 1581,
  [SMALL_STATE(17)] = 1675,
  [SMALL_STATE(18)] = 1766,
  [SMALL_STATE(19)] = 1857,
  [SMALL_STATE(20)] = 1948,
  [SMALL_STATE(21)] = 2039,
  [SMALL_STATE(22)] = 2130,
  [SMALL_STATE(23)] = 2221,
  [SMALL_STATE(24)] = 2312,
  [SMALL_STATE(25)] = 2403,
  [SMALL_STATE(26)] = 2494,
  [SMALL_STATE(27)] = 2585,
  [SMALL_STATE(28)] = 2676,
  [SMALL_STATE(29)] = 2767,
  [SMALL_STATE(30)] = 2858,
  [SMALL_STATE(31)] = 2949,
  [SMALL_STATE(32)] = 3033,
  [SMALL_STATE(33)] = 3117,
  [SMALL_STATE(34)] = 3166,
  [SMALL_STATE(35)] = 3206,
  [SMALL_STATE(36)] = 3246,
  [SMALL_STATE(37)] = 3286,
  [SMALL_STATE(38)] = 3342,
  [SMALL_STATE(39)] = 3386,
  [SMALL_STATE(40)] = 3438,
  [SMALL_STATE(41)] = 3484,
  [SMALL_STATE(42)] = 3538,
  [SMALL_STATE(43)] = 3586,
  [SMALL_STATE(44)] = 3633,
  [SMALL_STATE(45)] = 3680,
  [SMALL_STATE(46)] = 3727,
  [SMALL_STATE(47)] = 3774,
  [SMALL_STATE(48)] = 3821,
  [SMALL_STATE(49)] = 3868,
  [SMALL_STATE(50)] = 3915,
  [SMALL_STATE(51)] = 3962,
  [SMALL_STATE(52)] = 4004,
  [SMALL_STATE(53)] = 4042,
  [SMALL_STATE(54)] = 4080,
  [SMALL_STATE(55)] = 4117,
  [SMALL_STATE(56)] = 4154,
  [SMALL_STATE(57)] = 4191,
  [SMALL_STATE(58)] = 4228,
  [SMALL_STATE(59)] = 4265,
  [SMALL_STATE(60)] = 4302,
  [SMALL_STATE(61)] = 4339,
  [SMALL_STATE(62)] = 4376,
  [SMALL_STATE(63)] = 4413,
  [SMALL_STATE(64)] = 4450,
  [SMALL_STATE(65)] = 4487,
  [SMALL_STATE(66)] = 4534,
  [SMALL_STATE(67)] = 4579,
  [SMALL_STATE(68)] = 4616,
  [SMALL_STATE(69)] = 4655,
  [SMALL_STATE(70)] = 4698,
  [SMALL_STATE(71)] = 4735,
  [SMALL_STATE(72)] = 4772,
  [SMALL_STATE(73)] = 4809,
  [SMALL_STATE(74)] = 4846,
  [SMALL_STATE(75)] = 4883,
  [SMALL_STATE(76)] = 4920,
  [SMALL_STATE(77)] = 4957,
  [SMALL_STATE(78)] = 4994,
  [SMALL_STATE(79)] = 5031,
  [SMALL_STATE(80)] = 5068,
  [SMALL_STATE(81)] = 5104,
  [SMALL_STATE(82)] = 5144,
  [SMALL_STATE(83)] = 5180,
  [SMALL_STATE(84)] = 5216,
  [SMALL_STATE(85)] = 5252,
  [SMALL_STATE(86)] = 5299,
  [SMALL_STATE(87)] = 5336,
  [SMALL_STATE(88)] = 5367,
  [SMALL_STATE(89)] = 5401,
  [SMALL_STATE(90)] = 5437,
  [SMALL_STATE(91)] = 5471,
  [SMALL_STATE(92)] = 5505,
  [SMALL_STATE(93)] = 5549,
  [SMALL_STATE(94)] = 5585,
  [SMALL_STATE(95)] = 5619,
  [SMALL_STATE(96)] = 5652,
  [SMALL_STATE(97)] = 5685,
  [SMALL_STATE(98)] = 5718,
  [SMALL_STATE(99)] = 5751,
  [SMALL_STATE(100)] = 5780,
  [SMALL_STATE(101)] = 5813,
  [SMALL_STATE(102)] = 5846,
  [SMALL_STATE(103)] = 5879,
  [SMALL_STATE(104)] = 5920,
  [SMALL_STATE(105)] = 5953,
  [SMALL_STATE(106)] = 5986,
  [SMALL_STATE(107)] = 6019,
  [SMALL_STATE(108)] = 6052,
  [SMALL_STATE(109)] = 6081,
  [SMALL_STATE(110)] = 6114,
  [SMALL_STATE(111)] = 6147,
  [SMALL_STATE(112)] = 6180,
  [SMALL_STATE(113)] = 6213,
  [SMALL_STATE(114)] = 6246,
  [SMALL_STATE(115)] = 6279,
  [SMALL_STATE(116)] = 6309,
  [SMALL_STATE(117)] = 6337,
  [SMALL_STATE(118)] = 6367,
  [SMALL_STATE(119)] = 6395,
  [SMALL_STATE(120)] = 6423,
  [SMALL_STATE(121)] = 6451,
  [SMALL_STATE(122)] = 6479,
  [SMALL_STATE(123)] = 6507,
  [SMALL_STATE(124)] = 6535,
  [SMALL_STATE(125)] = 6563,
  [SMALL_STATE(126)] = 6591,
  [SMALL_STATE(127)] = 6619,
  [SMALL_STATE(128)] = 6647,
  [SMALL_STATE(129)] = 6675,
  [SMALL_STATE(130)] = 6705,
  [SMALL_STATE(131)] = 6733,
  [SMALL_STATE(132)] = 6763,
  [SMALL_STATE(133)] = 6793,
  [SMALL_STATE(134)] = 6821,
  [SMALL_STATE(135)] = 6849,
  [SMALL_STATE(136)] = 6877,
  [SMALL_STATE(137)] = 6905,
  [SMALL_STATE(138)] = 6933,
  [SMALL_STATE(139)] = 6961,
  [SMALL_STATE(140)] = 6988,
  [SMALL_STATE(141)] = 7015,
  [SMALL_STATE(142)] = 7042,
  [SMALL_STATE(143)] = 7069,
  [SMALL_STATE(144)] = 7096,
  [SMALL_STATE(145)] = 7123,
  [SMALL_STATE(146)] = 7150,
  [SMALL_STATE(147)] = 7177,
  [SMALL_STATE(148)] = 7216,
  [SMALL_STATE(149)] = 7243,
  [SMALL_STATE(150)] = 7270,
  [SMALL_STATE(151)] = 7297,
  [SMALL_STATE(152)] = 7324,
  [SMALL_STATE(153)] = 7351,
  [SMALL_STATE(154)] = 7378,
  [SMALL_STATE(155)] = 7421,
  [SMALL_STATE(156)] = 7448,
  [SMALL_STATE(157)] = 7475,
  [SMALL_STATE(158)] = 7518,
  [SMALL_STATE(159)] = 7545,
  [SMALL_STATE(160)] = 7572,
  [SMALL_STATE(161)] = 7599,
  [SMALL_STATE(162)] = 7626,
  [SMALL_STATE(163)] = 7653,
  [SMALL_STATE(164)] = 7680,
  [SMALL_STATE(165)] = 7707,
  [SMALL_STATE(166)] = 7734,
  [SMALL_STATE(167)] = 7777,
  [SMALL_STATE(168)] = 7804,
  [SMALL_STATE(169)] = 7847,
  [SMALL_STATE(170)] = 7874,
  [SMALL_STATE(171)] = 7901,
  [SMALL_STATE(172)] = 7938,
  [SMALL_STATE(173)] = 7975,
  [SMALL_STATE(174)] = 8012,
  [SMALL_STATE(175)] = 8049,
  [SMALL_STATE(176)] = 8086,
  [SMALL_STATE(177)] = 8123,
  [SMALL_STATE(178)] = 8160,
  [SMALL_STATE(179)] = 8183,
  [SMALL_STATE(180)] = 8210,
  [SMALL_STATE(181)] = 8233,
  [SMALL_STATE(182)] = 8262,
  [SMALL_STATE(183)] = 8297,
  [SMALL_STATE(184)] = 8330,
  [SMALL_STATE(185)] = 8367,
  [SMALL_STATE(186)] = 8398,
  [SMALL_STATE(187)] = 8421,
  [SMALL_STATE(188)] = 8455,
  [SMALL_STATE(189)] = 8485,
  [SMALL_STATE(190)] = 8511,
  [SMALL_STATE(191)] = 8537,
  [SMALL_STATE(192)] = 8560,
  [SMALL_STATE(193)] = 8583,
  [SMALL_STATE(194)] = 8606,
  [SMALL_STATE(195)] = 8633,
  [SMALL_STATE(196)] = 8656,
  [SMALL_STATE(197)] = 8679,
  [SMALL_STATE(198)] = 8702,
  [SMALL_STATE(199)] = 8725,
  [SMALL_STATE(200)] = 8748,
  [SMALL_STATE(201)] = 8771,
  [SMALL_STATE(202)] = 8794,
  [SMALL_STATE(203)] = 8817,
  [SMALL_STATE(204)] = 8840,
  [SMALL_STATE(205)] = 8863,
  [SMALL_STATE(206)] = 8886,
  [SMALL_STATE(207)] = 8909,
  [SMALL_STATE(208)] = 8932,
  [SMALL_STATE(209)] = 8955,
  [SMALL_STATE(210)] = 8978,
  [SMALL_STATE(211)] = 9001,
  [SMALL_STATE(212)] = 9024,
  [SMALL_STATE(213)] = 9047,
  [SMALL_STATE(214)] = 9068,
  [SMALL_STATE(215)] = 9091,
  [SMALL_STATE(216)] = 9112,
  [SMALL_STATE(217)] = 9135,
  [SMALL_STATE(218)] = 9153,
  [SMALL_STATE(219)] = 9171,
  [SMALL_STATE(220)] = 9189,
  [SMALL_STATE(221)] = 9207,
  [SMALL_STATE(222)] = 9225,
  [SMALL_STATE(223)] = 9243,
  [SMALL_STATE(224)] = 9260,
  [SMALL_STATE(225)] = 9277,
  [SMALL_STATE(226)] = 9294,
  [SMALL_STATE(227)] = 9311,
  [SMALL_STATE(228)] = 9328,
  [SMALL_STATE(229)] = 9349,
  [SMALL_STATE(230)] = 9366,
  [SMALL_STATE(231)] = 9379,
  [SMALL_STATE(232)] = 9396,
  [SMALL_STATE(233)] = 9413,
  [SMALL_STATE(234)] = 9430,
  [SMALL_STATE(235)] = 9442,
  [SMALL_STATE(236)] = 9454,
  [SMALL_STATE(237)] = 9466,
  [SMALL_STATE(238)] = 9478,
  [SMALL_STATE(239)] = 9490,
  [SMALL_STATE(240)] = 9502,
  [SMALL_STATE(241)] = 9518,
  [SMALL_STATE(242)] = 9534,
  [SMALL_STATE(243)] = 9550,
  [SMALL_STATE(244)] = 9570,
  [SMALL_STATE(245)] = 9586,
  [SMALL_STATE(246)] = 9604,
  [SMALL_STATE(247)] = 9619,
  [SMALL_STATE(248)] = 9634,
  [SMALL_STATE(249)] = 9651,
  [SMALL_STATE(250)] = 9662,
  [SMALL_STATE(251)] = 9679,
  [SMALL_STATE(252)] = 9690,
  [SMALL_STATE(253)] = 9707,
  [SMALL_STATE(254)] = 9718,
  [SMALL_STATE(255)] = 9729,
  [SMALL_STATE(256)] = 9740,
  [SMALL_STATE(257)] = 9757,
  [SMALL_STATE(258)] = 9772,
  [SMALL_STATE(259)] = 9783,
  [SMALL_STATE(260)] = 9797,
  [SMALL_STATE(261)] = 9811,
  [SMALL_STATE(262)] = 9825,
  [SMALL_STATE(263)] = 9839,
  [SMALL_STATE(264)] = 9853,
  [SMALL_STATE(265)] = 9867,
  [SMALL_STATE(266)] = 9881,
  [SMALL_STATE(267)] = 9895,
  [SMALL_STATE(268)] = 9909,
  [SMALL_STATE(269)] = 9923,
  [SMALL_STATE(270)] = 9937,
  [SMALL_STATE(271)] = 9951,
  [SMALL_STATE(272)] = 9965,
  [SMALL_STATE(273)] = 9979,
  [SMALL_STATE(274)] = 9989,
  [SMALL_STATE(275)] = 10003,
  [SMALL_STATE(276)] = 10017,
  [SMALL_STATE(277)] = 10031,
  [SMALL_STATE(278)] = 10045,
  [SMALL_STATE(279)] = 10059,
  [SMALL_STATE(280)] = 10073,
  [SMALL_STATE(281)] = 10087,
  [SMALL_STATE(282)] = 10101,
  [SMALL_STATE(283)] = 10115,
  [SMALL_STATE(284)] = 10129,
  [SMALL_STATE(285)] = 10143,
  [SMALL_STATE(286)] = 10157,
  [SMALL_STATE(287)] = 10171,
  [SMALL_STATE(288)] = 10185,
  [SMALL_STATE(289)] = 10199,
  [SMALL_STATE(290)] = 10213,
  [SMALL_STATE(291)] = 10227,
  [SMALL_STATE(292)] = 10241,
  [SMALL_STATE(293)] = 10255,
  [SMALL_STATE(294)] = 10269,
  [SMALL_STATE(295)] = 10283,
  [SMALL_STATE(296)] = 10297,
  [SMALL_STATE(297)] = 10306,
  [SMALL_STATE(298)] = 10317,
  [SMALL_STATE(299)] = 10328,
  [SMALL_STATE(300)] = 10337,
  [SMALL_STATE(301)] = 10348,
  [SMALL_STATE(302)] = 10357,
  [SMALL_STATE(303)] = 10366,
  [SMALL_STATE(304)] = 10375,
  [SMALL_STATE(305)] = 10386,
  [SMALL_STATE(306)] = 10397,
  [SMALL_STATE(307)] = 10408,
  [SMALL_STATE(308)] = 10419,
  [SMALL_STATE(309)] = 10428,
  [SMALL_STATE(310)] = 10439,
  [SMALL_STATE(311)] = 10448,
  [SMALL_STATE(312)] = 10459,
  [SMALL_STATE(313)] = 10470,
  [SMALL_STATE(314)] = 10478,
  [SMALL_STATE(315)] = 10486,
  [SMALL_STATE(316)] = 10494,
  [SMALL_STATE(317)] = 10502,
  [SMALL_STATE(318)] = 10510,
  [SMALL_STATE(319)] = 10518,
  [SMALL_STATE(320)] = 10526,
  [SMALL_STATE(321)] = 10534,
  [SMALL_STATE(322)] = 10542,
  [SMALL_STATE(323)] = 10550,
  [SMALL_STATE(324)] = 10558,
  [SMALL_STATE(325)] = 10566,
  [SMALL_STATE(326)] = 10574,
  [SMALL_STATE(327)] = 10582,
  [SMALL_STATE(328)] = 10590,
  [SMALL_STATE(329)] = 10598,
  [SMALL_STATE(330)] = 10606,
  [SMALL_STATE(331)] = 10614,
  [SMALL_STATE(332)] = 10622,
  [SMALL_STATE(333)] = 10630,
  [SMALL_STATE(334)] = 10638,
  [SMALL_STATE(335)] = 10646,
  [SMALL_STATE(336)] = 10654,
  [SMALL_STATE(337)] = 10662,
  [SMALL_STATE(338)] = 10670,
  [SMALL_STATE(339)] = 10678,
  [SMALL_STATE(340)] = 10686,
  [SMALL_STATE(341)] = 10694,
  [SMALL_STATE(342)] = 10702,
  [SMALL_STATE(343)] = 10710,
  [SMALL_STATE(344)] = 10718,
  [SMALL_STATE(345)] = 10726,
  [SMALL_STATE(346)] = 10734,
  [SMALL_STATE(347)] = 10742,
  [SMALL_STATE(348)] = 10750,
  [SMALL_STATE(349)] = 10758,
  [SMALL_STATE(350)] = 10766,
  [SMALL_STATE(351)] = 10774,
  [SMALL_STATE(352)] = 10782,
  [SMALL_STATE(353)] = 10790,
  [SMALL_STATE(354)] = 10798,
  [SMALL_STATE(355)] = 10806,
  [SMALL_STATE(356)] = 10814,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(351),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(199),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(150),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(350),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(349),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(348),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(347),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(339),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(297),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(356),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(354),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(352),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(33),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_binary_exp, 3, .production_id = 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_binary_exp, 3, .production_id = 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_defined_exp, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_defined_exp, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_defined_exp, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_defined_exp, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_if, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_if, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 11),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 11),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 7),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 7),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 11),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 11),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 11),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 11),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(80),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 6),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 6),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 9),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 9),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 4, .production_id = 6),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 4, .production_id = 6),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 4, .production_id = 12),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 4, .production_id = 12),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 6, .production_id = 18),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 6, .production_id = 18),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 3, .production_id = 8),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 3, .production_id = 8),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 5, .production_id = 16),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 5, .production_id = 16),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 21),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 21),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 20),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 20),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_argument, 3),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_argument, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 5, .production_id = 9),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 5, .production_id = 9),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(353),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(309),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(355),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 7),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 5),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(250),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstract_data_type, 2),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 2),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 5),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 5),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 4),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 8),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 8),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(212),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2), SHIFT_REPEAT(221),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 3),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(307),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 6),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstract_data_type, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 3),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 12),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 12),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_type_decl, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_branch, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_branch, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 12),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 12),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 14),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 14),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 12),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 12),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 5),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 6),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 7),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 7),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_branch, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_attribute, 1),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 15),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 15),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_define, 2),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_define, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_ifdef, 2),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_ifdef, 2),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 2, .production_id = 1),
  [553] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 2, .production_id = 1),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [557] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 2),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 7),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 17),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 17),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_directive, 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_directive, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 19),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 9, .production_id = 19),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 11),
  [595] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 9, .production_id = 11),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 6),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_ifndef, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_ifndef, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtype_decl, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 5),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [671] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [679] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [681] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [689] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [697] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [701] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [713] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [717] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [721] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [725] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [733] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [749] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [757] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [761] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(340),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [790] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(11),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [819] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [821] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(9),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [834] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(298),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [841] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 1),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [849] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(22),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [854] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(335),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 10),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 2),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [895] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(300),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [906] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2), SHIFT_REPEAT(263),
  [909] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [917] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2),
  [919] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2), SHIFT_REPEAT(217),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2),
  [924] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2), SHIFT_REPEAT(194),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 13),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [969] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_attribute, 1),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumption_head, 3),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor_name, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1019] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor_name, 2),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1033] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1037] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [1039] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
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
