module.exports = grammar({
  name: "souffle",

  externals: $ => [
    $.decl_kw,
    $.input_kw,
    $.output_kw,
    $.type_kw,
    $.include_kw,
    $.printsize_kw,
    $.limitsize_kw,
    $.plan_kw,
  ],

  extras: $ => [
    $.line_comment,
    $.block_comment,
    /\s/
  ],

  rules: {
    source_file: $ => repeat($._element),
    _element: $ => choice(
        $.directive,
        $.include_directive,
        $.relation_decl,
        $.rule,
        $.fact,
        $.type_decl,
        $.preprocessor_directive,
    ),
    preprocessor_directive: $ => choice(
        $.include_preprocessor_directive
    ),
    include_preprocessor_directive: $ => seq(
        "#include",
        alias($.string_literal, $.path_spec),
    ),
    relation_decl: $ => seq(
        // ".decl",
        $.decl_kw,
        field("relation_name", commaSep1($.identifier)),
        "(",
        commaSep1($.attribute),
        ")",
        repeat($.relation_qualifier),
        optional($.choice_domain)
    ),
    relation_qualifier: _ => choice(
        "eqrel",
        "btree",
        "brie",
        "no_magic",
        "magic",
        "no_inline",
        "inline",
        "override"
    ),
    choice_domain: $ => seq(
        "choice-domain",
        commaSep1($.choice_domain_attribute)
    ),
    choice_domain_attribute: $ => choice(
        alias($.identifier, $.choice_domain_single_attribute),
        $.choice_domain_tuple_attribute,
    ),
    choice_domain_tuple_attribute: $ => seq(
        "(",
        commaSep1($.identifier),
        ")"
    ),
    rule: $ => seq(
        field('rule_name', commaSep1($.atom)),
        ":-",
        $.disjunction,
        '.',
        optional($.query_plan)
    ),
    disjunction: $ => sep1($.conjunction, ";"),
    conjunction: $ => commaSep1(
        seq(
            repeat("!"),
            choice(
                $.atom,
                $.constraint,
                seq(
                    "(",
                    $.disjunction,
                    ")"
                )
            ),
        )
    ),
    constraint: $ => choice(
        $.binary_constraint,
        $.boolean_literal
        // TODO: match and contains
    ),
    binary_constraint: $ => seq(
        $.argument,
        choice("<", ">", "<=", ">=", "=", "!="),
        $.argument
    ),
    query_plan: $ => seq(
        $.plan_kw,
        // TODO
    ),
    directive: $ => seq(
        $._directive_qualifier,
        commaSep1($.qualified_name),
        optional(seq(
            "(",
            commaSep1($.directive_attribute_assignment),
            ")"
        ))
    ),
    _directive_qualifier: $ => choice(
        $.input_kw,
        $.output_kw,
        $.printsize_kw,
        $.limitsize_kw,
    ),
    directive_attribute_assignment: $ => seq(
        field("directive_attribute", $.identifier),
        "=",
        field("directive_value", $.directive_value)
    ),
    directive_value: $ => choice(
        $.string_literal,
        $.identifier,
        $.boolean_literal
    ),
    include_directive: $ => seq(
        $.include_kw,
        $.string_literal
    ),
    qualified_name: $ => sep1($.identifier, "."),
    argument: $ => choice(
        $.constant,
        $.variable,
        alias("nil", $.nil),
        $.argument_list,
        $.unary_operation,
        $.binary_operation,
        $.type_conversion,
    ),
    constant: $ => choice(
        $.string_literal,
        $.number,
    ),
    variable: $ => choice(
        $.identifier,
        "_"
    ),
    argument_list: $ => seq(
        "[",
        optional(commaSep1($.argument)),
        "]",
    ),
    unary_operation: $ => prec(6, seq(
        choice("-", "bnot", "lnot"),
        $.argument
    )),
    binary_operation: $ => choice(
        prec.left(5, seq($.argument, "^", $.argument)),
        prec.left(4, seq($.argument, choice("*", "/", "%"), $.argument)),
        prec.left(3, seq($.argument, choice("+", "-"), $.argument)),
        prec.left(2, seq($.argument, choice("land", "lor", "lxor"), $.argument)),
        prec.left(1, seq($.argument, choice("band", "bor", "bxor", "bshl", "bshr", "bshru"), $.argument))
    ),
    type_conversion: $ => seq("as", "(", $.argument, ",", $.type_name, ")"),
    attribute: $ => seq(
        alias($.identifier, $.attribute_name),
        ":",
        $.type_name
    ),
    fact: $ => seq(
        $.atom,
        "."
    ),
    type_decl: $ => seq(
        $.type_kw,
        field("type_ref", $.identifier),
        choice(
            $.subtype_decl,
            $.equivalence_type_decl,
        )
    ),
    subtype_decl: $ => seq("<:", $.type_name),
    equivalence_type_decl: $ => seq("=",
        choice(
            $.union_type_expr,
            $.type_name,
            // TODO
            $.record_type_expr,
            // sep1($.adt_branch, "|")
        )
    ),
    union_type_expr: $ => prec(2, sep2($.type_name, "|")),
    type_name: $ => choice(
        $.primitive_type,
        alias($.qualified_name, $.user_defined_type_name)
    ),
    record_type_expr: $ => seq(
        "[",
        commaSep1($.attribute),
        "]",
    ),
    primitive_type: _ => choice(
        "number",
        "symbol",
        "unsigned",
        "float",
    ),
    atom: $ => seq(
        $.qualified_name,
        "(",
        commaSep1($.argument),
        ")",
    ),
    boolean_literal: _ => choice("true", "false"),
    string_literal: _ => token(
      seq('"', repeat(choice(/[^\\"\n]/, /\\(.|\n)/)), '"'),
    ),
    line_comment: _ => token( seq('//', /[^\n]*/)),
    block_comment: _ => token(seq(
      '/*',
      /[^*]*\*+([^/*][^*]*\*+)*/,
      '/'
    )),
    identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: _ => /\d+/,
  },
});

function commaSep1(rule) {
  return sep1(rule, ",")
}

function sep2(rule, separator) {
  return seq(rule, separator, rule, repeat(seq(separator, rule)))
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}
