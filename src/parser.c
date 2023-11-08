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
#define STATE_COUNT 333
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 186
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
  anon_sym_nil = 42,
  anon_sym__ = 43,
  anon_sym_LBRACK = 44,
  anon_sym_RBRACK = 45,
  anon_sym_DOLLAR = 46,
  anon_sym_bnot = 47,
  anon_sym_lnot = 48,
  anon_sym_CARET = 49,
  anon_sym_PERCENT = 50,
  anon_sym_land = 51,
  anon_sym_lor = 52,
  anon_sym_lxor = 53,
  anon_sym_band = 54,
  anon_sym_bor = 55,
  anon_sym_bxor = 56,
  anon_sym_bshl = 57,
  anon_sym_bshr = 58,
  anon_sym_bshru = 59,
  anon_sym_as = 60,
  anon_sym_max = 61,
  anon_sym_mean = 62,
  anon_sym_min = 63,
  anon_sym_sum = 64,
  anon_sym_count = 65,
  anon_sym_COLON = 66,
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
  aux_sym_directive_repeat1 = 179,
  aux_sym_directive_repeat2 = 180,
  aux_sym_qualified_name_repeat1 = 181,
  aux_sym_argument_list_repeat1 = 182,
  aux_sym_union_type_repeat1 = 183,
  aux_sym_abstract_data_type_repeat1 = 184,
  aux_sym_functor_decl_repeat1 = 185,
  alias_sym_attribute_name = 186,
  alias_sym_choice_domain_single_attribute = 187,
  alias_sym_path_spec = 188,
  alias_sym_user_defined_type_name = 189,
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
  [90] = 90,
  [91] = 83,
  [92] = 84,
  [93] = 82,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 87,
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
  [118] = 113,
  [119] = 115,
  [120] = 120,
  [121] = 121,
  [122] = 114,
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
  [168] = 37,
  [169] = 39,
  [170] = 38,
  [171] = 171,
  [172] = 40,
  [173] = 36,
  [174] = 41,
  [175] = 171,
  [176] = 34,
  [177] = 35,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 182,
  [183] = 183,
  [184] = 182,
  [185] = 185,
  [186] = 183,
  [187] = 187,
  [188] = 188,
  [189] = 188,
  [190] = 190,
  [191] = 190,
  [192] = 192,
  [193] = 193,
  [194] = 192,
  [195] = 185,
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
  [206] = 83,
  [207] = 84,
  [208] = 82,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 87,
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
  [233] = 114,
  [234] = 115,
  [235] = 113,
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
  [329] = 307,
  [330] = 330,
  [331] = 307,
  [332] = 332,
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
      if (lookahead == '$') ADVANCE(287);
      if (lookahead == '%') ADVANCE(293);
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
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(241);
      if (lookahead == '=') ADVANCE(279);
      if (lookahead == '>') ADVANCE(246);
      if (lookahead == '@') ADVANCE(321);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '^') ADVANCE(292);
      if (lookahead == '_') ADVANCE(283);
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
      if (lookahead == '$') ADVANCE(287);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(513);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '@') ADVANCE(321);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '_') ADVANCE(284);
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
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == '(') ADVANCE(235);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == ':') ADVANCE(316);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '^') ADVANCE(292);
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
      if (lookahead == '%') ADVANCE(293);
      if (lookahead == ')') ADVANCE(236);
      if (lookahead == '*') ADVANCE(239);
      if (lookahead == '+') ADVANCE(237);
      if (lookahead == ',') ADVANCE(254);
      if (lookahead == '-') ADVANCE(238);
      if (lookahead == '.') ADVANCE(273);
      if (lookahead == '/') ADVANCE(240);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == ';') ADVANCE(275);
      if (lookahead == '<') ADVANCE(243);
      if (lookahead == '=') ADVANCE(278);
      if (lookahead == '>') ADVANCE(245);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '^') ADVANCE(292);
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
      if (lookahead == '$') ADVANCE(287);
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
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '_') ADVANCE(284);
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
      if (lookahead == '[') ADVANCE(285);
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
      if (lookahead == 'm') ADVANCE(311);
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
      if (lookahead == 'd') ADVANCE(297);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(294);
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
      if (lookahead == 'x') ADVANCE(305);
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
      if (lookahead == 'l') ADVANCE(281);
      END_STATE();
    case 118:
      if (lookahead == 'l') ADVANCE(300);
      if (lookahead == 'r') ADVANCE(301);
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
      if (lookahead == 'n') ADVANCE(309);
      END_STATE();
    case 136:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 137:
      if (lookahead == 'n') ADVANCE(307);
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
      if (lookahead == 'r') ADVANCE(298);
      END_STATE();
    case 169:
      if (lookahead == 'r') ADVANCE(295);
      END_STATE();
    case 170:
      if (lookahead == 'r') ADVANCE(299);
      END_STATE();
    case 171:
      if (lookahead == 'r') ADVANCE(296);
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
      if (lookahead == 's') ADVANCE(303);
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
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 190:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 191:
      if (lookahead == 't') ADVANCE(313);
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
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(302);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(272);
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
      if (lookahead == 'm') ADVANCE(312);
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
      if (lookahead == 'l') ADVANCE(282);
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
      if (lookahead == 'n') ADVANCE(310);
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
      if (lookahead == 'n') ADVANCE(308);
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
      if (lookahead == 's') ADVANCE(304);
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
      if (lookahead == 't') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(510);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(314);
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
      if (lookahead == 'x') ADVANCE(306);
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
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 213, .external_lex_state = 2},
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
  [80] = {.lex_state = 213, .external_lex_state = 2},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 211, .external_lex_state = 2},
  [83] = {.lex_state = 211, .external_lex_state = 2},
  [84] = {.lex_state = 211, .external_lex_state = 2},
  [85] = {.lex_state = 211, .external_lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 211, .external_lex_state = 2},
  [88] = {.lex_state = 210, .external_lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 210, .external_lex_state = 2},
  [91] = {.lex_state = 212, .external_lex_state = 2},
  [92] = {.lex_state = 212, .external_lex_state = 2},
  [93] = {.lex_state = 212, .external_lex_state = 2},
  [94] = {.lex_state = 210, .external_lex_state = 2},
  [95] = {.lex_state = 211, .external_lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 210, .external_lex_state = 2},
  [98] = {.lex_state = 211, .external_lex_state = 2},
  [99] = {.lex_state = 211, .external_lex_state = 2},
  [100] = {.lex_state = 210, .external_lex_state = 2},
  [101] = {.lex_state = 212, .external_lex_state = 2},
  [102] = {.lex_state = 210, .external_lex_state = 2},
  [103] = {.lex_state = 211, .external_lex_state = 2},
  [104] = {.lex_state = 210, .external_lex_state = 2},
  [105] = {.lex_state = 211, .external_lex_state = 2},
  [106] = {.lex_state = 210, .external_lex_state = 1},
  [107] = {.lex_state = 211, .external_lex_state = 2},
  [108] = {.lex_state = 210, .external_lex_state = 2},
  [109] = {.lex_state = 212, .external_lex_state = 2},
  [110] = {.lex_state = 210, .external_lex_state = 2},
  [111] = {.lex_state = 210, .external_lex_state = 2},
  [112] = {.lex_state = 211, .external_lex_state = 2},
  [113] = {.lex_state = 212, .external_lex_state = 2},
  [114] = {.lex_state = 211, .external_lex_state = 2},
  [115] = {.lex_state = 211, .external_lex_state = 2},
  [116] = {.lex_state = 212, .external_lex_state = 2},
  [117] = {.lex_state = 211, .external_lex_state = 2},
  [118] = {.lex_state = 211, .external_lex_state = 2},
  [119] = {.lex_state = 212, .external_lex_state = 2},
  [120] = {.lex_state = 211, .external_lex_state = 2},
  [121] = {.lex_state = 210, .external_lex_state = 2},
  [122] = {.lex_state = 212, .external_lex_state = 2},
  [123] = {.lex_state = 211, .external_lex_state = 2},
  [124] = {.lex_state = 211, .external_lex_state = 2},
  [125] = {.lex_state = 211, .external_lex_state = 2},
  [126] = {.lex_state = 212, .external_lex_state = 2},
  [127] = {.lex_state = 210, .external_lex_state = 2},
  [128] = {.lex_state = 210, .external_lex_state = 2},
  [129] = {.lex_state = 210, .external_lex_state = 2},
  [130] = {.lex_state = 210, .external_lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 210, .external_lex_state = 2},
  [133] = {.lex_state = 210, .external_lex_state = 2},
  [134] = {.lex_state = 210, .external_lex_state = 2},
  [135] = {.lex_state = 210, .external_lex_state = 2},
  [136] = {.lex_state = 210, .external_lex_state = 2},
  [137] = {.lex_state = 210, .external_lex_state = 2},
  [138] = {.lex_state = 210, .external_lex_state = 2},
  [139] = {.lex_state = 210, .external_lex_state = 2},
  [140] = {.lex_state = 210, .external_lex_state = 2},
  [141] = {.lex_state = 210, .external_lex_state = 2},
  [142] = {.lex_state = 210, .external_lex_state = 2},
  [143] = {.lex_state = 210, .external_lex_state = 2},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 210, .external_lex_state = 2},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 210, .external_lex_state = 2},
  [149] = {.lex_state = 210, .external_lex_state = 2},
  [150] = {.lex_state = 210, .external_lex_state = 2},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 210, .external_lex_state = 2},
  [153] = {.lex_state = 210, .external_lex_state = 2},
  [154] = {.lex_state = 210, .external_lex_state = 2},
  [155] = {.lex_state = 210, .external_lex_state = 2},
  [156] = {.lex_state = 210, .external_lex_state = 2},
  [157] = {.lex_state = 210, .external_lex_state = 2},
  [158] = {.lex_state = 210, .external_lex_state = 2},
  [159] = {.lex_state = 210, .external_lex_state = 2},
  [160] = {.lex_state = 210, .external_lex_state = 2},
  [161] = {.lex_state = 210, .external_lex_state = 2},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 210},
  [169] = {.lex_state = 210},
  [170] = {.lex_state = 210},
  [171] = {.lex_state = 210},
  [172] = {.lex_state = 210},
  [173] = {.lex_state = 210},
  [174] = {.lex_state = 210},
  [175] = {.lex_state = 210},
  [176] = {.lex_state = 210},
  [177] = {.lex_state = 210},
  [178] = {.lex_state = 9},
  [179] = {.lex_state = 8},
  [180] = {.lex_state = 9},
  [181] = {.lex_state = 8},
  [182] = {.lex_state = 8},
  [183] = {.lex_state = 8},
  [184] = {.lex_state = 8},
  [185] = {.lex_state = 8},
  [186] = {.lex_state = 8},
  [187] = {.lex_state = 9},
  [188] = {.lex_state = 8},
  [189] = {.lex_state = 8},
  [190] = {.lex_state = 8},
  [191] = {.lex_state = 8},
  [192] = {.lex_state = 8},
  [193] = {.lex_state = 8},
  [194] = {.lex_state = 8},
  [195] = {.lex_state = 8},
  [196] = {.lex_state = 8},
  [197] = {.lex_state = 8},
  [198] = {.lex_state = 9},
  [199] = {.lex_state = 9},
  [200] = {.lex_state = 9},
  [201] = {.lex_state = 9},
  [202] = {.lex_state = 9},
  [203] = {.lex_state = 9},
  [204] = {.lex_state = 9},
  [205] = {.lex_state = 9},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 1},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 210},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 210},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 210},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 210},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 210},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 210},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 210},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 210},
  [268] = {.lex_state = 210},
  [269] = {.lex_state = 210},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 210},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 210},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 210},
  [280] = {.lex_state = 210},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 210},
  [283] = {.lex_state = 210},
  [284] = {.lex_state = 210},
  [285] = {.lex_state = 210},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 210},
  [288] = {.lex_state = 210},
  [289] = {.lex_state = 210},
  [290] = {.lex_state = 210},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 210},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 15},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 210},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 210},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 210},
  [310] = {.lex_state = 210},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 210},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 1},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 210},
  [319] = {.lex_state = 210},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 210},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 210},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 1},
  [329] = {.lex_state = 210},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 210},
  [332] = {.lex_state = 1},
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
    [sym_source_file] = STATE(311),
    [sym__element] = STATE(32),
    [sym_preproc_directive] = STATE(32),
    [sym_preproc_include] = STATE(133),
    [sym_preproc_if] = STATE(133),
    [sym_preproc_ifdef] = STATE(133),
    [sym_preproc_ifndef] = STATE(133),
    [sym_preproc_define] = STATE(133),
    [sym_relation_decl] = STATE(32),
    [sym_rule] = STATE(32),
    [sym_rule_head] = STATE(312),
    [sym_subsumption_head] = STATE(312),
    [sym_directive] = STATE(32),
    [sym__directive_qualifier] = STATE(284),
    [sym_include_directive] = STATE(32),
    [sym_qualified_name] = STATE(317),
    [sym_fact] = STATE(32),
    [sym_type_decl] = STATE(32),
    [sym_functor_decl] = STATE(32),
    [sym_pragma] = STATE(32),
    [sym_atom] = STATE(224),
    [aux_sym_source_file_repeat1] = STATE(32),
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
    STATE(86), 1,
      sym_argument,
    STATE(221), 1,
      sym_conjunction,
    STATE(293), 1,
      sym_disjunction,
    STATE(317), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(216), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(86), 1,
      sym_argument,
    STATE(221), 1,
      sym_conjunction,
    STATE(305), 1,
      sym_disjunction,
    STATE(317), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(216), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(86), 1,
      sym_argument,
    STATE(221), 1,
      sym_conjunction,
    STATE(317), 1,
      sym_qualified_name,
    STATE(325), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(216), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(89), 1,
      sym_argument,
    STATE(221), 1,
      sym_conjunction,
    STATE(317), 1,
      sym_qualified_name,
    STATE(327), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(216), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(89), 1,
      sym_argument,
    STATE(221), 1,
      sym_conjunction,
    STATE(317), 1,
      sym_qualified_name,
    STATE(332), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(216), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(86), 1,
      sym_argument,
    STATE(221), 1,
      sym_conjunction,
    STATE(317), 1,
      sym_qualified_name,
    STATE(324), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(216), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(89), 1,
      sym_argument,
    STATE(221), 1,
      sym_conjunction,
    STATE(313), 1,
      sym_disjunction,
    STATE(317), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(216), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(89), 1,
      sym_argument,
    STATE(242), 1,
      sym_conjunction,
    STATE(317), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(216), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(89), 1,
      sym_argument,
    STATE(317), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(213), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(89), 1,
      sym_argument,
    STATE(317), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(223), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(89), 1,
      sym_argument,
    STATE(317), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(225), 2,
      sym_constraint,
      sym_atom,
    STATE(227), 2,
      sym_binary_constraint,
      sym_boolean_literal,
    STATE(326), 2,
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
    STATE(54), 11,
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
      anon_sym_RBRACK,
    STATE(144), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(167), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(151), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(131), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(164), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(165), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(163), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(162), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(77), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(78), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(96), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(79), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(75), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(70), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    STATE(145), 1,
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
    STATE(72), 2,
      sym__integer,
      sym__number,
    STATE(326), 2,
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
    STATE(54), 11,
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
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_POUNDinclude,
    ACTIONS(94), 1,
      anon_sym_POUNDif,
    ACTIONS(100), 1,
      anon_sym_POUNDifdef,
    ACTIONS(103), 1,
      anon_sym_POUNDifndef,
    ACTIONS(106), 1,
      anon_sym_POUNDdefine,
    ACTIONS(109), 1,
      anon_sym_DOTpragma,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(115), 1,
      sym_decl_kw,
    ACTIONS(121), 1,
      sym_type_kw,
    ACTIONS(124), 1,
      sym_functor_kw,
    ACTIONS(127), 1,
      sym_include_kw,
    STATE(224), 1,
      sym_atom,
    STATE(284), 1,
      sym__directive_qualifier,
    STATE(317), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(97), 2,
      sym_preproc_else,
      sym_preproc_endif,
    STATE(312), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(118), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(133), 5,
      sym_preproc_include,
      sym_preproc_if,
      sym_preproc_ifdef,
      sym_preproc_ifndef,
      sym_preproc_define,
    STATE(31), 11,
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
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(224), 1,
      sym_atom,
    STATE(284), 1,
      sym__directive_qualifier,
    STATE(317), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(11), 2,
      sym_preproc_else,
      sym_preproc_endif,
    STATE(312), 2,
      sym_rule_head,
      sym_subsumption_head,
    ACTIONS(25), 4,
      sym_input_kw,
      sym_output_kw,
      sym_printsize_kw,
      sym_limitsize_kw,
    STATE(133), 5,
      sym_preproc_include,
      sym_preproc_if,
      sym_preproc_ifdef,
      sym_preproc_ifndef,
      sym_preproc_define,
    STATE(31), 11,
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
  [3206] = 6,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(145), 3,
      anon_sym_POUNDif,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 24,
      sym_decl_kw,
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
  [3252] = 10,
    ACTIONS(145), 1,
      anon_sym_POUNDif,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(155), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(143), 18,
      sym_decl_kw,
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
  [3306] = 9,
    ACTIONS(145), 1,
      anon_sym_POUNDif,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(155), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(143), 19,
      sym_decl_kw,
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
  [3358] = 7,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(145), 3,
      anon_sym_POUNDif,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 22,
      sym_decl_kw,
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
  [3406] = 3,
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
  [3446] = 5,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 3,
      anon_sym_POUNDif,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 26,
      sym_decl_kw,
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
  [3490] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(163), 4,
      anon_sym_POUNDif,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 27,
      sym_decl_kw,
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
  [3530] = 11,
    ACTIONS(149), 1,
      anon_sym_STAR,
    ACTIONS(151), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_AMP_AMP,
    ACTIONS(167), 1,
      anon_sym_POUNDif,
    ACTIONS(169), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(147), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(155), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
    ACTIONS(165), 17,
      sym_decl_kw,
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
  [3586] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(153), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(53), 2,
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
    STATE(149), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 2,
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
    STATE(149), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(181), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(53), 2,
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
  [3727] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(150), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(185), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(53), 2,
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
  [3774] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(135), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(189), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(53), 2,
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
  [3821] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(158), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(193), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(45), 2,
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
  [3868] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(154), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(197), 2,
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
  [3915] = 7,
    ACTIONS(177), 1,
      anon_sym_choice_DASHdomain,
    STATE(153), 1,
      sym_choice_domain,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(173), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(46), 2,
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
  [3962] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(201), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(199), 24,
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
  [4000] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(205), 5,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
      anon_sym_COLON,
    ACTIONS(203), 24,
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
  [4038] = 5,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(209), 2,
      anon_sym_POUNDif,
      sym_identifier,
    STATE(53), 2,
      sym_relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(211), 8,
      anon_sym_eqrel,
      anon_sym_btree,
      anon_sym_brie,
      anon_sym_no_magic,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_inline,
      anon_sym_override,
    ACTIONS(207), 17,
      sym_decl_kw,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4487] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(260), 4,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4524] = 8,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(262), 16,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
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
  [4571] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4608] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4645] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4682] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4719] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4756] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4793] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4830] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4867] = 7,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(262), 19,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
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
  [4912] = 3,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [4949] = 6,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(270), 3,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(262), 21,
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
  [4992] = 4,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(262), 23,
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
      anon_sym_COLON,
      anon_sym_RBRACE,
  [5031] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(270), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(262), 24,
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
      anon_sym_COLON,
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
    STATE(207), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(248), 4,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_bshr,
    ACTIONS(246), 18,
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
    ACTIONS(320), 1,
      anon_sym_POUNDif,
    ACTIONS(322), 1,
      anon_sym_DOT,
    STATE(84), 1,
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
  [5180] = 5,
    ACTIONS(326), 1,
      anon_sym_POUNDif,
    ACTIONS(328), 1,
      anon_sym_DOT,
    STATE(83), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 20,
      sym_decl_kw,
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
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(333), 1,
      anon_sym_POUNDif,
    STATE(83), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 20,
      sym_decl_kw,
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
  [5252] = 6,
    ACTIONS(320), 1,
      anon_sym_POUNDif,
    ACTIONS(322), 1,
      anon_sym_DOT,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    STATE(84), 1,
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
  [5289] = 11,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(339), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [5336] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 2,
      anon_sym_POUNDif,
      anon_sym_DOT,
    ACTIONS(324), 20,
      sym_decl_kw,
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
  [5367] = 6,
    ACTIONS(349), 1,
      anon_sym_POUNDif,
    ACTIONS(351), 1,
      anon_sym_LPAREN,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(347), 17,
      sym_decl_kw,
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
  [5403] = 10,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(339), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(341), 4,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [5447] = 5,
    ACTIONS(357), 1,
      anon_sym_POUNDif,
    ACTIONS(359), 1,
      anon_sym_COMMA,
    STATE(90), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(355), 18,
      sym_decl_kw,
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
  [5481] = 5,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(91), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(324), 16,
      sym_decl_kw,
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
  [5515] = 5,
    ACTIONS(365), 1,
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
    ACTIONS(331), 16,
      sym_decl_kw,
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
  [5549] = 5,
    ACTIONS(365), 1,
      anon_sym_DOT,
    STATE(92), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(320), 3,
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
  [5583] = 6,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(369), 1,
      anon_sym_POUNDif,
    ACTIONS(371), 1,
      anon_sym_LPAREN,
    STATE(88), 1,
      aux_sym_directive_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(367), 17,
      sym_decl_kw,
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
  [5619] = 5,
    ACTIONS(375), 1,
      anon_sym_POUNDif,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    STATE(99), 1,
      aux_sym_abstract_data_type_repeat1,
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
  [5652] = 9,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
    ACTIONS(379), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [5693] = 5,
    ACTIONS(383), 1,
      anon_sym_POUNDif,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(100), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(381), 17,
      sym_decl_kw,
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
  [5726] = 5,
    ACTIONS(389), 1,
      anon_sym_POUNDif,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym_union_type_repeat1,
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
  [5759] = 5,
    ACTIONS(377), 1,
      anon_sym_PIPE,
    ACTIONS(395), 1,
      anon_sym_POUNDif,
    STATE(105), 1,
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
  [5792] = 5,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_POUNDif,
    STATE(104), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(397), 17,
      sym_decl_kw,
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
  [5825] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(326), 4,
      anon_sym_POUNDif,
      anon_sym_DOT,
      sym_stateful,
      sym_identifier,
    ACTIONS(324), 16,
      sym_decl_kw,
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
  [5854] = 3,
    ACTIONS(357), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(355), 19,
      sym_decl_kw,
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
  [5883] = 5,
    ACTIONS(403), 1,
      anon_sym_POUNDif,
    ACTIONS(405), 1,
      anon_sym_PIPE,
    STATE(103), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 17,
      sym_decl_kw,
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
  [5916] = 5,
    ACTIONS(410), 1,
      anon_sym_POUNDif,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    STATE(104), 1,
      aux_sym_choice_domain_repeat1,
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
  [5949] = 5,
    ACTIONS(417), 1,
      anon_sym_POUNDif,
    ACTIONS(419), 1,
      anon_sym_PIPE,
    STATE(105), 1,
      aux_sym_abstract_data_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 17,
      sym_decl_kw,
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
  [5982] = 5,
    ACTIONS(424), 1,
      anon_sym_POUNDif,
    ACTIONS(426), 1,
      sym_plan_kw,
    STATE(129), 1,
      sym_query_plan,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(422), 17,
      sym_decl_kw,
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
  [6015] = 5,
    ACTIONS(391), 1,
      anon_sym_PIPE,
    ACTIONS(430), 1,
      anon_sym_POUNDif,
    STATE(98), 1,
      aux_sym_union_type_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(428), 17,
      sym_decl_kw,
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
  [6048] = 3,
    ACTIONS(434), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(432), 18,
      sym_decl_kw,
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
  [6076] = 4,
    ACTIONS(440), 1,
      sym_stateful,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(438), 2,
      anon_sym_POUNDif,
      sym_identifier,
    ACTIONS(436), 16,
      sym_decl_kw,
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
  [6106] = 3,
    ACTIONS(444), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(442), 18,
      sym_decl_kw,
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
  [6134] = 3,
    ACTIONS(448), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(446), 18,
      sym_decl_kw,
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
  [6162] = 3,
    ACTIONS(452), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(450), 18,
      sym_decl_kw,
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
  [6190] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(456), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(454), 16,
      sym_decl_kw,
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
  [6218] = 3,
    ACTIONS(460), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(458), 18,
      sym_decl_kw,
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
  [6246] = 3,
    ACTIONS(464), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 18,
      sym_decl_kw,
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
  [6274] = 4,
    ACTIONS(470), 1,
      sym_stateful,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(468), 2,
      anon_sym_POUNDif,
      sym_identifier,
    ACTIONS(466), 16,
      sym_decl_kw,
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
  [6304] = 4,
    ACTIONS(474), 1,
      anon_sym_POUNDif,
    ACTIONS(476), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(472), 17,
      sym_decl_kw,
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
  [6334] = 3,
    ACTIONS(456), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(454), 18,
      sym_decl_kw,
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
  [6362] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(464), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(462), 16,
      sym_decl_kw,
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
  [6390] = 3,
    ACTIONS(480), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(478), 18,
      sym_decl_kw,
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
  [6418] = 4,
    ACTIONS(484), 1,
      anon_sym_POUNDif,
    ACTIONS(486), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(482), 17,
      sym_decl_kw,
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
  [6448] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(460), 3,
      anon_sym_POUNDif,
      sym_stateful,
      sym_identifier,
    ACTIONS(458), 16,
      sym_decl_kw,
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
  [6476] = 3,
    ACTIONS(490), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(488), 18,
      sym_decl_kw,
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
  [6504] = 3,
    ACTIONS(417), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(415), 18,
      sym_decl_kw,
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
  [6532] = 3,
    ACTIONS(403), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(401), 18,
      sym_decl_kw,
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
  [6560] = 4,
    ACTIONS(496), 1,
      sym_stateful,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(494), 2,
      anon_sym_POUNDif,
      sym_identifier,
    ACTIONS(492), 16,
      sym_decl_kw,
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
  [6590] = 3,
    ACTIONS(410), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(408), 18,
      sym_decl_kw,
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
  [6618] = 3,
    ACTIONS(500), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(498), 18,
      sym_decl_kw,
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
  [6646] = 3,
    ACTIONS(504), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(502), 17,
      sym_decl_kw,
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
  [6673] = 3,
    ACTIONS(508), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(506), 17,
      sym_decl_kw,
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
  [6700] = 11,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(510), 1,
      anon_sym_RPAREN,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    STATE(264), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [6743] = 3,
    ACTIONS(516), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(514), 17,
      sym_decl_kw,
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
  [6770] = 3,
    ACTIONS(520), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(518), 17,
      sym_decl_kw,
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
  [6797] = 3,
    ACTIONS(524), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(522), 17,
      sym_decl_kw,
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
  [6824] = 3,
    ACTIONS(528), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(526), 17,
      sym_decl_kw,
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
  [6851] = 3,
    ACTIONS(532), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(530), 17,
      sym_decl_kw,
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
  [6878] = 3,
    ACTIONS(536), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(534), 17,
      sym_decl_kw,
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
  [6905] = 3,
    ACTIONS(540), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(538), 17,
      sym_decl_kw,
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
  [6932] = 3,
    ACTIONS(544), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(542), 17,
      sym_decl_kw,
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
  [6959] = 3,
    ACTIONS(548), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(546), 17,
      sym_decl_kw,
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
  [6986] = 3,
    ACTIONS(552), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(550), 17,
      sym_decl_kw,
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
  [7013] = 3,
    ACTIONS(556), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(554), 17,
      sym_decl_kw,
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
  [7040] = 3,
    ACTIONS(560), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(558), 17,
      sym_decl_kw,
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
  [7067] = 11,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(259), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7110] = 11,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(564), 1,
      anon_sym_RPAREN,
    STATE(260), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7153] = 3,
    ACTIONS(568), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(566), 17,
      sym_decl_kw,
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
  [7180] = 9,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(570), 3,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7219] = 3,
    ACTIONS(574), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(572), 17,
      sym_decl_kw,
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
  [7246] = 3,
    ACTIONS(189), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(187), 17,
      sym_decl_kw,
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
  [7273] = 3,
    ACTIONS(578), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(576), 17,
      sym_decl_kw,
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
  [7300] = 11,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7343] = 3,
    ACTIONS(584), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(582), 17,
      sym_decl_kw,
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
  [7370] = 3,
    ACTIONS(185), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(183), 17,
      sym_decl_kw,
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
  [7397] = 3,
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
  [7424] = 3,
    ACTIONS(588), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(586), 17,
      sym_decl_kw,
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
  [7451] = 3,
    ACTIONS(592), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(590), 17,
      sym_decl_kw,
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
  [7478] = 3,
    ACTIONS(474), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(472), 17,
      sym_decl_kw,
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
  [7505] = 3,
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
  [7532] = 3,
    ACTIONS(596), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(594), 17,
      sym_decl_kw,
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
  [7559] = 3,
    ACTIONS(600), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(598), 17,
      sym_decl_kw,
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
  [7586] = 3,
    ACTIONS(604), 1,
      anon_sym_POUNDif,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(602), 17,
      sym_decl_kw,
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
  [7613] = 9,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(606), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7650] = 9,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7687] = 9,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(610), 1,
      anon_sym_COMMA,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7724] = 9,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(337), 1,
      anon_sym_RPAREN,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7761] = 9,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(612), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7798] = 9,
    ACTIONS(268), 1,
      anon_sym_SLASH,
    ACTIONS(272), 1,
      anon_sym_CARET,
    ACTIONS(345), 1,
      anon_sym_bshr,
    ACTIONS(614), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(264), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(266), 2,
      anon_sym_STAR,
      anon_sym_PERCENT,
    ACTIONS(274), 3,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
    ACTIONS(343), 5,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
  [7835] = 8,
    ACTIONS(618), 1,
      anon_sym_STAR,
    ACTIONS(620), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(622), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(143), 3,
      anon_sym_RPAREN,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
    ACTIONS(624), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [7868] = 3,
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
  [7891] = 7,
    ACTIONS(618), 1,
      anon_sym_STAR,
    ACTIONS(620), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(616), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(626), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(143), 6,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
  [7922] = 10,
    ACTIONS(618), 1,
      anon_sym_STAR,
    ACTIONS(620), 1,
      anon_sym_SLASH,
    ACTIONS(628), 1,
      anon_sym_RPAREN,
    ACTIONS(630), 1,
      anon_sym_AMP_AMP,
    ACTIONS(632), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(622), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(624), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [7959] = 5,
    ACTIONS(618), 1,
      anon_sym_STAR,
    ACTIONS(620), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 10,
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
  [7986] = 9,
    ACTIONS(618), 1,
      anon_sym_STAR,
    ACTIONS(620), 1,
      anon_sym_SLASH,
    ACTIONS(630), 1,
      anon_sym_AMP_AMP,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(143), 2,
      anon_sym_RPAREN,
      anon_sym_PIPE_PIPE,
    ACTIONS(616), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(622), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(624), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8021] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(163), 3,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(161), 11,
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
  [8044] = 10,
    ACTIONS(618), 1,
      anon_sym_STAR,
    ACTIONS(620), 1,
      anon_sym_SLASH,
    ACTIONS(630), 1,
      anon_sym_AMP_AMP,
    ACTIONS(632), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(634), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(616), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(622), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(626), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(624), 3,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
  [8081] = 3,
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
  [8104] = 6,
    ACTIONS(618), 1,
      anon_sym_STAR,
    ACTIONS(620), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(616), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(143), 8,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8133] = 9,
    ACTIONS(636), 1,
      anon_sym_LBRACK,
    ACTIONS(640), 1,
      sym_identifier,
    STATE(95), 1,
      sym_adt_branch,
    STATE(115), 1,
      sym_qualified_name,
    STATE(117), 1,
      sym_type_name,
    STATE(118), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(157), 3,
      sym_union_type,
      sym_record_type,
      sym_abstract_data_type,
    ACTIONS(638), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8167] = 6,
    ACTIONS(642), 1,
      anon_sym_defined,
    ACTIONS(644), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(646), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(648), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(174), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8193] = 8,
    ACTIONS(650), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      sym_identifier,
    STATE(234), 1,
      sym_qualified_name,
    STATE(235), 1,
      sym_primitive_type,
    STATE(271), 1,
      sym_functor_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(278), 2,
      sym_attribute,
      sym_type_name,
    ACTIONS(652), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8223] = 6,
    ACTIONS(656), 1,
      anon_sym_defined,
    ACTIONS(658), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(660), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(662), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(41), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8249] = 5,
    ACTIONS(642), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(664), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(666), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(168), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8272] = 5,
    ACTIONS(656), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(668), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(670), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(36), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8295] = 5,
    ACTIONS(656), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(672), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(674), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(37), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8318] = 5,
    ACTIONS(642), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(676), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(678), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(177), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8341] = 5,
    ACTIONS(642), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(680), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(682), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(173), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8364] = 7,
    ACTIONS(654), 1,
      sym_identifier,
    STATE(234), 1,
      sym_qualified_name,
    STATE(235), 1,
      sym_primitive_type,
    STATE(286), 1,
      sym_functor_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(278), 2,
      sym_attribute,
      sym_type_name,
    ACTIONS(652), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8391] = 5,
    ACTIONS(642), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(684), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(686), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(170), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8414] = 5,
    ACTIONS(656), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(688), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(690), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(38), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8437] = 5,
    ACTIONS(642), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(692), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(694), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(169), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8460] = 5,
    ACTIONS(656), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(696), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(698), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(39), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8483] = 5,
    ACTIONS(642), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(700), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(702), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(172), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8506] = 5,
    ACTIONS(656), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(704), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(706), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(42), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8529] = 5,
    ACTIONS(656), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(708), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(710), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(40), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8552] = 5,
    ACTIONS(656), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(712), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(714), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(35), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8575] = 5,
    ACTIONS(642), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(716), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(718), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(175), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8598] = 5,
    ACTIONS(642), 1,
      anon_sym_defined,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(720), 2,
      sym_identifier,
      sym_decimal,
    ACTIONS(722), 3,
      sym_hex,
      sym_binary,
      sym_unsigned,
    STATE(171), 4,
      sym__preproc_exp,
      sym_preproc_defined_exp,
      sym_preproc_binary_exp,
      sym__integer,
  [8621] = 6,
    ACTIONS(724), 1,
      sym_identifier,
    STATE(115), 1,
      sym_qualified_name,
    STATE(118), 1,
      sym_primitive_type,
    STATE(125), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(638), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8644] = 6,
    ACTIONS(728), 1,
      sym_identifier,
    STATE(113), 1,
      sym_primitive_type,
    STATE(116), 1,
      sym_type_name,
    STATE(119), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(726), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8667] = 6,
    ACTIONS(728), 1,
      sym_identifier,
    STATE(113), 1,
      sym_primitive_type,
    STATE(119), 1,
      sym_qualified_name,
    STATE(126), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(726), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8690] = 6,
    ACTIONS(728), 1,
      sym_identifier,
    STATE(109), 1,
      sym_type_name,
    STATE(113), 1,
      sym_primitive_type,
    STATE(119), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(726), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8713] = 6,
    ACTIONS(730), 1,
      sym_identifier,
    STATE(234), 1,
      sym_qualified_name,
    STATE(235), 1,
      sym_primitive_type,
    STATE(315), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(652), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8736] = 6,
    ACTIONS(724), 1,
      sym_identifier,
    STATE(115), 1,
      sym_qualified_name,
    STATE(118), 1,
      sym_primitive_type,
    STATE(155), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(638), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8759] = 6,
    ACTIONS(724), 1,
      sym_identifier,
    STATE(107), 1,
      sym_type_name,
    STATE(115), 1,
      sym_qualified_name,
    STATE(118), 1,
      sym_primitive_type,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(638), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8782] = 6,
    ACTIONS(730), 1,
      sym_identifier,
    STATE(234), 1,
      sym_qualified_name,
    STATE(235), 1,
      sym_primitive_type,
    STATE(238), 1,
      sym_type_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(652), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [8805] = 4,
    ACTIONS(732), 1,
      anon_sym_DOT,
    STATE(206), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8823] = 4,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(206), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(331), 5,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8841] = 4,
    ACTIONS(318), 1,
      anon_sym_DOT,
    STATE(207), 1,
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
  [8859] = 4,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(735), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8876] = 6,
    ACTIONS(739), 1,
      sym_string_literal,
    ACTIONS(741), 1,
      sym_identifier,
    STATE(281), 1,
      sym_boolean_literal,
    STATE(292), 1,
      sym_directive_value,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
  [8897] = 4,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(743), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8914] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(324), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [8927] = 4,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(215), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(743), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8944] = 4,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(745), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8961] = 4,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(745), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8978] = 4,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(211), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(747), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [8995] = 4,
    ACTIONS(751), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(749), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9012] = 4,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(209), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(754), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9029] = 4,
    ACTIONS(737), 1,
      anon_sym_COMMA,
    STATE(217), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(754), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9046] = 5,
    ACTIONS(318), 1,
      anon_sym_DOT,
    ACTIONS(756), 1,
      anon_sym_COLON,
    STATE(207), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(316), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9064] = 4,
    ACTIONS(760), 1,
      anon_sym_SEMI,
    STATE(228), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(758), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [9080] = 4,
    ACTIONS(764), 1,
      anon_sym_SEMI,
    STATE(222), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(762), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [9096] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(749), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9108] = 6,
    ACTIONS(767), 1,
      anon_sym_LT_EQ,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_COLON_DASH,
    ACTIONS(773), 1,
      anon_sym_DOT,
    STATE(250), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9128] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(775), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9140] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(777), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9152] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(779), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9164] = 4,
    ACTIONS(760), 1,
      anon_sym_SEMI,
    STATE(222), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(781), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE,
  [9180] = 4,
    ACTIONS(785), 1,
      anon_sym_COMMA,
    STATE(229), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9196] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(788), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9208] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(790), 5,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9220] = 5,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      sym_identifier,
    STATE(111), 1,
      sym_choice_domain_tuple_attribute,
    STATE(127), 1,
      sym_choice_domain_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9237] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(458), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9248] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(462), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9259] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(454), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9270] = 5,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(796), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_atom,
    STATE(317), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9287] = 4,
    ACTIONS(798), 1,
      anon_sym_COMMA,
    STATE(237), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(570), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [9302] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(801), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9313] = 5,
    ACTIONS(792), 1,
      anon_sym_LPAREN,
    ACTIONS(794), 1,
      sym_identifier,
    STATE(97), 1,
      sym_choice_domain_attribute,
    STATE(111), 1,
      sym_choice_domain_tuple_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9330] = 4,
    ACTIONS(805), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(803), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [9345] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(783), 4,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [9356] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(762), 4,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [9367] = 4,
    ACTIONS(808), 1,
      anon_sym_EQ,
    ACTIONS(810), 1,
      anon_sym_LT_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(159), 2,
      sym_subtype_decl,
      sym_eq_type_decl,
  [9382] = 5,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(812), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym_atom,
    STATE(317), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9399] = 4,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9413] = 4,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(252), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9427] = 4,
    ACTIONS(820), 1,
      anon_sym_RPAREN,
    ACTIONS(822), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_functor_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9441] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(317), 1,
      sym_qualified_name,
    STATE(323), 1,
      sym_atom,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9455] = 4,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
    STATE(229), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9469] = 4,
    ACTIONS(769), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_COLON_DASH,
    STATE(268), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9483] = 4,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
    ACTIONS(833), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9497] = 4,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    ACTIONS(836), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9511] = 4,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(838), 1,
      anon_sym_RPAREN,
    STATE(276), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9525] = 4,
    ACTIONS(840), 1,
      anon_sym_LPAREN,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    STATE(240), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9539] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(803), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9549] = 4,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(844), 1,
      anon_sym_RPAREN,
    STATE(240), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9563] = 4,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(846), 1,
      anon_sym_LPAREN,
    STATE(254), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9577] = 4,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(848), 1,
      anon_sym_RBRACE,
    STATE(229), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9591] = 4,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
    STATE(237), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9605] = 4,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9619] = 4,
    ACTIONS(854), 1,
      anon_sym_RPAREN,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    STATE(247), 1,
      aux_sym_functor_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9633] = 4,
    ACTIONS(816), 1,
      anon_sym_RPAREN,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    STATE(251), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9647] = 4,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(858), 1,
      anon_sym_RBRACE,
    STATE(258), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9661] = 4,
    ACTIONS(512), 1,
      anon_sym_COMMA,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
    STATE(237), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9675] = 4,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(283), 1,
      sym_atom,
    STATE(317), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9689] = 4,
    ACTIONS(818), 1,
      anon_sym_COMMA,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    STATE(262), 1,
      aux_sym_directive_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9703] = 4,
    ACTIONS(862), 1,
      anon_sym_RPAREN,
    ACTIONS(864), 1,
      sym_identifier,
    STATE(246), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9717] = 4,
    ACTIONS(866), 1,
      anon_sym_COMMA,
    ACTIONS(869), 1,
      anon_sym_COLON_DASH,
    STATE(268), 1,
      aux_sym_rule_head_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9731] = 4,
    ACTIONS(864), 1,
      sym_identifier,
    ACTIONS(871), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9745] = 4,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(873), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9759] = 4,
    ACTIONS(856), 1,
      anon_sym_COMMA,
    ACTIONS(875), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      aux_sym_functor_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9773] = 4,
    ACTIONS(877), 1,
      anon_sym_RBRACE,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(263), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9787] = 4,
    ACTIONS(842), 1,
      anon_sym_COMMA,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9801] = 4,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(883), 1,
      anon_sym_RBRACK,
    STATE(249), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9815] = 4,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
    STATE(270), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9829] = 4,
    ACTIONS(825), 1,
      anon_sym_COMMA,
    ACTIONS(887), 1,
      anon_sym_RPAREN,
    STATE(229), 1,
      aux_sym_relation_decl_repeat2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9843] = 3,
    ACTIONS(889), 1,
      sym_identifier,
    STATE(124), 1,
      sym_adt_branch,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9854] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(891), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9863] = 3,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(241), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9874] = 3,
    ACTIONS(864), 1,
      sym_identifier,
    STATE(291), 1,
      sym_directive_attribute_assignment,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9885] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(893), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9894] = 3,
    ACTIONS(895), 1,
      sym_identifier,
    STATE(102), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9905] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(869), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [9914] = 3,
    ACTIONS(895), 1,
      sym_identifier,
    STATE(94), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9925] = 3,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(274), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9936] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(820), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9945] = 3,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(304), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9956] = 3,
    ACTIONS(21), 1,
      sym_identifier,
    STATE(302), 1,
      sym_qualified_name,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9967] = 3,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(275), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9978] = 3,
    ACTIONS(879), 1,
      sym_identifier,
    STATE(253), 1,
      sym_attribute,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [9989] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(831), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [9998] = 2,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(897), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [10007] = 2,
    ACTIONS(899), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10015] = 2,
    ACTIONS(901), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10023] = 2,
    ACTIONS(903), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10031] = 2,
    ACTIONS(905), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10039] = 2,
    ACTIONS(907), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10047] = 2,
    ACTIONS(909), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10055] = 2,
    ACTIONS(911), 1,
      sym_preproc_macro,
    ACTIONS(913), 2,
      sym_line_comment,
      sym_block_comment,
  [10063] = 2,
    ACTIONS(915), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10071] = 2,
    ACTIONS(917), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10079] = 2,
    ACTIONS(919), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10087] = 2,
    ACTIONS(921), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10095] = 2,
    ACTIONS(923), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10103] = 2,
    ACTIONS(925), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10111] = 2,
    ACTIONS(927), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10119] = 2,
    ACTIONS(929), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10127] = 2,
    ACTIONS(931), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10135] = 2,
    ACTIONS(933), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10143] = 2,
    ACTIONS(935), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10151] = 2,
    ACTIONS(937), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10159] = 2,
    ACTIONS(939), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10167] = 2,
    ACTIONS(941), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10175] = 2,
    ACTIONS(943), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10183] = 2,
    ACTIONS(945), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10191] = 2,
    ACTIONS(947), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10199] = 2,
    ACTIONS(949), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10207] = 2,
    ACTIONS(951), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10215] = 2,
    ACTIONS(953), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10223] = 2,
    ACTIONS(756), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10231] = 2,
    ACTIONS(955), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10239] = 2,
    ACTIONS(957), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10247] = 2,
    ACTIONS(959), 1,
      anon_sym_COLON_DASH,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10255] = 2,
    ACTIONS(961), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10263] = 2,
    ACTIONS(963), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10271] = 2,
    ACTIONS(965), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10279] = 2,
    ACTIONS(967), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10287] = 2,
    ACTIONS(969), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10295] = 2,
    ACTIONS(971), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10303] = 2,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10311] = 2,
    ACTIONS(973), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [10319] = 2,
    ACTIONS(975), 1,
      anon_sym_DOT,
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
  [SMALL_STATE(36)] = 3252,
  [SMALL_STATE(37)] = 3306,
  [SMALL_STATE(38)] = 3358,
  [SMALL_STATE(39)] = 3406,
  [SMALL_STATE(40)] = 3446,
  [SMALL_STATE(41)] = 3490,
  [SMALL_STATE(42)] = 3530,
  [SMALL_STATE(43)] = 3586,
  [SMALL_STATE(44)] = 3633,
  [SMALL_STATE(45)] = 3680,
  [SMALL_STATE(46)] = 3727,
  [SMALL_STATE(47)] = 3774,
  [SMALL_STATE(48)] = 3821,
  [SMALL_STATE(49)] = 3868,
  [SMALL_STATE(50)] = 3915,
  [SMALL_STATE(51)] = 3962,
  [SMALL_STATE(52)] = 4000,
  [SMALL_STATE(53)] = 4038,
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
  [SMALL_STATE(66)] = 4524,
  [SMALL_STATE(67)] = 4571,
  [SMALL_STATE(68)] = 4608,
  [SMALL_STATE(69)] = 4645,
  [SMALL_STATE(70)] = 4682,
  [SMALL_STATE(71)] = 4719,
  [SMALL_STATE(72)] = 4756,
  [SMALL_STATE(73)] = 4793,
  [SMALL_STATE(74)] = 4830,
  [SMALL_STATE(75)] = 4867,
  [SMALL_STATE(76)] = 4912,
  [SMALL_STATE(77)] = 4949,
  [SMALL_STATE(78)] = 4992,
  [SMALL_STATE(79)] = 5031,
  [SMALL_STATE(80)] = 5068,
  [SMALL_STATE(81)] = 5104,
  [SMALL_STATE(82)] = 5144,
  [SMALL_STATE(83)] = 5180,
  [SMALL_STATE(84)] = 5216,
  [SMALL_STATE(85)] = 5252,
  [SMALL_STATE(86)] = 5289,
  [SMALL_STATE(87)] = 5336,
  [SMALL_STATE(88)] = 5367,
  [SMALL_STATE(89)] = 5403,
  [SMALL_STATE(90)] = 5447,
  [SMALL_STATE(91)] = 5481,
  [SMALL_STATE(92)] = 5515,
  [SMALL_STATE(93)] = 5549,
  [SMALL_STATE(94)] = 5583,
  [SMALL_STATE(95)] = 5619,
  [SMALL_STATE(96)] = 5652,
  [SMALL_STATE(97)] = 5693,
  [SMALL_STATE(98)] = 5726,
  [SMALL_STATE(99)] = 5759,
  [SMALL_STATE(100)] = 5792,
  [SMALL_STATE(101)] = 5825,
  [SMALL_STATE(102)] = 5854,
  [SMALL_STATE(103)] = 5883,
  [SMALL_STATE(104)] = 5916,
  [SMALL_STATE(105)] = 5949,
  [SMALL_STATE(106)] = 5982,
  [SMALL_STATE(107)] = 6015,
  [SMALL_STATE(108)] = 6048,
  [SMALL_STATE(109)] = 6076,
  [SMALL_STATE(110)] = 6106,
  [SMALL_STATE(111)] = 6134,
  [SMALL_STATE(112)] = 6162,
  [SMALL_STATE(113)] = 6190,
  [SMALL_STATE(114)] = 6218,
  [SMALL_STATE(115)] = 6246,
  [SMALL_STATE(116)] = 6274,
  [SMALL_STATE(117)] = 6304,
  [SMALL_STATE(118)] = 6334,
  [SMALL_STATE(119)] = 6362,
  [SMALL_STATE(120)] = 6390,
  [SMALL_STATE(121)] = 6418,
  [SMALL_STATE(122)] = 6448,
  [SMALL_STATE(123)] = 6476,
  [SMALL_STATE(124)] = 6504,
  [SMALL_STATE(125)] = 6532,
  [SMALL_STATE(126)] = 6560,
  [SMALL_STATE(127)] = 6590,
  [SMALL_STATE(128)] = 6618,
  [SMALL_STATE(129)] = 6646,
  [SMALL_STATE(130)] = 6673,
  [SMALL_STATE(131)] = 6700,
  [SMALL_STATE(132)] = 6743,
  [SMALL_STATE(133)] = 6770,
  [SMALL_STATE(134)] = 6797,
  [SMALL_STATE(135)] = 6824,
  [SMALL_STATE(136)] = 6851,
  [SMALL_STATE(137)] = 6878,
  [SMALL_STATE(138)] = 6905,
  [SMALL_STATE(139)] = 6932,
  [SMALL_STATE(140)] = 6959,
  [SMALL_STATE(141)] = 6986,
  [SMALL_STATE(142)] = 7013,
  [SMALL_STATE(143)] = 7040,
  [SMALL_STATE(144)] = 7067,
  [SMALL_STATE(145)] = 7110,
  [SMALL_STATE(146)] = 7153,
  [SMALL_STATE(147)] = 7180,
  [SMALL_STATE(148)] = 7219,
  [SMALL_STATE(149)] = 7246,
  [SMALL_STATE(150)] = 7273,
  [SMALL_STATE(151)] = 7300,
  [SMALL_STATE(152)] = 7343,
  [SMALL_STATE(153)] = 7370,
  [SMALL_STATE(154)] = 7397,
  [SMALL_STATE(155)] = 7424,
  [SMALL_STATE(156)] = 7451,
  [SMALL_STATE(157)] = 7478,
  [SMALL_STATE(158)] = 7505,
  [SMALL_STATE(159)] = 7532,
  [SMALL_STATE(160)] = 7559,
  [SMALL_STATE(161)] = 7586,
  [SMALL_STATE(162)] = 7613,
  [SMALL_STATE(163)] = 7650,
  [SMALL_STATE(164)] = 7687,
  [SMALL_STATE(165)] = 7724,
  [SMALL_STATE(166)] = 7761,
  [SMALL_STATE(167)] = 7798,
  [SMALL_STATE(168)] = 7835,
  [SMALL_STATE(169)] = 7868,
  [SMALL_STATE(170)] = 7891,
  [SMALL_STATE(171)] = 7922,
  [SMALL_STATE(172)] = 7959,
  [SMALL_STATE(173)] = 7986,
  [SMALL_STATE(174)] = 8021,
  [SMALL_STATE(175)] = 8044,
  [SMALL_STATE(176)] = 8081,
  [SMALL_STATE(177)] = 8104,
  [SMALL_STATE(178)] = 8133,
  [SMALL_STATE(179)] = 8167,
  [SMALL_STATE(180)] = 8193,
  [SMALL_STATE(181)] = 8223,
  [SMALL_STATE(182)] = 8249,
  [SMALL_STATE(183)] = 8272,
  [SMALL_STATE(184)] = 8295,
  [SMALL_STATE(185)] = 8318,
  [SMALL_STATE(186)] = 8341,
  [SMALL_STATE(187)] = 8364,
  [SMALL_STATE(188)] = 8391,
  [SMALL_STATE(189)] = 8414,
  [SMALL_STATE(190)] = 8437,
  [SMALL_STATE(191)] = 8460,
  [SMALL_STATE(192)] = 8483,
  [SMALL_STATE(193)] = 8506,
  [SMALL_STATE(194)] = 8529,
  [SMALL_STATE(195)] = 8552,
  [SMALL_STATE(196)] = 8575,
  [SMALL_STATE(197)] = 8598,
  [SMALL_STATE(198)] = 8621,
  [SMALL_STATE(199)] = 8644,
  [SMALL_STATE(200)] = 8667,
  [SMALL_STATE(201)] = 8690,
  [SMALL_STATE(202)] = 8713,
  [SMALL_STATE(203)] = 8736,
  [SMALL_STATE(204)] = 8759,
  [SMALL_STATE(205)] = 8782,
  [SMALL_STATE(206)] = 8805,
  [SMALL_STATE(207)] = 8823,
  [SMALL_STATE(208)] = 8841,
  [SMALL_STATE(209)] = 8859,
  [SMALL_STATE(210)] = 8876,
  [SMALL_STATE(211)] = 8897,
  [SMALL_STATE(212)] = 8914,
  [SMALL_STATE(213)] = 8927,
  [SMALL_STATE(214)] = 8944,
  [SMALL_STATE(215)] = 8961,
  [SMALL_STATE(216)] = 8978,
  [SMALL_STATE(217)] = 8995,
  [SMALL_STATE(218)] = 9012,
  [SMALL_STATE(219)] = 9029,
  [SMALL_STATE(220)] = 9046,
  [SMALL_STATE(221)] = 9064,
  [SMALL_STATE(222)] = 9080,
  [SMALL_STATE(223)] = 9096,
  [SMALL_STATE(224)] = 9108,
  [SMALL_STATE(225)] = 9128,
  [SMALL_STATE(226)] = 9140,
  [SMALL_STATE(227)] = 9152,
  [SMALL_STATE(228)] = 9164,
  [SMALL_STATE(229)] = 9180,
  [SMALL_STATE(230)] = 9196,
  [SMALL_STATE(231)] = 9208,
  [SMALL_STATE(232)] = 9220,
  [SMALL_STATE(233)] = 9237,
  [SMALL_STATE(234)] = 9248,
  [SMALL_STATE(235)] = 9259,
  [SMALL_STATE(236)] = 9270,
  [SMALL_STATE(237)] = 9287,
  [SMALL_STATE(238)] = 9302,
  [SMALL_STATE(239)] = 9313,
  [SMALL_STATE(240)] = 9330,
  [SMALL_STATE(241)] = 9345,
  [SMALL_STATE(242)] = 9356,
  [SMALL_STATE(243)] = 9367,
  [SMALL_STATE(244)] = 9382,
  [SMALL_STATE(245)] = 9399,
  [SMALL_STATE(246)] = 9413,
  [SMALL_STATE(247)] = 9427,
  [SMALL_STATE(248)] = 9441,
  [SMALL_STATE(249)] = 9455,
  [SMALL_STATE(250)] = 9469,
  [SMALL_STATE(251)] = 9483,
  [SMALL_STATE(252)] = 9497,
  [SMALL_STATE(253)] = 9511,
  [SMALL_STATE(254)] = 9525,
  [SMALL_STATE(255)] = 9539,
  [SMALL_STATE(256)] = 9549,
  [SMALL_STATE(257)] = 9563,
  [SMALL_STATE(258)] = 9577,
  [SMALL_STATE(259)] = 9591,
  [SMALL_STATE(260)] = 9605,
  [SMALL_STATE(261)] = 9619,
  [SMALL_STATE(262)] = 9633,
  [SMALL_STATE(263)] = 9647,
  [SMALL_STATE(264)] = 9661,
  [SMALL_STATE(265)] = 9675,
  [SMALL_STATE(266)] = 9689,
  [SMALL_STATE(267)] = 9703,
  [SMALL_STATE(268)] = 9717,
  [SMALL_STATE(269)] = 9731,
  [SMALL_STATE(270)] = 9745,
  [SMALL_STATE(271)] = 9759,
  [SMALL_STATE(272)] = 9773,
  [SMALL_STATE(273)] = 9787,
  [SMALL_STATE(274)] = 9801,
  [SMALL_STATE(275)] = 9815,
  [SMALL_STATE(276)] = 9829,
  [SMALL_STATE(277)] = 9843,
  [SMALL_STATE(278)] = 9854,
  [SMALL_STATE(279)] = 9863,
  [SMALL_STATE(280)] = 9874,
  [SMALL_STATE(281)] = 9885,
  [SMALL_STATE(282)] = 9894,
  [SMALL_STATE(283)] = 9905,
  [SMALL_STATE(284)] = 9914,
  [SMALL_STATE(285)] = 9925,
  [SMALL_STATE(286)] = 9936,
  [SMALL_STATE(287)] = 9945,
  [SMALL_STATE(288)] = 9956,
  [SMALL_STATE(289)] = 9967,
  [SMALL_STATE(290)] = 9978,
  [SMALL_STATE(291)] = 9989,
  [SMALL_STATE(292)] = 9998,
  [SMALL_STATE(293)] = 10007,
  [SMALL_STATE(294)] = 10015,
  [SMALL_STATE(295)] = 10023,
  [SMALL_STATE(296)] = 10031,
  [SMALL_STATE(297)] = 10039,
  [SMALL_STATE(298)] = 10047,
  [SMALL_STATE(299)] = 10055,
  [SMALL_STATE(300)] = 10063,
  [SMALL_STATE(301)] = 10071,
  [SMALL_STATE(302)] = 10079,
  [SMALL_STATE(303)] = 10087,
  [SMALL_STATE(304)] = 10095,
  [SMALL_STATE(305)] = 10103,
  [SMALL_STATE(306)] = 10111,
  [SMALL_STATE(307)] = 10119,
  [SMALL_STATE(308)] = 10127,
  [SMALL_STATE(309)] = 10135,
  [SMALL_STATE(310)] = 10143,
  [SMALL_STATE(311)] = 10151,
  [SMALL_STATE(312)] = 10159,
  [SMALL_STATE(313)] = 10167,
  [SMALL_STATE(314)] = 10175,
  [SMALL_STATE(315)] = 10183,
  [SMALL_STATE(316)] = 10191,
  [SMALL_STATE(317)] = 10199,
  [SMALL_STATE(318)] = 10207,
  [SMALL_STATE(319)] = 10215,
  [SMALL_STATE(320)] = 10223,
  [SMALL_STATE(321)] = 10231,
  [SMALL_STATE(322)] = 10239,
  [SMALL_STATE(323)] = 10247,
  [SMALL_STATE(324)] = 10255,
  [SMALL_STATE(325)] = 10263,
  [SMALL_STATE(326)] = 10271,
  [SMALL_STATE(327)] = 10279,
  [SMALL_STATE(328)] = 10287,
  [SMALL_STATE(329)] = 10295,
  [SMALL_STATE(330)] = 10303,
  [SMALL_STATE(331)] = 10311,
  [SMALL_STATE(332)] = 10319,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(300),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(193),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(296),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(303),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(299),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(298),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(208),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(318),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(310),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(309),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(33),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_defined_exp, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_defined_exp, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_binary_exp, 3, .production_id = 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_binary_exp, 3, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_defined_exp, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_defined_exp, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_if, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_if, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 7),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 11),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 11),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 11),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 11),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 11),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 11),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 7),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 7),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 6),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 9),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 9),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [211] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(80),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument, 1),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 6, .production_id = 18),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 6, .production_id = 18),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_conversion, 6),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_conversion, 6),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 4, .production_id = 12),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 4, .production_id = 12),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 7, .production_id = 20),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 7, .production_id = 20),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 3, .production_id = 8),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 3, .production_id = 8),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operation, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [268] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_operation, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 4, .production_id = 6),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 4, .production_id = 6),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paren_argument, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paren_argument, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operation, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_operation, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_invocation, 5, .production_id = 9),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_invocation, 5, .production_id = 9),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_branch_init, 5, .production_id = 16),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_branch_init, 5, .production_id = 16),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 8, .production_id = 21),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 8, .production_id = 21),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_qualifier, 1),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_qualifier, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(329),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [333] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2), SHIFT_REPEAT(282),
  [362] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(331),
  [365] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 1),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstract_data_type, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_constraint, 3),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 4),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstract_data_type, 2),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstract_data_type, 2),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 3),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_union_type_repeat1, 2),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_union_type_repeat1, 2), SHIFT_REPEAT(198),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(232),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_abstract_data_type_repeat1, 2), SHIFT_REPEAT(277),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4, .production_id = 5),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4, .production_id = 5),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 3),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_union_type, 3),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_tuple_attribute, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 12),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 12),
  [440] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 14),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_attribute, 1, .production_id = 14),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_attribute, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_attribute, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 4),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_branch, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_name, 1, .production_id = 3),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 12),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 12),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eq_type_decl, 2),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eq_type_decl, 2),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 3),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_branch, 3),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_branch, 5),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_branch, 5),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 12),
  [494] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 12),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain_tuple_attribute, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 5, .production_id = 5),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 5, .production_id = 5),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_define, 2),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_define, 2),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_directive, 1),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_directive, 1),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 19),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 9, .production_id = 19),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 11),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 9, .production_id = 11),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 3),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 3),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_ifndef, 2),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_ifndef, 2),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 17),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 17),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_directive, 2),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_directive, 2),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_ifdef, 2),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_ifdef, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 6),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 2, .production_id = 1),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 2, .production_id = 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 7),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 7),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype_decl, 2),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtype_decl, 2),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 15),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 15),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 3, .production_id = 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_type, 4),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_type, 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [640] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [654] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [660] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [680] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [684] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [692] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [704] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [712] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [716] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [720] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [732] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(307),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(11),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(9),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraint, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2),
  [785] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2), SHIFT_REPEAT(279),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [798] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(29),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 10),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [805] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(319),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2),
  [822] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2), SHIFT_REPEAT(187),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule_head, 2),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2), SHIFT_REPEAT(280),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [866] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2), SHIFT_REPEAT(265),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rule_head_repeat1, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_attribute, 1),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_value, 1),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive_attribute_assignment, 3, .production_id = 13),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [911] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [913] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor_name, 2),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor_name, 1),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [937] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumption_head, 3),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
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
