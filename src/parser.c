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
#define STATE_COUNT 364
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
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [6] = {.index = 3, .length = 3},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 3},
  [13] = {.index = 15, .length = 1},
  [14] = {.index = 16, .length = 2},
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
    {field_name, 0},
  [2] =
    {field_relation_name, 1},
  [3] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [6] =
    {field_body, 2},
    {field_head, 0},
  [8] =
    {field_args, 2},
    {field_name, 0},
  [10] =
    {field_relation_name, 1},
    {field_relation_name, 2},
  [12] =
    {field_args, 2},
    {field_args, 3},
    {field_name, 0},
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
  [5] = {
    [0] = alias_sym_user_defined_type_name,
  },
  [11] = {
    [0] = alias_sym_choice_domain_single_attribute,
  },
  [12] = {
    [0] = alias_sym_attribute_name,
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
  [94] = 89,
  [95] = 95,
  [96] = 96,
  [97] = 87,
  [98] = 88,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 91,
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
  [134] = 123,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 120,
  [140] = 122,
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
  [184] = 37,
  [185] = 38,
  [186] = 186,
  [187] = 40,
  [188] = 186,
  [189] = 41,
  [190] = 42,
  [191] = 35,
  [192] = 39,
  [193] = 34,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 196,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 198,
  [207] = 205,
  [208] = 208,
  [209] = 208,
  [210] = 202,
  [211] = 199,
  [212] = 201,
  [213] = 200,
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
  [226] = 87,
  [227] = 227,
  [228] = 89,
  [229] = 88,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 91,
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
  [255] = 123,
  [256] = 122,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 120,
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
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 358,
  [359] = 359,
  [360] = 344,
  [361] = 361,
  [362] = 344,
  [363] = 363,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(214);
      if (lookahead == '!') ADVANCE(277);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '%') ADVANCE(295);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == '0') ADVANCE(513);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(321);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead == '^') ADVANCE(294);
      if (lookahead == '_') ADVANCE(285);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'b') ADVANCE(27);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(140);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(167);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(187);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '|') ADVANCE(342);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(514);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(276);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(513);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '@') ADVANCE(321);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'b') ADVANCE(444);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead == 't') ADVANCE(462);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(295);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead == '^') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '%') ADVANCE(295);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == ':') ADVANCE(281);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead == '^') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '$') ADVANCE(289);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(513);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '@') ADVANCE(321);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == ']') ADVANCE(288);
      if (lookahead == '_') ADVANCE(286);
      if (lookahead == 'a') ADVANCE(485);
      if (lookahead == 'b') ADVANCE(444);
      if (lookahead == 'c') ADVANCE(366);
      if (lookahead == 'l') ADVANCE(459);
      if (lookahead == 'm') ADVANCE(365);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead == 'o') ADVANCE(473);
      if (lookahead == 'r') ADVANCE(367);
      if (lookahead == 's') ADVANCE(496);
      if (lookahead == 't') ADVANCE(463);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(364);
      if (lookahead == 't') ADVANCE(477);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '\\') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '&') ADVANCE(249);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(515);
      if (lookahead == 'd') ADVANCE(398);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '[') ADVANCE(287);
      if (lookahead == 'f') ADVANCE(438);
      if (lookahead == 'n') ADVANCE(506);
      if (lookahead == 's') ADVANCE(509);
      if (lookahead == 'u') ADVANCE(460);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(359);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == '/') ADVANCE(360);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(11);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(272);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(226);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0) ADVANCE(227);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(340);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(280);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(353);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'h') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(157);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 't') ADVANCE(176);
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(168);
      if (lookahead == 's') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(192);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(193);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(160);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(169);
      if (lookahead == 'x') ADVANCE(160);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(184);
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 39:
      if (lookahead == 'b') ADVANCE(161);
      END_STATE();
    case 40:
      if (lookahead == 'b') ADVANCE(79);
      END_STATE();
    case 41:
      if (lookahead == 'b') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(263);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(338);
      END_STATE();
    case 44:
      if (lookahead == 'c') ADVANCE(261);
      END_STATE();
    case 45:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 46:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(322);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(299);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(296);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(347);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(330);
      END_STATE();
    case 52:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 53:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(74);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(83);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(354);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(356);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(319);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(267);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(265);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(216);
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(220);
      END_STATE();
    case 86:
      if (lookahead == 'f') ADVANCE(218);
      END_STATE();
    case 87:
      if (lookahead == 'f') ADVANCE(219);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 89:
      if (lookahead == 'f') ADVANCE(201);
      END_STATE();
    case 90:
      if (lookahead == 'f') ADVANCE(126);
      if (lookahead == 'n') ADVANCE(202);
      if (lookahead == 's') ADVANCE(196);
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 91:
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(328);
      END_STATE();
    case 93:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 94:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 'g') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(307);
      END_STATE();
    case 96:
      if (lookahead == 'g') ADVANCE(106);
      END_STATE();
    case 97:
      if (lookahead == 'g') ADVANCE(149);
      END_STATE();
    case 98:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 99:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 'o') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 108:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(139);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 112:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 113:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 115:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 116:
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 117:
      if (lookahead == 'l') ADVANCE(283);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 'r') ADVANCE(303);
      END_STATE();
    case 119:
      if (lookahead == 'l') ADVANCE(255);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(345);
      END_STATE();
    case 121:
      if (lookahead == 'l') ADVANCE(351);
      END_STATE();
    case 122:
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 123:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 124:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 125:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 126:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(114);
      END_STATE();
    case 129:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 130:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 132:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 133:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 134:
      if (lookahead == 'n') ADVANCE(182);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(311);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 138:
      if (lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 139:
      if (lookahead == 'n') ADVANCE(271);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(127);
      END_STATE();
    case 141:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 142:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 143:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 144:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(191);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 154:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(189);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(190);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 165:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 166:
      if (lookahead == 'q') ADVANCE(177);
      END_STATE();
    case 167:
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 168:
      if (lookahead == 'r') ADVANCE(300);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(301);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 172:
      if (lookahead == 'r') ADVANCE(343);
      END_STATE();
    case 173:
      if (lookahead == 'r') ADVANCE(336);
      END_STATE();
    case 174:
      if (lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 175:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 176:
      if (lookahead == 'r') ADVANCE(77);
      END_STATE();
    case 177:
      if (lookahead == 'r') ADVANCE(75);
      END_STATE();
    case 178:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 179:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 180:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 181:
      if (lookahead == 's') ADVANCE(305);
      if (lookahead == 'u') ADVANCE(194);
      END_STATE();
    case 182:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 183:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 184:
      if (lookahead == 's') ADVANCE(195);
      END_STATE();
    case 185:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 186:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 187:
      if (lookahead == 't') ADVANCE(31);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 188:
      if (lookahead == 't') ADVANCE(332);
      END_STATE();
    case 189:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(292);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 192:
      if (lookahead == 't') ADVANCE(349);
      END_STATE();
    case 193:
      if (lookahead == 't') ADVANCE(324);
      END_STATE();
    case 194:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 195:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 196:
      if (lookahead == 't') ADVANCE(180);
      END_STATE();
    case 197:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 198:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 199:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 200:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 201:
      if (lookahead == 'u') ADVANCE(121);
      END_STATE();
    case 202:
      if (lookahead == 'u') ADVANCE(133);
      END_STATE();
    case 203:
      if (lookahead == '|') ADVANCE(250);
      END_STATE();
    case 204:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 205:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(512);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(511);
      END_STATE();
    case 209:
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 210:
      if (eof) ADVANCE(214);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '&') ADVANCE(7);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '<') ADVANCE(242);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '|') ADVANCE(203);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(210)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 211:
      if (eof) ADVANCE(214);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '|') ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(211)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 212:
      if (eof) ADVANCE(214);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '.') ADVANCE(274);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 's') ADVANCE(501);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(212)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 213:
      if (eof) ADVANCE(214);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '.') ADVANCE(165);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(479);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead == 'm') ADVANCE(368);
      if (lookahead == 'n') ADVANCE(465);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(213)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_POUNDif);
      if (lookahead == 'd') ADVANCE(72);
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_preproc_else);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_POUNDifdef);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_POUNDifndef);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_preproc_endif);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '/') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(229);
      if (lookahead != 0) ADVANCE(223);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(225);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\n') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0) ADVANCE(228);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '*') ADVANCE(223);
      if (lookahead == '/') ADVANCE(228);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\\') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(227);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead == '\\') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(228);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(223);
      if (lookahead == '\r') ADVANCE(231);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(229);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(227);
      if (lookahead == '\r') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(230);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead != 0 &&
          lookahead != '*' &&
          lookahead != '\\') ADVANCE(223);
      if (lookahead == '*') ADVANCE(222);
      if (lookahead == '\\') ADVANCE(229);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_preproc_macro);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(227);
      if (lookahead == '\\') ADVANCE(230);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_defined);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_defined);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(359);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(340);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(251);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(247);
      if (lookahead == '>') ADVANCE(252);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == 'd') ADVANCE(233);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_btree);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(248);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(272);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(304);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_ord);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_ord);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_to_float);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_to_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_to_number);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_to_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_to_string);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_to_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_cat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_strlen);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_strlen);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_substr);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_substr);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_autoinc);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_autoinc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(250);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_stateful);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(408);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(431);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(508);
      if (lookahead == 'e') ADVANCE(369);
      if (lookahead == 'i') ADVANCE(445);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(490);
      if (lookahead == 'o') ADVANCE(504);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(446);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(412);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(447);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(494);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(500);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(495);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(470);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(475);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(481);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(449);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(476);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(505);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'n') ADVANCE(503);
      if (lookahead == 's') ADVANCE(499);
      if (lookahead == 'u') ADVANCE(450);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(429);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(469);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(414);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(448);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(415);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(456);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(458);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == 'm') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(486);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(471);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(467);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(411);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(487);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(493);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(468);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(489);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead == 'r') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(423);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(491);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(492);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'q') ADVANCE(483);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(502);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(437);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(424);
      if (lookahead == 't') ADVANCE(482);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(480);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(425);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(306);
      if (lookahead == 'u') ADVANCE(497);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(418);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(498);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(427);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(478);
      if (lookahead == 'u') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(474);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(484);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(441);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(443);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(511);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(512);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(517);
      if (lookahead == 'x') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == '.') ADVANCE(206);
      if (lookahead == 'u') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'b') ADVANCE(205);
      if (lookahead == 'u') ADVANCE(517);
      if (lookahead == 'x') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_decimal);
      if (lookahead == 'u') ADVANCE(517);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 210, .external_lex_state = 2},
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
  [31] = {.lex_state = 210, .external_lex_state = 2},
  [32] = {.lex_state = 210, .external_lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 210, .external_lex_state = 2},
  [35] = {.lex_state = 210, .external_lex_state = 2},
  [36] = {.lex_state = 210, .external_lex_state = 2},
  [37] = {.lex_state = 210, .external_lex_state = 2},
  [38] = {.lex_state = 210, .external_lex_state = 2},
  [39] = {.lex_state = 210, .external_lex_state = 2},
  [40] = {.lex_state = 210, .external_lex_state = 2},
  [41] = {.lex_state = 210, .external_lex_state = 2},
  [42] = {.lex_state = 210, .external_lex_state = 2},
  [43] = {.lex_state = 213, .external_lex_state = 2},
  [44] = {.lex_state = 213, .external_lex_state = 2},
  [45] = {.lex_state = 213, .external_lex_state = 2},
  [46] = {.lex_state = 213, .external_lex_state = 2},
  [47] = {.lex_state = 213, .external_lex_state = 2},
  [48] = {.lex_state = 213, .external_lex_state = 2},
  [49] = {.lex_state = 213, .external_lex_state = 2},
  [50] = {.lex_state = 213, .external_lex_state = 2},
  [51] = {.lex_state = 213, .external_lex_state = 2},
  [52] = {.lex_state = 213, .external_lex_state = 2},
  [53] = {.lex_state = 213, .external_lex_state = 2},
  [54] = {.lex_state = 213, .external_lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 213, .external_lex_state = 2},
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
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 213, .external_lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 211, .external_lex_state = 2},
  [88] = {.lex_state = 211, .external_lex_state = 2},
  [89] = {.lex_state = 211, .external_lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 211, .external_lex_state = 2},
  [92] = {.lex_state = 211, .external_lex_state = 2},
  [93] = {.lex_state = 210, .external_lex_state = 2},
  [94] = {.lex_state = 212, .external_lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 210, .external_lex_state = 2},
  [97] = {.lex_state = 212, .external_lex_state = 2},
  [98] = {.lex_state = 212, .external_lex_state = 2},
  [99] = {.lex_state = 210, .external_lex_state = 2},
  [100] = {.lex_state = 210, .external_lex_state = 2},
  [101] = {.lex_state = 210, .external_lex_state = 2},
  [102] = {.lex_state = 211, .external_lex_state = 2},
  [103] = {.lex_state = 210, .external_lex_state = 2},
  [104] = {.lex_state = 210, .external_lex_state = 2},
  [105] = {.lex_state = 210, .external_lex_state = 2},
  [106] = {.lex_state = 212, .external_lex_state = 2},
  [107] = {.lex_state = 210, .external_lex_state = 2},
  [108] = {.lex_state = 211, .external_lex_state = 2},
  [109] = {.lex_state = 210, .external_lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 210, .external_lex_state = 2},
  [112] = {.lex_state = 210, .external_lex_state = 1},
  [113] = {.lex_state = 210, .external_lex_state = 2},
  [114] = {.lex_state = 210, .external_lex_state = 2},
  [115] = {.lex_state = 211, .external_lex_state = 2},
  [116] = {.lex_state = 211, .external_lex_state = 2},
  [117] = {.lex_state = 211, .external_lex_state = 2},
  [118] = {.lex_state = 210, .external_lex_state = 2},
  [119] = {.lex_state = 211, .external_lex_state = 2},
  [120] = {.lex_state = 212, .external_lex_state = 2},
  [121] = {.lex_state = 210, .external_lex_state = 2},
  [122] = {.lex_state = 212, .external_lex_state = 2},
  [123] = {.lex_state = 212, .external_lex_state = 2},
  [124] = {.lex_state = 211, .external_lex_state = 2},
  [125] = {.lex_state = 210, .external_lex_state = 2},
  [126] = {.lex_state = 210, .external_lex_state = 2},
  [127] = {.lex_state = 211, .external_lex_state = 2},
  [128] = {.lex_state = 210, .external_lex_state = 2},
  [129] = {.lex_state = 210, .external_lex_state = 2},
  [130] = {.lex_state = 211, .external_lex_state = 2},
  [131] = {.lex_state = 212, .external_lex_state = 2},
  [132] = {.lex_state = 211, .external_lex_state = 2},
  [133] = {.lex_state = 212, .external_lex_state = 2},
  [134] = {.lex_state = 211, .external_lex_state = 2},
  [135] = {.lex_state = 210, .external_lex_state = 2},
  [136] = {.lex_state = 211, .external_lex_state = 2},
  [137] = {.lex_state = 212, .external_lex_state = 2},
  [138] = {.lex_state = 210, .external_lex_state = 2},
  [139] = {.lex_state = 211, .external_lex_state = 2},
  [140] = {.lex_state = 211, .external_lex_state = 2},
  [141] = {.lex_state = 211, .external_lex_state = 2},
  [142] = {.lex_state = 210, .external_lex_state = 2},
  [143] = {.lex_state = 210, .external_lex_state = 2},
  [144] = {.lex_state = 210, .external_lex_state = 2},
  [145] = {.lex_state = 210, .external_lex_state = 2},
  [146] = {.lex_state = 210, .external_lex_state = 2},
  [147] = {.lex_state = 210, .external_lex_state = 2},
  [148] = {.lex_state = 210, .external_lex_state = 2},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 210, .external_lex_state = 2},
  [151] = {.lex_state = 210, .external_lex_state = 2},
  [152] = {.lex_state = 210, .external_lex_state = 2},
  [153] = {.lex_state = 210, .external_lex_state = 2},
  [154] = {.lex_state = 210, .external_lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 210, .external_lex_state = 2},
  [157] = {.lex_state = 210, .external_lex_state = 2},
  [158] = {.lex_state = 210, .external_lex_state = 2},
  [159] = {.lex_state = 210, .external_lex_state = 2},
  [160] = {.lex_state = 210, .external_lex_state = 2},
  [161] = {.lex_state = 210, .external_lex_state = 2},
  [162] = {.lex_state = 210, .external_lex_state = 2},
  [163] = {.lex_state = 210, .external_lex_state = 2},
  [164] = {.lex_state = 210, .external_lex_state = 2},
  [165] = {.lex_state = 210, .external_lex_state = 2},
  [166] = {.lex_state = 210, .external_lex_state = 2},
  [167] = {.lex_state = 210, .external_lex_state = 2},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 210, .external_lex_state = 2},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 210, .external_lex_state = 2},
  [172] = {.lex_state = 210, .external_lex_state = 2},
  [173] = {.lex_state = 210, .external_lex_state = 2},
  [174] = {.lex_state = 210, .external_lex_state = 2},
  [175] = {.lex_state = 210, .external_lex_state = 2},
  [176] = {.lex_state = 210, .external_lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 3},
  [184] = {.lex_state = 210},
  [185] = {.lex_state = 210},
  [186] = {.lex_state = 210},
  [187] = {.lex_state = 210},
  [188] = {.lex_state = 210},
  [189] = {.lex_state = 210},
  [190] = {.lex_state = 210},
  [191] = {.lex_state = 210},
  [192] = {.lex_state = 210},
  [193] = {.lex_state = 210},
  [194] = {.lex_state = 9},
  [195] = {.lex_state = 9},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 8},
  [199] = {.lex_state = 8},
  [200] = {.lex_state = 8},
  [201] = {.lex_state = 8},
  [202] = {.lex_state = 8},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 8},
  [205] = {.lex_state = 8},
  [206] = {.lex_state = 8},
  [207] = {.lex_state = 8},
  [208] = {.lex_state = 8},
  [209] = {.lex_state = 8},
  [210] = {.lex_state = 8},
  [211] = {.lex_state = 8},
  [212] = {.lex_state = 8},
  [213] = {.lex_state = 8},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 9},
  [216] = {.lex_state = 9},
  [217] = {.lex_state = 9},
  [218] = {.lex_state = 9},
  [219] = {.lex_state = 9},
  [220] = {.lex_state = 9},
  [221] = {.lex_state = 9},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 9},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 1},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 1},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 1},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 4},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 210},
  [254] = {.lex_state = 1},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 210},
  [259] = {.lex_state = 210},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 210},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 210},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 210},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 210},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 210},
  [282] = {.lex_state = 210},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 210},
  [299] = {.lex_state = 210},
  [300] = {.lex_state = 210},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 210},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 210},
  [308] = {.lex_state = 210},
  [309] = {.lex_state = 210},
  [310] = {.lex_state = 210},
  [311] = {.lex_state = 210},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 210},
  [314] = {.lex_state = 210},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 210},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 210},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 15},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 210},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 1},
  [330] = {.lex_state = 210},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 1},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 1},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 210},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 210},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 1},
  [344] = {.lex_state = 210},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 1},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 1},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 210},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 210},
  [353] = {.lex_state = 210},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 210},
  [358] = {.lex_state = 210},
  [359] = {.lex_state = 1},
  [360] = {.lex_state = 210},
  [361] = {.lex_state = 1},
  [362] = {.lex_state = 210},
  [363] = {.lex_state = 0},
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
    [sym_source_file] = STATE(331),
    [sym__element] = STATE(31),
    [sym_preproc_directive] = STATE(31),
    [sym_preproc_include] = STATE(157),
    [sym_preproc_if] = STATE(157),
    [sym_preproc_ifdef] = STATE(157),
    [sym_preproc_ifndef] = STATE(157),
    [sym_preproc_define] = STATE(157),
    [sym_relation_decl] = STATE(31),
    [sym_rule] = STATE(31),
    [sym_rule_head] = STATE(330),
    [sym_subsumption_head] = STATE(330),
    [sym_directive] = STATE(31),
    [sym__directive_qualifier] = STATE(319),
    [sym_include_directive] = STATE(31),
    [sym_qualified_name] = STATE(328),
    [sym_fact] = STATE(31),
    [sym_type_decl] = STATE(31),
    [sym_functor_decl] = STATE(31),
    [sym_pragma] = STATE(31),
    [sym_atom] = STATE(249),
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(90), 1,
      sym_argument,
    STATE(243), 1,
      sym_conjunction,
    STATE(328), 1,
      sym_qualified_name,
    STATE(338), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(232), 2,
      sym_constraint,
      sym_atom,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(95), 1,
      sym_argument,
    STATE(243), 1,
      sym_conjunction,
    STATE(328), 1,
      sym_qualified_name,
    STATE(345), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(232), 2,
      sym_constraint,
      sym_atom,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(90), 1,
      sym_argument,
    STATE(243), 1,
      sym_conjunction,
    STATE(328), 1,
      sym_qualified_name,
    STATE(334), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(232), 2,
      sym_constraint,
      sym_atom,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(95), 1,
      sym_argument,
    STATE(243), 1,
      sym_conjunction,
    STATE(328), 1,
      sym_qualified_name,
    STATE(354), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(232), 2,
      sym_constraint,
      sym_atom,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(90), 1,
      sym_argument,
    STATE(243), 1,
      sym_conjunction,
    STATE(326), 1,
      sym_disjunction,
    STATE(328), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(232), 2,
      sym_constraint,
      sym_atom,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(95), 1,
      sym_argument,
    STATE(243), 1,
      sym_conjunction,
    STATE(328), 1,
      sym_qualified_name,
    STATE(359), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(232), 2,
      sym_constraint,
      sym_atom,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(90), 1,
      sym_argument,
    STATE(243), 1,
      sym_conjunction,
    STATE(328), 1,
      sym_qualified_name,
    STATE(347), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(232), 2,
      sym_constraint,
      sym_atom,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(11), 1,
      aux_sym_conjunction_repeat1,
    STATE(95), 1,
      sym_argument,
    STATE(254), 1,
      sym_conjunction,
    STATE(328), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(232), 2,
      sym_constraint,
      sym_atom,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(12), 1,
      aux_sym_conjunction_repeat1,
    STATE(95), 1,
      sym_argument,
    STATE(328), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(252), 2,
      sym_constraint,
      sym_atom,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(33), 1,
      aux_sym_conjunction_repeat1,
    STATE(95), 1,
      sym_argument,
    STATE(328), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(231), 2,
      sym_constraint,
      sym_atom,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(363), 2,
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
    STATE(69), 11,
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
    ACTIONS(75), 1,
      anon_sym_BANG,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      aux_sym_conjunction_repeat1,
    STATE(95), 1,
      sym_argument,
    STATE(328), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(244), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(248), 2,
      sym_constraint,
      sym_atom,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(179), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
      anon_sym_RPAREN,
    STATE(155), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
      anon_sym_RBRACK,
    STATE(177), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [1675] = 21,
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
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [1769] = 20,
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
    STATE(183), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [1860] = 20,
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
    STATE(170), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [1951] = 20,
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
    STATE(181), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2042] = 20,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2133] = 20,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2224] = 20,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2315] = 20,
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
    STATE(110), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2406] = 20,
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
    STATE(72), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2497] = 20,
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
    STATE(76), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2588] = 20,
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
    STATE(62), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2679] = 20,
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
    STATE(180), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2770] = 20,
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
    STATE(178), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2861] = 20,
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
    STATE(182), 1,
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
    STATE(78), 2,
      sym__integer,
      sym__number,
    STATE(363), 2,
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
    STATE(69), 11,
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
  [2952] = 21,
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
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(249), 1,
      sym_atom,
    STATE(319), 1,
      sym__directive_qualifier,
    STATE(328), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 2,
      sym_preproc_else,
      sym_preproc_endif,
    STATE(330), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(25), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(157), 5,
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
  [3036] = 21,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_POUNDinclude,
    ACTIONS(98), 1,
      anon_sym_POUNDif,
    ACTIONS(104), 1,
      anon_sym_POUNDifdef,
    ACTIONS(107), 1,
      anon_sym_POUNDifndef,
    ACTIONS(110), 1,
      anon_sym_POUNDdefine,
    ACTIONS(113), 1,
      anon_sym_DOTpragma,
    ACTIONS(116), 1,
      sym_identifier,
    ACTIONS(119), 1,
      sym_decl_kw,
    ACTIONS(125), 1,
      sym_type_kw,
    ACTIONS(128), 1,
      sym_functor_kw,
    ACTIONS(131), 1,
      sym_include_kw,
    STATE(249), 1,
      sym_atom,
    STATE(319), 1,
      sym__directive_qualifier,
    STATE(328), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(101), 2,
      sym_preproc_else,
      sym_preproc_endif,
    STATE(330), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(122), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(157), 5,
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
  [3120] = 5,
    ACTIONS(136), 1,
      anon_sym_BANG,
    STATE(33), 1,
      aux_sym_conjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(134), 10,
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
    ACTIONS(139), 24,
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
  [3169] = 10,
    ACTIONS(143), 1,
      anon_sym_POUNDif,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(153), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(141), 18,
      sym_decl_kw,
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
  [3223] = 6,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 3,
      anon_sym_POUNDif,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 24,
      sym_decl_kw,
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
  [3269] = 11,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(155), 1,
      anon_sym_AMP_AMP,
    ACTIONS(161), 1,
      anon_sym_POUNDif,
    ACTIONS(163), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(153), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(159), 17,
      sym_decl_kw,
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
  [3325] = 9,
    ACTIONS(143), 1,
      anon_sym_POUNDif,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(151), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(153), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(141), 19,
      sym_decl_kw,
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
  [3377] = 7,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(157), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(143), 3,
      anon_sym_POUNDif,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 22,
      sym_decl_kw,
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
  [3425] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 4,
      anon_sym_POUNDif,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 27,
      sym_decl_kw,
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
  [3465] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 4,
      anon_sym_POUNDif,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 27,
      sym_decl_kw,
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
  [3505] = 5,
    ACTIONS(147), 1,
      anon_sym_STAR,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 3,
      anon_sym_POUNDif,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 26,
      sym_decl_kw,
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
  [3549] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 4,
      anon_sym_POUNDif,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 27,
      sym_decl_kw,
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
  [3589] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(146), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(175), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(53), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(173), 16,
      sym_decl_kw,
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
  [3636] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(154), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(50), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(181), 16,
      sym_decl_kw,
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
  [3683] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(156), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(54), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(185), 16,
      sym_decl_kw,
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
  [3730] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(154), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(58), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(181), 16,
      sym_decl_kw,
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
  [3777] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(156), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(58), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(185), 16,
      sym_decl_kw,
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
  [3824] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(165), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(191), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(47), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(189), 16,
      sym_decl_kw,
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
  [3871] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(175), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(46), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(193), 16,
      sym_decl_kw,
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
  [3918] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(167), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(199), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(58), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(197), 16,
      sym_decl_kw,
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
  [3965] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(160), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(203), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(58), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(201), 16,
      sym_decl_kw,
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
  [4012] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(171), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(207), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(51), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(205), 16,
      sym_decl_kw,
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
  [4059] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(175), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(195), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(58), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(193), 16,
      sym_decl_kw,
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
  [4106] = 7,
    ACTIONS(179), 1,
      anon_sym_choice_DASHdomain,
    STATE(171), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(207), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(58), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(177), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(205), 16,
      sym_decl_kw,
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
  [4153] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(211), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_bshr,
    ACTIONS(209), 24,
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
  [4191] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(215), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_bshr,
    ACTIONS(213), 24,
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
  [4229] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(219), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_COLON,
      anon_sym_bshr,
    ACTIONS(217), 24,
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
  [4267] = 5,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(223), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(58), 2,
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
    ACTIONS(221), 17,
      sym_decl_kw,
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
  [4309] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(230), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(228), 24,
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
  [4346] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(234), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(232), 24,
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
  [4383] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(238), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(236), 24,
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
  [4420] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(242), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(240), 24,
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
  [4457] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(246), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(244), 24,
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
  [4494] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(250), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(248), 24,
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
  [4531] = 8,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(260), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(252), 16,
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
  [4578] = 7,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(260), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(252), 19,
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
  [4623] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(268), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(266), 24,
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
  [4660] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(252), 24,
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
  [4697] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(272), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(270), 24,
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
  [4734] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(276), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(274), 24,
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
  [4771] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(280), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(278), 24,
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
  [4808] = 4,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(252), 23,
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
  [4847] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(284), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(282), 24,
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
  [4884] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(288), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(286), 24,
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
  [4921] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(292), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(290), 24,
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
  [4958] = 6,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(260), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(252), 21,
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
  [5001] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(296), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(294), 24,
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
  [5038] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(300), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(298), 24,
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
  [5075] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(304), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(302), 24,
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
  [5112] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(308), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(306), 24,
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
  [5149] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(312), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(310), 24,
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
  [5186] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(314), 24,
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
  [5223] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(318), 24,
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
  [5260] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(322), 24,
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
  [5297] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(328), 10,
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
    ACTIONS(326), 17,
      sym_decl_kw,
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
  [5333] = 6,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
    ACTIONS(332), 1,
      anon_sym_DOT,
    STATE(229), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(276), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(274), 18,
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
  [5373] = 5,
    ACTIONS(336), 1,
      anon_sym_POUNDif,
    ACTIONS(338), 1,
      anon_sym_DOT,
    STATE(87), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 20,
      sym_decl_kw,
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
  [5409] = 5,
    ACTIONS(343), 1,
      anon_sym_POUNDif,
    ACTIONS(345), 1,
      anon_sym_DOT,
    STATE(87), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(341), 20,
      sym_decl_kw,
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
  [5445] = 5,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_POUNDif,
    STATE(88), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 20,
      sym_decl_kw,
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
  [5481] = 11,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(353), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [5528] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 2,
      anon_sym_POUNDif,
      anon_sym_DOT,
    ACTIONS(334), 20,
      sym_decl_kw,
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
  [5559] = 6,
    ACTIONS(345), 1,
      anon_sym_DOT,
    ACTIONS(347), 1,
      anon_sym_POUNDif,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    STATE(88), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 18,
      sym_decl_kw,
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
  [5596] = 6,
    ACTIONS(363), 1,
      anon_sym_POUNDif,
    ACTIONS(365), 1,
      anon_sym_LPAREN,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(361), 17,
      sym_decl_kw,
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
  [5632] = 5,
    ACTIONS(369), 1,
      anon_sym_DOT,
    STATE(98), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(330), 16,
      sym_decl_kw,
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
  [5666] = 10,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(351), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(353), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [5710] = 6,
    ACTIONS(367), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_POUNDif,
    ACTIONS(375), 1,
      anon_sym_LPAREN,
    STATE(93), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(371), 17,
      sym_decl_kw,
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
  [5746] = 5,
    ACTIONS(377), 1,
      anon_sym_DOT,
    STATE(97), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(334), 16,
      sym_decl_kw,
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
  [5780] = 5,
    ACTIONS(369), 1,
      anon_sym_DOT,
    STATE(97), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(343), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(341), 16,
      sym_decl_kw,
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
  [5814] = 5,
    ACTIONS(382), 1,
      anon_sym_POUNDif,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(380), 18,
      sym_decl_kw,
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
  [5848] = 5,
    ACTIONS(389), 1,
      anon_sym_POUNDif,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(387), 17,
      sym_decl_kw,
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
  [5881] = 3,
    ACTIONS(382), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(380), 19,
      sym_decl_kw,
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
  [5910] = 5,
    ACTIONS(395), 1,
      anon_sym_POUNDif,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    STATE(117), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(393), 17,
      sym_decl_kw,
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
  [5943] = 5,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_POUNDif,
    STATE(100), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(399), 17,
      sym_decl_kw,
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
  [5976] = 5,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(401), 1,
      anon_sym_POUNDif,
    STATE(107), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(399), 17,
      sym_decl_kw,
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
  [6009] = 5,
    ACTIONS(405), 1,
      anon_sym_POUNDif,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(403), 17,
      sym_decl_kw,
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
  [6042] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(336), 4,
      anon_sym_POUNDif,
      anon_sym_DOT,
      sym_stateful,
      sym_identifier,
    ACTIONS(334), 16,
      sym_decl_kw,
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
  [6071] = 5,
    ACTIONS(411), 1,
      anon_sym_POUNDif,
    ACTIONS(413), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(409), 17,
      sym_decl_kw,
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
  [6104] = 5,
    ACTIONS(418), 1,
      anon_sym_POUNDif,
    ACTIONS(420), 1,
      anon_sym_PIPE,
    STATE(108), 1,
      aux_sym_abstract_data_type_repeat1,
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
  [6137] = 5,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_POUNDif,
    STATE(104), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 17,
      sym_decl_kw,
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
  [6170] = 9,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
    ACTIONS(427), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [6211] = 5,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(425), 1,
      anon_sym_POUNDif,
    STATE(107), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(423), 17,
      sym_decl_kw,
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
  [6244] = 5,
    ACTIONS(431), 1,
      anon_sym_POUNDif,
    ACTIONS(433), 1,
      sym_plan_kw,
    STATE(158), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(429), 17,
      sym_decl_kw,
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
  [6277] = 5,
    ACTIONS(437), 1,
      anon_sym_POUNDif,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    STATE(113), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 17,
      sym_decl_kw,
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
  [6310] = 5,
    ACTIONS(391), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_POUNDif,
    STATE(111), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 17,
      sym_decl_kw,
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
  [6343] = 5,
    ACTIONS(448), 1,
      anon_sym_POUNDif,
    ACTIONS(450), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(446), 17,
      sym_decl_kw,
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
  [6376] = 5,
    ACTIONS(450), 1,
      anon_sym_PIPE,
    ACTIONS(454), 1,
      anon_sym_POUNDif,
    STATE(115), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(452), 17,
      sym_decl_kw,
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
  [6409] = 5,
    ACTIONS(397), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_POUNDif,
    STATE(108), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(456), 17,
      sym_decl_kw,
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
  [6442] = 5,
    ACTIONS(407), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_POUNDif,
    STATE(105), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(460), 17,
      sym_decl_kw,
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
  [6475] = 5,
    ACTIONS(466), 1,
      anon_sym_POUNDif,
    ACTIONS(468), 1,
      anon_sym_PIPE,
    STATE(119), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(464), 17,
      sym_decl_kw,
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
  [6508] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(473), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(471), 16,
      sym_decl_kw,
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
  [6536] = 3,
    ACTIONS(477), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(475), 18,
      sym_decl_kw,
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
  [6564] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(481), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(479), 16,
      sym_decl_kw,
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
  [6592] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(485), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(483), 16,
      sym_decl_kw,
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
  [6620] = 3,
    ACTIONS(466), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(464), 18,
      sym_decl_kw,
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
  [6648] = 3,
    ACTIONS(489), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(487), 18,
      sym_decl_kw,
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
  [6676] = 4,
    ACTIONS(493), 1,
      anon_sym_POUNDif,
    ACTIONS(495), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(491), 17,
      sym_decl_kw,
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
  [6706] = 3,
    ACTIONS(499), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(497), 18,
      sym_decl_kw,
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
  [6734] = 3,
    ACTIONS(503), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(501), 18,
      sym_decl_kw,
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
  [6762] = 3,
    ACTIONS(437), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(435), 18,
      sym_decl_kw,
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
  [6790] = 3,
    ACTIONS(507), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(505), 18,
      sym_decl_kw,
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
  [6818] = 4,
    ACTIONS(513), 1,
      sym_stateful,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(511), 2,
      anon_sym_POUNDif,
      sym_identifier,
    ACTIONS(509), 16,
      sym_decl_kw,
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
  [6848] = 3,
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
      anon_sym_PIPE,
      anon_sym_DOTpragma,
      sym_identifier,
  [6876] = 4,
    ACTIONS(523), 1,
      sym_stateful,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(521), 2,
      anon_sym_POUNDif,
      sym_identifier,
    ACTIONS(519), 16,
      sym_decl_kw,
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
  [6906] = 3,
    ACTIONS(485), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(483), 18,
      sym_decl_kw,
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
  [6934] = 3,
    ACTIONS(527), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(525), 18,
      sym_decl_kw,
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
  [6962] = 3,
    ACTIONS(418), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(416), 18,
      sym_decl_kw,
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
  [6990] = 4,
    ACTIONS(533), 1,
      sym_stateful,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(531), 2,
      anon_sym_POUNDif,
      sym_identifier,
    ACTIONS(529), 16,
      sym_decl_kw,
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
  [7020] = 3,
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
  [7048] = 3,
    ACTIONS(473), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(471), 18,
      sym_decl_kw,
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
  [7076] = 3,
    ACTIONS(481), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(479), 18,
      sym_decl_kw,
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
  [7104] = 4,
    ACTIONS(541), 1,
      anon_sym_POUNDif,
    ACTIONS(543), 1,
      anon_sym_PIPE,
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
  [7134] = 3,
    ACTIONS(547), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(545), 18,
      sym_decl_kw,
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
  [7162] = 3,
    ACTIONS(551), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(549), 18,
      sym_decl_kw,
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
  [7190] = 3,
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
  [7217] = 3,
    ACTIONS(555), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(553), 17,
      sym_decl_kw,
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
  [7244] = 3,
    ACTIONS(195), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 17,
      sym_decl_kw,
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
  [7271] = 3,
    ACTIONS(559), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(557), 17,
      sym_decl_kw,
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
  [7298] = 3,
    ACTIONS(563), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(561), 17,
      sym_decl_kw,
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
  [7325] = 11,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(565), 1,
      anon_sym_RPAREN,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    STATE(275), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7368] = 3,
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
  [7395] = 3,
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
  [7422] = 3,
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
  [7449] = 3,
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
  [7476] = 3,
    ACTIONS(199), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 17,
      sym_decl_kw,
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
  [7503] = 11,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RPAREN,
    STATE(279), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7546] = 3,
    ACTIONS(207), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 17,
      sym_decl_kw,
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
  [7573] = 3,
    ACTIONS(589), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(587), 17,
      sym_decl_kw,
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
  [7600] = 3,
    ACTIONS(593), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(591), 17,
      sym_decl_kw,
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
  [7627] = 3,
    ACTIONS(597), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(595), 17,
      sym_decl_kw,
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
  [7654] = 3,
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
  [7681] = 3,
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
  [7708] = 3,
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
  [7735] = 3,
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
  [7762] = 3,
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
  [7789] = 3,
    ACTIONS(187), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 17,
      sym_decl_kw,
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
  [7816] = 3,
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
  [7843] = 3,
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
  [7870] = 11,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(295), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7913] = 3,
    ACTIONS(631), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(629), 17,
      sym_decl_kw,
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
  [7940] = 9,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(633), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7979] = 3,
    ACTIONS(203), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(201), 17,
      sym_decl_kw,
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
  [8006] = 3,
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
  [8033] = 3,
    ACTIONS(641), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(639), 17,
      sym_decl_kw,
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
  [8060] = 3,
    ACTIONS(645), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(643), 17,
      sym_decl_kw,
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
  [8087] = 3,
    ACTIONS(183), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 17,
      sym_decl_kw,
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
  [8114] = 3,
    ACTIONS(649), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(647), 17,
      sym_decl_kw,
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
  [8141] = 11,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RBRACK,
    STATE(280), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8184] = 9,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8221] = 9,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(655), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8258] = 9,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(657), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8295] = 9,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(349), 1,
      anon_sym_RPAREN,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8332] = 9,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(659), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8369] = 9,
    ACTIONS(258), 1,
      anon_sym_SLASH,
    ACTIONS(262), 1,
      anon_sym_CARET,
    ACTIONS(357), 1,
      anon_sym_bshr,
    ACTIONS(661), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(254), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(256), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(264), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(355), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [8406] = 8,
    ACTIONS(665), 1,
      anon_sym_STAR,
    ACTIONS(667), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(663), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(141), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(671), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8439] = 7,
    ACTIONS(665), 1,
      anon_sym_STAR,
    ACTIONS(667), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(663), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(673), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(141), 6,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [8470] = 10,
    ACTIONS(665), 1,
      anon_sym_STAR,
    ACTIONS(667), 1,
      anon_sym_SLASH,
    ACTIONS(675), 1,
      anon_sym_RPAREN,
    ACTIONS(677), 1,
      anon_sym_AMP_AMP,
    ACTIONS(679), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(663), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(671), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8507] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(167), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(165), 11,
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
  [8530] = 10,
    ACTIONS(665), 1,
      anon_sym_STAR,
    ACTIONS(667), 1,
      anon_sym_SLASH,
    ACTIONS(677), 1,
      anon_sym_AMP_AMP,
    ACTIONS(679), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(663), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(671), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8567] = 5,
    ACTIONS(665), 1,
      anon_sym_STAR,
    ACTIONS(667), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 10,
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
  [8594] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(171), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(169), 11,
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
  [8617] = 6,
    ACTIONS(665), 1,
      anon_sym_STAR,
    ACTIONS(667), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(663), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(141), 8,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8646] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(141), 11,
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
  [8669] = 9,
    ACTIONS(665), 1,
      anon_sym_STAR,
    ACTIONS(667), 1,
      anon_sym_SLASH,
    ACTIONS(677), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(141), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(663), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(669), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(673), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(671), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8704] = 9,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    ACTIONS(687), 1,
      sym_identifier,
    STATE(102), 1,
      sym_adt_branch,
    STATE(139), 1,
      sym_primitive_type,
    STATE(140), 1,
      sym_qualified_name,
    STATE(141), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(144), 3,
      sym_union_type,
      sym_record_type,
      sym_abstract_data_type,
    ACTIONS(685), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8738] = 8,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    ACTIONS(693), 1,
      sym_identifier,
    STATE(256), 1,
      sym_qualified_name,
    STATE(260), 1,
      sym_primitive_type,
    STATE(283), 1,
      sym_functor_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(312), 2,
      sym_attribute,
      sym_type_name,
    ACTIONS(691), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8768] = 6,
    ACTIONS(695), 1,
      anon_sym_defined,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(699), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(701), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(40), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8794] = 6,
    ACTIONS(703), 1,
      anon_sym_defined,
    ACTIONS(705), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(707), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(709), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(187), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8820] = 5,
    ACTIONS(703), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(711), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(713), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(192), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8843] = 5,
    ACTIONS(703), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(715), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(717), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(188), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8866] = 5,
    ACTIONS(695), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(719), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(721), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(38), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8889] = 5,
    ACTIONS(695), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(723), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(725), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(37), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8912] = 5,
    ACTIONS(695), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(727), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(729), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(41), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8935] = 7,
    ACTIONS(693), 1,
      sym_identifier,
    STATE(256), 1,
      sym_qualified_name,
    STATE(260), 1,
      sym_primitive_type,
    STATE(305), 1,
      sym_functor_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(312), 2,
      sym_attribute,
      sym_type_name,
    ACTIONS(691), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8962] = 5,
    ACTIONS(695), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(731), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(733), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(36), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8985] = 5,
    ACTIONS(695), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(735), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(737), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(35), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [9008] = 5,
    ACTIONS(695), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(739), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(741), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(39), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [9031] = 5,
    ACTIONS(703), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(743), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(745), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(191), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [9054] = 5,
    ACTIONS(695), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(747), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(749), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(34), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [9077] = 5,
    ACTIONS(703), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(751), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(753), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(193), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [9100] = 5,
    ACTIONS(703), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(755), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(757), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(189), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [9123] = 5,
    ACTIONS(703), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(759), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(761), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(186), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [9146] = 5,
    ACTIONS(703), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(763), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(765), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(184), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [9169] = 5,
    ACTIONS(703), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(767), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(769), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(185), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [9192] = 5,
    ACTIONS(771), 1,
      anon_sym_RPAREN,
    ACTIONS(775), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(304), 2,
      sym__integer,
      sym__number,
    ACTIONS(773), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9213] = 6,
    ACTIONS(777), 1,
      sym_identifier,
    STATE(124), 1,
      sym_type_name,
    STATE(139), 1,
      sym_primitive_type,
    STATE(140), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(685), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9236] = 6,
    ACTIONS(781), 1,
      sym_identifier,
    STATE(120), 1,
      sym_primitive_type,
    STATE(122), 1,
      sym_qualified_name,
    STATE(133), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9259] = 6,
    ACTIONS(777), 1,
      sym_identifier,
    STATE(116), 1,
      sym_type_name,
    STATE(139), 1,
      sym_primitive_type,
    STATE(140), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(685), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9282] = 6,
    ACTIONS(783), 1,
      sym_identifier,
    STATE(256), 1,
      sym_qualified_name,
    STATE(260), 1,
      sym_primitive_type,
    STATE(265), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(691), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9305] = 6,
    ACTIONS(781), 1,
      sym_identifier,
    STATE(120), 1,
      sym_primitive_type,
    STATE(122), 1,
      sym_qualified_name,
    STATE(137), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9328] = 6,
    ACTIONS(777), 1,
      sym_identifier,
    STATE(139), 1,
      sym_primitive_type,
    STATE(140), 1,
      sym_qualified_name,
    STATE(147), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(685), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9351] = 6,
    ACTIONS(783), 1,
      sym_identifier,
    STATE(256), 1,
      sym_qualified_name,
    STATE(260), 1,
      sym_primitive_type,
    STATE(349), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(691), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9374] = 5,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    ACTIONS(789), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(291), 2,
      sym__integer,
      sym__number,
    ACTIONS(787), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9395] = 6,
    ACTIONS(781), 1,
      sym_identifier,
    STATE(120), 1,
      sym_primitive_type,
    STATE(122), 1,
      sym_qualified_name,
    STATE(131), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9418] = 4,
    ACTIONS(793), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(322), 2,
      sym__integer,
      sym__number,
    ACTIONS(791), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9436] = 4,
    ACTIONS(797), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(333), 2,
      sym__integer,
      sym__number,
    ACTIONS(795), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9454] = 4,
    ACTIONS(799), 1,
      anon_sym_DOT,
    STATE(226), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9472] = 4,
    ACTIONS(804), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(306), 2,
      sym__integer,
      sym__number,
    ACTIONS(802), 4,
      sym_hex,
      sym_binary,
      sym_unsigned,
      sym_float,
  [9490] = 4,
    ACTIONS(332), 1,
      anon_sym_DOT,
    STATE(229), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9508] = 4,
    ACTIONS(332), 1,
      anon_sym_DOT,
    STATE(226), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(341), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9526] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9543] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(810), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9560] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(812), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9577] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(814), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9594] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(334), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9607] = 4,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(816), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9624] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(806), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9641] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(810), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9658] = 6,
    ACTIONS(821), 1,
      sym_string_literal,
    ACTIONS(823), 1,
      sym_identifier,
    STATE(315), 1,
      sym_boolean_literal,
    STATE(317), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
  [9679] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(236), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(825), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9696] = 4,
    ACTIONS(808), 1,
      anon_sym_COMMA,
    STATE(235), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(825), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9713] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(827), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9725] = 4,
    ACTIONS(831), 1,
      anon_sym_COMMA,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(829), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9741] = 4,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    STATE(250), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(834), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [9757] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(838), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9769] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(840), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9781] = 5,
    ACTIONS(332), 1,
      anon_sym_DOT,
    ACTIONS(842), 1,
      anon_sym_COLON,
    STATE(229), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(330), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9799] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(844), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9811] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(846), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9823] = 6,
    ACTIONS(848), 1,
      anon_sym_LT_EQ,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_COLON_DASH,
    ACTIONS(854), 1,
      anon_sym_DOT,
    STATE(298), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9843] = 4,
    ACTIONS(836), 1,
      anon_sym_SEMI,
    STATE(251), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(856), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [9859] = 4,
    ACTIONS(860), 1,
      anon_sym_SEMI,
    STATE(251), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(858), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [9875] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(816), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9887] = 5,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(865), 1,
      sym_identifier,
    STATE(118), 1,
      sym_choice_domain_attribute,
    STATE(125), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9904] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(858), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9915] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(483), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9926] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(479), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9937] = 4,
    ACTIONS(867), 1,
      anon_sym_COMMA,
    STATE(257), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(633), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [9952] = 5,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(870), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_atom,
    STATE(328), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9969] = 5,
    ACTIONS(863), 1,
      anon_sym_LPAREN,
    ACTIONS(865), 1,
      sym_identifier,
    STATE(125), 1,
      sym_choice_domain_tuple_attribute,
    STATE(129), 1,
      sym_choice_domain_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9986] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(471), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9997] = 5,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(872), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_atom,
    STATE(328), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10014] = 4,
    ACTIONS(874), 1,
      anon_sym_EQ,
    ACTIONS(876), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(150), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [10029] = 4,
    ACTIONS(880), 1,
      anon_sym_COMMA,
    STATE(263), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(878), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [10044] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(829), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10055] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(883), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [10066] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RBRACK,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10080] = 4,
    ACTIONS(889), 1,
      anon_sym_RPAREN,
    ACTIONS(891), 1,
      sym_identifier,
    STATE(296), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10094] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(893), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10108] = 4,
    ACTIONS(895), 1,
      anon_sym_RPAREN,
    ACTIONS(897), 1,
      sym_identifier,
    STATE(274), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10122] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    STATE(285), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10136] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(901), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10150] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(903), 1,
      anon_sym_RBRACK,
    STATE(266), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10164] = 4,
    ACTIONS(891), 1,
      sym_identifier,
    ACTIONS(905), 1,
      anon_sym_RBRACE,
    STATE(286), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10178] = 4,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    STATE(276), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10192] = 4,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(911), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10206] = 4,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10220] = 4,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
    STATE(289), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10234] = 4,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_functor_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10248] = 4,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(919), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10262] = 4,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
    STATE(257), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10276] = 4,
    ACTIONS(923), 1,
      anon_sym_COMMA,
    ACTIONS(926), 1,
      anon_sym_COLON_DASH,
    STATE(281), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10290] = 4,
    ACTIONS(897), 1,
      sym_identifier,
    ACTIONS(907), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10304] = 4,
    ACTIONS(917), 1,
      anon_sym_COMMA,
    ACTIONS(928), 1,
      anon_sym_RPAREN,
    STATE(278), 1,
      aux_sym_functor_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10318] = 4,
    ACTIONS(930), 1,
      anon_sym_RPAREN,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    STATE(287), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10332] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(934), 1,
      anon_sym_RPAREN,
    STATE(242), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10346] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(936), 1,
      anon_sym_RBRACE,
    STATE(271), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10360] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(938), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10374] = 4,
    ACTIONS(940), 1,
      anon_sym_RPAREN,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10388] = 4,
    ACTIONS(909), 1,
      anon_sym_COMMA,
    ACTIONS(944), 1,
      anon_sym_RPAREN,
    STATE(290), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10402] = 4,
    ACTIONS(946), 1,
      anon_sym_RPAREN,
    ACTIONS(948), 1,
      anon_sym_COMMA,
    STATE(290), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10416] = 4,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
    STATE(288), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10430] = 4,
    ACTIONS(953), 1,
      anon_sym_RPAREN,
    ACTIONS(955), 1,
      anon_sym_COMMA,
    STATE(292), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10444] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(958), 1,
      anon_sym_LPAREN,
    STATE(301), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10458] = 4,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(960), 1,
      anon_sym_RPAREN,
    STATE(292), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10472] = 4,
    ACTIONS(567), 1,
      anon_sym_COMMA,
    ACTIONS(962), 1,
      anon_sym_RPAREN,
    STATE(257), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10486] = 4,
    ACTIONS(885), 1,
      anon_sym_COMMA,
    ACTIONS(964), 1,
      anon_sym_RPAREN,
    STATE(268), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10500] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(878), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10510] = 4,
    ACTIONS(850), 1,
      anon_sym_COMMA,
    ACTIONS(966), 1,
      anon_sym_COLON_DASH,
    STATE(281), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10524] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(313), 1,
      sym_atom,
    STATE(328), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10538] = 4,
    ACTIONS(891), 1,
      sym_identifier,
    ACTIONS(968), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10552] = 4,
    ACTIONS(932), 1,
      anon_sym_COMMA,
    ACTIONS(970), 1,
      anon_sym_LPAREN,
    STATE(263), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10566] = 4,
    ACTIONS(972), 1,
      anon_sym_RPAREN,
    ACTIONS(974), 1,
      anon_sym_COMMA,
    STATE(302), 1,
      aux_sym_functor_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10580] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(328), 1,
      sym_qualified_name,
    STATE(341), 1,
      sym_atom,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10594] = 4,
    ACTIONS(942), 1,
      anon_sym_COMMA,
    ACTIONS(977), 1,
      anon_sym_RPAREN,
    STATE(294), 1,
      aux_sym_query_plan_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10608] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(972), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10617] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(953), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10626] = 3,
    ACTIONS(891), 1,
      sym_identifier,
    STATE(264), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10637] = 3,
    ACTIONS(979), 1,
      sym_identifier,
    STATE(136), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10648] = 3,
    ACTIONS(891), 1,
      sym_identifier,
    STATE(272), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10659] = 3,
    ACTIONS(897), 1,
      sym_identifier,
    STATE(318), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10670] = 3,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(335), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10681] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(981), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10690] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(926), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [10699] = 3,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(332), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10710] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(983), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10719] = 3,
    ACTIONS(985), 1,
      sym_identifier,
    STATE(101), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10730] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(987), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10739] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(946), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10748] = 3,
    ACTIONS(985), 1,
      sym_identifier,
    STATE(96), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10759] = 2,
    ACTIONS(989), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10767] = 2,
    ACTIONS(991), 1,
      sym_preproc_macro,
    ACTIONS(993), 2,
      sym_line_comment,
      sym_block_comment,
  [10775] = 2,
    ACTIONS(995), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10783] = 2,
    ACTIONS(997), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10791] = 2,
    ACTIONS(999), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10799] = 2,
    ACTIONS(1001), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10807] = 2,
    ACTIONS(1003), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10815] = 2,
    ACTIONS(359), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10823] = 2,
    ACTIONS(1005), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10831] = 2,
    ACTIONS(842), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10839] = 2,
    ACTIONS(1007), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10847] = 2,
    ACTIONS(1009), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10855] = 2,
    ACTIONS(1011), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10863] = 2,
    ACTIONS(1013), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10871] = 2,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10879] = 2,
    ACTIONS(1017), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10887] = 2,
    ACTIONS(1019), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10895] = 2,
    ACTIONS(1021), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10903] = 2,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10911] = 2,
    ACTIONS(1025), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10919] = 2,
    ACTIONS(1027), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10927] = 2,
    ACTIONS(1029), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10935] = 2,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10943] = 2,
    ACTIONS(1033), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10951] = 2,
    ACTIONS(1035), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10959] = 2,
    ACTIONS(1037), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10967] = 2,
    ACTIONS(1039), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10975] = 2,
    ACTIONS(1041), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10983] = 2,
    ACTIONS(1043), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10991] = 2,
    ACTIONS(1045), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10999] = 2,
    ACTIONS(1047), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11007] = 2,
    ACTIONS(1049), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11015] = 2,
    ACTIONS(1051), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11023] = 2,
    ACTIONS(1053), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11031] = 2,
    ACTIONS(1055), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11039] = 2,
    ACTIONS(1057), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11047] = 2,
    ACTIONS(1059), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11055] = 2,
    ACTIONS(1061), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11063] = 2,
    ACTIONS(1063), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11071] = 2,
    ACTIONS(1065), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11079] = 2,
    ACTIONS(1067), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11087] = 2,
    ACTIONS(1069), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11095] = 2,
    ACTIONS(1071), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [11103] = 2,
    ACTIONS(1073), 1,
      anon_sym_LPAREN,
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
  [SMALL_STATE(18)] = 1769,
  [SMALL_STATE(19)] = 1860,
  [SMALL_STATE(20)] = 1951,
  [SMALL_STATE(21)] = 2042,
  [SMALL_STATE(22)] = 2133,
  [SMALL_STATE(23)] = 2224,
  [SMALL_STATE(24)] = 2315,
  [SMALL_STATE(25)] = 2406,
  [SMALL_STATE(26)] = 2497,
  [SMALL_STATE(27)] = 2588,
  [SMALL_STATE(28)] = 2679,
  [SMALL_STATE(29)] = 2770,
  [SMALL_STATE(30)] = 2861,
  [SMALL_STATE(31)] = 2952,
  [SMALL_STATE(32)] = 3036,
  [SMALL_STATE(33)] = 3120,
  [SMALL_STATE(34)] = 3169,
  [SMALL_STATE(35)] = 3223,
  [SMALL_STATE(36)] = 3269,
  [SMALL_STATE(37)] = 3325,
  [SMALL_STATE(38)] = 3377,
  [SMALL_STATE(39)] = 3425,
  [SMALL_STATE(40)] = 3465,
  [SMALL_STATE(41)] = 3505,
  [SMALL_STATE(42)] = 3549,
  [SMALL_STATE(43)] = 3589,
  [SMALL_STATE(44)] = 3636,
  [SMALL_STATE(45)] = 3683,
  [SMALL_STATE(46)] = 3730,
  [SMALL_STATE(47)] = 3777,
  [SMALL_STATE(48)] = 3824,
  [SMALL_STATE(49)] = 3871,
  [SMALL_STATE(50)] = 3918,
  [SMALL_STATE(51)] = 3965,
  [SMALL_STATE(52)] = 4012,
  [SMALL_STATE(53)] = 4059,
  [SMALL_STATE(54)] = 4106,
  [SMALL_STATE(55)] = 4153,
  [SMALL_STATE(56)] = 4191,
  [SMALL_STATE(57)] = 4229,
  [SMALL_STATE(58)] = 4267,
  [SMALL_STATE(59)] = 4309,
  [SMALL_STATE(60)] = 4346,
  [SMALL_STATE(61)] = 4383,
  [SMALL_STATE(62)] = 4420,
  [SMALL_STATE(63)] = 4457,
  [SMALL_STATE(64)] = 4494,
  [SMALL_STATE(65)] = 4531,
  [SMALL_STATE(66)] = 4578,
  [SMALL_STATE(67)] = 4623,
  [SMALL_STATE(68)] = 4660,
  [SMALL_STATE(69)] = 4697,
  [SMALL_STATE(70)] = 4734,
  [SMALL_STATE(71)] = 4771,
  [SMALL_STATE(72)] = 4808,
  [SMALL_STATE(73)] = 4847,
  [SMALL_STATE(74)] = 4884,
  [SMALL_STATE(75)] = 4921,
  [SMALL_STATE(76)] = 4958,
  [SMALL_STATE(77)] = 5001,
  [SMALL_STATE(78)] = 5038,
  [SMALL_STATE(79)] = 5075,
  [SMALL_STATE(80)] = 5112,
  [SMALL_STATE(81)] = 5149,
  [SMALL_STATE(82)] = 5186,
  [SMALL_STATE(83)] = 5223,
  [SMALL_STATE(84)] = 5260,
  [SMALL_STATE(85)] = 5297,
  [SMALL_STATE(86)] = 5333,
  [SMALL_STATE(87)] = 5373,
  [SMALL_STATE(88)] = 5409,
  [SMALL_STATE(89)] = 5445,
  [SMALL_STATE(90)] = 5481,
  [SMALL_STATE(91)] = 5528,
  [SMALL_STATE(92)] = 5559,
  [SMALL_STATE(93)] = 5596,
  [SMALL_STATE(94)] = 5632,
  [SMALL_STATE(95)] = 5666,
  [SMALL_STATE(96)] = 5710,
  [SMALL_STATE(97)] = 5746,
  [SMALL_STATE(98)] = 5780,
  [SMALL_STATE(99)] = 5814,
  [SMALL_STATE(100)] = 5848,
  [SMALL_STATE(101)] = 5881,
  [SMALL_STATE(102)] = 5910,
  [SMALL_STATE(103)] = 5943,
  [SMALL_STATE(104)] = 5976,
  [SMALL_STATE(105)] = 6009,
  [SMALL_STATE(106)] = 6042,
  [SMALL_STATE(107)] = 6071,
  [SMALL_STATE(108)] = 6104,
  [SMALL_STATE(109)] = 6137,
  [SMALL_STATE(110)] = 6170,
  [SMALL_STATE(111)] = 6211,
  [SMALL_STATE(112)] = 6244,
  [SMALL_STATE(113)] = 6277,
  [SMALL_STATE(114)] = 6310,
  [SMALL_STATE(115)] = 6343,
  [SMALL_STATE(116)] = 6376,
  [SMALL_STATE(117)] = 6409,
  [SMALL_STATE(118)] = 6442,
  [SMALL_STATE(119)] = 6475,
  [SMALL_STATE(120)] = 6508,
  [SMALL_STATE(121)] = 6536,
  [SMALL_STATE(122)] = 6564,
  [SMALL_STATE(123)] = 6592,
  [SMALL_STATE(124)] = 6620,
  [SMALL_STATE(125)] = 6648,
  [SMALL_STATE(126)] = 6676,
  [SMALL_STATE(127)] = 6706,
  [SMALL_STATE(128)] = 6734,
  [SMALL_STATE(129)] = 6762,
  [SMALL_STATE(130)] = 6790,
  [SMALL_STATE(131)] = 6818,
  [SMALL_STATE(132)] = 6848,
  [SMALL_STATE(133)] = 6876,
  [SMALL_STATE(134)] = 6906,
  [SMALL_STATE(135)] = 6934,
  [SMALL_STATE(136)] = 6962,
  [SMALL_STATE(137)] = 6990,
  [SMALL_STATE(138)] = 7020,
  [SMALL_STATE(139)] = 7048,
  [SMALL_STATE(140)] = 7076,
  [SMALL_STATE(141)] = 7104,
  [SMALL_STATE(142)] = 7134,
  [SMALL_STATE(143)] = 7162,
  [SMALL_STATE(144)] = 7190,
  [SMALL_STATE(145)] = 7217,
  [SMALL_STATE(146)] = 7244,
  [SMALL_STATE(147)] = 7271,
  [SMALL_STATE(148)] = 7298,
  [SMALL_STATE(149)] = 7325,
  [SMALL_STATE(150)] = 7368,
  [SMALL_STATE(151)] = 7395,
  [SMALL_STATE(152)] = 7422,
  [SMALL_STATE(153)] = 7449,
  [SMALL_STATE(154)] = 7476,
  [SMALL_STATE(155)] = 7503,
  [SMALL_STATE(156)] = 7546,
  [SMALL_STATE(157)] = 7573,
  [SMALL_STATE(158)] = 7600,
  [SMALL_STATE(159)] = 7627,
  [SMALL_STATE(160)] = 7654,
  [SMALL_STATE(161)] = 7681,
  [SMALL_STATE(162)] = 7708,
  [SMALL_STATE(163)] = 7735,
  [SMALL_STATE(164)] = 7762,
  [SMALL_STATE(165)] = 7789,
  [SMALL_STATE(166)] = 7816,
  [SMALL_STATE(167)] = 7843,
  [SMALL_STATE(168)] = 7870,
  [SMALL_STATE(169)] = 7913,
  [SMALL_STATE(170)] = 7940,
  [SMALL_STATE(171)] = 7979,
  [SMALL_STATE(172)] = 8006,
  [SMALL_STATE(173)] = 8033,
  [SMALL_STATE(174)] = 8060,
  [SMALL_STATE(175)] = 8087,
  [SMALL_STATE(176)] = 8114,
  [SMALL_STATE(177)] = 8141,
  [SMALL_STATE(178)] = 8184,
  [SMALL_STATE(179)] = 8221,
  [SMALL_STATE(180)] = 8258,
  [SMALL_STATE(181)] = 8295,
  [SMALL_STATE(182)] = 8332,
  [SMALL_STATE(183)] = 8369,
  [SMALL_STATE(184)] = 8406,
  [SMALL_STATE(185)] = 8439,
  [SMALL_STATE(186)] = 8470,
  [SMALL_STATE(187)] = 8507,
  [SMALL_STATE(188)] = 8530,
  [SMALL_STATE(189)] = 8567,
  [SMALL_STATE(190)] = 8594,
  [SMALL_STATE(191)] = 8617,
  [SMALL_STATE(192)] = 8646,
  [SMALL_STATE(193)] = 8669,
  [SMALL_STATE(194)] = 8704,
  [SMALL_STATE(195)] = 8738,
  [SMALL_STATE(196)] = 8768,
  [SMALL_STATE(197)] = 8794,
  [SMALL_STATE(198)] = 8820,
  [SMALL_STATE(199)] = 8843,
  [SMALL_STATE(200)] = 8866,
  [SMALL_STATE(201)] = 8889,
  [SMALL_STATE(202)] = 8912,
  [SMALL_STATE(203)] = 8935,
  [SMALL_STATE(204)] = 8962,
  [SMALL_STATE(205)] = 8985,
  [SMALL_STATE(206)] = 9008,
  [SMALL_STATE(207)] = 9031,
  [SMALL_STATE(208)] = 9054,
  [SMALL_STATE(209)] = 9077,
  [SMALL_STATE(210)] = 9100,
  [SMALL_STATE(211)] = 9123,
  [SMALL_STATE(212)] = 9146,
  [SMALL_STATE(213)] = 9169,
  [SMALL_STATE(214)] = 9192,
  [SMALL_STATE(215)] = 9213,
  [SMALL_STATE(216)] = 9236,
  [SMALL_STATE(217)] = 9259,
  [SMALL_STATE(218)] = 9282,
  [SMALL_STATE(219)] = 9305,
  [SMALL_STATE(220)] = 9328,
  [SMALL_STATE(221)] = 9351,
  [SMALL_STATE(222)] = 9374,
  [SMALL_STATE(223)] = 9395,
  [SMALL_STATE(224)] = 9418,
  [SMALL_STATE(225)] = 9436,
  [SMALL_STATE(226)] = 9454,
  [SMALL_STATE(227)] = 9472,
  [SMALL_STATE(228)] = 9490,
  [SMALL_STATE(229)] = 9508,
  [SMALL_STATE(230)] = 9526,
  [SMALL_STATE(231)] = 9543,
  [SMALL_STATE(232)] = 9560,
  [SMALL_STATE(233)] = 9577,
  [SMALL_STATE(234)] = 9594,
  [SMALL_STATE(235)] = 9607,
  [SMALL_STATE(236)] = 9624,
  [SMALL_STATE(237)] = 9641,
  [SMALL_STATE(238)] = 9658,
  [SMALL_STATE(239)] = 9679,
  [SMALL_STATE(240)] = 9696,
  [SMALL_STATE(241)] = 9713,
  [SMALL_STATE(242)] = 9725,
  [SMALL_STATE(243)] = 9741,
  [SMALL_STATE(244)] = 9757,
  [SMALL_STATE(245)] = 9769,
  [SMALL_STATE(246)] = 9781,
  [SMALL_STATE(247)] = 9799,
  [SMALL_STATE(248)] = 9811,
  [SMALL_STATE(249)] = 9823,
  [SMALL_STATE(250)] = 9843,
  [SMALL_STATE(251)] = 9859,
  [SMALL_STATE(252)] = 9875,
  [SMALL_STATE(253)] = 9887,
  [SMALL_STATE(254)] = 9904,
  [SMALL_STATE(255)] = 9915,
  [SMALL_STATE(256)] = 9926,
  [SMALL_STATE(257)] = 9937,
  [SMALL_STATE(258)] = 9952,
  [SMALL_STATE(259)] = 9969,
  [SMALL_STATE(260)] = 9986,
  [SMALL_STATE(261)] = 9997,
  [SMALL_STATE(262)] = 10014,
  [SMALL_STATE(263)] = 10029,
  [SMALL_STATE(264)] = 10044,
  [SMALL_STATE(265)] = 10055,
  [SMALL_STATE(266)] = 10066,
  [SMALL_STATE(267)] = 10080,
  [SMALL_STATE(268)] = 10094,
  [SMALL_STATE(269)] = 10108,
  [SMALL_STATE(270)] = 10122,
  [SMALL_STATE(271)] = 10136,
  [SMALL_STATE(272)] = 10150,
  [SMALL_STATE(273)] = 10164,
  [SMALL_STATE(274)] = 10178,
  [SMALL_STATE(275)] = 10192,
  [SMALL_STATE(276)] = 10206,
  [SMALL_STATE(277)] = 10220,
  [SMALL_STATE(278)] = 10234,
  [SMALL_STATE(279)] = 10248,
  [SMALL_STATE(280)] = 10262,
  [SMALL_STATE(281)] = 10276,
  [SMALL_STATE(282)] = 10290,
  [SMALL_STATE(283)] = 10304,
  [SMALL_STATE(284)] = 10318,
  [SMALL_STATE(285)] = 10332,
  [SMALL_STATE(286)] = 10346,
  [SMALL_STATE(287)] = 10360,
  [SMALL_STATE(288)] = 10374,
  [SMALL_STATE(289)] = 10388,
  [SMALL_STATE(290)] = 10402,
  [SMALL_STATE(291)] = 10416,
  [SMALL_STATE(292)] = 10430,
  [SMALL_STATE(293)] = 10444,
  [SMALL_STATE(294)] = 10458,
  [SMALL_STATE(295)] = 10472,
  [SMALL_STATE(296)] = 10486,
  [SMALL_STATE(297)] = 10500,
  [SMALL_STATE(298)] = 10510,
  [SMALL_STATE(299)] = 10524,
  [SMALL_STATE(300)] = 10538,
  [SMALL_STATE(301)] = 10552,
  [SMALL_STATE(302)] = 10566,
  [SMALL_STATE(303)] = 10580,
  [SMALL_STATE(304)] = 10594,
  [SMALL_STATE(305)] = 10608,
  [SMALL_STATE(306)] = 10617,
  [SMALL_STATE(307)] = 10626,
  [SMALL_STATE(308)] = 10637,
  [SMALL_STATE(309)] = 10648,
  [SMALL_STATE(310)] = 10659,
  [SMALL_STATE(311)] = 10670,
  [SMALL_STATE(312)] = 10681,
  [SMALL_STATE(313)] = 10690,
  [SMALL_STATE(314)] = 10699,
  [SMALL_STATE(315)] = 10710,
  [SMALL_STATE(316)] = 10719,
  [SMALL_STATE(317)] = 10730,
  [SMALL_STATE(318)] = 10739,
  [SMALL_STATE(319)] = 10748,
  [SMALL_STATE(320)] = 10759,
  [SMALL_STATE(321)] = 10767,
  [SMALL_STATE(322)] = 10775,
  [SMALL_STATE(323)] = 10783,
  [SMALL_STATE(324)] = 10791,
  [SMALL_STATE(325)] = 10799,
  [SMALL_STATE(326)] = 10807,
  [SMALL_STATE(327)] = 10815,
  [SMALL_STATE(328)] = 10823,
  [SMALL_STATE(329)] = 10831,
  [SMALL_STATE(330)] = 10839,
  [SMALL_STATE(331)] = 10847,
  [SMALL_STATE(332)] = 10855,
  [SMALL_STATE(333)] = 10863,
  [SMALL_STATE(334)] = 10871,
  [SMALL_STATE(335)] = 10879,
  [SMALL_STATE(336)] = 10887,
  [SMALL_STATE(337)] = 10895,
  [SMALL_STATE(338)] = 10903,
  [SMALL_STATE(339)] = 10911,
  [SMALL_STATE(340)] = 10919,
  [SMALL_STATE(341)] = 10927,
  [SMALL_STATE(342)] = 10935,
  [SMALL_STATE(343)] = 10943,
  [SMALL_STATE(344)] = 10951,
  [SMALL_STATE(345)] = 10959,
  [SMALL_STATE(346)] = 10967,
  [SMALL_STATE(347)] = 10975,
  [SMALL_STATE(348)] = 10983,
  [SMALL_STATE(349)] = 10991,
  [SMALL_STATE(350)] = 10999,
  [SMALL_STATE(351)] = 11007,
  [SMALL_STATE(352)] = 11015,
  [SMALL_STATE(353)] = 11023,
  [SMALL_STATE(354)] = 11031,
  [SMALL_STATE(355)] = 11039,
  [SMALL_STATE(356)] = 11047,
  [SMALL_STATE(357)] = 11055,
  [SMALL_STATE(358)] = 11063,
  [SMALL_STATE(359)] = 11071,
  [SMALL_STATE(360)] = 11079,
  [SMALL_STATE(361)] = 11087,
  [SMALL_STATE(362)] = 11095,
  [SMALL_STATE(363)] = 11103,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(355),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(204),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(157),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(353),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(352),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(321),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(340),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(228),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(324),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(358),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(357),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(356),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(33),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_binary_exp, 3, .production_id = 6),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_binary_exp, 3, .production_id = 6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_if, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_if, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_defined_exp, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_defined_exp, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_defined_exp, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_defined_exp, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 4),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 9),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 9),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 9),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 9),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 9),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 9),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 9),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 9),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 10),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 10),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 8),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 8),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(85),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 4, .production_id = 8),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 4, .production_id = 8),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 20),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 20),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 3, .production_id = 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 3, .production_id = 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 21),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 21),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 5, .production_id = 10),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 5, .production_id = 10),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 5, .production_id = 16),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 5, .production_id = 16),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 4, .production_id = 13),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 4, .production_id = 13),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 6, .production_id = 18),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 6, .production_id = 18),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_argument, 3),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_argument, 3),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [338] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(360),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [377] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(362),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(316),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 8),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 8),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstract_data_type, 1),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 7),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2), SHIFT_REPEAT(224),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(308),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 6),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 7),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 7),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(259),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 5),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 5),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstract_data_type, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [468] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(215),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 5),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 5),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_attribute, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_branch, 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 11),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 11),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_branch, 3),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 13),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 13),
  [513] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_branch, 4),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 13),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 13),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 13),
  [531] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 13),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 7),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 7),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_type_decl, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6),
  [547] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 6),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 5),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtype_decl, 2),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 2),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 2, .production_id = 1),
  [575] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 2, .production_id = 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 17),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 17),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 6),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_directive, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_directive, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 7),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 7),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 9),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 9, .production_id = 9),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 15),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 15),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_ifdef, 2),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_ifdef, 2),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 7),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_ifndef, 2),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_ifndef, 2),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 4),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 4),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_define, 2),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_define, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 19),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 9, .production_id = 19),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 3),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [667] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [685] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [687] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [691] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [695] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [699] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [711] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [719] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [723] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [727] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [731] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [739] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [747] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [751] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [755] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [767] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [775] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [777] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [781] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [789] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [793] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [797] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [799] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(344),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [818] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(10),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [823] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [831] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(307),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 1),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [860] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(9),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [867] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(19),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [880] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(350),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 12),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [923] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2), SHIFT_REPEAT(299),
  [926] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [946] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [948] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(310),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [953] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2),
  [955] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2), SHIFT_REPEAT(227),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 2),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [972] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2),
  [974] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2), SHIFT_REPEAT(203),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_attribute, 1),
  [983] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [987] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 14),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [991] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [993] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [1009] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor_name, 2),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumption_head, 3),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1049] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor_name, 1),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
