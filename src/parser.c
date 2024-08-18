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
#define STATE_COUNT 197
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 136
#define ALIAS_COUNT 1
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 16

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
  sym_year = 20,
  sym_month = 21,
  aux_sym_day_token1 = 22,
  aux_sym_day_token2 = 23,
  anon_sym_def = 24,
  anon_sym_alloc = 25,
  anon_sym_import = 26,
  anon_sym_export = 27,
  anon_sym_namespace = 28,
  anon_sym_transclude = 29,
  anon_sym_let = 30,
  anon_sym_tex = 31,
  anon_sym_scope = 32,
  anon_sym_subtree = 33,
  anon_sym_put = 34,
  anon_sym_get = 35,
  anon_sym_open = 36,
  anon_sym_query = 37,
  anon_sym_object = 38,
  anon_sym_patch = 39,
  anon_sym_call = 40,
  sym_comment = 41,
  anon_sym_POUND = 42,
  anon_sym_POUND_POUND = 43,
  anon_sym_p = 44,
  anon_sym_em = 45,
  anon_sym_strong = 46,
  anon_sym_li = 47,
  anon_sym_ul = 48,
  anon_sym_ol = 49,
  anon_sym_code = 50,
  anon_sym_blockquote = 51,
  anon_sym_pre = 52,
  anon_sym_LBRACE_RBRACE = 53,
  anon_sym__ = 54,
  anon_sym_LBRACK_LBRACK = 55,
  anon_sym_RBRACK_RBRACK = 56,
  aux_sym__whitespace_token1 = 57,
  sym__alpha = 58,
  sym__digit = 59,
  sym_text = 60,
  aux_sym__xml_base_ident_token1 = 61,
  anon_sym_COLON = 62,
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
  sym_decl_xmlns = 78,
  sym_day = 79,
  sym_def = 80,
  sym_alloc = 81,
  sym_import = 82,
  sym_export = 83,
  sym_namespace = 84,
  sym_transclude = 85,
  sym_let = 86,
  sym_tex = 87,
  sym_scope = 88,
  sym_subtree = 89,
  sym_put = 90,
  sym_get = 91,
  sym_open = 92,
  sym_query_tree = 93,
  sym__default = 94,
  sym_object = 95,
  sym_patch = 96,
  sym_call = 97,
  sym__prim = 98,
  sym_inline_math = 99,
  sym_display_math = 100,
  sym_p = 101,
  sym_em = 102,
  sym_strong = 103,
  sym_li = 104,
  sym_ul = 105,
  sym_ol = 106,
  sym_code = 107,
  sym_blockquote = 108,
  sym_pre = 109,
  sym_method_decl = 110,
  sym_fun_spec = 111,
  sym_ident = 112,
  sym_ident_with_method_calls = 113,
  sym__arg = 114,
  sym__link = 115,
  sym_addr = 116,
  sym_id = 117,
  sym_prefix = 118,
  sym_markdown_link = 119,
  sym_unlabeled_link = 120,
  sym_external_link = 121,
  sym__whitespace = 122,
  sym__txt_arg = 123,
  sym__xml_base_ident = 124,
  sym__xml_qname = 125,
  aux_sym_source_file_repeat1 = 126,
  aux_sym__braces_repeat1 = 127,
  aux_sym_object_repeat1 = 128,
  aux_sym_fun_spec_repeat1 = 129,
  aux_sym_ident_repeat1 = 130,
  aux_sym_ident_with_method_calls_repeat1 = 131,
  aux_sym__arg_repeat1 = 132,
  aux_sym_id_repeat1 = 133,
  aux_sym_prefix_repeat1 = 134,
  aux_sym__xml_base_ident_repeat1 = 135,
  alias_sym_method_body = 136,
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
  [aux_sym__xml_base_ident_token1] = "_xml_base_ident_token1",
  [anon_sym_COLON] = ":",
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
  [sym_decl_xmlns] = "decl_xmlns",
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
  [sym__link] = "_link",
  [sym_addr] = "addr",
  [sym_id] = "id",
  [sym_prefix] = "prefix",
  [sym_markdown_link] = "markdown_link",
  [sym_unlabeled_link] = "unlabeled_link",
  [sym_external_link] = "external_link",
  [sym__whitespace] = "_whitespace",
  [sym__txt_arg] = "_txt_arg",
  [sym__xml_base_ident] = "_xml_base_ident",
  [sym__xml_qname] = "_xml_qname",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__braces_repeat1] = "_braces_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_fun_spec_repeat1] = "fun_spec_repeat1",
  [aux_sym_ident_repeat1] = "ident_repeat1",
  [aux_sym_ident_with_method_calls_repeat1] = "ident_with_method_calls_repeat1",
  [aux_sym__arg_repeat1] = "_arg_repeat1",
  [aux_sym_id_repeat1] = "id_repeat1",
  [aux_sym_prefix_repeat1] = "prefix_repeat1",
  [aux_sym__xml_base_ident_repeat1] = "_xml_base_ident_repeat1",
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
  [aux_sym__xml_base_ident_token1] = aux_sym__xml_base_ident_token1,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_decl_xmlns] = sym_decl_xmlns,
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
  [sym__link] = sym__link,
  [sym_addr] = sym_addr,
  [sym_id] = sym_id,
  [sym_prefix] = sym_prefix,
  [sym_markdown_link] = sym_markdown_link,
  [sym_unlabeled_link] = sym_unlabeled_link,
  [sym_external_link] = sym_external_link,
  [sym__whitespace] = sym__whitespace,
  [sym__txt_arg] = sym__txt_arg,
  [sym__xml_base_ident] = sym__xml_base_ident,
  [sym__xml_qname] = sym__xml_qname,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__braces_repeat1] = aux_sym__braces_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_fun_spec_repeat1] = aux_sym_fun_spec_repeat1,
  [aux_sym_ident_repeat1] = aux_sym_ident_repeat1,
  [aux_sym_ident_with_method_calls_repeat1] = aux_sym_ident_with_method_calls_repeat1,
  [aux_sym__arg_repeat1] = aux_sym__arg_repeat1,
  [aux_sym_id_repeat1] = aux_sym_id_repeat1,
  [aux_sym_prefix_repeat1] = aux_sym_prefix_repeat1,
  [aux_sym__xml_base_ident_repeat1] = aux_sym__xml_base_ident_repeat1,
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
  [aux_sym__xml_base_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_decl_xmlns] = {
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
  [sym__xml_base_ident] = {
    .visible = false,
    .named = true,
  },
  [sym__xml_qname] = {
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
  [aux_sym__xml_base_ident_repeat1] = {
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
  field_object = 12,
  field_prefix = 13,
  field_ref = 14,
  field_self = 15,
  field_tag = 16,
  field_value = 17,
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
  [field_object] = "object",
  [field_prefix] = "prefix",
  [field_ref] = "ref",
  [field_self] = "self",
  [field_tag] = "tag",
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
  [9] = {.index = 21, .length = 3},
  [10] = {.index = 24, .length = 1},
  [11] = {.index = 25, .length = 6},
  [12] = {.index = 31, .length = 3},
  [13] = {.index = 34, .length = 9},
  [14] = {.index = 43, .length = 4},
  [15] = {.index = 47, .length = 4},
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
    {field_argument, 1},
    {field_identifier, 0},
  [17] =
    {field_argument, 3},
    {field_identifier, 2},
  [19] =
    {field_id, 2},
    {field_prefix, 0},
  [21] =
    {field_argument, 2},
    {field_binder, 1},
    {field_identifier, 0},
  [24] =
    {field_address, 3},
  [25] =
    {field_dest, 3},
    {field_dest, 4},
    {field_dest, 5},
    {field_label, 0},
    {field_label, 1},
    {field_label, 2},
  [31] =
    {field_self, 2},
    {field_self, 3},
    {field_self, 4},
  [34] =
    {field_date, 0},
    {field_date, 1},
    {field_date, 2},
    {field_date, 3},
    {field_date, 4},
    {field_date, 5},
    {field_date, 6},
    {field_date, 7},
    {field_date, 8},
  [43] =
    {field_object, 2},
    {field_self, 3},
    {field_self, 4},
    {field_self, 5},
  [47] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [15] = {
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
  [14] = 12,
  [15] = 12,
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
  [84] = 80,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 86,
  [91] = 79,
  [92] = 92,
  [93] = 19,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 22,
  [102] = 102,
  [103] = 21,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 31,
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
  [122] = 31,
  [123] = 39,
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
  [183] = 108,
  [184] = 184,
  [185] = 30,
  [186] = 186,
  [187] = 187,
  [188] = 187,
  [189] = 189,
  [190] = 190,
  [191] = 181,
  [192] = 192,
  [193] = 193,
  [194] = 192,
  [195] = 189,
  [196] = 196,
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
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '#', 113,
        '%', 112,
        '(', 49,
        ')', 50,
        '-', 61,
        '/', 373,
        ':', 374,
        '>', 71,
        '[', 47,
        '\\', 52,
        ']', 48,
        '_', 144,
        'a', 201,
        'b', 194,
        'c', 153,
        'd', 151,
        'e', 202,
        'g', 180,
        'i', 204,
        'l', 181,
        'm', 183,
        'n', 150,
        'o', 155,
        'p', 116,
        'q', 250,
        'r', 178,
        's', 160,
        't', 148,
        'u', 195,
        '{', 44,
        '}', 45,
      );
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        ')', 50,
        '-', 61,
        '[', 46,
        '\\', 51,
        ']', 9,
        'b', 22,
        'c', 27,
        'e', 24,
        'l', 17,
        'o', 20,
        'p', 118,
        's', 34,
        'u', 21,
        '{', 44,
        '}', 45,
      );
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == ']') ADVANCE(9);
      if (lookahead == '_') ADVANCE(144);
      if (lookahead == '}') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == ']') ADVANCE(48);
      if (lookahead == '_') ADVANCE(144);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(40);
      if (lookahead == '1') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(374);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead == '{') ADVANCE(43);
      if (lookahead == '#' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(373);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 8:
      if (lookahead == '[') ADVANCE(46);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(147);
      if (('\n' <= lookahead && lookahead <= '\r')) SKIP(8);
      END_STATE();
    case 9:
      if (lookahead == ']') ADVANCE(146);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        'a', 312,
        'b', 305,
        'c', 264,
        'd', 262,
        'e', 313,
        'g', 291,
        'i', 315,
        'l', 292,
        'm', 294,
        'n', 261,
        'o', 266,
        'p', 117,
        'q', 361,
        'r', 289,
        's', 271,
        't', 259,
        'u', 306,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(140);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 18:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(119);
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
          lookahead == ' ') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < 'A' || ']' < lookahead) &&
          (lookahead < 'a' || '{' < lookahead) &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 38:
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(38);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(372);
      END_STATE();
    case 39:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      END_STATE();
    case 40:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 41:
      if (eof) ADVANCE(42);
      ADVANCE_MAP(
        '#', 114,
        '%', 112,
        '(', 49,
        ')', 50,
        '[', 47,
        '\\', 52,
        ']', 48,
        '{', 44,
        '}', 45,
      );
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(41);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(366);
      if (lookahead != 0) ADVANCE(372);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '}') ADVANCE(143);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '[') ADVANCE(145);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_title);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_author);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_author);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_contributor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_contributor);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_date);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_date);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_tag);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_tag);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_ref);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ref);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_taxon);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_taxon);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_meta);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_meta);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BSLASHxmlns_COLON);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_year);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_month);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_month);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_day_token1);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_day_token2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_def);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_def);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_alloc);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_alloc);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_import);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_export);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_export);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_namespace);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_namespace);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_transclude);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_transclude);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_let);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_let);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_tex);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_tex);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_scope);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_scope);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_subtree);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_subtree);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_put);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_put);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_get);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_get);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_open);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_open);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_query);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_query);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_object);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_object);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_patch);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_patch);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_call);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_call);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == '#') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_POUND_POUND);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead == 'u') ADVANCE(237);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'a') ADVANCE(352);
      if (lookahead == 'r') ADVANCE(279);
      if (lookahead == 'u') ADVANCE(348);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_p);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_em);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_em);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_em);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_strong);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_li);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_li);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_li);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_ul);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_ul);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_ul);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ol);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_ol);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_ol);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_code);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_code);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_code);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_blockquote);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_blockquote);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_pre);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_pre);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_pre);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_LBRACE_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACK_LBRACK);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_RBRACK_RBRACK);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__whitespace_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead == 'r') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(246);
      if (lookahead == 'e') ADVANCE(185);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'o') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'a') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(192);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'b') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(210);
      if (lookahead == 't') ADVANCE(228);
      if (lookahead == 'u') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'c') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(169);
      if (lookahead == 'n') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'd') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(232);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(236);
      if (lookahead == 'i') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'e') ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'f') ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(62);
      if (lookahead == 'x') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'g') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'h') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'i') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'j') ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'k') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(209);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 'u') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'm') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'n') ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(229);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(227);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'o') ADVANCE(231);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'p') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'q') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(238);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'r') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(220);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 's') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(176);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 't') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'u') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'x') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__alpha);
      if (lookahead == 'y') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__alpha);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__digit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_text);
      ADVANCE_MAP(
        'a', 312,
        'b', 305,
        'c', 264,
        'd', 262,
        'e', 313,
        'g', 291,
        'i', 315,
        'l', 292,
        'm', 294,
        'n', 261,
        'o', 266,
        'p', 117,
        'q', 361,
        'r', 289,
        's', 271,
        't', 259,
        'u', 306,
        '\t', 258,
        0x0b, 258,
        '\f', 258,
        ' ', 258,
      );
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(298);
      if (lookahead == 'e') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(355);
      if (lookahead == 'r') ADVANCE(263);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(69);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(314);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(296);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(319);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(308);
      if (lookahead == 'o') ADVANCE(276);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'a') ADVANCE(275);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(303);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'p') ADVANCE(278);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(363);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'b') ADVANCE(356);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(304);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(81);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(321);
      if (lookahead == 't') ADVANCE(339);
      if (lookahead == 'u') ADVANCE(268);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(300);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(309);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(351);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'c') ADVANCE(286);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(280);
      if (lookahead == 'n') ADVANCE(354);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'd') ADVANCE(288);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(316);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(142);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(136);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(60);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(343);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(95);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(54);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(97);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(87);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(139);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(89);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(297);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(335);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(346);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'i') ADVANCE(127);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(274);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(353);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'e') ADVANCE(285);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(79);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'f') ADVANCE(65);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(325);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'g') ADVANCE(124);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(109);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'h') ADVANCE(326);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'i') ADVANCE(267);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'j') ADVANCE(293);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'k') ADVANCE(334);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(320);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(130);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(111);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(307);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(360);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(284);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(322);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'l') ADVANCE(311);
      if (lookahead == 'u') ADVANCE(345);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(330);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(282);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'm') ADVANCE(333);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(103);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(299);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(67);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'n') ADVANCE(344);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(269);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(332);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(270);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(317);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(340);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(318);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(337);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(338);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(358);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'o') ADVANCE(342);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(324);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(265);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(283);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'p') ADVANCE(329);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'q') ADVANCE(362);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(365);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(302);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(56);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(58);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(323);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(349);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(295);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'r') ADVANCE(350);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(331);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 's') ADVANCE(273);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(301);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(101);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(91);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(99);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(85);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(83);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(107);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(272);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(260);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(336);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(310);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(341);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(281);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(287);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 't') ADVANCE(327);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(277);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(290);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(328);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'u') ADVANCE(359);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'x') ADVANCE(93);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == 'y') ADVANCE(105);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(366);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(367);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(256);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_text);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_text);
      if ((!eof && set_contains(sym_text_character_set_1, 9, lookahead))) ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym__xml_base_ident_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 41},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 41},
  [4] = {.lex_state = 41},
  [5] = {.lex_state = 41},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 41},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 41},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 41},
  [12] = {.lex_state = 41},
  [13] = {.lex_state = 41},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 41},
  [16] = {.lex_state = 41},
  [17] = {.lex_state = 41},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 41},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 41},
  [24] = {.lex_state = 41},
  [25] = {.lex_state = 41},
  [26] = {.lex_state = 41},
  [27] = {.lex_state = 41},
  [28] = {.lex_state = 41},
  [29] = {.lex_state = 41},
  [30] = {.lex_state = 41},
  [31] = {.lex_state = 41},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 41},
  [34] = {.lex_state = 41},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 41},
  [38] = {.lex_state = 41},
  [39] = {.lex_state = 41},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 41},
  [43] = {.lex_state = 41},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 41},
  [46] = {.lex_state = 41},
  [47] = {.lex_state = 41},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 41},
  [51] = {.lex_state = 41},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 41},
  [54] = {.lex_state = 41},
  [55] = {.lex_state = 41},
  [56] = {.lex_state = 41},
  [57] = {.lex_state = 41},
  [58] = {.lex_state = 41},
  [59] = {.lex_state = 41},
  [60] = {.lex_state = 41},
  [61] = {.lex_state = 41},
  [62] = {.lex_state = 41},
  [63] = {.lex_state = 41},
  [64] = {.lex_state = 41},
  [65] = {.lex_state = 41},
  [66] = {.lex_state = 41},
  [67] = {.lex_state = 41},
  [68] = {.lex_state = 41},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 41},
  [71] = {.lex_state = 41},
  [72] = {.lex_state = 41},
  [73] = {.lex_state = 41},
  [74] = {.lex_state = 41},
  [75] = {.lex_state = 41},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 37},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 37},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 3},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 2},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 3},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 3},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 2},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 38},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 2},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 41},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 39},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 41},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 41},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 41},
  [187] = {.lex_state = 41},
  [188] = {.lex_state = 41},
  [189] = {.lex_state = 41},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 41},
  [196] = {.lex_state = 2},
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
    [aux_sym__xml_base_ident_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(180),
    [sym__node] = STATE(3),
    [sym__braces] = STATE(3),
    [sym__squares] = STATE(3),
    [sym__parens] = STATE(3),
    [sym__meta] = STATE(3),
    [sym_title] = STATE(3),
    [sym_author] = STATE(3),
    [sym_contributor] = STATE(3),
    [sym_date] = STATE(3),
    [sym_tag] = STATE(3),
    [sym_ref] = STATE(3),
    [sym_taxon] = STATE(3),
    [sym_meta] = STATE(3),
    [sym_xml_tag] = STATE(3),
    [sym_decl_xmlns] = STATE(3),
    [sym_def] = STATE(3),
    [sym_alloc] = STATE(3),
    [sym_import] = STATE(3),
    [sym_export] = STATE(3),
    [sym_namespace] = STATE(3),
    [sym_transclude] = STATE(3),
    [sym_let] = STATE(3),
    [sym_tex] = STATE(3),
    [sym_scope] = STATE(3),
    [sym_subtree] = STATE(3),
    [sym_put] = STATE(3),
    [sym_get] = STATE(3),
    [sym_open] = STATE(3),
    [sym_query_tree] = STATE(3),
    [sym__default] = STATE(3),
    [sym_object] = STATE(3),
    [sym_patch] = STATE(3),
    [sym_call] = STATE(3),
    [sym__prim] = STATE(3),
    [sym_inline_math] = STATE(3),
    [sym_display_math] = STATE(3),
    [sym_p] = STATE(3),
    [sym_em] = STATE(3),
    [sym_strong] = STATE(3),
    [sym_li] = STATE(3),
    [sym_ul] = STATE(3),
    [sym_ol] = STATE(3),
    [sym_code] = STATE(3),
    [sym_blockquote] = STATE(3),
    [sym_pre] = STATE(3),
    [sym_ident] = STATE(3),
    [sym_ident_with_method_calls] = STATE(3),
    [sym__link] = STATE(3),
    [sym_markdown_link] = STATE(3),
    [sym_unlabeled_link] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
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
  [0] = 13,
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
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_text,
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
      aux_sym_source_file_repeat1,
  [90] = 13,
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
  [180] = 13,
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
  [270] = 13,
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
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_text,
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
  [360] = 13,
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
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_text,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
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
  [450] = 13,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_LBRACK,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    ACTIONS(128), 1,
      anon_sym_BSLASH,
    ACTIONS(131), 1,
      anon_sym_BSLASH_LT,
    ACTIONS(134), 1,
      anon_sym_BSLASHxmlns_COLON,
    ACTIONS(137), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_POUND,
    ACTIONS(143), 1,
      anon_sym_POUND_POUND,
    ACTIONS(146), 1,
      anon_sym_LBRACK_LBRACK,
    ACTIONS(149), 1,
      sym_text,
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
      aux_sym_source_file_repeat1,
  [540] = 13,
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
    ACTIONS(152), 1,
      anon_sym_RBRACE,
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
  [630] = 13,
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
    ACTIONS(154), 1,
      anon_sym_RBRACE,
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
  [720] = 13,
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
    ACTIONS(111), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_text,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
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
  [810] = 12,
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
    ACTIONS(158), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_text,
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
  [897] = 12,
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
    ACTIONS(162), 1,
      sym_comment,
    ACTIONS(164), 1,
      sym_text,
    STATE(11), 51,
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
  [984] = 12,
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
  [1071] = 12,
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
  [1158] = 12,
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
  [1245] = 12,
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
      aux_sym__braces_repeat1,
  [1332] = 35,
    ACTIONS(182), 1,
      anon_sym_title,
    ACTIONS(184), 1,
      anon_sym_author,
    ACTIONS(186), 1,
      anon_sym_contributor,
    ACTIONS(188), 1,
      anon_sym_date,
    ACTIONS(190), 1,
      anon_sym_tag,
    ACTIONS(192), 1,
      anon_sym_ref,
    ACTIONS(194), 1,
      anon_sym_taxon,
    ACTIONS(196), 1,
      anon_sym_meta,
    ACTIONS(198), 1,
      anon_sym_def,
    ACTIONS(200), 1,
      anon_sym_alloc,
    ACTIONS(202), 1,
      anon_sym_import,
    ACTIONS(204), 1,
      anon_sym_export,
    ACTIONS(206), 1,
      anon_sym_namespace,
    ACTIONS(208), 1,
      anon_sym_transclude,
    ACTIONS(210), 1,
      anon_sym_let,
    ACTIONS(212), 1,
      anon_sym_tex,
    ACTIONS(214), 1,
      anon_sym_scope,
    ACTIONS(216), 1,
      anon_sym_subtree,
    ACTIONS(218), 1,
      anon_sym_put,
    ACTIONS(220), 1,
      anon_sym_get,
    ACTIONS(222), 1,
      anon_sym_open,
    ACTIONS(224), 1,
      anon_sym_query,
    ACTIONS(226), 1,
      anon_sym_object,
    ACTIONS(228), 1,
      anon_sym_patch,
    ACTIONS(230), 1,
      anon_sym_call,
    ACTIONS(232), 1,
      anon_sym_p,
    ACTIONS(234), 1,
      anon_sym_em,
    ACTIONS(236), 1,
      anon_sym_strong,
    ACTIONS(238), 1,
      anon_sym_li,
    ACTIONS(240), 1,
      anon_sym_ul,
    ACTIONS(242), 1,
      anon_sym_ol,
    ACTIONS(244), 1,
      anon_sym_code,
    ACTIONS(246), 1,
      anon_sym_blockquote,
    ACTIONS(248), 1,
      anon_sym_pre,
    ACTIONS(250), 1,
      sym_text,
  [1438] = 4,
    ACTIONS(256), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(254), 13,
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
  [1465] = 5,
    ACTIONS(256), 1,
      anon_sym_LBRACE_RBRACE,
    ACTIONS(258), 1,
      anon_sym_POUND,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(22), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(254), 12,
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
  [1494] = 4,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(260), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(21), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(265), 12,
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
  [1520] = 3,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(21), 2,
      sym__arg,
      aux_sym_ident_repeat1,
    ACTIONS(269), 13,
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
  [1544] = 5,
    ACTIONS(271), 1,
      ts_builtin_sym_end,
    ACTIONS(275), 1,
      anon_sym_POUND,
    ACTIONS(278), 1,
      sym_text,
    STATE(23), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(273), 12,
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
  [1571] = 3,
    STATE(23), 1,
      aux_sym_ident_with_method_calls_repeat1,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(283), 13,
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
  [1594] = 2,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(287), 13,
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
  [1614] = 2,
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
  [1634] = 2,
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
  [1654] = 2,
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
  [1674] = 2,
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
  [1694] = 2,
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
  [1714] = 2,
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
  [1734] = 2,
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
  [1754] = 2,
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
  [1774] = 2,
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
  [1794] = 2,
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
  [1814] = 2,
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
  [1834] = 2,
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
  [1854] = 2,
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
  [1874] = 2,
    ACTIONS(267), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(269), 13,
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
  [1894] = 2,
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
  [1914] = 2,
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
  [1934] = 2,
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
  [1954] = 2,
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
  [1974] = 2,
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
  [1994] = 2,
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
  [2014] = 2,
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
  [2034] = 2,
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
  [2054] = 2,
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
  [2074] = 2,
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
  [2094] = 2,
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
  [2114] = 2,
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
  [2134] = 2,
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
  [2154] = 2,
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
  [2174] = 2,
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
  [2194] = 2,
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
  [2214] = 2,
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
  [2234] = 2,
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
  [2254] = 2,
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
  [2274] = 2,
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
  [2294] = 2,
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
  [2314] = 2,
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
  [2334] = 2,
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
  [2354] = 2,
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
  [2374] = 2,
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
  [2394] = 2,
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
  [2414] = 2,
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
  [2434] = 2,
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
  [2454] = 2,
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
  [2474] = 2,
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
  [2494] = 2,
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
  [2514] = 2,
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
  [2534] = 2,
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
  [2554] = 2,
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
  [2574] = 2,
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
  [2594] = 3,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    ACTIONS(485), 1,
      sym_text,
    ACTIONS(481), 10,
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
  [2613] = 2,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    STATE(40), 10,
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
  [2629] = 2,
    ACTIONS(487), 1,
      anon_sym_BSLASH,
    STATE(41), 10,
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
  [2645] = 9,
    ACTIONS(232), 1,
      anon_sym_p,
    ACTIONS(489), 1,
      anon_sym_em,
    ACTIONS(491), 1,
      anon_sym_strong,
    ACTIONS(493), 1,
      anon_sym_li,
    ACTIONS(495), 1,
      anon_sym_ul,
    ACTIONS(497), 1,
      anon_sym_ol,
    ACTIONS(499), 1,
      anon_sym_code,
    ACTIONS(501), 1,
      anon_sym_blockquote,
    ACTIONS(503), 1,
      anon_sym_pre,
  [2673] = 3,
    STATE(79), 1,
      aux_sym_id_repeat1,
    ACTIONS(505), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(507), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2688] = 3,
    STATE(79), 1,
      aux_sym_id_repeat1,
    ACTIONS(510), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
    ACTIONS(512), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2703] = 3,
    STATE(82), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(514), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(516), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2717] = 3,
    STATE(83), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(518), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(520), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2731] = 3,
    STATE(83), 1,
      aux_sym__xml_base_ident_repeat1,
    ACTIONS(522), 3,
      anon_sym_LBRACE,
      anon_sym_GT,
      anon_sym_COLON,
    ACTIONS(524), 3,
      sym__alpha,
      sym__digit,
      aux_sym__xml_base_ident_token1,
  [2745] = 3,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_id_repeat1,
    ACTIONS(527), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2758] = 4,
    ACTIONS(529), 1,
      anon_sym_RBRACE,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(533), 1,
      aux_sym__whitespace_token1,
    STATE(87), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2773] = 3,
    STATE(84), 1,
      aux_sym_id_repeat1,
    STATE(183), 1,
      sym_id,
    ACTIONS(535), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2786] = 4,
    ACTIONS(537), 1,
      anon_sym_RBRACE,
    ACTIONS(539), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      aux_sym__whitespace_token1,
    STATE(87), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2801] = 5,
    ACTIONS(545), 1,
      sym__alpha,
    ACTIONS(547), 1,
      sym_text,
    STATE(109), 1,
      aux_sym_prefix_repeat1,
    STATE(192), 1,
      sym_prefix,
    STATE(193), 2,
      sym_addr,
      sym_external_link,
  [2818] = 4,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(533), 1,
      aux_sym__whitespace_token1,
    ACTIONS(549), 1,
      anon_sym_RBRACE,
    STATE(87), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2833] = 3,
    STATE(80), 1,
      aux_sym_id_repeat1,
    STATE(108), 1,
      sym_id,
    ACTIONS(551), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2846] = 3,
    ACTIONS(505), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_id_repeat1,
    ACTIONS(553), 4,
      anon_sym_DASH,
      anon_sym__,
      sym__alpha,
      sym__digit,
  [2859] = 3,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(556), 1,
      aux_sym__whitespace_token1,
    STATE(89), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2871] = 4,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    ACTIONS(558), 1,
      anon_sym_LBRACE_RBRACE,
    STATE(101), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2885] = 5,
    ACTIONS(545), 1,
      sym__alpha,
    ACTIONS(560), 1,
      sym_text,
    STATE(109), 1,
      aux_sym_prefix_repeat1,
    STATE(165), 1,
      sym_addr,
    STATE(192), 1,
      sym_prefix,
  [2901] = 3,
    ACTIONS(531), 1,
      anon_sym_LBRACK,
    ACTIONS(562), 1,
      aux_sym__whitespace_token1,
    STATE(85), 3,
      sym_method_decl,
      sym__whitespace,
      aux_sym_object_repeat1,
  [2913] = 4,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    STATE(33), 1,
      sym__arg,
    STATE(102), 1,
      aux_sym_fun_spec_repeat1,
  [2926] = 4,
    ACTIONS(568), 1,
      sym__alpha,
    STATE(109), 1,
      aux_sym_prefix_repeat1,
    STATE(177), 1,
      sym_addr,
    STATE(192), 1,
      sym_prefix,
  [2939] = 4,
    ACTIONS(568), 1,
      sym__alpha,
    STATE(109), 1,
      aux_sym_prefix_repeat1,
    STATE(176), 1,
      sym_addr,
    STATE(192), 1,
      sym_prefix,
  [2952] = 4,
    ACTIONS(568), 1,
      sym__alpha,
    STATE(109), 1,
      aux_sym_prefix_repeat1,
    STATE(175), 1,
      sym_addr,
    STATE(192), 1,
      sym_prefix,
  [2965] = 4,
    ACTIONS(568), 1,
      sym__alpha,
    STATE(109), 1,
      aux_sym_prefix_repeat1,
    STATE(174), 1,
      sym_addr,
    STATE(194), 1,
      sym_prefix,
  [2978] = 2,
    ACTIONS(267), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
    STATE(103), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [2987] = 4,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(566), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym__arg,
    STATE(107), 1,
      aux_sym_fun_spec_repeat1,
  [3000] = 3,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
    STATE(103), 2,
      sym__arg,
      aux_sym_ident_repeat1,
  [3011] = 3,
    ACTIONS(573), 1,
      anon_sym_BSLASH,
    STATE(62), 1,
      sym_fun_spec,
    STATE(96), 1,
      sym_ident,
  [3021] = 3,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    ACTIONS(575), 1,
      anon_sym_LBRACK,
    STATE(48), 1,
      sym__arg,
  [3031] = 3,
    ACTIONS(573), 1,
      anon_sym_BSLASH,
    STATE(52), 1,
      sym_fun_spec,
    STATE(96), 1,
      sym_ident,
  [3041] = 3,
    ACTIONS(577), 1,
      anon_sym_LBRACE,
    ACTIONS(579), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      aux_sym_fun_spec_repeat1,
  [3051] = 1,
    ACTIONS(582), 3,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK_RBRACK,
  [3057] = 3,
    ACTIONS(584), 1,
      anon_sym_DASH,
    ACTIONS(586), 1,
      sym__alpha,
    STATE(113), 1,
      aux_sym_prefix_repeat1,
  [3067] = 2,
    ACTIONS(309), 1,
      aux_sym__whitespace_token1,
    ACTIONS(311), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [3075] = 3,
    ACTIONS(588), 1,
      anon_sym_POUND,
    ACTIONS(590), 1,
      sym_text,
    STATE(24), 1,
      aux_sym_ident_with_method_calls_repeat1,
  [3085] = 2,
    ACTIONS(594), 1,
      aux_sym__whitespace_token1,
    ACTIONS(592), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [3093] = 3,
    ACTIONS(596), 1,
      anon_sym_DASH,
    ACTIONS(598), 1,
      sym__alpha,
    STATE(113), 1,
      aux_sym_prefix_repeat1,
  [3103] = 3,
    ACTIONS(601), 1,
      sym__alpha,
    STATE(153), 1,
      sym__xml_base_ident,
    STATE(166), 1,
      sym__xml_qname,
  [3113] = 2,
    ACTIONS(603), 1,
      anon_sym_LBRACE,
    STATE(112), 1,
      sym__arg,
  [3120] = 2,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym__txt_arg,
  [3127] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym__arg,
  [3134] = 2,
    ACTIONS(607), 1,
      anon_sym_BSLASH,
    STATE(55), 1,
      sym_ident,
  [3141] = 2,
    ACTIONS(607), 1,
      anon_sym_BSLASH,
    STATE(53), 1,
      sym_ident,
  [3148] = 2,
    ACTIONS(573), 1,
      anon_sym_BSLASH,
    STATE(124), 1,
      sym_ident,
  [3155] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym__arg,
  [3162] = 1,
    ACTIONS(309), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3167] = 1,
    ACTIONS(267), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3172] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym__arg,
  [3179] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym__arg,
  [3186] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym__arg,
  [3193] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym__arg,
  [3200] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym__arg,
  [3207] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(44), 1,
      sym__arg,
  [3214] = 2,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym__txt_arg,
  [3221] = 2,
    ACTIONS(609), 1,
      sym_year,
    ACTIONS(611), 1,
      sym_text,
  [3228] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym__arg,
  [3235] = 2,
    ACTIONS(613), 1,
      anon_sym_LBRACE,
    STATE(184), 1,
      sym__arg,
  [3242] = 2,
    ACTIONS(601), 1,
      sym__alpha,
    STATE(170), 1,
      sym__xml_base_ident,
  [3249] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym__arg,
  [3256] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym__arg,
  [3263] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym__arg,
  [3270] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym__arg,
  [3277] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym__arg,
  [3284] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(61), 1,
      sym__arg,
  [3291] = 2,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    STATE(36), 1,
      sym__txt_arg,
  [3298] = 2,
    ACTIONS(607), 1,
      anon_sym_BSLASH,
    STATE(54), 1,
      sym_ident,
  [3305] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym__arg,
  [3312] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym__arg,
  [3319] = 2,
    ACTIONS(615), 1,
      anon_sym_LBRACE,
    STATE(127), 1,
      sym__txt_arg,
  [3326] = 2,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym__txt_arg,
  [3333] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(51), 1,
      sym__arg,
  [3340] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym__arg,
  [3347] = 2,
    ACTIONS(601), 1,
      sym__alpha,
    STATE(141), 1,
      sym__xml_base_ident,
  [3354] = 2,
    ACTIONS(605), 1,
      anon_sym_LBRACE,
    STATE(65), 1,
      sym__txt_arg,
  [3361] = 1,
    ACTIONS(617), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [3366] = 2,
    ACTIONS(619), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym__txt_arg,
  [3373] = 2,
    ACTIONS(621), 1,
      anon_sym_GT,
    ACTIONS(623), 1,
      anon_sym_COLON,
  [3380] = 2,
    ACTIONS(625), 1,
      aux_sym_day_token1,
    STATE(168), 1,
      sym_day,
  [3387] = 1,
    ACTIONS(627), 1,
      anon_sym_LBRACE,
  [3391] = 1,
    ACTIONS(629), 1,
      anon_sym_LBRACE,
  [3395] = 1,
    ACTIONS(631), 1,
      sym_month,
  [3399] = 1,
    ACTIONS(633), 1,
      anon_sym_DASH,
  [3403] = 1,
    ACTIONS(635), 1,
      anon_sym_RBRACK,
  [3407] = 1,
    ACTIONS(637), 1,
      anon_sym_LBRACE,
  [3411] = 1,
    ACTIONS(639), 1,
      anon_sym_LBRACE,
  [3415] = 1,
    ACTIONS(641), 1,
      anon_sym_LBRACE,
  [3419] = 1,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
  [3423] = 1,
    ACTIONS(645), 1,
      sym_text,
  [3427] = 1,
    ACTIONS(647), 1,
      anon_sym_RPAREN,
  [3431] = 1,
    ACTIONS(649), 1,
      anon_sym_GT,
  [3435] = 1,
    ACTIONS(651), 1,
      aux_sym_day_token2,
  [3439] = 1,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
  [3443] = 1,
    ACTIONS(655), 1,
      anon_sym_RBRACK,
  [3447] = 1,
    ACTIONS(657), 1,
      anon_sym_GT,
  [3451] = 1,
    ACTIONS(659), 1,
      sym_text,
  [3455] = 1,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
  [3459] = 1,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
  [3463] = 1,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
  [3467] = 1,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
  [3471] = 1,
    ACTIONS(669), 1,
      anon_sym_RBRACE,
  [3475] = 1,
    ACTIONS(671), 1,
      anon_sym_RBRACE,
  [3479] = 1,
    ACTIONS(673), 1,
      sym_text,
  [3483] = 1,
    ACTIONS(675), 1,
      anon_sym_DASH,
  [3487] = 1,
    ACTIONS(677), 1,
      ts_builtin_sym_end,
  [3491] = 1,
    ACTIONS(679), 1,
      anon_sym_RBRACE,
  [3495] = 1,
    ACTIONS(681), 1,
      anon_sym_LBRACK,
  [3499] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACK,
  [3503] = 1,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
  [3507] = 1,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
  [3511] = 1,
    ACTIONS(685), 1,
      sym_text,
  [3515] = 1,
    ACTIONS(687), 1,
      sym_text,
  [3519] = 1,
    ACTIONS(689), 1,
      sym_text,
  [3523] = 1,
    ACTIONS(691), 1,
      sym_text,
  [3527] = 1,
    ACTIONS(693), 1,
      anon_sym_LPAREN,
  [3531] = 1,
    ACTIONS(695), 1,
      anon_sym_RBRACE,
  [3535] = 1,
    ACTIONS(697), 1,
      anon_sym_DASH,
  [3539] = 1,
    ACTIONS(699), 1,
      anon_sym_RBRACK_RBRACK,
  [3543] = 1,
    ACTIONS(701), 1,
      anon_sym_DASH,
  [3547] = 1,
    ACTIONS(703), 1,
      sym_text,
  [3551] = 1,
    ACTIONS(705), 1,
      anon_sym_RBRACK_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 180,
  [SMALL_STATE(6)] = 270,
  [SMALL_STATE(7)] = 360,
  [SMALL_STATE(8)] = 450,
  [SMALL_STATE(9)] = 540,
  [SMALL_STATE(10)] = 630,
  [SMALL_STATE(11)] = 720,
  [SMALL_STATE(12)] = 810,
  [SMALL_STATE(13)] = 897,
  [SMALL_STATE(14)] = 984,
  [SMALL_STATE(15)] = 1071,
  [SMALL_STATE(16)] = 1158,
  [SMALL_STATE(17)] = 1245,
  [SMALL_STATE(18)] = 1332,
  [SMALL_STATE(19)] = 1438,
  [SMALL_STATE(20)] = 1465,
  [SMALL_STATE(21)] = 1494,
  [SMALL_STATE(22)] = 1520,
  [SMALL_STATE(23)] = 1544,
  [SMALL_STATE(24)] = 1571,
  [SMALL_STATE(25)] = 1594,
  [SMALL_STATE(26)] = 1614,
  [SMALL_STATE(27)] = 1634,
  [SMALL_STATE(28)] = 1654,
  [SMALL_STATE(29)] = 1674,
  [SMALL_STATE(30)] = 1694,
  [SMALL_STATE(31)] = 1714,
  [SMALL_STATE(32)] = 1734,
  [SMALL_STATE(33)] = 1754,
  [SMALL_STATE(34)] = 1774,
  [SMALL_STATE(35)] = 1794,
  [SMALL_STATE(36)] = 1814,
  [SMALL_STATE(37)] = 1834,
  [SMALL_STATE(38)] = 1854,
  [SMALL_STATE(39)] = 1874,
  [SMALL_STATE(40)] = 1894,
  [SMALL_STATE(41)] = 1914,
  [SMALL_STATE(42)] = 1934,
  [SMALL_STATE(43)] = 1954,
  [SMALL_STATE(44)] = 1974,
  [SMALL_STATE(45)] = 1994,
  [SMALL_STATE(46)] = 2014,
  [SMALL_STATE(47)] = 2034,
  [SMALL_STATE(48)] = 2054,
  [SMALL_STATE(49)] = 2074,
  [SMALL_STATE(50)] = 2094,
  [SMALL_STATE(51)] = 2114,
  [SMALL_STATE(52)] = 2134,
  [SMALL_STATE(53)] = 2154,
  [SMALL_STATE(54)] = 2174,
  [SMALL_STATE(55)] = 2194,
  [SMALL_STATE(56)] = 2214,
  [SMALL_STATE(57)] = 2234,
  [SMALL_STATE(58)] = 2254,
  [SMALL_STATE(59)] = 2274,
  [SMALL_STATE(60)] = 2294,
  [SMALL_STATE(61)] = 2314,
  [SMALL_STATE(62)] = 2334,
  [SMALL_STATE(63)] = 2354,
  [SMALL_STATE(64)] = 2374,
  [SMALL_STATE(65)] = 2394,
  [SMALL_STATE(66)] = 2414,
  [SMALL_STATE(67)] = 2434,
  [SMALL_STATE(68)] = 2454,
  [SMALL_STATE(69)] = 2474,
  [SMALL_STATE(70)] = 2494,
  [SMALL_STATE(71)] = 2514,
  [SMALL_STATE(72)] = 2534,
  [SMALL_STATE(73)] = 2554,
  [SMALL_STATE(74)] = 2574,
  [SMALL_STATE(75)] = 2594,
  [SMALL_STATE(76)] = 2613,
  [SMALL_STATE(77)] = 2629,
  [SMALL_STATE(78)] = 2645,
  [SMALL_STATE(79)] = 2673,
  [SMALL_STATE(80)] = 2688,
  [SMALL_STATE(81)] = 2703,
  [SMALL_STATE(82)] = 2717,
  [SMALL_STATE(83)] = 2731,
  [SMALL_STATE(84)] = 2745,
  [SMALL_STATE(85)] = 2758,
  [SMALL_STATE(86)] = 2773,
  [SMALL_STATE(87)] = 2786,
  [SMALL_STATE(88)] = 2801,
  [SMALL_STATE(89)] = 2818,
  [SMALL_STATE(90)] = 2833,
  [SMALL_STATE(91)] = 2846,
  [SMALL_STATE(92)] = 2859,
  [SMALL_STATE(93)] = 2871,
  [SMALL_STATE(94)] = 2885,
  [SMALL_STATE(95)] = 2901,
  [SMALL_STATE(96)] = 2913,
  [SMALL_STATE(97)] = 2926,
  [SMALL_STATE(98)] = 2939,
  [SMALL_STATE(99)] = 2952,
  [SMALL_STATE(100)] = 2965,
  [SMALL_STATE(101)] = 2978,
  [SMALL_STATE(102)] = 2987,
  [SMALL_STATE(103)] = 3000,
  [SMALL_STATE(104)] = 3011,
  [SMALL_STATE(105)] = 3021,
  [SMALL_STATE(106)] = 3031,
  [SMALL_STATE(107)] = 3041,
  [SMALL_STATE(108)] = 3051,
  [SMALL_STATE(109)] = 3057,
  [SMALL_STATE(110)] = 3067,
  [SMALL_STATE(111)] = 3075,
  [SMALL_STATE(112)] = 3085,
  [SMALL_STATE(113)] = 3093,
  [SMALL_STATE(114)] = 3103,
  [SMALL_STATE(115)] = 3113,
  [SMALL_STATE(116)] = 3120,
  [SMALL_STATE(117)] = 3127,
  [SMALL_STATE(118)] = 3134,
  [SMALL_STATE(119)] = 3141,
  [SMALL_STATE(120)] = 3148,
  [SMALL_STATE(121)] = 3155,
  [SMALL_STATE(122)] = 3162,
  [SMALL_STATE(123)] = 3167,
  [SMALL_STATE(124)] = 3172,
  [SMALL_STATE(125)] = 3179,
  [SMALL_STATE(126)] = 3186,
  [SMALL_STATE(127)] = 3193,
  [SMALL_STATE(128)] = 3200,
  [SMALL_STATE(129)] = 3207,
  [SMALL_STATE(130)] = 3214,
  [SMALL_STATE(131)] = 3221,
  [SMALL_STATE(132)] = 3228,
  [SMALL_STATE(133)] = 3235,
  [SMALL_STATE(134)] = 3242,
  [SMALL_STATE(135)] = 3249,
  [SMALL_STATE(136)] = 3256,
  [SMALL_STATE(137)] = 3263,
  [SMALL_STATE(138)] = 3270,
  [SMALL_STATE(139)] = 3277,
  [SMALL_STATE(140)] = 3284,
  [SMALL_STATE(141)] = 3291,
  [SMALL_STATE(142)] = 3298,
  [SMALL_STATE(143)] = 3305,
  [SMALL_STATE(144)] = 3312,
  [SMALL_STATE(145)] = 3319,
  [SMALL_STATE(146)] = 3326,
  [SMALL_STATE(147)] = 3333,
  [SMALL_STATE(148)] = 3340,
  [SMALL_STATE(149)] = 3347,
  [SMALL_STATE(150)] = 3354,
  [SMALL_STATE(151)] = 3361,
  [SMALL_STATE(152)] = 3366,
  [SMALL_STATE(153)] = 3373,
  [SMALL_STATE(154)] = 3380,
  [SMALL_STATE(155)] = 3387,
  [SMALL_STATE(156)] = 3391,
  [SMALL_STATE(157)] = 3395,
  [SMALL_STATE(158)] = 3399,
  [SMALL_STATE(159)] = 3403,
  [SMALL_STATE(160)] = 3407,
  [SMALL_STATE(161)] = 3411,
  [SMALL_STATE(162)] = 3415,
  [SMALL_STATE(163)] = 3419,
  [SMALL_STATE(164)] = 3423,
  [SMALL_STATE(165)] = 3427,
  [SMALL_STATE(166)] = 3431,
  [SMALL_STATE(167)] = 3435,
  [SMALL_STATE(168)] = 3439,
  [SMALL_STATE(169)] = 3443,
  [SMALL_STATE(170)] = 3447,
  [SMALL_STATE(171)] = 3451,
  [SMALL_STATE(172)] = 3455,
  [SMALL_STATE(173)] = 3459,
  [SMALL_STATE(174)] = 3463,
  [SMALL_STATE(175)] = 3467,
  [SMALL_STATE(176)] = 3471,
  [SMALL_STATE(177)] = 3475,
  [SMALL_STATE(178)] = 3479,
  [SMALL_STATE(179)] = 3483,
  [SMALL_STATE(180)] = 3487,
  [SMALL_STATE(181)] = 3491,
  [SMALL_STATE(182)] = 3495,
  [SMALL_STATE(183)] = 3499,
  [SMALL_STATE(184)] = 3503,
  [SMALL_STATE(185)] = 3507,
  [SMALL_STATE(186)] = 3511,
  [SMALL_STATE(187)] = 3515,
  [SMALL_STATE(188)] = 3519,
  [SMALL_STATE(189)] = 3523,
  [SMALL_STATE(190)] = 3527,
  [SMALL_STATE(191)] = 3531,
  [SMALL_STATE(192)] = 3535,
  [SMALL_STATE(193)] = 3539,
  [SMALL_STATE(194)] = 3543,
  [SMALL_STATE(195)] = 3547,
  [SMALL_STATE(196)] = 3551,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__braces_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__arg_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(149),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(138),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(88),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [186] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 2, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident, 3, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident, 3, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_with_method_calls_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ident_with_method_calls, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_xml_tag, 3, 0, 0),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_markdown_link, 6, 0, 11),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_markdown_link, 6, 0, 11),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_export, 5, 0, 0),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_export, 5, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 5, 0, 0),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import, 5, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 3, 0, 9),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 3, 0, 9),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__txt_arg, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__arg, 3, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__arg, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4, 0, 7),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_put, 4, 0, 7),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fun_spec, 2, 0, 6),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fun_spec, 2, 0, 6),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta, 4, 0, 0),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta, 4, 0, 0),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unlabeled_link, 3, 0, 0),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decl_xmlns, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, 0, 5),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref, 3, 0, 5),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_patch, 9, 0, 14),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_patch, 9, 0, 14),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pre, 3, 0, 0),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pre, 3, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blockquote, 3, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blockquote, 3, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ol, 3, 0, 0),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ol, 3, 0, 0),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ul, 3, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ul, 3, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_li, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_li, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_strong, 3, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_strong, 3, 0, 0),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_taxon, 3, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_taxon, 3, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 3, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3, 0, 0),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transclude, 5, 0, 10),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transclude, 5, 0, 10),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtree, 6, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtree, 6, 0, 0),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 3, 0, 0),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def, 3, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_get, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_get, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alloc, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alloc, 3, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3, 0, 0),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 3, 0, 0),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 8, 0, 12),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 8, 0, 12),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 2, 0, 0),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 2, 0, 0),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_display_math, 2, 0, 0),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_display_math, 2, 0, 0),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_tree, 3, 0, 0),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_tree, 3, 0, 0),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 3, 0, 0),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_namespace, 3, 0, 0),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_p, 3, 0, 0),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_p, 3, 0, 0),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let, 3, 0, 0),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let, 3, 0, 0),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 9, 0, 13),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 9, 0, 13),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__braces, 3, 0, 0),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__braces, 3, 0, 0),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 4),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 4),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tex, 3, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tex, 3, 0, 0),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__squares, 3, 0, 0),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__squares, 3, 0, 0),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parens, 3, 0, 0),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parens, 3, 0, 0),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3, 0, 0),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 3, 0, 0),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope, 3, 0, 0),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope, 3, 0, 0),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_author, 3, 0, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_author, 3, 0, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contributor, 3, 0, 2),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_contributor, 3, 0, 2),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_em, 3, 0, 0),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_em, 3, 0, 0),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 3, 0, 3),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 3, 0, 3),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__node, 1, 0, 0),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1, 0, 0),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_id, 1, 0, 0),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 1, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_base_ident, 2, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__xml_base_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(164),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [553] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_id_repeat1, 2, 0, 0), SHIFT_REPEAT(91),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 2, 0, 0), SHIFT_REPEAT(178),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addr, 3, 0, 8),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix, 1, 0, 0),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [588] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_decl, 4, 0, 15),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_decl, 4, 0, 15),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2, 0, 0),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prefix_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_fun_spec_repeat1, 3, 0, 0),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 1, 0, 0),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__xml_qname, 3, 0, 0),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_day, 2, 0, 0),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [677] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_external_link, 1, 0, 0),
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
