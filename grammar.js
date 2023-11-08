module.exports = grammar({
  name: "souffle",

  externals: $ => [
    $.decl_kw,
    $.input_kw,
    $.output_kw,
    $.type_kw,
    $.functor_kw,
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
        $.functor_decl,
        $.preprocessor_directive,
        $.pragma,
    ),
    preprocessor_directive: $ => choice(
        $.include_preprocessor_directive
    ),
    include_preprocessor_directive: $ => seq(
        "#include",
        alias($.string_literal, $.path_spec),
    ),
    relation_decl: $ => seq(
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
        field("head", choice(
            $.rule_head,
            $.subsumption_head,
        )),
        ":-",
        field("body", $.disjunction),
        '.',
        optional($.query_plan)
    ),
    rule_head: $ => commaSep1($.atom),
    subsumption_head: $ => seq($.atom, "<=", $.atom),
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
            optional(commaSep1($.directive_attribute_assignment)),
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
        $.branch_init,
        $.unary_operation,
        $.binary_operation,
        $.type_conversion,
        $.aggregator,
        $.range_expression,
        $.functor_invocation,
    ),
    constant: $ => choice(
        $.string_literal,
        $._number,
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
    branch_init: $ => seq(
        "$",
        field("name", $.qualified_name),
        "(",
        field("args", optional(commaSep1($.argument))),
        ")",
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
    aggregator: $ => seq(
        choice(
            seq(choice("max", "mean", "min", "sum"), $.argument),
            "count",
        ),
        ":",
        choice(
            seq("{", $.disjunction, "}"),
            $.atom
        ),
    ),
    range_expression: $ => seq(
        "range",
        "(",
        field("range_from", $.argument),
        ",",
        field("range_to", $.argument),
        ",",
        field("range_step", optional($.argument)),
        ")"
    ),
    functor_invocation: $ => seq(
        field("name", choice($.user_defined_functor_name, $.intrinsic_functor_name)),
        "(",
        field("args", optional(commaSep1($.argument))),
        ")",
    ),
    user_defined_functor_name: $ => seq("@", $.qualified_name),
    intrinsic_functor_name: $ => choice(
        "ord",
        "to_float", "to_number", "to_string", "to_unsigned",
        "cat", "strlen", "substr",
        "autoinc"
    ),
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
            $.eq_type_decl,
        )
    ),
    subtype_decl: $ => seq("<:", $.type_name),
    eq_type_decl: $ => seq("=",
        choice(
            $.union_type,
            $.type_name,
            $.record_type,
            $.abstract_data_type,
        )
    ),
    union_type: $ => prec(2, sep2($.type_name, "|")),
    type_name: $ => choice(
        $.primitive_type,
        alias($.qualified_name, $.user_defined_type_name)
    ),
    record_type: $ => seq(
        "[",
        commaSep1($.attribute),
        "]",
    ),
    abstract_data_type: $ => sep1($.adt_branch, "|"),
    adt_branch: $ => seq($.identifier, "{", optional(commaSep1($.attribute)), "}"),
    primitive_type: _ => choice(
        "number",
        "symbol",
        "unsigned",
        "float",
    ),
    functor_decl: $ => seq(
        $.functor_kw,
        field("name", $.identifier),
        "(",
        optional(commaSep1($.functor_attribute)),
        ")",
        ":",
        $.type_name,
        optional(field("stateful", $.stateful)),
    ),
    functor_attribute: $ => choice(
        $.attribute,
        $.type_name,
    ),
    stateful: _ => token("stateful"),
    pragma: $ => seq(".pragma", $.string_literal, optional($.string_literal)),
    atom: $ => seq(
        field("name", $.qualified_name),
        "(",
        field("args", commaSep1($.argument)),
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
    hex: _ => /0x([0-9]|[A-F]|[a-f])+/,
    binary: _ => /0b[0-1]+/,
    decimal: _ => /[0-9]+/,
    float: _ => {
      const decimal = /[0-9]+/;
      const exponent = seq(/[eE][\+-]?/, decimal);
      return token(seq(decimal, '.', decimal, optional(exponent)));
    },
    _number: $ => choice(
        $.hex,
        $.binary,
        $.decimal,
        $.float,
    ),
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
