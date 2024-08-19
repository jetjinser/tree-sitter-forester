/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * @param {RuleOrLiteral} rule
 * @param {RuleOrLiteral} arg
 */
function command(rule, arg) {
  return seq("\\", rule, arg);
}

/**
 * @param {RuleOrLiteral} p
 */
function braces(p) {
  return seq("{", p, "}");
}

/**
 * @param {RuleOrLiteral} p
 */
function squares(p) {
  return seq("[", p, "]");
}

/**
 * @param {RuleOrLiteral} p
 */
function parens(p) {
  return seq("(", p, ")");
}

module.exports = grammar({
  name: "forester",

  rules: {
    source_file: ($) => repeat($._node),

    //--- Content
    _node: ($) =>
      choice(
        $.comment,

        $._prim,
        $._meta,
        $._delimits,
        $._TeX,
        $._xml,
        $._function,
        $._scope,
        $._obj,
        $._link,
        $._query,
        $._math,

        $.text,
        $._default,
      ),

    //--- primitive functions
    _prim: ($) => choice(
      $.p,
      $.em,
      $.strong,
      $.li,
      $.ul,
      $.ol,
      $.code,
      $.blockquote,
      $.pre,
    ),
    p: ($) => command("p", $._opt_arg),
    em: ($) => command("em", $._arg),
    strong: ($) => command("strong", $._arg),
    li: ($) => command("li", $._arg),
    ul: ($) => command("ul", $._arg),
    ol: ($) => command("ol", $._arg),
    code: ($) => command("code", $._arg),
    blockquote: ($) => command("blockquote", $._arg),
    pre: ($) => command("pre", $._arg),

    //--- meta
    _meta: ($) =>
      choice(
        $.title,
        $.author,
        $.contributor,
        $.date,
        $.tag,
        $.ref,
        $.taxon,
        $.meta,
      ),
    title: ($) => command("title", $._arg),
    author: ($) => field("author", command("author", $._txt_arg)),
    contributor: ($) =>
      field("contributor", command("contributor", $._txt_arg)),
    date: ($) =>
      field(
        "date",
        command(
          "date",
          choice(braces(seq($.year, "-", $.month, "-", $.day)), $._txt_arg),
        ),
      ),
    tag: ($) => field("tag", command("tag", $._txt_arg)),
    ref: ($) => field("ref", command("ref", $._arg)),
    taxon: ($) => command("taxon", $._txt_arg),
    meta: ($) => prec.left(command("meta", seq($._txt_arg, $._arg))),

    year: _ => /[0-9]{4}/,
    month: _ => /(1[012]|0?[1-9])/,
    day: _ => seq(/[0123]/, /[0-9]/),

    //--- delimits
    _delimits: ($) => choice(
      $._braces,
      $._squares,
      $._parens,
    ),
    _braces: ($) => braces(repeat1($._node)),
    _squares: ($) => squares(repeat1($._node)),
    _parens: ($) => parens(repeat1($._node)),

    //--- TeX
    _TeX: ($) => choice(
      $.tex,
      $.tex_package,
    ),
    tex: ($) => command("tex", $._arg),
    tex_package: ($) => command("tex_package", $._txt_arg),

    //--- XML
    _xml: ($) => choice(
      $.xml_tag,
      $.decl_xmlns,
    ),
    xml_tag: ($) =>
      seq($.xml_name, choice($.xml_body, seq(repeat1($.xml_attr), $.xml_body))),
    xml_name: ($) => seq("\\<", $.xml_qname, ">"),
    xml_attr: ($) => seq(field("key", squares($.text)), field("value", $._arg)),
    xml_body: ($) => $._opt_arg,
    xml_qname: ($) =>
      choice(
        seq(
          field("prefix", $.xml_base_ident),
          ":",
          field("uname", $.xml_base_ident),
        ),
        $.xml_base_ident,
      ),

    decl_xmlns: ($) => seq("\\xmlns:", field("name", $.xml_base_ident), field("ns", $._txt_arg)),
    xml_base_ident: ($) =>
      seq($._alpha, repeat(choice($._alpha, $._digit, /[-/#]/))),

    //--- define functions
    _function: ($) => choice(
      $.def,
      $.let,
    ),
    def: ($) => command("def", $.fun_spec),
    let: ($) => command("let", $.fun_spec),
    fun_spec: ($) =>
      field(
        "function",
        seq(
          field("identifier", $.ident),
          choice(
            field("argument", $._arg),
            seq(
              field("binder", repeat1(squares($.text))),
              field("argument", $._arg),
            ),
          ),
        ),
      ),

    //-- scope
    _scope: ($) => choice(
      $.namespace,
      $.import,
      $.export,

      $.alloc,
      $.open,
      $.get,
      $.put,
      $.default,

      $.scope,
      $.subtree,
    ),
    namespace: ($) => command("namespace", $._arg),
    import: ($) => prec(2, command("import", braces($.addr))),
    export: ($) => prec(2, command("export", braces($.addr))),

    alloc: ($) => command("alloc", $.ident),
    open: ($) => command("open", $.ident),
    get: ($) => command("get", $.ident),
    put: ($) =>
      command(
        "put",
        seq(field("identifier", $.ident), field("argument", $._arg)),
      ),
    default: ($) =>
      command(
        "put?",
        seq(field("identifier", $.ident), field("argument", $._arg)),
      ),

    scope: ($) => command("scope", $._arg),
    subtree: ($) =>
      prec.left(command("subtree", seq(optional(squares($.addr)), $._arg))),

    //--- object
    _obj: ($) => choice(
      $.object,
      $.patch,
      $.call,
      $.ident_with_method_calls,
    ),
    object: ($) =>
      prec.left(
        command(
          "object",
          seq(
            field("self", squares($.text)),
            braces(repeat1(choice($.method_decl, $._whitespace))),
          ),
        ),
      ),
    patch: ($) =>
      prec.left(
        command(
          "patch",
          seq(
            field("object", $._arg),
            field("self", squares($.text)),
            braces(repeat1(choice($.method_decl, $._whitespace))),
          ),
        ),
      ),
    call: ($) => command("call", $._arg),
    method_decl: ($) =>
      seq(
        field("key", squares($.text)),
        field("value", alias($._arg, $.method_body)),
      ),
    ident_with_method_calls: ($) =>
      prec(1, prec.left(seq("\\", $.text, "#", repeat1(choice("#", $.text))))),

    //--- link
    _link: ($) => choice(
      $.transclude,
      $.unlabeled_link,
      $.markdown_link,
    ),
    transclude: ($) => command("transclude", braces(field("dest", $._addr_or_link))),
    markdown_link: ($) =>
      prec(
        2,
        seq(
          field("label", squares($.text)),
          field("dest", parens($._addr_or_link)),
        ),
      ),
    unlabeled_link: ($) => seq("[[", field("dest", $._addr_or_link), "]]"),
    // TODO(jinser): always text, dunno how to resolve conflicts
    // _addr_or_link: ($) => choice(
    //   field("address", $.addr),
    //   field("link", $.text),
    // ),
    _addr_or_link: ($) => $.text,

    //-- query
    _query: ($) => choice(
      $.query_tree
    ),
    query_tree: ($) => command("query", $._arg),

    //--- math
    _math: ($) => choice(
      $.inline_math,
      $.display_math,
    ),
    inline_math: ($) => seq("#", $._arg),
    display_math: ($) => seq("##", $._arg),

    _default: ($) => prec.left($.ident),

    //--- Trivia
    _whitespace: _ => /\s+/,

    comment: _ => /%[^\r\n]*/,

    addr: ($) => seq($.prefix, "-", $.id),
    prefix: ($) => repeat1($._alpha),
    id: ($) => repeat1(choice($._alpha, $._digit, "-", "_")),

    _alpha: _ => /[a-zA-Z]/,
    _digit: _ => /[0-9]/,

    text: _ => /[^%#\\\{\}\[\]\(\)\r\n]+/,

    _arg: ($) => braces(repeat1(choice($._node))),
    _opt_arg: ($) => braces(repeat(choice($._node))),
    _txt_arg: ($) => braces($.text),

    ident: ($) =>
      prec.left(seq("\\", $.text, optional(choice(repeat1($._arg), "{}")))),
  },
});
