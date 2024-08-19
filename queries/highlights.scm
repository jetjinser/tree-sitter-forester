; comments
(comment) @comment @spell

; punctuation
[
  "\\"
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket

; builtin functions
(p "p" @function.builtin)
(em "em" @function.builtin)
(strong "strong" @function.builtin)
(code "code" @function.builtin)
(blockquote "blockquote" @function.builtin)
(pre "pre" @function.builtin)
(tex "tex" @function.builtin)

; user-defined functions
(ident (text) @function)

; meta keywords
(title "title" @keyword)
(author "author" @keyword)
(contributor "contributor" @keyword)
(date "date" @keyword)
(tag "tag" @keyword)
(ref "ref" @keyword)
(taxon "taxon" @keyword)
(meta "meta" @keyword)

; special meta markups
(title (_) @markup.heading)
(title (text) @spell)
(author (_) @markup.link.label)

; list markups
(li "li" @markup.list)
(ul "ul" @markup.list)
(ol "ol" @markup.list)

; define functions
(def "def" @keyword.function)
(let "let" @keyword.function)
(fun_spec identifier: (_ (text) @function))
(fun_spec binder: (text) @variable.parameter)

; define objects
(object "object" @keyword.type)
(object self: (_) @variable.parameter)
(ident_with_method_calls . (text) @variable)
(ident_with_method_calls "#" @operator)
(ident_with_method_calls (text) (text) @function.method.call)
(method_decl key: (_) @function.method)

; patch objects
(patch "patch" @keyword.type)
(patch object: (text) @type)
(patch self: (_) @variable.parameter)

; links
(transclude "transclude" @keyword.include)
(transclude dest: (_) @markup.link.label)
(markdown_link label: (_) @markup.link.label)
(markdown_link dest: (_) @markup.link)
(unlabeled_link dest: (_) @markup.link)

; conceal links
; TODO(jinser): seems useless
; (markdown_link
;   [
;     "["
;     "]"
;     "("
;     dest: (_)
;     ")"
;   ] @conceal
;   (#set! conceal ""))
;
; (unlabeled_link
;   [
;    "[["
;    "]]"
;   ] @conceal
;   (#set! conceal ""))

; scope
(scope "scope" @module)
(get "get" @keyword)
(put "put" @keyword)
(open "open" @keyword)
(alloc "alloc" @keyword)

; namespace
(namespace "namespace" @module)

; subtree
(subtree "subtree" @keyword)

; query
(query_tree "query" @keyword)

; include
(import "import" @keyword.include)
(export "export" @keyword.include)

; math
; TODO(jinser): inject LaTeX
; (inline_math) @markup.math
; (display_math) @markup.math

; XML
; bug(jinser): `\\<` is a token, `<` is not
; (xml_tag (xml_name ["<" ">"] @tag.delimiter))
(xml_tag (xml_name
  (xml_qname
    prefix: (_) @module
    uname: (_) @function.method.call)))
(xml_tag (xml_name (xml_qname ":" @operator)))
(xml_tag (xml_attr
  key: (_) @label
  value: (_) @variable.parameter))
; bug(jinser): `xmlns` is not a token
; (decl_xmlns name: "xmlns" @keyword)
(decl_xmlns name: (_) @module
            ns: (_) @markup.link)

; special markup
(p (text) @spell)
(li (text) @spell)
(em (text) @spell @markup.italic)
(strong (text) @spell @markup.strong)
(markdown_link label: (text) @spell)
(method_decl value: (method_body (text) @spell))

; TODO(jinser): query (code) and (pre) as @markup.raw
