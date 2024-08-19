#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
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
#define STATE_COUNT 211
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 141
#define ALIAS_COUNT 1
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 20
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 19

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_BSLASH = 7,
  anon_sym_title = 8,
  anon_sym_author = 9,
  anon_sym_contributor = 10,
  anon_sym_date = 11,
  anon_sym_DASH = 12,
  anon_sym_tag = 13,
  anon_sym_ref = 14,
  anon_sym_taxon = 15,
  anon_sym_meta = 16,
  anon_sym_BSLASH_LT = 17,
  anon_sym_GT = 18,
  anon_sym_BSLASHxmlns_COLON = 19,
  aux_sym_xml_base_ident_token1 = 20,
  anon_sym_COLON = 21,
  sym_year = 22,
  sym_month = 23,
  aux_sym_day_token1 = 24,
  aux_sym_day_token2 = 25,
  anon_sym_def = 26,
  anon_sym_alloc = 27,
  anon_sym_import = 28,
  anon_sym_export = 29,
  anon_sym_namespace = 30,
  anon_sym_transclude = 31,
  anon_sym_let = 32,
  anon_sym_tex = 33,
  anon_sym_scope = 34,
  anon_sym_subtree = 35,
  anon_sym_put = 36,
  anon_sym_get = 37,
  anon_sym_open = 38,
  anon_sym_query = 39,
  anon_sym_object = 40,
  anon_sym_patch = 41,
  anon_sym_call = 42,
  sym_comment = 43,
  anon_sym_POUND = 44,
  anon_sym_POUND_POUND = 45,
  anon_sym_p = 46,
  anon_sym_em = 47,
  anon_sym_strong = 48,
  anon_sym_li = 49,
  anon_sym_ul = 50,
  anon_sym_ol = 51,
  anon_sym_code = 52,
  anon_sym_blockquote = 53,
  anon_sym_pre = 54,
  anon_sym_LBRACE_RBRACE = 55,
  anon_sym__ = 56,
  anon_sym_LBRACK_LBRACK = 57,
  anon_sym_RBRACK_RBRACK = 58,
  aux_sym__whitespace_token1 = 59,
  sym__alpha = 60,
  sym__digit = 61,
  sym_text = 62,
  sym_source_file = 63,
  sym__node = 64,
  sym__braces = 65,
  sym__squares = 66,
  sym__parens = 67,
  sym__meta = 68,
  sym_title = 69,
  sym_author = 70,
  sym_contributor = 71,
  sym_date = 72,
  sym_tag = 73,
  sym_ref = 74,
  sym_taxon = 75,
  sym_meta = 76,
  sym_xml_tag = 77,
  sym_xml_name = 78,
  sym_xml_attr = 79,
  sym_xml_body = 80,
  sym_decl_xmlns = 81,
  sym_xml_base_ident = 82,
  sym_xml_qname = 83,
  sym_day = 84,
  sym_def = 85,
  sym_alloc = 86,
  sym_import = 87,
  sym_export = 88,
  sym_namespace = 89,
  sym_transclude = 90,
  sym_let = 91,
  sym_tex = 92,
  sym_scope = 93,
  sym_subtree = 94,
  sym_put = 95,
  sym_get = 96,
  sym_open = 97,
  sym_query_tree = 98,
  sym__default = 99,
  sym_object = 100,
  sym_patch = 101,
  sym_call = 102,
  sym__prim = 103,
  sym_inline_math = 104,
  sym_display_math = 105,
  sym_p = 106,
  sym_em = 107,
  sym_strong = 108,
  sym_li = 109,
  sym_ul = 110,
  sym_ol = 111,
  sym_code = 112,
  sym_blockquote = 113,
  sym_pre = 114,
  sym_method_decl = 115,
  sym_fun_spec = 116,
  sym_ident = 117,
  sym_ident_with_method_calls = 118,
  sym__arg = 119,
  sym__opt_arg = 120,
  sym__link = 121,
  sym_addr = 122,
  sym_id = 123,
  sym_prefix = 124,
  sym_markdown_link = 125,
  sym_unlabeled_link = 126,
  sym_external_link = 127,
  sym__whitespace = 128,
  sym__txt_arg = 129,
  aux_sym_source_file_repeat1 = 130,
  aux_sym__braces_repeat1 = 131,
  aux_sym_xml_tag_repeat1 = 132,
  aux_sym_xml_base_ident_repeat1 = 133,
  aux_sym_object_repeat1 = 134,
  aux_sym_fun_spec_repeat1 = 135,
  aux_sym_ident_repeat1 = 136,
  aux_sym_ident_with_method_calls_repeat1 = 137,
  aux_sym__arg_repeat1 = 138,
  aux_sym_id_repeat1 = 139,
  aux_sym_prefix_repeat1 = 140,
  alias_sym_method_body = 141,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_title] = "title",
  [anon_sym_author] = "author",
  [anon_sym_contributor] = "contributor",
  [anon_sym_date] = "date",
  [anon_sym_DASH] = "-",
  [anon_sym_tag] = "tag",
  [anon_sym_ref] = "ref",
  [anon_sym_taxon] = "taxon",
  [anon_sym_meta] = "meta",
  [anon_sym_BSLASH_LT] = "\\<",
  [anon_sym_GT] = ">",
  [anon_sym_BSLASHxmlns_COLON] = "\\xmlns:",
  [aux_sym_xml_base_ident_token1] = "xml_base_ident_token1",
  [anon_sym_COLON] = ":",
  [sym_year] = "year",
  [sym_month] = "month",
  [aux_sym_day_token1] = "day_token1",
  [aux_sym_day_token2] = "day_token2",
  [anon_sym_def] = "def",
  [anon_sym_alloc] = "alloc",
  [anon_sym_import] = "import",
  [anon_sym_export] = "export",
  [anon_sym_namespace] = "namespace",
  [anon_sym_transclude] = "transclude",
  [anon_sym_let] = "let",
  [anon_sym_tex] = "tex",
  [anon_sym_scope] = "scope",
  [anon_sym_subtree] = "subtree",
  [anon_sym_put] = "put",
  [anon_sym_get] = "get",
  [anon_sym_open] = "open",
  [anon_sym_query] = "query",
  [anon_sym_object] = "object",
  [anon_sym_patch] = "patch",
  [anon_sym_call] = "call",
  [sym_comment] = "comment",
  [anon_sym_POUND] = "#",
  [anon_sym_POUND_POUND] = "##",
  [anon_sym_p] = "p",
  [anon_sym_em] = "em",
  [anon_sym_strong] = "strong",
  [anon_sym_li] = "li",
  [anon_sym_ul] = "ul",
  [anon_sym_ol] = "ol",
  [anon_sym_code] = "code",
  [anon_sym_blockquote] = "blockquote",
  [anon_sym_pre] = "pre",
  [anon_sym_LBRACE_RBRACE] = "{}",
  [anon_sym__] = "_",
  [anon_sym_LBRACK_LBRACK] = "[[",
  [anon_sym_RBRACK_RBRACK] = "]]",
  [aux_sym__whitespace_token1] = "_whitespace_token1",
  [sym__alpha] = "_alpha",
  [sym__digit] = "_digit",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym__node] = "_node",
  [sym__braces] = "_braces",
  [sym__squares] = "_squares",
  [sym__parens] = "_parens",
  [sym__meta] = "_meta",
  [sym_title] = "title",
  [sym_author] = "author",
  [sym_contributor] = "contributor",
  [sym_date] = "date",
  [sym_tag] = "tag",
  [sym_ref] = "ref",
  [sym_taxon] = "taxon",
  [sym_meta] = "meta",
  [sym_xml_tag] = "xml_tag",
  [sym_xml_name] = "xml_name",
  [sym_xml_attr] = "xml_attr",
  [sym_xml_body] = "xml_body",
  [sym_decl_xmlns] = "decl_xmlns",
  [sym_xml_base_ident] = "xml_base_ident",
  [sym_xml_qname] = "xml_qname",
  [sym_day] = "day",
  [sym_def] = "def",
  [sym_alloc] = "alloc",
  [sym_import] = "import",
  [sym_export] = "export",
  [sym_namespace] = "namespace",
  [sym_transclude] = "transclude",
  [sym_let] = "let",
  [sym_tex] = "tex",
  [sym_scope] = "scope",
  [sym_subtree] = "subtree",
  [sym_put] = "put",
  [sym_get] = "get",
  [sym_open] = "open",
  [sym_query_tree] = "query_tree",
  [sym__default] = "_default",
  [sym_object] = "object",
  [sym_patch] = "patch",
  [sym_call] = "call",
  [sym__prim] = "_prim",
  [sym_inline_math] = "inline_math",
  [sym_display_math] = "display_math",
  [sym_p] = "p",
  [sym_em] = "em",
  [sym_strong] = "strong",
  [sym_li] = "li",
  [sym_ul] = "ul",
  [sym_ol] = "ol",
  [sym_code] = "code",
  [sym_blockquote] = "blockquote",
  [sym_pre] = "pre",
  [sym_method_decl] = "method_decl",
  [sym_fun_spec] = "fun_spec",
  [sym_ident] = "ident",
  [sym_ident_with_method_calls] = "ident_with_method_calls",
  [sym__arg] = "_arg",
  [sym__opt_arg] = "_opt_arg",
  [sym__link] = "_link",
  [sym_addr] = "addr",
  [sym_id] = "id",
  [sym_prefix] = "prefix",
  [sym_markdown_link] = "markdown_link",
  [sym_unlabeled_link] = "unlabeled_link",
  [sym_external_link] = "external_link",
  [sym__whitespace] = "_whitespace",
  [sym__txt_arg] = "_txt_arg",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__braces_repeat1] = "_braces_repeat1",
  [aux_sym_xml_tag_repeat1] = "xml_tag_repeat1",
  [aux_sym_xml_base_ident_repeat1] = "xml_base_ident_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_fun_spec_repeat1] = "fun_spec_repeat1",
  [aux_sym_ident_repeat1] = "ident_repeat1",
  [aux_sym_ident_with_method_calls_repeat1] = "ident_with_method_calls_repeat1",
  [aux_sym__arg_repeat1] = "_arg_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [aux_sym_prefix_repeat1] = "prefix_repeat1",
  [alias_sym_method_body] = "method_body",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_contributor] = anon_sym_contributor,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_tag] = anon_sym_tag,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_taxon] = anon_sym_taxon,
  [anon_sym_meta] = anon_sym_meta,
  [anon_sym_BSLASH_LT] = anon_sym_BSLASH_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_BSLASHxmlns_COLON] = anon_sym_BSLASHxmlns_COLON,
  [aux_sym_xml_base_ident_token1] = aux_sym_xml_base_ident_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_year] = sym_year,
  [sym_month] = sym_month,
  [aux_sym_day_token1] = aux_sym_day_token1,
  [aux_sym_day_token2] = aux_sym_day_token2,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_alloc] = anon_sym_alloc,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_transclude] = anon_sym_transclude,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_tex] = anon_sym_tex,
  [anon_sym_scope] = anon_sym_scope,
  [anon_sym_subtree] = anon_sym_subtree,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_get] = anon_sym_get,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_object] = anon_sym_object,
  [anon_sym_patch] = anon_sym_patch,
  [anon_sym_call] = anon_sym_call,
  [sym_comment] = sym_comment,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_POUND_POUND] = anon_sym_POUND_POUND,
  [anon_sym_p] = anon_sym_p,
  [anon_sym_em] = anon_sym_em,
  [anon_sym_strong] = anon_sym_strong,
  [anon_sym_li] = anon_sym_li,
  [anon_sym_ul] = anon_sym_ul,
  [anon_sym_ol] = anon_sym_ol,
  [anon_sym_code] = anon_sym_code,
  [anon_sym_blockquote] = anon_sym_blockquote,
  [anon_sym_pre] = anon_sym_pre,
  [anon_sym_LBRACE_RBRACE] = anon_sym_LBRACE_RBRACE,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACK_LBRACK] = anon_sym_LBRACK_LBRACK,
  [anon_sym_RBRACK_RBRACK] = anon_sym_RBRACK_RBRACK,
  [aux_sym__whitespace_token1] = aux_sym__whitespace_token1,
  [sym__alpha] = sym__alpha,
  [sym__digit] = sym__digit,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym__node] = sym__node,
  [sym__braces] = sym__braces,
  [sym__squares] = sym__squares,
  [sym__parens] = sym__parens,
  [sym__meta] = sym__meta,
  [sym_title] = sym_title,
  [sym_author] = sym_author,
  [sym_contributor] = sym_contributor,
  [sym_date] = sym_date,
  [sym_tag] = sym_tag,
  [sym_ref] = sym_ref,
  [sym_taxon] = sym_taxon,
  [sym_meta] = sym_meta,
  [sym_xml_tag] = sym_xml_tag,
  [sym_xml_name] = sym_xml_name,
  [sym_xml_attr] = sym_xml_attr,
  [sym_xml_body] = sym_xml_body,
  [sym_decl_xmlns] = sym_decl_xmlns,
  [sym_xml_base_ident] = sym_xml_base_ident,
  [sym_xml_qname] = sym_xml_qname,
  [sym_day] = sym_day,
  [sym_def] = sym_def,
  [sym_alloc] = sym_alloc,
  [sym_import] = sym_import,
  [sym_export] = sym_export,
  [sym_namespace] = sym_namespace,
  [sym_transclude] = sym_transclude,
  [sym_let] = sym_let,
  [sym_tex] = sym_tex,
  [sym_scope] = sym_scope,
  [sym_subtree] = sym_subtree,
  [sym_put] = sym_put,
  [sym_get] = sym_get,
  [sym_open] = sym_open,
  [sym_query_tree] = sym_query_tree,
  [sym__default] = sym__default,
  [sym_object] = sym_object,
  [sym_patch] = sym_patch,
  [sym_call] = sym_call,
  [sym__prim] = sym__prim,
  [sym_inline_math] = sym_inline_math,
  [sym_display_math] = sym_display_math,
  [sym_p] = sym_p,
  [sym_em] = sym_em,
  [sym_strong] = sym_strong,
  [sym_li] = sym_li,
  [sym_ul] = sym_ul,
  [sym_ol] = sym_ol,
  [sym_code] = sym_code,
  [sym_blockquote] = sym_blockquote,
  [sym_pre] = sym_pre,
  [sym_method_decl] = sym_method_decl,
  [sym_fun_spec] = sym_fun_spec,
  [sym_ident] = sym_ident,
  [sym_ident_with_method_calls] = sym_ident_with_method_calls,
  [sym__arg] = sym__arg,
  [sym__opt_arg] = sym__opt_arg,
  [sym__link] = sym__link,
  [sym_addr] = sym_addr,
  [sym_id] = sym_id,
  [sym_prefix] = sym_prefix,
  [sym_markdown_link] = sym_markdown_link,
  [sym_unlabeled_link] = sym_unlabeled_link,
  [sym_external_link] = sym_external_link,
  [sym__whitespace] = sym__whitespace,
  [sym__txt_arg] = sym__txt_arg,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__braces_repeat1] = aux_sym__braces_repeat1,
  [aux_sym_xml_tag_repeat1] = aux_sym_xml_tag_repeat1,
  [aux_sym_xml_base_ident_repeat1] = aux_sym_xml_base_ident_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_fun_spec_repeat1] = aux_sym_fun_spec_repeat1,
  [aux_sym_ident_repeat1] = aux_sym_ident_repeat1,
  [aux_sym_ident_with_method_calls_repeat1] = aux_sym_ident_with_method_calls_repeat1,
  [aux_sym__arg_repeat1] = aux_sym__arg_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [aux_sym_prefix_repeat1] = aux_sym_prefix_repeat1,
  [alias_sym_method_body] = alias_sym_method_body,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contributor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_taxon] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_meta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHxmlns_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_xml_base_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_year] = {
    .visible = true,
    .named = true,
  },
  [sym_month] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_day_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_day_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tex] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scope] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subtree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_get] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_object] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_patch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_p] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_em] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_li] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ul] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_code] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_blockquote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pre] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__whitespace_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__alpha] = {
    .visible = false,
    .named = true,
  },
  [sym__digit] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym__braces] = {
    .visible = false,
    .named = true,
  },
  [sym__squares] = {
    .visible = false,
    .named = true,
  },
  [sym__parens] = {
    .visible = false,
    .named = true,
  },
  [sym__meta] = {
    .visible = false,
    .named = true,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_author] = {
    .visible = true,
    .named = true,
  },
  [sym_contributor] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_taxon] = {
    .visible = true,
    .named = true,
  },
  [sym_meta] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_name] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_body] = {
    .visible = true,
    .named = true,
  },
  [sym_decl_xmlns] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_base_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_xml_qname] = {
    .visible = true,
    .named = true,
  },
  [sym_day] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_alloc] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_export] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_transclude] = {
    .visible = true,
    .named = true,
  },
  [sym_let] = {
    .visible = true,
    .named = true,
  },
  [sym_tex] = {
    .visible = true,
    .named = true,
  },
  [sym_scope] = {
    .visible = true,
    .named = true,
  },
  [sym_subtree] = {
    .visible = true,
    .named = true,
  },
  [sym_put] = {
    .visible = true,
    .named = true,
  },
  [sym_get] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_query_tree] = {
    .visible = true,
    .named = true,
  },
  [sym__default] = {
    .visible = false,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_patch] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym__prim] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_display_math] = {
    .visible = true,
    .named = true,
  },
  [sym_p] = {
    .visible = true,
    .named = true,
  },
  [sym_em] = {
    .visible = true,
    .named = true,
  },
  [sym_strong] = {
    .visible = true,
    .named = true,
  },
  [sym_li] = {
    .visible = true,
    .named = true,
  },
  [sym_ul] = {
    .visible = true,
    .named = true,
  },
  [sym_ol] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_blockquote] = {
    .visible = true,
    .named = true,
  },
  [sym_pre] = {
    .visible = true,
    .named = true,
  },
  [sym_method_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_ident_with_method_calls] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym__opt_arg] = {
    .visible = false,
    .named = true,
  },
  [sym__link] = {
    .visible = false,
    .named = true,
  },
  [sym_addr] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix] = {
    .visible = true,
    .named = true,
  },
  [sym_markdown_link] = {
    .visible = true,
    .named = true,
  },
  [sym_unlabeled_link] = {
    .visible = true,
    .named = true,
  },
  [sym_external_link] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym__txt_arg] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__braces_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_xml_base_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_fun_spec_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ident_with_method_calls_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__arg_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_id_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_prefix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_method_body] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_address = 1,
  field_argument = 2,
  field_author = 3,
  field_binder = 4,
  field_contributor = 5,
  field_date = 6,
  field_dest = 7,
  field_id = 8,
  field_identifier = 9,
  field_key = 10,
  field_label = 11,
  field_name = 12,
  field_ns = 13,
  field_object = 14,
  field_prefix = 15,
  field_ref = 16,
  field_self = 17,
  field_tag = 18,
  field_uname = 19,
  field_value = 20,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_argument] = "argument",
  [field_author] = "author",
  [field_binder] = "binder",
  [field_contributor] = "contributor",
  [field_date] = "date",
  [field_dest] = "dest",
  [field_id] = "id",
  [field_identifier] = "identifier",
  [field_key] = "key",
  [field_label] = "label",
  [field_name] = "name",
  [field_ns] = "ns",
  [field_object] = "object",
  [field_prefix] = "prefix",
  [field_ref] = "ref",
  [field_self] = "self",
  [field_tag] = "tag",
  [field_uname] = "uname",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
  [2] = {.index = 3, .length = 3},
  [3] = {.index = 6, .length = 3},
  [4] = {.index = 9, .length = 3},
  [5] = {.index = 12, .length = 3},
  [6] = {.index = 15, .length = 2},
  [7] = {.index = 17, .length = 2},
  [8] = {.index = 19, .length = 2},
  [9] = {.index = 21, .length = 2},
  [10] = {.index = 23, .length = 2},
  [11] = {.index = 25, .length = 3},
  [12] = {.index = 28, .length = 1},
  [13] = {.index = 29, .length = 4},
  [14] = {.index = 33, .length = 6},
  [15] = {.index = 39, .length = 3},
  [16] = {.index = 42, .length = 9},
  [17] = {.index = 51, .length = 4},
  [18] = {.index = 29, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_author, 0},
    {field_author, 1},
    {field_author, 2},
  [3] =
    {field_contributor, 0},
    {field_contributor, 1},
    {field_contributor, 2},
  [6] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
  [9] =
    {field_tag, 0},
    {field_tag, 1},
    {field_tag, 2},
  [12] =
    {field_ref, 0},
    {field_ref, 1},
    {field_ref, 2},
  [15] =
    {field_name, 1},
    {field_ns, 2},
  [17] =
    {field_argument, 1},
    {field_identifier, 0},
  [19] =
    {field_argument, 3},
    {field_identifier, 2},
  [21] =
    {field_prefix, 0},
    {field_uname, 2},
  [23] =
    {field_id, 2},
    {field_prefix, 0},
  [25] =
    {field_argument, 2},
    {field_binder, 1},
    {field_identifier, 0},
  [28] =
    {field_address, 3},
  [29] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
  [33] =
    {field_dest, 3},
    {field_dest, 4},
    {field_dest, 5},
    {field_label, 0},
    {field_label, 1},
    {field_label, 2},
  [39] =
    {field_self, 2},
    {field_self, 3},
    {field_self, 4},
  [42] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
    {field_date, 3},
    {field_date, 4},
    {field_date, 5},
    {field_date, 6},
    {field_date, 7},
    {field_date, 8},
  [51] =
    {field_object, 2},
    {field_self, 3},
    {field_self, 4},
    {field_self, 5},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [18] = {
    [3] = alias_sym_method_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__arg, 2,
    sym__arg,
    alias_sym_method_body,
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
  [9] = 4,
  [10] = 4,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 14,
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
  [96] = 91,
  [97] = 85,
  [98] = 86,
  [99] = 99,
  [100] = 21,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 24,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 23,
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
  [122] = 33,
  [123] = 123,
  [124] = 33,
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
  [141] = 42,
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
  [197] = 118,
  [198] = 198,
  [199] = 31,
  [200] = 200,
  [201] = 201,
  [202] = 175,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 205,
  [208] = 195,
  [209] = 185,
  [210] = 210,
};

static TSCharacterRange sym_text_character_set_1[] = {
  {0, '\t'}, {0x0b, '\f'}, {0x0e, '"'}, {'$', '$'}, {'&', '\''}, {'*', 'Z'}, {'^', 'z'}, {'|', '|'},
  {'~', 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '#', 116,
        '%', 115,
        '(', 50,
        ')', 51,
        '-', 62,
        '/', 74,
        ':', 75,
        '>', 72,
        '[', 48,
        '\\', 53,
        ']', 49,
        '_', 147,
        'a', 204,
        'b', 197,
        'c', 156,
        'd', 154,
        'e', 205,
        'g', 183,
        'i', 207,
        'l', 184,
        'm', 186,
        'n', 153,
        'o', 158,
        'p', 119,
        'q', 253,
        'r', 181,
        's', 163,
        't', 151,
        'u', 198,
        '{', 45,
        '}', 46,
      );
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(116);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(375);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ')', 51,
        '-', 62,
        '[', 47,
        '\\', 52,
        ']', 9,
        'b', 22,
        'c', 27,
        'e', 24,
        'l', 17,
        'o', 20,
        'p', 121,
        's', 34,
        'u', 21,
        '{', 44,
        '}', 46,
      );
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(51);
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == '{') ADVANCE(45);
      if (lookahead == '}') ADVANCE(46);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(62);
      if (lookahead == ']') ADVANCE(49);
      if (lookahead == '_') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(75);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 8:
      if (lookahead == '[') ADVANCE(47);
      if (lookahead == '}') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(149);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        'a', 315,
        'b', 308,
        'c', 267,
        'd', 265,
        'e', 316,
        'g', 294,
        'i', 318,
        'l', 295,
        'm', 297,
        'n', 264,
        'o', 269,
        'p', 120,
        'q', 364,
        'r', 292,
        's', 274,
        't', 262,
        'u', 309,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(375);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 18:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'q') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(37);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || ']' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(375);
      END_STATE();
    case 38:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(375);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 40:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 41:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '#', 117,
        '%', 115,
        '(', 50,
        ')', 51,
        '[', 48,
        '\\', 53,
        ']', 49,
        '{', 45,
        '}', 46,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 42:
      if (eof) ADVANCE(43);
      ADVANCE_MAP(
        '#', 117,
        '%', 115,
        '(', 50,
        ')', 51,
        '[', 48,
        '\\', 53,
        ']', 49,
        '{', 44,
        '}', 46,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(42);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(369);
      if (lookahead != 0) ADVANCE(375);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(146);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(148);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_title);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_author);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_contributor);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_date);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_tag);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ref);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_taxon);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_meta);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_BSLASHxmlns_COLON);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_xml_base_ident_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_year);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_month);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_month);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_def);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_def);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_alloc);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_import);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_export);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_namespace);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_transclude);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_let);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_tex);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_scope);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_subtree);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_put);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_get);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_open);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_query);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_object);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_patch);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_call);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(282);
      if (lookahead == 'u') ADVANCE(351);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_em);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_strong);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_li);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_ul);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ol);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_code);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_pre);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'i') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(200);
      if (lookahead == 'o') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(135);
      if (lookahead == 'p') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 't') ADVANCE(231);
      if (lookahead == 'u') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(180);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'i') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'i') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'j') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'k') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(203);
      if (lookahead == 'u') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 'x') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(250);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'q') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(169);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        'a', 315,
        'b', 308,
        'c', 267,
        'd', 265,
        'e', 316,
        'g', 294,
        'i', 318,
        'l', 295,
        'm', 297,
        'n', 264,
        'o', 269,
        'p', 120,
        'q', 364,
        'r', 292,
        's', 274,
        't', 262,
        'u', 309,
        '\t', 261,
        0x0b, 261,
        '\f', 261,
        ' ', 261,
      );
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == 'e') ADVANCE(367);
      if (lookahead == 'i') ADVANCE(358);
      if (lookahead == 'r') ADVANCE(266);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(70);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(317);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead == 'e') ADVANCE(299);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(322);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(311);
      if (lookahead == 'o') ADVANCE(279);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(278);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(306);
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(281);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(366);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(359);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(307);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(84);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(324);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead == 'u') ADVANCE(271);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(303);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(312);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(354);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(289);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(283);
      if (lookahead == 'n') ADVANCE(357);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(291);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(319);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(145);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(139);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(61);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(346);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(98);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(55);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(100);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(90);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(142);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(92);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(300);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(338);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(349);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead == 'i') ADVANCE(130);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(277);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(356);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(288);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(82);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(66);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(64);
      if (lookahead == 'x') ADVANCE(328);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(127);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(112);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(329);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(270);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'j') ADVANCE(296);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'k') ADVANCE(337);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(323);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(133);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(114);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(310);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(363);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(287);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(325);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == 'u') ADVANCE(348);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(124);
      if (lookahead == 'x') ADVANCE(333);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(285);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(336);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(106);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(302);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(68);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(347);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(272);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(335);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(273);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(320);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(343);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(321);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(340);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(341);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(361);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(345);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(327);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(268);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(286);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(332);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q') ADVANCE(365);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(368);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(305);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(57);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(59);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(326);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(352);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(298);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(353);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(334);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(276);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(304);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(104);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(94);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(102);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(88);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(86);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(110);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(275);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(263);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(339);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(313);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(344);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(284);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(290);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(330);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(280);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(293);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(331);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(362);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(96);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(108);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(369);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(374);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(372);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_text);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(375);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 42},
  [2] = {.lex_state = 42},
  [3] = {.lex_state = 42},
  [4] = {.lex_state = 42},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 42},
  [7] = {.lex_state = 42},
  [8] = {.lex_state = 42},
  [9] = {.lex_state = 42},
  [10] = {.lex_state = 42},
  [11] = {.lex_state = 42},
  [12] = {.lex_state = 42},
  [13] = {.lex_state = 42},
  [14] = {.lex_state = 42},
  [15] = {.lex_state = 42},
  [16] = {.lex_state = 42},
  [17] = {.lex_state = 42},
  [18] = {.lex_state = 42},
  [19] = {.lex_state = 42},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 42},
  [24] = {.lex_state = 42},
  [25] = {.lex_state = 42},
  [26] = {.lex_state = 42},
  [27] = {.lex_state = 42},
  [28] = {.lex_state = 42},
  [29] = {.lex_state = 42},
  [30] = {.lex_state = 42},
  [31] = {.lex_state = 42},
  [32] = {.lex_state = 42},
  [33] = {.lex_state = 42},
  [34] = {.lex_state = 42},
  [35] = {.lex_state = 42},
  [36] = {.lex_state = 42},
  [37] = {.lex_state = 42},
  [38] = {.lex_state = 42},
  [39] = {.lex_state = 42},
  [40] = {.lex_state = 42},
  [41] = {.lex_state = 42},
  [42] = {.lex_state = 42},
  [43] = {.lex_state = 42},
  [44] = {.lex_state = 42},
  [45] = {.lex_state = 42},
  [46] = {.lex_state = 42},
  [47] = {.lex_state = 42},
  [48] = {.lex_state = 42},
  [49] = {.lex_state = 42},
  [50] = {.lex_state = 42},
  [51] = {.lex_state = 42},
  [52] = {.lex_state = 42},
  [53] = {.lex_state = 42},
  [54] = {.lex_state = 42},
  [55] = {.lex_state = 42},
  [56] = {.lex_state = 42},
  [57] = {.lex_state = 42},
  [58] = {.lex_state = 42},
  [59] = {.lex_state = 42},
  [60] = {.lex_state = 42},
  [61] = {.lex_state = 42},
  [62] = {.lex_state = 42},
  [63] = {.lex_state = 42},
  [64] = {.lex_state = 42},
  [65] = {.lex_state = 42},
  [66] = {.lex_state = 42},
  [67] = {.lex_state = 42},
  [68] = {.lex_state = 42},
  [69] = {.lex_state = 42},
  [70] = {.lex_state = 42},
  [71] = {.lex_state = 42},
  [72] = {.lex_state = 42},
  [73] = {.lex_state = 42},
  [74] = {.lex_state = 42},
  [75] = {.lex_state = 42},
  [76] = {.lex_state = 42},
  [77] = {.lex_state = 42},
  [78] = {.lex_state = 42},
  [79] = {.lex_state = 42},
  [80] = {.lex_state = 42},
  [81] = {.lex_state = 42},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 37},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 8},
  [103] = {.lex_state = 37},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 3},
  [107] = {.lex_state = 3},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 3},
  [112] = {.lex_state = 2},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 2},
  [115] = {.lex_state = 3},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 2},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 3},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 3},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 2},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 2},
  [129] = {.lex_state = 2},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 2},
  [132] = {.lex_state = 2},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 2},
  [135] = {.lex_state = 2},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 2},
  [139] = {.lex_state = 2},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 2},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 2},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 2},
  [147] = {.lex_state = 2},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 38},
  [150] = {.lex_state = 2},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 2},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 2},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 42},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 42},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 42},
  [179] = {.lex_state = 42},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 39},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 42},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 42},
  [190] = {.lex_state = 42},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 2},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 42},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 2},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 2},
  [209] = {.lex_state = 42},
  [210] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_contributor] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_tag] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_taxon] = ACTIONS(1),
    [anon_sym_meta] = ACTIONS(1),
    [anon_sym_BSLASH_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_BSLASHxmlns_COLON] = ACTIONS(1),
    [aux_sym_xml_base_ident_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_day_token1] = ACTIONS(1),
    [aux_sym_day_token2] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_alloc] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_transclude] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_tex] = ACTIONS(1),
    [anon_sym_scope] = ACTIONS(1),
    [anon_sym_subtree] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_get] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_object] = ACTIONS(1),
    [anon_sym_patch] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_p] = ACTIONS(1),
    [anon_sym_em] = ACTIONS(1),
    [anon_sym_strong] = ACTIONS(1),
    [anon_sym_li] = ACTIONS(1),
    [anon_sym_ul] = ACTIONS(1),
    [anon_sym_ol] = ACTIONS(1),
    [anon_sym_code] = ACTIONS(1),
    [anon_sym_blockquote] = ACTIONS(1),
    [anon_sym_pre] = ACTIONS(1),
    [anon_sym_LBRACE_RBRACE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(1),
    [sym__alpha] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(194),
    [sym__node] = STATE(13),
    [sym__braces] = STATE(13),
    [sym__squares] = STATE(13),
    [sym__parens] = STATE(13),
    [sym__meta] = STATE(13),
    [sym_title] = STATE(13),
    [sym_author] = STATE(13),
    [sym_contributor] = STATE(13),
    [sym_date] = STATE(13),
    [sym_tag] = STATE(13),
    [sym_ref] = STATE(13),
    [sym_taxon] = STATE(13),
    [sym_meta] = STATE(13),
    [sym_xml_tag] = STATE(13),
    [sym_xml_name] = STATE(92),
    [sym_decl_xmlns] = STATE(13),
    [sym_def] = STATE(13),
    [sym_alloc] = STATE(13),
    [sym_import] = STATE(13),
    [sym_export] = STATE(13),
    [sym_namespace] = STATE(13),
    [sym_transclude] = STATE(13),
    [sym_let] = STATE(13),
    [sym_tex] = STATE(13),
    [sym_scope] = STATE(13),
    [sym_subtree] = STATE(13),
    [sym_put] = STATE(13),
    [sym_get] = STATE(13),
    [sym_open] = STATE(13),
    [sym_query_tree] = STATE(13),
    [sym__default] = STATE(13),
    [sym_object] = STATE(13),
    [sym_patch] = STATE(13),
    [sym_call] = STATE(13),
    [sym__prim] = STATE(13),
    [sym_inline_math] = STATE(13),
    [sym_display_math] = STATE(13),
    [sym_p] = STATE(13),
    [sym_em] = STATE(13),
    [sym_strong] = STATE(13),
    [sym_li] = STATE(13),
    [sym_ul] = STATE(13),
    [sym_ol] = STATE(13),
    [sym_code] = STATE(13),
    [sym_blockquote] = STATE(13),
    [sym_pre] = STATE(13),
    [sym_ident] = STATE(13),
    [sym_ident_with_method_calls] = STATE(13),
    [sym__link] = STATE(13),
    [sym_markdown_link] = STATE(13),
    [sym_unlabeled_link] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACE] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_BSLASH] = ACTIONS(11),
    [anon_sym_BSLASH_LT] = ACTIONS(13),
    [anon_sym_BSLASHxmlns_COLON] = ACTIONS(15),
    [sym_comment] = ACTIONS(17),
    [anon_sym_POUND] = ACTIONS(19),
    [anon_sym_POUND_POUND] = ACTIONS(21),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(23),
    [sym_text] = ACTIONS(25),
  },
  [2] = {
    [sym__node] = STATE(2),
    [sym__braces] = STATE(2),
    [sym__squares] = STATE(2),
    [sym__parens] = STATE(2),
    [sym__meta] = STATE(2),
    [sym_title] = STATE(2),
    [sym_author] = STATE(2),
    [sym_contributor] = STATE(2),
    [sym_date] = STATE(2),
    [sym_tag] = STATE(2),
    [sym_ref] = STATE(2),
    [sym_taxon] = STATE(2),
    [sym_meta] = STATE(2),
    [sym_xml_tag] = STATE(2),
    [sym_xml_name] = STATE(92),
    [sym_decl_xmlns] = STATE(2),
    [sym_def] = STATE(2),
    [sym_alloc] = STATE(2),
    [sym_import] = STATE(2),
    [sym_export] = STATE(2),
    [sym_namespace] = STATE(2),
    [sym_transclude] = STATE(2),
    [sym_let] = STATE(2),
    [sym_tex] = STATE(2),
    [sym_scope] = STATE(2),
    [sym_subtree] = STATE(2),
    [sym_put] = STATE(2),
    [sym_get] = STATE(2),
    [sym_open] = STATE(2),
    [sym_query_tree] = STATE(2),
    [sym__default] = STATE(2),
    [sym_object] = STATE(2),
    [sym_patch] = STATE(2),
    [sym_call] = STATE(2),
    [sym__prim] = STATE(2),
    [sym_inline_math] = STATE(2),
    [sym_display_math] = STATE(2),
    [sym_p] = STATE(2),
    [sym_em] = STATE(2),
    [sym_strong] = STATE(2),
    [sym_li] = STATE(2),
    [sym_ul] = STATE(2),
    [sym_ol] = STATE(2),
    [sym_code] = STATE(2),
    [sym_blockquote] = STATE(2),
    [sym_pre] = STATE(2),
    [sym_ident] = STATE(2),
    [sym_ident_with_method_calls] = STATE(2),
    [sym__link] = STATE(2),
    [sym_markdown_link] = STATE(2),
    [sym_unlabeled_link] = STATE(2),
    [aux_sym__braces_repeat1] = STATE(2),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(30),
    [anon_sym_LBRACK] = ACTIONS(32),
    [anon_sym_RBRACK] = ACTIONS(30),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(30),
    [anon_sym_BSLASH] = ACTIONS(38),
    [anon_sym_BSLASH_LT] = ACTIONS(41),
    [anon_sym_BSLASHxmlns_COLON] = ACTIONS(44),
    [sym_comment] = ACTIONS(47),
    [anon_sym_POUND] = ACTIONS(50),
    [anon_sym_POUND_POUND] = ACTIONS(53),
    [anon_sym_LBRACK_LBRACK] = ACTIONS(56),
    [sym_text] = ACTIONS(59),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(2), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__braces_repeat1,
  [93] = 14,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(5), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [186] = 14,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 1,
      anon_sym_BSLASH,
    ACTIONS(88), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(91), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(94), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_POUND,
    ACTIONS(100), 1,
      anon_sym_POUND_POUND,
    ACTIONS(103), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(106), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(5), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [279] = 14,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_text,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(92), 1,
      sym_xml_name,
    STATE(2), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__braces_repeat1,
  [372] = 14,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_xml_name,
    STATE(5), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [465] = 14,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_text,
    ACTIONS(113), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_xml_name,
    STATE(2), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__braces_repeat1,
  [558] = 14,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_xml_name,
    STATE(5), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [651] = 14,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(70), 1,
      sym_comment,
    ACTIONS(72), 1,
      sym_text,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym_xml_name,
    STATE(5), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [744] = 14,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(119), 1,
      anon_sym_RBRACE,
    ACTIONS(121), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(7), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [837] = 14,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(127), 1,
      anon_sym_LBRACE,
    ACTIONS(130), 1,
      anon_sym_LBRACK,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_BSLASH,
    ACTIONS(139), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(142), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(145), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_POUND,
    ACTIONS(151), 1,
      anon_sym_POUND_POUND,
    ACTIONS(154), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(157), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(12), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_source_file_repeat1,
  [930] = 14,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(12), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym_source_file_repeat1,
  [1023] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(166), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(9), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [1113] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(170), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(3), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__braces_repeat1,
  [1203] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(174), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(10), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [1293] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(178), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(4), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__arg_repeat1,
  [1383] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(182), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(6), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__braces_repeat1,
  [1473] = 13,
    ACTIONS(5), 1,
      anon_sym_LBRACE,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BSLASH,
    ACTIONS(13), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(15), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_POUND_POUND,
    ACTIONS(23), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(186), 1,
      sym_comment,
    ACTIONS(188), 1,
      sym_text,
    STATE(92), 1,
      sym_xml_name,
    STATE(8), 51,
      sym__node,
      sym__braces,
      sym__squares,
      sym__parens,
      sym__meta,
      sym_title,
      sym_author,
      sym_contributor,
      sym_date,
      sym_tag,
      sym_ref,
      sym_taxon,
      sym_meta,
      sym_xml_tag,
      sym_decl_xmlns,
      sym_def,
      sym_alloc,
      sym_import,
      sym_export,
      sym_namespace,
      sym_transclude,
      sym_let,
      sym_tex,
      sym_scope,
      sym_subtree,
      sym_put,
      sym_get,
      sym_open,
      sym_query_tree,
      sym__default,
      sym_object,
      sym_patch,
      sym_call,
      sym__prim,
      sym_inline_math,
      sym_display_math,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
      sym_ident,
      sym_ident_with_method_calls,
      sym__link,
      sym_markdown_link,
      sym_unlabeled_link,
      aux_sym__braces_repeat1,
  [1563] = 35,
    ACTIONS(190), 1,
      anon_sym_title,
    ACTIONS(192), 1,
      anon_sym_author,
    ACTIONS(194), 1,
      anon_sym_contributor,
    ACTIONS(196), 1,
      anon_sym_date,
    ACTIONS(198), 1,
      anon_sym_tag,
    ACTIONS(200), 1,
      anon_sym_ref,
    ACTIONS(202), 1,
      anon_sym_taxon,
    ACTIONS(204), 1,
      anon_sym_meta,
    ACTIONS(206), 1,
      anon_sym_def,
    ACTIONS(208), 1,
      anon_sym_alloc,
    ACTIONS(210), 1,
      anon_sym_import,
    ACTIONS(212), 1,
      anon_sym_export,
    ACTIONS(214), 1,
      anon_sym_namespace,
    ACTIONS(216), 1,
      anon_sym_transclude,
    ACTIONS(218), 1,
      anon_sym_let,
    ACTIONS(220), 1,
      anon_sym_tex,
    ACTIONS(222), 1,
      anon_sym_scope,
    ACTIONS(224), 1,
      anon_sym_subtree,
    ACTIONS(226), 1,
      anon_sym_put,
    ACTIONS(228), 1,
      anon_sym_get,
    ACTIONS(230), 1,
      anon_sym_open,
    ACTIONS(232), 1,
      anon_sym_query,
    ACTIONS(234), 1,
      anon_sym_object,
    ACTIONS(236), 1,
      anon_sym_patch,
    ACTIONS(238), 1,
      anon_sym_call,
    ACTIONS(240), 1,
      anon_sym_p,
    ACTIONS(242), 1,
      anon_sym_em,
    ACTIONS(244), 1,
      anon_sym_strong,
    ACTIONS(246), 1,
      anon_sym_li,
    ACTIONS(248), 1,
      anon_sym_ul,
    ACTIONS(250), 1,
      anon_sym_ol,
    ACTIONS(252), 1,
      anon_sym_code,
    ACTIONS(254), 1,
      anon_sym_blockquote,
    ACTIONS(256), 1,
      anon_sym_pre,
    ACTIONS(258), 1,
      sym_text,
  [1669] = 4,
    ACTIONS(264), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(23), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(262), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1696] = 5,
    ACTIONS(264), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(266), 1,
      anon_sym_POUND,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(23), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(262), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1725] = 3,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(24), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(270), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1749] = 4,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(24), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(277), 12,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1775] = 5,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
    ACTIONS(283), 1,
      anon_sym_POUND,
    ACTIONS(286), 1,
      sym_text,
    STATE(25), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(281), 12,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1802] = 3,
    STATE(25), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(291), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1825] = 2,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(295), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1845] = 2,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(299), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1865] = 2,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(303), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1885] = 2,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(307), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1905] = 2,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(311), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1925] = 2,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(315), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1945] = 2,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(319), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1965] = 2,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(323), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [1985] = 2,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(327), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2005] = 2,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(331), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2025] = 2,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(335), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2045] = 2,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(339), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2065] = 2,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(343), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2085] = 2,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(347), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2105] = 2,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(351), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2125] = 2,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(270), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2145] = 2,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(355), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2165] = 2,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(359), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2185] = 2,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(363), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2205] = 2,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(367), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2225] = 2,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(371), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2245] = 2,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(375), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2265] = 2,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(379), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2285] = 2,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(383), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2305] = 2,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(387), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2325] = 2,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(391), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2345] = 2,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(395), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2365] = 2,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(399), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2385] = 2,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(403), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2405] = 2,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(407), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2425] = 2,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(411), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2445] = 2,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(415), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2465] = 2,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(419), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2485] = 2,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(423), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2505] = 2,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(427), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2525] = 2,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(431), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2545] = 2,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(435), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2565] = 2,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(439), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2585] = 2,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(443), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2605] = 2,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(447), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2625] = 2,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(451), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2645] = 2,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(455), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2665] = 2,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(459), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2685] = 2,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(463), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2705] = 2,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(467), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2725] = 2,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(471), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2745] = 2,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(475), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2765] = 2,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(479), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2785] = 2,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(483), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2805] = 2,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(487), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2825] = 2,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(491), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2845] = 2,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(495), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2865] = 2,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(499), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2885] = 2,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(503), 13,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2905] = 3,
    ACTIONS(507), 1,
      anon_sym_RBRACK,
    ACTIONS(509), 1,
      sym_text,
    ACTIONS(505), 10,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_BSLASH,
      anon_sym_BSLASH_LT,
      anon_sym_BSLASHxmlns_COLON,
      sym_comment,
      anon_sym_POUND,
      anon_sym_POUND_POUND,
      anon_sym_LBRACK_LBRACK,
  [2924] = 2,
    ACTIONS(511), 1,
      anon_sym_BSLASH,
    STATE(43), 10,
      sym__prim,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
  [2940] = 2,
    ACTIONS(511), 1,
      anon_sym_BSLASH,
    STATE(44), 10,
      sym__prim,
      sym_p,
      sym_em,
      sym_strong,
      sym_li,
      sym_ul,
      sym_ol,
      sym_code,
      sym_blockquote,
      sym_pre,
  [2956] = 9,
    ACTIONS(240), 1,
      anon_sym_p,
    ACTIONS(513), 1,
      anon_sym_em,
    ACTIONS(515), 1,
      anon_sym_strong,
    ACTIONS(517), 1,
      anon_sym_li,
    ACTIONS(519), 1,
      anon_sym_ul,
    ACTIONS(521), 1,
      anon_sym_ol,
    ACTIONS(523), 1,
      anon_sym_code,
    ACTIONS(525), 1,
      anon_sym_blockquote,
    ACTIONS(527), 1,
      anon_sym_pre,
  [2984] = 3,
    STATE(86), 1,
      aux_sym_id_repeat1,
    ACTIONS(529), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(531), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2999] = 3,
    STATE(86), 1,
      aux_sym_id_repeat1,
    ACTIONS(533), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(535), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [3014] = 3,
    STATE(89), 1,
      aux_sym_xml_base_ident_repeat1,
    ACTIONS(538), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(540), 3,
      aux_sym_xml_base_ident_token1,
      sym__alpha,
      sym__digit,
  [3028] = 3,
    STATE(88), 1,
      aux_sym_xml_base_ident_repeat1,
    ACTIONS(542), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(544), 3,
      aux_sym_xml_base_ident_token1,
      sym__alpha,
      sym__digit,
  [3042] = 3,
    STATE(88), 1,
      aux_sym_xml_base_ident_repeat1,
    ACTIONS(547), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(549), 3,
      aux_sym_xml_base_ident_token1,
      sym__alpha,
      sym__digit,
  [3056] = 4,
    ACTIONS(551), 1,
      anon_sym_RBRACE,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    ACTIONS(555), 1,
      aux_sym__whitespace_token1,
    STATE(94), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [3071] = 3,
    STATE(85), 1,
      aux_sym_id_repeat1,
    STATE(118), 1,
      sym_id,
    ACTIONS(557), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [3084] = 5,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    STATE(66), 1,
      sym_xml_body,
    STATE(67), 1,
      sym__opt_arg,
    STATE(93), 2,
      sym_xml_attr,
      aux_sym_xml_tag_repeat1,
  [3101] = 5,
    ACTIONS(559), 1,
      anon_sym_LBRACE,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    STATE(37), 1,
      sym_xml_body,
    STATE(67), 1,
      sym__opt_arg,
    STATE(108), 2,
      sym_xml_attr,
      aux_sym_xml_tag_repeat1,
  [3118] = 4,
    ACTIONS(563), 1,
      anon_sym_RBRACE,
    ACTIONS(565), 1,
      anon_sym_LBRACK,
    ACTIONS(568), 1,
      aux_sym__whitespace_token1,
    STATE(94), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [3133] = 4,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    ACTIONS(555), 1,
      aux_sym__whitespace_token1,
    ACTIONS(571), 1,
      anon_sym_RBRACE,
    STATE(94), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [3148] = 3,
    STATE(97), 1,
      aux_sym_id_repeat1,
    STATE(197), 1,
      sym_id,
    ACTIONS(573), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [3161] = 3,
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_id_repeat1,
    ACTIONS(575), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [3174] = 3,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    STATE(98), 1,
      aux_sym_id_repeat1,
    ACTIONS(577), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [3187] = 5,
    ACTIONS(580), 1,
      sym__alpha,
    ACTIONS(582), 1,
      sym_text,
    STATE(120), 1,
      aux_sym_prefix_repeat1,
    STATE(195), 1,
      sym_prefix,
    STATE(198), 2,
      sym_addr,
      sym_external_link,
  [3204] = 4,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(584), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(109), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [3218] = 3,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    ACTIONS(586), 1,
      aux_sym__whitespace_token1,
    STATE(90), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [3230] = 3,
    ACTIONS(553), 1,
      anon_sym_LBRACK,
    ACTIONS(588), 1,
      aux_sym__whitespace_token1,
    STATE(95), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [3242] = 5,
    ACTIONS(580), 1,
      sym__alpha,
    ACTIONS(590), 1,
      sym_text,
    STATE(120), 1,
      aux_sym_prefix_repeat1,
    STATE(174), 1,
      sym_addr,
    STATE(195), 1,
      sym_prefix,
  [3258] = 3,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      anon_sym_LBRACE,
    STATE(104), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [3269] = 4,
    ACTIONS(595), 1,
      sym__alpha,
    STATE(120), 1,
      aux_sym_prefix_repeat1,
    STATE(195), 1,
      sym_prefix,
    STATE(196), 1,
      sym_addr,
  [3282] = 4,
    ACTIONS(595), 1,
      sym__alpha,
    STATE(120), 1,
      aux_sym_prefix_repeat1,
    STATE(193), 1,
      sym_addr,
    STATE(195), 1,
      sym_prefix,
  [3295] = 4,
    ACTIONS(595), 1,
      sym__alpha,
    STATE(120), 1,
      aux_sym_prefix_repeat1,
    STATE(192), 1,
      sym_addr,
    STATE(208), 1,
      sym_prefix,
  [3308] = 3,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      anon_sym_LBRACK,
    STATE(108), 2,
      sym_xml_attr,
      aux_sym_xml_tag_repeat1,
  [3319] = 2,
    ACTIONS(268), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(104), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [3328] = 4,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    STATE(30), 1,
      sym__arg,
    STATE(116), 1,
      aux_sym_fun_spec_repeat1,
  [3341] = 4,
    ACTIONS(595), 1,
      sym__alpha,
    STATE(120), 1,
      aux_sym_prefix_repeat1,
    STATE(195), 1,
      sym_prefix,
    STATE(201), 1,
      sym_addr,
  [3354] = 4,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(604), 1,
      anon_sym_LBRACK,
    STATE(35), 1,
      sym__arg,
    STATE(110), 1,
      aux_sym_fun_spec_repeat1,
  [3367] = 3,
    ACTIONS(606), 1,
      anon_sym_BSLASH,
    STATE(65), 1,
      sym_fun_spec,
    STATE(112), 1,
      sym_ident,
  [3377] = 3,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    ACTIONS(608), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym__arg,
  [3387] = 3,
    ACTIONS(610), 1,
      sym__alpha,
    STATE(148), 1,
      sym_xml_base_ident,
    STATE(204), 1,
      sym_xml_qname,
  [3397] = 3,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(614), 1,
      anon_sym_LBRACK,
    STATE(116), 1,
      aux_sym_fun_spec_repeat1,
  [3407] = 3,
    ACTIONS(606), 1,
      anon_sym_BSLASH,
    STATE(28), 1,
      sym_fun_spec,
    STATE(112), 1,
      sym_ident,
  [3417] = 1,
    ACTIONS(617), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
  [3423] = 2,
    ACTIONS(621), 1,
      aux_sym__whitespace_token1,
    ACTIONS(619), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [3431] = 3,
    ACTIONS(623), 1,
      anon_sym_DASH,
    ACTIONS(625), 1,
      sym__alpha,
    STATE(123), 1,
      aux_sym_prefix_repeat1,
  [3441] = 3,
    ACTIONS(627), 1,
      anon_sym_POUND,
    ACTIONS(629), 1,
      sym_text,
    STATE(26), 1,
      aux_sym_ident_with_method_calls_repeat1,
  [3451] = 2,
    ACTIONS(317), 1,
      aux_sym__whitespace_token1,
    ACTIONS(319), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [3459] = 3,
    ACTIONS(631), 1,
      anon_sym_DASH,
    ACTIONS(633), 1,
      sym__alpha,
    STATE(123), 1,
      aux_sym_prefix_repeat1,
  [3469] = 1,
    ACTIONS(317), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3474] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym__arg,
  [3481] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym__arg,
  [3488] = 2,
    ACTIONS(610), 1,
      sym__alpha,
    STATE(184), 1,
      sym_xml_base_ident,
  [3495] = 1,
    ACTIONS(636), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3500] = 2,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym__arg,
  [3507] = 2,
    ACTIONS(610), 1,
      sym__alpha,
    STATE(137), 1,
      sym_xml_base_ident,
  [3514] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym__arg,
  [3521] = 2,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    STATE(55), 1,
      sym_ident,
  [3528] = 2,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      sym_ident,
  [3535] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym__arg,
  [3542] = 2,
    ACTIONS(606), 1,
      anon_sym_BSLASH,
    STATE(166), 1,
      sym_ident,
  [3549] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym__arg,
  [3556] = 2,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    STATE(40), 1,
      sym__txt_arg,
  [3563] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym__arg,
  [3570] = 2,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym__txt_arg,
  [3577] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym__arg,
  [3584] = 1,
    ACTIONS(268), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3589] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym__arg,
  [3596] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym__arg,
  [3603] = 2,
    ACTIONS(644), 1,
      anon_sym_LBRACE,
    STATE(119), 1,
      sym__arg,
  [3610] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym__arg,
  [3617] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym__arg,
  [3624] = 2,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym__txt_arg,
  [3631] = 2,
    ACTIONS(646), 1,
      anon_sym_GT,
    ACTIONS(648), 1,
      anon_sym_COLON,
  [3638] = 2,
    ACTIONS(650), 1,
      sym_year,
    ACTIONS(652), 1,
      sym_text,
  [3645] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym__arg,
  [3652] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym__arg,
  [3659] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym__arg,
  [3666] = 2,
    ACTIONS(654), 1,
      aux_sym_day_token1,
    STATE(182), 1,
      sym_day,
  [3673] = 2,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym__txt_arg,
  [3680] = 2,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    STATE(159), 1,
      sym__arg,
  [3687] = 1,
    ACTIONS(656), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3692] = 2,
    ACTIONS(640), 1,
      anon_sym_BSLASH,
    STATE(56), 1,
      sym_ident,
  [3699] = 2,
    ACTIONS(658), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym__txt_arg,
  [3706] = 1,
    ACTIONS(660), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3711] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym__arg,
  [3718] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym__arg,
  [3725] = 2,
    ACTIONS(662), 1,
      anon_sym_LBRACE,
    STATE(151), 1,
      sym__txt_arg,
  [3732] = 2,
    ACTIONS(642), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym__txt_arg,
  [3739] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym__arg,
  [3746] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym__arg,
  [3753] = 2,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym__arg,
  [3760] = 1,
    ACTIONS(664), 1,
      sym_text,
  [3764] = 1,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
  [3768] = 1,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
  [3772] = 1,
    ACTIONS(670), 1,
      anon_sym_LBRACE,
  [3776] = 1,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
  [3780] = 1,
    ACTIONS(674), 1,
      anon_sym_DASH,
  [3784] = 1,
    ACTIONS(676), 1,
      sym_month,
  [3788] = 1,
    ACTIONS(678), 1,
      anon_sym_RPAREN,
  [3792] = 1,
    ACTIONS(680), 1,
      sym_text,
  [3796] = 1,
    ACTIONS(682), 1,
      anon_sym_LBRACE,
  [3800] = 1,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
  [3804] = 1,
    ACTIONS(686), 1,
      sym_text,
  [3808] = 1,
    ACTIONS(688), 1,
      sym_text,
  [3812] = 1,
    ACTIONS(690), 1,
      anon_sym_LBRACE,
  [3816] = 1,
    ACTIONS(692), 1,
      aux_sym_day_token2,
  [3820] = 1,
    ACTIONS(694), 1,
      anon_sym_RBRACE,
  [3824] = 1,
    ACTIONS(696), 1,
      anon_sym_RBRACK,
  [3828] = 1,
    ACTIONS(698), 1,
      anon_sym_GT,
  [3832] = 1,
    ACTIONS(700), 1,
      sym_text,
  [3836] = 1,
    ACTIONS(702), 1,
      anon_sym_LPAREN,
  [3840] = 1,
    ACTIONS(704), 1,
      anon_sym_RBRACE,
  [3844] = 1,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
  [3848] = 1,
    ACTIONS(708), 1,
      sym_text,
  [3852] = 1,
    ACTIONS(710), 1,
      sym_text,
  [3856] = 1,
    ACTIONS(712), 1,
      anon_sym_RBRACK,
  [3860] = 1,
    ACTIONS(714), 1,
      anon_sym_RBRACK,
  [3864] = 1,
    ACTIONS(716), 1,
      anon_sym_RBRACE,
  [3868] = 1,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
  [3872] = 1,
    ACTIONS(720), 1,
      anon_sym_DASH,
  [3876] = 1,
    ACTIONS(722), 1,
      anon_sym_RBRACE,
  [3880] = 1,
    ACTIONS(617), 1,
      anon_sym_RBRACK,
  [3884] = 1,
    ACTIONS(724), 1,
      anon_sym_RBRACK_RBRACK,
  [3888] = 1,
    ACTIONS(309), 1,
      anon_sym_LBRACE,
  [3892] = 1,
    ACTIONS(726), 1,
      anon_sym_RBRACK_RBRACK,
  [3896] = 1,
    ACTIONS(728), 1,
      anon_sym_RBRACE,
  [3900] = 1,
    ACTIONS(730), 1,
      sym_text,
  [3904] = 1,
    ACTIONS(732), 1,
      anon_sym_LBRACK,
  [3908] = 1,
    ACTIONS(734), 1,
      anon_sym_GT,
  [3912] = 1,
    ACTIONS(736), 1,
      anon_sym_RBRACE,
  [3916] = 1,
    ACTIONS(738), 1,
      anon_sym_DASH,
  [3920] = 1,
    ACTIONS(740), 1,
      anon_sym_RBRACE,
  [3924] = 1,
    ACTIONS(742), 1,
      anon_sym_DASH,
  [3928] = 1,
    ACTIONS(744), 1,
      sym_text,
  [3932] = 1,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 93,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 279,
  [SMALL_STATE(7)] = 372,
  [SMALL_STATE(8)] = 465,
  [SMALL_STATE(9)] = 558,
  [SMALL_STATE(10)] = 651,
  [SMALL_STATE(11)] = 744,
  [SMALL_STATE(12)] = 837,
  [SMALL_STATE(13)] = 930,
  [SMALL_STATE(14)] = 1023,
  [SMALL_STATE(15)] = 1113,
  [SMALL_STATE(16)] = 1203,
  [SMALL_STATE(17)] = 1293,
  [SMALL_STATE(18)] = 1383,
  [SMALL_STATE(19)] = 1473,
  [SMALL_STATE(20)] = 1563,
  [SMALL_STATE(21)] = 1669,
  [SMALL_STATE(22)] = 1696,
  [SMALL_STATE(23)] = 1725,
  [SMALL_STATE(24)] = 1749,
  [SMALL_STATE(25)] = 1775,
  [SMALL_STATE(26)] = 1802,
  [SMALL_STATE(27)] = 1825,
  [SMALL_STATE(28)] = 1845,
  [SMALL_STATE(29)] = 1865,
  [SMALL_STATE(30)] = 1885,
  [SMALL_STATE(31)] = 1905,
  [SMALL_STATE(32)] = 1925,
  [SMALL_STATE(33)] = 1945,
  [SMALL_STATE(34)] = 1965,
  [SMALL_STATE(35)] = 1985,
  [SMALL_STATE(36)] = 2005,
  [SMALL_STATE(37)] = 2025,
  [SMALL_STATE(38)] = 2045,
  [SMALL_STATE(39)] = 2065,
  [SMALL_STATE(40)] = 2085,
  [SMALL_STATE(41)] = 2105,
  [SMALL_STATE(42)] = 2125,
  [SMALL_STATE(43)] = 2145,
  [SMALL_STATE(44)] = 2165,
  [SMALL_STATE(45)] = 2185,
  [SMALL_STATE(46)] = 2205,
  [SMALL_STATE(47)] = 2225,
  [SMALL_STATE(48)] = 2245,
  [SMALL_STATE(49)] = 2265,
  [SMALL_STATE(50)] = 2285,
  [SMALL_STATE(51)] = 2305,
  [SMALL_STATE(52)] = 2325,
  [SMALL_STATE(53)] = 2345,
  [SMALL_STATE(54)] = 2365,
  [SMALL_STATE(55)] = 2385,
  [SMALL_STATE(56)] = 2405,
  [SMALL_STATE(57)] = 2425,
  [SMALL_STATE(58)] = 2445,
  [SMALL_STATE(59)] = 2465,
  [SMALL_STATE(60)] = 2485,
  [SMALL_STATE(61)] = 2505,
  [SMALL_STATE(62)] = 2525,
  [SMALL_STATE(63)] = 2545,
  [SMALL_STATE(64)] = 2565,
  [SMALL_STATE(65)] = 2585,
  [SMALL_STATE(66)] = 2605,
  [SMALL_STATE(67)] = 2625,
  [SMALL_STATE(68)] = 2645,
  [SMALL_STATE(69)] = 2665,
  [SMALL_STATE(70)] = 2685,
  [SMALL_STATE(71)] = 2705,
  [SMALL_STATE(72)] = 2725,
  [SMALL_STATE(73)] = 2745,
  [SMALL_STATE(74)] = 2765,
  [SMALL_STATE(75)] = 2785,
  [SMALL_STATE(76)] = 2805,
  [SMALL_STATE(77)] = 2825,
  [SMALL_STATE(78)] = 2845,
  [SMALL_STATE(79)] = 2865,
  [SMALL_STATE(80)] = 2885,
  [SMALL_STATE(81)] = 2905,
  [SMALL_STATE(82)] = 2924,
  [SMALL_STATE(83)] = 2940,
  [SMALL_STATE(84)] = 2956,
  [SMALL_STATE(85)] = 2984,
  [SMALL_STATE(86)] = 2999,
  [SMALL_STATE(87)] = 3014,
  [SMALL_STATE(88)] = 3028,
  [SMALL_STATE(89)] = 3042,
  [SMALL_STATE(90)] = 3056,
  [SMALL_STATE(91)] = 3071,
  [SMALL_STATE(92)] = 3084,
  [SMALL_STATE(93)] = 3101,
  [SMALL_STATE(94)] = 3118,
  [SMALL_STATE(95)] = 3133,
  [SMALL_STATE(96)] = 3148,
  [SMALL_STATE(97)] = 3161,
  [SMALL_STATE(98)] = 3174,
  [SMALL_STATE(99)] = 3187,
  [SMALL_STATE(100)] = 3204,
  [SMALL_STATE(101)] = 3218,
  [SMALL_STATE(102)] = 3230,
  [SMALL_STATE(103)] = 3242,
  [SMALL_STATE(104)] = 3258,
  [SMALL_STATE(105)] = 3269,
  [SMALL_STATE(106)] = 3282,
  [SMALL_STATE(107)] = 3295,
  [SMALL_STATE(108)] = 3308,
  [SMALL_STATE(109)] = 3319,
  [SMALL_STATE(110)] = 3328,
  [SMALL_STATE(111)] = 3341,
  [SMALL_STATE(112)] = 3354,
  [SMALL_STATE(113)] = 3367,
  [SMALL_STATE(114)] = 3377,
  [SMALL_STATE(115)] = 3387,
  [SMALL_STATE(116)] = 3397,
  [SMALL_STATE(117)] = 3407,
  [SMALL_STATE(118)] = 3417,
  [SMALL_STATE(119)] = 3423,
  [SMALL_STATE(120)] = 3431,
  [SMALL_STATE(121)] = 3441,
  [SMALL_STATE(122)] = 3451,
  [SMALL_STATE(123)] = 3459,
  [SMALL_STATE(124)] = 3469,
  [SMALL_STATE(125)] = 3474,
  [SMALL_STATE(126)] = 3481,
  [SMALL_STATE(127)] = 3488,
  [SMALL_STATE(128)] = 3495,
  [SMALL_STATE(129)] = 3500,
  [SMALL_STATE(130)] = 3507,
  [SMALL_STATE(131)] = 3514,
  [SMALL_STATE(132)] = 3521,
  [SMALL_STATE(133)] = 3528,
  [SMALL_STATE(134)] = 3535,
  [SMALL_STATE(135)] = 3542,
  [SMALL_STATE(136)] = 3549,
  [SMALL_STATE(137)] = 3556,
  [SMALL_STATE(138)] = 3563,
  [SMALL_STATE(139)] = 3570,
  [SMALL_STATE(140)] = 3577,
  [SMALL_STATE(141)] = 3584,
  [SMALL_STATE(142)] = 3589,
  [SMALL_STATE(143)] = 3596,
  [SMALL_STATE(144)] = 3603,
  [SMALL_STATE(145)] = 3610,
  [SMALL_STATE(146)] = 3617,
  [SMALL_STATE(147)] = 3624,
  [SMALL_STATE(148)] = 3631,
  [SMALL_STATE(149)] = 3638,
  [SMALL_STATE(150)] = 3645,
  [SMALL_STATE(151)] = 3652,
  [SMALL_STATE(152)] = 3659,
  [SMALL_STATE(153)] = 3666,
  [SMALL_STATE(154)] = 3673,
  [SMALL_STATE(155)] = 3680,
  [SMALL_STATE(156)] = 3687,
  [SMALL_STATE(157)] = 3692,
  [SMALL_STATE(158)] = 3699,
  [SMALL_STATE(159)] = 3706,
  [SMALL_STATE(160)] = 3711,
  [SMALL_STATE(161)] = 3718,
  [SMALL_STATE(162)] = 3725,
  [SMALL_STATE(163)] = 3732,
  [SMALL_STATE(164)] = 3739,
  [SMALL_STATE(165)] = 3746,
  [SMALL_STATE(166)] = 3753,
  [SMALL_STATE(167)] = 3760,
  [SMALL_STATE(168)] = 3764,
  [SMALL_STATE(169)] = 3768,
  [SMALL_STATE(170)] = 3772,
  [SMALL_STATE(171)] = 3776,
  [SMALL_STATE(172)] = 3780,
  [SMALL_STATE(173)] = 3784,
  [SMALL_STATE(174)] = 3788,
  [SMALL_STATE(175)] = 3792,
  [SMALL_STATE(176)] = 3796,
  [SMALL_STATE(177)] = 3800,
  [SMALL_STATE(178)] = 3804,
  [SMALL_STATE(179)] = 3808,
  [SMALL_STATE(180)] = 3812,
  [SMALL_STATE(181)] = 3816,
  [SMALL_STATE(182)] = 3820,
  [SMALL_STATE(183)] = 3824,
  [SMALL_STATE(184)] = 3828,
  [SMALL_STATE(185)] = 3832,
  [SMALL_STATE(186)] = 3836,
  [SMALL_STATE(187)] = 3840,
  [SMALL_STATE(188)] = 3844,
  [SMALL_STATE(189)] = 3848,
  [SMALL_STATE(190)] = 3852,
  [SMALL_STATE(191)] = 3856,
  [SMALL_STATE(192)] = 3860,
  [SMALL_STATE(193)] = 3864,
  [SMALL_STATE(194)] = 3868,
  [SMALL_STATE(195)] = 3872,
  [SMALL_STATE(196)] = 3876,
  [SMALL_STATE(197)] = 3880,
  [SMALL_STATE(198)] = 3884,
  [SMALL_STATE(199)] = 3888,
  [SMALL_STATE(200)] = 3892,
  [SMALL_STATE(201)] = 3896,
  [SMALL_STATE(202)] = 3900,
  [SMALL_STATE(203)] = 3904,
  [SMALL_STATE(204)] = 3908,
  [SMALL_STATE(205)] = 3912,
  [SMALL_STATE(206)] = 3916,
  [SMALL_STATE(207)] = 3920,
  [SMALL_STATE(208)] = 3924,
  [SMALL_STATE(209)] = 3928,
  [SMALL_STATE(210)] = 3932,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(130),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(134),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(136),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [283] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 6, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 6, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5, 0, 0),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, 0, 11),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, 0, 11),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt_arg, 3, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__opt_arg, 3, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3, 0, 0),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 3, 0, 0),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, 0, 8),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, 0, 8),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, 0, 7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, 0, 7),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__opt_arg, 2, 0, 0),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__opt_arg, 2, 0, 0),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_xmlns, 3, 0, 6),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_xmlns, 3, 0, 6),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, 0, 17),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, 0, 17),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taxon, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taxon, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, 0, 12),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, 0, 12),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 6, 0, 14),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 6, 0, 14),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3, 0, 0),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3, 0, 0),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, 0, 5),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, 0, 5),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, 0, 0),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, 0, 0),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, 0, 15),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, 0, 15),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3, 0, 0),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3, 0, 0),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 2, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_body, 1, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_body, 1, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 4),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 4),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braces, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braces, 3, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 9, 0, 16),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 9, 0, 16),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, 0, 0),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3, 0, 0),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__squares, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__squares, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parens, 3, 0, 0),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parens, 3, 0, 0),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3, 0, 0),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, 0, 1),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, 0, 1),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contributor, 3, 0, 2),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contributor, 3, 0, 2),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 3, 0, 0),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 3, 0, 0),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, 0, 3),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, 0, 3),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0), SHIFT_REPEAT(86),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_base_ident, 1, 0, 0),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xml_base_ident_repeat1, 2, 0, 0),
  [544] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_base_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_base_ident, 2, 0, 0),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(94),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [577] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0), SHIFT_REPEAT(98),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [582] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0),
  [599] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_xml_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(190),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(167),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3, 0, 10),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 4, 0, 18),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 4, 0, 18),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1, 0, 0),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2, 0, 0),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2, 0, 0), SHIFT_REPEAT(123),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_name, 3, 0, 0),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_qname, 1, 0, 0),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [650] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 3, 0, 0),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_attr, 4, 0, 13),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_qname, 3, 0, 9),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2, 0, 0),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [718] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link, 1, 0, 0),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_forester(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
