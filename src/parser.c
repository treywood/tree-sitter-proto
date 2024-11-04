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
#define STATE_COUNT 302
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 130
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 21

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  anon_sym_syntax = 2,
  anon_sym_EQ = 3,
  anon_sym_DQUOTEproto3_DQUOTE = 4,
  anon_sym_DQUOTEproto2_DQUOTE = 5,
  anon_sym_import = 6,
  anon_sym_weak = 7,
  anon_sym_public = 8,
  anon_sym_package = 9,
  anon_sym_option = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_DOT = 13,
  anon_sym_enum = 14,
  anon_sym_LBRACE = 15,
  anon_sym_RBRACE = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  anon_sym_message = 19,
  anon_sym_extend = 20,
  anon_sym_optional = 21,
  anon_sym_required = 22,
  anon_sym_repeated = 23,
  anon_sym_COMMA = 24,
  anon_sym_oneof = 25,
  anon_sym_map = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_int32 = 29,
  anon_sym_int64 = 30,
  anon_sym_uint32 = 31,
  anon_sym_uint64 = 32,
  anon_sym_sint32 = 33,
  anon_sym_sint64 = 34,
  anon_sym_fixed32 = 35,
  anon_sym_fixed64 = 36,
  anon_sym_sfixed32 = 37,
  anon_sym_sfixed64 = 38,
  anon_sym_bool = 39,
  anon_sym_string = 40,
  anon_sym_double = 41,
  anon_sym_float = 42,
  anon_sym_bytes = 43,
  anon_sym_reserved = 44,
  anon_sym_extensions = 45,
  anon_sym_to = 46,
  anon_sym_max = 47,
  anon_sym_service = 48,
  anon_sym_rpc = 49,
  anon_sym_stream = 50,
  anon_sym_returns = 51,
  anon_sym_DASH = 52,
  anon_sym_PLUS = 53,
  anon_sym_COLON = 54,
  sym_identifier = 55,
  sym_true = 56,
  sym_false = 57,
  sym_decimal_lit = 58,
  sym_octal_lit = 59,
  sym_hex_lit = 60,
  sym_float_lit = 61,
  anon_sym_SQUOTE = 62,
  aux_sym_string_token1 = 63,
  anon_sym_DQUOTE = 64,
  aux_sym_string_token2 = 65,
  sym_escape_sequence = 66,
  sym_comment = 67,
  sym_source_file = 68,
  sym_empty_statement = 69,
  sym_syntax = 70,
  sym_import = 71,
  sym_package = 72,
  sym_option = 73,
  sym_option_name = 74,
  sym_enum = 75,
  sym_enum_name = 76,
  sym_enum_body = 77,
  sym_enum_field = 78,
  sym_message = 79,
  sym_message_body = 80,
  sym_message_name = 81,
  sym_extend = 82,
  sym_field = 83,
  sym_field_options = 84,
  sym_field_option = 85,
  sym_oneof = 86,
  sym_oneof_body = 87,
  sym_oneof_field = 88,
  sym_map_field = 89,
  sym_key_type = 90,
  sym_type = 91,
  sym_reserved = 92,
  sym_extensions = 93,
  sym_ranges = 94,
  sym_range = 95,
  sym_field_names = 96,
  sym_message_or_enum_type = 97,
  sym_field_number = 98,
  sym_service = 99,
  sym_service_body = 100,
  sym_service_name = 101,
  sym_rpc = 102,
  sym_rpc_body = 103,
  sym_rpc_name = 104,
  sym_enum_variant_name = 105,
  sym__constant = 106,
  sym_block_lit = 107,
  sym_block_field = 108,
  sym__identifier_or_string = 109,
  sym_full_ident = 110,
  sym_bool = 111,
  sym_int_lit = 112,
  sym_string = 113,
  aux_sym_source_file_repeat1 = 114,
  aux_sym_option_name_repeat1 = 115,
  aux_sym_enum_body_repeat1 = 116,
  aux_sym_message_body_repeat1 = 117,
  aux_sym_field_options_repeat1 = 118,
  aux_sym_oneof_body_repeat1 = 119,
  aux_sym_ranges_repeat1 = 120,
  aux_sym_field_names_repeat1 = 121,
  aux_sym_message_or_enum_type_repeat1 = 122,
  aux_sym_service_body_repeat1 = 123,
  aux_sym_rpc_body_repeat1 = 124,
  aux_sym_block_lit_repeat1 = 125,
  aux_sym_block_field_repeat1 = 126,
  aux_sym_string_repeat1 = 127,
  aux_sym_string_repeat2 = 128,
  aux_sym_string_repeat3 = 129,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_syntax] = "syntax",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTEproto3_DQUOTE] = "\"proto3\"",
  [anon_sym_DQUOTEproto2_DQUOTE] = "\"proto2\"",
  [anon_sym_import] = "import",
  [anon_sym_weak] = "weak",
  [anon_sym_public] = "public",
  [anon_sym_package] = "package",
  [anon_sym_option] = "option",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
  [anon_sym_enum] = "enum",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_message] = "message",
  [anon_sym_extend] = "extend",
  [anon_sym_optional] = "optional",
  [anon_sym_required] = "required",
  [anon_sym_repeated] = "repeated",
  [anon_sym_COMMA] = ",",
  [anon_sym_oneof] = "oneof",
  [anon_sym_map] = "map",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_uint32] = "uint32",
  [anon_sym_uint64] = "uint64",
  [anon_sym_sint32] = "sint32",
  [anon_sym_sint64] = "sint64",
  [anon_sym_fixed32] = "fixed32",
  [anon_sym_fixed64] = "fixed64",
  [anon_sym_sfixed32] = "sfixed32",
  [anon_sym_sfixed64] = "sfixed64",
  [anon_sym_bool] = "bool",
  [anon_sym_string] = "string",
  [anon_sym_double] = "double",
  [anon_sym_float] = "float",
  [anon_sym_bytes] = "bytes",
  [anon_sym_reserved] = "reserved",
  [anon_sym_extensions] = "extensions",
  [anon_sym_to] = "to",
  [anon_sym_max] = "max",
  [anon_sym_service] = "service",
  [anon_sym_rpc] = "rpc",
  [anon_sym_stream] = "stream",
  [anon_sym_returns] = "returns",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_decimal_lit] = "decimal_lit",
  [sym_octal_lit] = "octal_lit",
  [sym_hex_lit] = "hex_lit",
  [sym_float_lit] = "float_lit",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token2] = "string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_empty_statement] = "empty_statement",
  [sym_syntax] = "syntax",
  [sym_import] = "import",
  [sym_package] = "package",
  [sym_option] = "option",
  [sym_option_name] = "option_name",
  [sym_enum] = "enum",
  [sym_enum_name] = "enum_name",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_message] = "message",
  [sym_message_body] = "message_body",
  [sym_message_name] = "message_name",
  [sym_extend] = "extend",
  [sym_field] = "field",
  [sym_field_options] = "field_options",
  [sym_field_option] = "field_option",
  [sym_oneof] = "oneof",
  [sym_oneof_body] = "oneof_body",
  [sym_oneof_field] = "oneof_field",
  [sym_map_field] = "map_field",
  [sym_key_type] = "key_type",
  [sym_type] = "type",
  [sym_reserved] = "reserved",
  [sym_extensions] = "extensions",
  [sym_ranges] = "ranges",
  [sym_range] = "range",
  [sym_field_names] = "field_names",
  [sym_message_or_enum_type] = "message_or_enum_type",
  [sym_field_number] = "field_number",
  [sym_service] = "service",
  [sym_service_body] = "service_body",
  [sym_service_name] = "service_name",
  [sym_rpc] = "rpc",
  [sym_rpc_body] = "rpc_body",
  [sym_rpc_name] = "rpc_name",
  [sym_enum_variant_name] = "enum_variant_name",
  [sym__constant] = "_constant",
  [sym_block_lit] = "block_lit",
  [sym_block_field] = "block_field",
  [sym__identifier_or_string] = "_identifier_or_string",
  [sym_full_ident] = "full_ident",
  [sym_bool] = "bool",
  [sym_int_lit] = "int_lit",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_option_name_repeat1] = "option_name_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_message_body_repeat1] = "message_body_repeat1",
  [aux_sym_field_options_repeat1] = "field_options_repeat1",
  [aux_sym_oneof_body_repeat1] = "oneof_body_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_field_names_repeat1] = "field_names_repeat1",
  [aux_sym_message_or_enum_type_repeat1] = "message_or_enum_type_repeat1",
  [aux_sym_service_body_repeat1] = "service_body_repeat1",
  [aux_sym_rpc_body_repeat1] = "rpc_body_repeat1",
  [aux_sym_block_lit_repeat1] = "block_lit_repeat1",
  [aux_sym_block_field_repeat1] = "block_field_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_string_repeat3] = "string_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_syntax] = anon_sym_syntax,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTEproto3_DQUOTE] = anon_sym_DQUOTEproto3_DQUOTE,
  [anon_sym_DQUOTEproto2_DQUOTE] = anon_sym_DQUOTEproto2_DQUOTE,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_public] = anon_sym_public,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_repeated] = anon_sym_repeated,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_oneof] = anon_sym_oneof,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_uint32] = anon_sym_uint32,
  [anon_sym_uint64] = anon_sym_uint64,
  [anon_sym_sint32] = anon_sym_sint32,
  [anon_sym_sint64] = anon_sym_sint64,
  [anon_sym_fixed32] = anon_sym_fixed32,
  [anon_sym_fixed64] = anon_sym_fixed64,
  [anon_sym_sfixed32] = anon_sym_sfixed32,
  [anon_sym_sfixed64] = anon_sym_sfixed64,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_bytes] = anon_sym_bytes,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_extensions] = anon_sym_extensions,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_rpc] = anon_sym_rpc,
  [anon_sym_stream] = anon_sym_stream,
  [anon_sym_returns] = anon_sym_returns,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_decimal_lit] = sym_decimal_lit,
  [sym_octal_lit] = sym_octal_lit,
  [sym_hex_lit] = sym_hex_lit,
  [sym_float_lit] = sym_float_lit,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_empty_statement] = sym_empty_statement,
  [sym_syntax] = sym_syntax,
  [sym_import] = sym_import,
  [sym_package] = sym_package,
  [sym_option] = sym_option,
  [sym_option_name] = sym_option_name,
  [sym_enum] = sym_enum,
  [sym_enum_name] = sym_enum_name,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_message] = sym_message,
  [sym_message_body] = sym_message_body,
  [sym_message_name] = sym_message_name,
  [sym_extend] = sym_extend,
  [sym_field] = sym_field,
  [sym_field_options] = sym_field_options,
  [sym_field_option] = sym_field_option,
  [sym_oneof] = sym_oneof,
  [sym_oneof_body] = sym_oneof_body,
  [sym_oneof_field] = sym_oneof_field,
  [sym_map_field] = sym_map_field,
  [sym_key_type] = sym_key_type,
  [sym_type] = sym_type,
  [sym_reserved] = sym_reserved,
  [sym_extensions] = sym_extensions,
  [sym_ranges] = sym_ranges,
  [sym_range] = sym_range,
  [sym_field_names] = sym_field_names,
  [sym_message_or_enum_type] = sym_message_or_enum_type,
  [sym_field_number] = sym_field_number,
  [sym_service] = sym_service,
  [sym_service_body] = sym_service_body,
  [sym_service_name] = sym_service_name,
  [sym_rpc] = sym_rpc,
  [sym_rpc_body] = sym_rpc_body,
  [sym_rpc_name] = sym_rpc_name,
  [sym_enum_variant_name] = sym_enum_variant_name,
  [sym__constant] = sym__constant,
  [sym_block_lit] = sym_block_lit,
  [sym_block_field] = sym_block_field,
  [sym__identifier_or_string] = sym__identifier_or_string,
  [sym_full_ident] = sym_full_ident,
  [sym_bool] = sym_bool,
  [sym_int_lit] = sym_int_lit,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_option_name_repeat1] = aux_sym_option_name_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_message_body_repeat1] = aux_sym_message_body_repeat1,
  [aux_sym_field_options_repeat1] = aux_sym_field_options_repeat1,
  [aux_sym_oneof_body_repeat1] = aux_sym_oneof_body_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_field_names_repeat1] = aux_sym_field_names_repeat1,
  [aux_sym_message_or_enum_type_repeat1] = aux_sym_message_or_enum_type_repeat1,
  [aux_sym_service_body_repeat1] = aux_sym_service_body_repeat1,
  [aux_sym_rpc_body_repeat1] = aux_sym_rpc_body_repeat1,
  [aux_sym_block_lit_repeat1] = aux_sym_block_lit_repeat1,
  [aux_sym_block_field_repeat1] = aux_sym_block_field_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_string_repeat3] = aux_sym_string_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_syntax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEproto3_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTEproto2_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_public] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_message] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extend] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_repeated] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
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
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_uint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sint64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sfixed64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bytes] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extensions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rpc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stream] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_returns] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_float_lit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_empty_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_syntax] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_package] = {
    .visible = true,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_option_name] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_message] = {
    .visible = true,
    .named = true,
  },
  [sym_message_body] = {
    .visible = true,
    .named = true,
  },
  [sym_message_name] = {
    .visible = true,
    .named = true,
  },
  [sym_extend] = {
    .visible = true,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_field_options] = {
    .visible = true,
    .named = true,
  },
  [sym_field_option] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof_body] = {
    .visible = true,
    .named = true,
  },
  [sym_oneof_field] = {
    .visible = true,
    .named = true,
  },
  [sym_map_field] = {
    .visible = true,
    .named = true,
  },
  [sym_key_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_reserved] = {
    .visible = true,
    .named = true,
  },
  [sym_extensions] = {
    .visible = true,
    .named = true,
  },
  [sym_ranges] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_field_names] = {
    .visible = true,
    .named = true,
  },
  [sym_message_or_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_field_number] = {
    .visible = true,
    .named = true,
  },
  [sym_service] = {
    .visible = true,
    .named = true,
  },
  [sym_service_body] = {
    .visible = true,
    .named = true,
  },
  [sym_service_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_body] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_name] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_variant_name] = {
    .visible = true,
    .named = true,
  },
  [sym__constant] = {
    .visible = false,
    .named = true,
  },
  [sym_block_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_block_field] = {
    .visible = true,
    .named = true,
  },
  [sym__identifier_or_string] = {
    .visible = false,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_int_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_options_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_oneof_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ranges_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_message_or_enum_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_service_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_lit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_field_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat3] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_path = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_path] = "path",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 2},
  [7] = {.index = 11, .length = 4},
  [8] = {.index = 15, .length = 4},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 5},
  [11] = {.index = 27, .length = 4},
  [12] = {.index = 31, .length = 5},
  [13] = {.index = 36, .length = 4},
  [14] = {.index = 40, .length = 6},
  [15] = {.index = 46, .length = 5},
  [16] = {.index = 51, .length = 5},
  [17] = {.index = 56, .length = 2},
  [18] = {.index = 58, .length = 7},
  [19] = {.index = 65, .length = 6},
  [20] = {.index = 71, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_path, 2},
  [2] =
    {field_name, 1},
    {field_value, 3},
  [4] =
    {field_key, 0},
    {field_value, 1},
  [6] =
    {field_key, 0},
    {field_value, 1},
    {field_value, 2},
  [9] =
    {field_key, 0},
    {field_value, 2},
  [11] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
  [15] =
    {field_key, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
  [19] =
    {field_key, 0},
    {field_value, 2},
    {field_value, 3},
  [22] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
    {field_value, 4},
  [27] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 4},
  [31] =
    {field_key, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [36] =
    {field_key, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [40] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
  [46] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 4},
    {field_value, 5},
  [51] =
    {field_key, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
  [56] =
    {field_name, 0},
    {field_value, 2},
  [58] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
    {field_value, 6},
  [65] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 4},
    {field_value, 5},
    {field_value, 6},
  [71] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 4},
    {field_value, 5},
    {field_value, 6},
    {field_value, 7},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 2,
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
  [38] = 27,
  [39] = 28,
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
  [53] = 51,
  [54] = 51,
  [55] = 51,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 27,
  [64] = 64,
  [65] = 65,
  [66] = 28,
  [67] = 67,
  [68] = 68,
  [69] = 67,
  [70] = 65,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 26,
  [78] = 20,
  [79] = 79,
  [80] = 80,
  [81] = 22,
  [82] = 21,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 7,
  [87] = 25,
  [88] = 24,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
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
  [118] = 23,
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
  [129] = 35,
  [130] = 130,
  [131] = 131,
  [132] = 28,
  [133] = 35,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 130,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 27,
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
  [177] = 176,
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
  [197] = 197,
  [198] = 176,
  [199] = 176,
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
  [223] = 205,
  [224] = 210,
  [225] = 212,
  [226] = 211,
  [227] = 219,
  [228] = 218,
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
  [280] = 280,
  [281] = 281,
  [282] = 260,
  [283] = 283,
  [284] = 284,
  [285] = 249,
  [286] = 260,
  [287] = 260,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 241,
  [296] = 241,
  [297] = 241,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '"', 416,
        '\'', 409,
        '(', 205,
        ')', 206,
        '+', 274,
        ',', 225,
        '-', 273,
        '.', 208,
        '/', 7,
        '0', 401,
        ':', 275,
        ';', 192,
        '<', 230,
        '=', 194,
        '>', 231,
        '[', 213,
        '\\', 34,
        ']', 214,
        'b', 127,
        'd', 123,
        'e', 113,
        'f', 35,
        'i', 105,
        'm', 36,
        'n', 37,
        'o', 112,
        'p', 39,
        'r', 61,
        's', 62,
        't', 124,
        'u', 96,
        'w', 71,
        '{', 211,
        '}', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(189);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 416,
        '\'', 409,
        '(', 205,
        ')', 206,
        ',', 225,
        '.', 207,
        '/', 7,
        '0', 403,
        ';', 192,
        '=', 194,
        '>', 231,
        '[', 213,
        ']', 214,
        '{', 211,
        '}', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 416,
        '\'', 409,
        '+', 274,
        '-', 273,
        '.', 178,
        '/', 7,
        '0', 401,
        ':', 275,
        '[', 213,
        ']', 214,
        'f', 295,
        'i', 349,
        'n', 296,
        't', 368,
        '{', 211,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(421);
      if (lookahead != 0) ADVANCE(422);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(196);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(195);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == '/') ADVANCE(411);
      if (lookahead == '\\') ADVANCE(34);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0) ADVANCE(415);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(427);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ADVANCE_MAP(
        '.', 207,
        '/', 7,
        ';', 192,
        '[', 213,
        'b', 358,
        'd', 354,
        'f', 328,
        'i', 347,
        'o', 365,
        's', 325,
        'u', 334,
        '}', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 12:
      ADVANCE_MAP(
        '.', 207,
        '/', 7,
        ';', 192,
        'b', 358,
        'd', 354,
        'e', 348,
        'f', 328,
        'i', 347,
        'm', 291,
        'o', 346,
        'r', 305,
        's', 325,
        'u', 334,
        '}', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 13:
      ADVANCE_MAP(
        '.', 207,
        '/', 7,
        'b', 358,
        'd', 354,
        'f', 328,
        'i', 347,
        'r', 314,
        's', 325,
        'u', 334,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 14:
      ADVANCE_MAP(
        '.', 207,
        '/', 7,
        'b', 358,
        'd', 354,
        'f', 328,
        'i', 347,
        's', 325,
        'u', 334,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 's') ADVANCE(384);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(365);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == '}') ADVANCE(212);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(232);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(240);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(236);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(244);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(248);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(4);
      if (lookahead == '3') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == '3') ADVANCE(19);
      if (lookahead == '6') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(32);
      END_STATE();
    case 28:
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == '4') ADVANCE(234);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(242);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(238);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(246);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(250);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(184);
      if (lookahead == 'x') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 37:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 38:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'a') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 40:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 41:
      if (lookahead == 'a') ADVANCE(174);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 43:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 44:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 45:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 46:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 47:
      if (lookahead == 'a') ADVANCE(161);
      END_STATE();
    case 48:
      if (lookahead == 'b') ADVANCE(102);
      END_STATE();
    case 49:
      if (lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 51:
      if (lookahead == 'c') ADVANCE(269);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(217);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 59:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(395);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(397);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(268);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(116);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 83:
      if (lookahead == 'f') ADVANCE(406);
      END_STATE();
    case 84:
      if (lookahead == 'f') ADVANCE(406);
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 85:
      if (lookahead == 'f') ADVANCE(226);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(254);
      END_STATE();
    case 87:
      if (lookahead == 'g') ADVANCE(68);
      END_STATE();
    case 88:
      if (lookahead == 'g') ADVANCE(69);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(176);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 97:
      if (lookahead == 'k') ADVANCE(198);
      END_STATE();
    case 98:
      if (lookahead == 'k') ADVANCE(46);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(252);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(153);
      END_STATE();
    case 102:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(137);
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(209);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(270);
      END_STATE();
    case 108:
      if (lookahead == 'n') ADVANCE(406);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(201);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(158);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'x') ADVANCE(162);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(163);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(159);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(164);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(170);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 'r') ADVANCE(169);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 128:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 129:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 130:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 131:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 132:
      if (lookahead == 'o') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 135:
      if (lookahead == 'p') ADVANCE(228);
      if (lookahead == 'x') ADVANCE(267);
      END_STATE();
    case 136:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 137:
      if (lookahead == 'p') ADVANCE(130);
      END_STATE();
    case 138:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 139:
      if (lookahead == 'p') ADVANCE(78);
      if (lookahead == 'q') ADVANCE(168);
      if (lookahead == 's') ADVANCE(81);
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 140:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 141:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 142:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 143:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 144:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 145:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 146:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 148:
      if (lookahead == 's') ADVANCE(260);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(272);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(264);
      END_STATE();
    case 151:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 152:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 153:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(197);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(106);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(145);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(91);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(49);
      END_STATE();
    case 171:
      if (lookahead == 'v') ADVANCE(90);
      END_STATE();
    case 172:
      if (lookahead == 'v') ADVANCE(76);
      END_STATE();
    case 173:
      if (lookahead == 'x') ADVANCE(267);
      END_STATE();
    case 174:
      if (lookahead == 'x') ADVANCE(193);
      END_STATE();
    case 175:
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 176:
      if (lookahead == 'x') ADVANCE(82);
      END_STATE();
    case 177:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(423);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 189:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '"', 416,
        '\'', 409,
        '(', 205,
        ')', 206,
        '+', 274,
        ',', 225,
        '-', 273,
        '.', 208,
        '/', 7,
        '0', 401,
        ':', 275,
        ';', 192,
        '<', 230,
        '=', 194,
        '>', 231,
        '[', 213,
        ']', 214,
        'b', 127,
        'd', 123,
        'e', 113,
        'f', 35,
        'i', 105,
        'm', 36,
        'n', 37,
        'o', 112,
        'p', 39,
        'r', 61,
        's', 62,
        't', 124,
        'u', 96,
        'w', 71,
        '{', 211,
        '}', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(189);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      ADVANCE_MAP(
        '"', 138,
        '.', 207,
        '/', 7,
        '0', 403,
        ';', 192,
        '=', 194,
        'e', 114,
        'i', 104,
        'm', 44,
        'o', 140,
        'p', 38,
        'r', 136,
        's', 63,
        '}', 212,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(190);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_syntax);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto3_DQUOTE);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_DQUOTEproto2_DQUOTE);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_public);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_extend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_required);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_extensions);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_extensions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(276);
      if (lookahead == '6') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(277);
      if (lookahead == '6') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(278);
      if (lookahead == '6') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(279);
      if (lookahead == '6') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '3') ADVANCE(280);
      if (lookahead == '6') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(362);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 's') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(293);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(335);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead == 't') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead == 'l') ADVANCE(356);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'p') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead == 'x') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(355);
      if (lookahead == 'y') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(316);
      if (lookahead == 'q') ADVANCE(389);
      if (lookahead == 's') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'v') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'x') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_decimal_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(181);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(402);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == '.') ADVANCE(407);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_octal_lit);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(404);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_octal_lit);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(404);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_hex_lit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(405);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_float_lit);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_float_lit);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(407);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_float_lit);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(408);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(410);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(413);
      if (lookahead == '/') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead == '/') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(413);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(413);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(411);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(415);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '\n') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(420);
      if (lookahead == '/') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(422);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead == '/') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(420);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '*') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(420);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '/') ADVANCE(418);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(422);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(422);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(427);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 190},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 13},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 190},
  [57] = {.lex_state = 190},
  [58] = {.lex_state = 190},
  [59] = {.lex_state = 190},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 190},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 190},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 190},
  [77] = {.lex_state = 190},
  [78] = {.lex_state = 190},
  [79] = {.lex_state = 190},
  [80] = {.lex_state = 190},
  [81] = {.lex_state = 190},
  [82] = {.lex_state = 190},
  [83] = {.lex_state = 190},
  [84] = {.lex_state = 190},
  [85] = {.lex_state = 190},
  [86] = {.lex_state = 190},
  [87] = {.lex_state = 190},
  [88] = {.lex_state = 190},
  [89] = {.lex_state = 190},
  [90] = {.lex_state = 190},
  [91] = {.lex_state = 190},
  [92] = {.lex_state = 190},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 190},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 190},
  [101] = {.lex_state = 190},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 190},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 15},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 190},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 190},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 15},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 190},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 17},
  [119] = {.lex_state = 190},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 17},
  [126] = {.lex_state = 190},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 1},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 16},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 1},
  [135] = {.lex_state = 190},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 190},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 190},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 16},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 17},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 190},
  [162] = {.lex_state = 190},
  [163] = {.lex_state = 190},
  [164] = {.lex_state = 190},
  [165] = {.lex_state = 190},
  [166] = {.lex_state = 190},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 190},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 190},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 1},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 1},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 190},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 1},
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
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 190},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 1},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 1},
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
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_syntax] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_public] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_oneof] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_uint32] = ACTIONS(1),
    [anon_sym_uint64] = ACTIONS(1),
    [anon_sym_sint32] = ACTIONS(1),
    [anon_sym_sint64] = ACTIONS(1),
    [anon_sym_fixed32] = ACTIONS(1),
    [anon_sym_fixed64] = ACTIONS(1),
    [anon_sym_sfixed32] = ACTIONS(1),
    [anon_sym_sfixed64] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_bytes] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_extensions] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_rpc] = ACTIONS(1),
    [anon_sym_stream] = ACTIONS(1),
    [anon_sym_returns] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_decimal_lit] = ACTIONS(1),
    [sym_octal_lit] = ACTIONS(1),
    [sym_hex_lit] = ACTIONS(1),
    [sym_float_lit] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(275),
    [sym_empty_statement] = STATE(59),
    [sym_syntax] = STATE(57),
    [sym_import] = STATE(59),
    [sym_package] = STATE(59),
    [sym_option] = STATE(59),
    [sym_enum] = STATE(59),
    [sym_message] = STATE(59),
    [sym_extend] = STATE(59),
    [sym_service] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_syntax] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
    [anon_sym_package] = ACTIONS(13),
    [anon_sym_option] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(17),
    [anon_sym_message] = ACTIONS(19),
    [anon_sym_extend] = ACTIONS(21),
    [anon_sym_service] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(265), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(3), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [86] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(55), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(265), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(4), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [172] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      anon_sym_option,
    ACTIONS(63), 1,
      anon_sym_DOT,
    ACTIONS(66), 1,
      anon_sym_enum,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      anon_sym_message,
    ACTIONS(74), 1,
      anon_sym_extend,
    ACTIONS(80), 1,
      anon_sym_repeated,
    ACTIONS(83), 1,
      anon_sym_oneof,
    ACTIONS(86), 1,
      anon_sym_map,
    ACTIONS(92), 1,
      anon_sym_reserved,
    ACTIONS(95), 1,
      anon_sym_extensions,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(265), 1,
      sym_type,
    ACTIONS(77), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(4), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(89), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [258] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(265), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(4), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [344] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_option,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_enum,
    ACTIONS(35), 1,
      anon_sym_message,
    ACTIONS(37), 1,
      anon_sym_extend,
    ACTIONS(41), 1,
      anon_sym_repeated,
    ACTIONS(43), 1,
      anon_sym_oneof,
    ACTIONS(45), 1,
      anon_sym_map,
    ACTIONS(49), 1,
      anon_sym_reserved,
    ACTIONS(51), 1,
      anon_sym_extensions,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(265), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(5), 11,
      sym_empty_statement,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_field,
      sym_oneof,
      sym_map_field,
      sym_reserved,
      sym_extensions,
      aux_sym_message_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [430] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(107), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(111), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(115), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [544] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(119), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(123), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(127), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [658] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(131), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(135), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(139), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(143), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(147), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(151), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(155), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [924] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(159), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [962] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(163), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(167), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(171), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(175), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(179), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(183), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(187), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1228] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(191), 27,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_optional,
      anon_sym_required,
      anon_sym_repeated,
      anon_sym_oneof,
      anon_sym_map,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      anon_sym_reserved,
      anon_sym_extensions,
      sym_identifier,
  [1266] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      anon_sym_option,
    ACTIONS(199), 1,
      anon_sym_DOT,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(281), 1,
      sym_type,
    STATE(29), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_body_repeat1,
    ACTIONS(204), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1317] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      anon_sym_option,
    ACTIONS(214), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(281), 1,
      sym_type,
    STATE(29), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1368] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(210), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      anon_sym_option,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(281), 1,
      sym_type,
    STATE(30), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_body_repeat1,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1419] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(220), 1,
      anon_sym_LBRACK,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_hex_lit,
    ACTIONS(234), 1,
      sym_float_lit,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(230), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(136), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(240), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(242), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1501] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_hex_lit,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(230), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(124), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1552] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(254), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1581] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_repeated,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(273), 1,
      sym_type,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1620] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(260), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(187), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1677] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(191), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [1705] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(266), 1,
      sym_type,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1741] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(270), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(195), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1789] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_hex_lit,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
    ACTIONS(274), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(230), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(149), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1837] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    ACTIONS(278), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(194), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1885] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(240), 1,
      sym_type,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [1921] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    ACTIONS(282), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(183), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1969] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(232), 1,
      sym_hex_lit,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(284), 1,
      anon_sym_LBRACK,
    ACTIONS(286), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(222), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(230), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(127), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2017] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(172), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(294), 17,
      anon_sym_option,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
      sym_identifier,
  [2093] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(213), 1,
      sym_message_or_enum_type,
    STATE(273), 1,
      sym_type,
    ACTIONS(47), 15,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
      anon_sym_double,
      anon_sym_float,
      anon_sym_bytes,
  [2129] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(296), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(235), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2174] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(298), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(260), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2219] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(300), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(202), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2264] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(302), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(287), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2309] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(304), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(282), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2354] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACE,
    ACTIONS(226), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(306), 1,
      sym_float_lit,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(228), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(286), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2399] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_message,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(308), 1,
      ts_builtin_sym_end,
    STATE(58), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2441] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_message,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    STATE(56), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2483] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      ts_builtin_sym_end,
    ACTIONS(314), 1,
      anon_sym_SEMI,
    ACTIONS(317), 1,
      anon_sym_import,
    ACTIONS(320), 1,
      anon_sym_package,
    ACTIONS(323), 1,
      anon_sym_option,
    ACTIONS(326), 1,
      anon_sym_enum,
    ACTIONS(329), 1,
      anon_sym_message,
    ACTIONS(332), 1,
      anon_sym_extend,
    ACTIONS(335), 1,
      anon_sym_service,
    STATE(58), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2525] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_import,
    ACTIONS(13), 1,
      anon_sym_package,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(19), 1,
      anon_sym_message,
    ACTIONS(21), 1,
      anon_sym_extend,
    ACTIONS(23), 1,
      anon_sym_service,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    STATE(58), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2567] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_string_repeat3,
    STATE(184), 1,
      sym_range,
    STATE(187), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(186), 2,
      sym__identifier_or_string,
      sym_string,
    STATE(249), 2,
      sym_ranges,
      sym_field_names,
  [2604] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(271), 1,
      sym_key_type,
    ACTIONS(340), 12,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_uint32,
      anon_sym_uint64,
      anon_sym_sint32,
      anon_sym_sint64,
      anon_sym_fixed32,
      anon_sym_fixed64,
      anon_sym_sfixed32,
      anon_sym_sfixed64,
      anon_sym_bool,
      anon_sym_string,
  [2625] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(338), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_string_repeat3,
    STATE(184), 1,
      sym_range,
    STATE(187), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(186), 2,
      sym__identifier_or_string,
      sym_string,
    STATE(285), 2,
      sym_ranges,
      sym_field_names,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
      anon_sym_rpc,
  [2679] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_option,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 1,
      anon_sym_reserved,
    ACTIONS(353), 1,
      sym_identifier,
    STATE(269), 1,
      sym_enum_variant_name,
    STATE(64), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2708] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      anon_sym_option,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 1,
      anon_sym_reserved,
    ACTIONS(364), 1,
      sym_identifier,
    STATE(269), 1,
      sym_enum_variant_name,
    STATE(67), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_RBRACE,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
      anon_sym_rpc,
  [2754] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      anon_sym_option,
    ACTIONS(362), 1,
      anon_sym_reserved,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      sym_enum_variant_name,
    STATE(64), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_option_name_repeat1,
    ACTIONS(368), 9,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [2804] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      anon_sym_option,
    ACTIONS(362), 1,
      anon_sym_reserved,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      sym_enum_variant_name,
    STATE(64), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2833] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      anon_sym_option,
    ACTIONS(362), 1,
      anon_sym_reserved,
    ACTIONS(364), 1,
      sym_identifier,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(269), 1,
      sym_enum_variant_name,
    STATE(69), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2862] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DOT,
    STATE(72), 1,
      aux_sym_option_name_repeat1,
    ACTIONS(377), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [2882] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DOT,
    STATE(68), 1,
      aux_sym_option_name_repeat1,
    ACTIONS(381), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [2902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 10,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [2918] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(383), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [2939] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_SQUOTE,
    ACTIONS(390), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(385), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [2960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2975] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3080] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3170] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 1,
      anon_sym_SEMI,
    ACTIONS(410), 1,
      anon_sym_option,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(415), 1,
      anon_sym_rpc,
    STATE(90), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_body_repeat1,
  [3192] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    ACTIONS(420), 1,
      anon_sym_rpc,
    STATE(92), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_body_repeat1,
  [3214] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(420), 1,
      anon_sym_rpc,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(90), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_body_repeat1,
  [3236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [3250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [3264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3288] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3300] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(101), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_body_repeat1,
  [3318] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(74), 1,
      aux_sym_string_repeat3,
    STATE(231), 2,
      sym__identifier_or_string,
      sym_string,
  [3338] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_SEMI,
    ACTIONS(439), 1,
      anon_sym_option,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(100), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_body_repeat1,
  [3356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(444), 1,
      anon_sym_RBRACE,
    STATE(100), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_body_repeat1,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3386] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(184), 1,
      sym_range,
    STATE(187), 1,
      sym_int_lit,
    STATE(252), 1,
      sym_ranges,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat3,
    STATE(242), 1,
      sym_string,
    ACTIONS(448), 2,
      anon_sym_weak,
      anon_sym_public,
  [3426] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(450), 1,
      anon_sym_stream,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(251), 1,
      sym_message_or_enum_type,
  [3445] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(175), 1,
      sym_field_option,
    STATE(263), 1,
      sym_option_name,
    STATE(277), 1,
      sym_field_options,
  [3464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(37), 1,
      sym_int_lit,
    STATE(207), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3481] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(456), 1,
      anon_sym_stream,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(293), 1,
      sym_message_or_enum_type,
  [3500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3522] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(175), 1,
      sym_field_option,
    STATE(263), 1,
      sym_option_name,
    STATE(300), 1,
      sym_field_options,
  [3541] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(37), 1,
      sym_int_lit,
    STATE(200), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3569] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(464), 1,
      anon_sym_stream,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(239), 1,
      sym_message_or_enum_type,
  [3588] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(37), 1,
      sym_int_lit,
    STATE(232), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3616] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      sym_identifier,
    STATE(137), 1,
      aux_sym_block_lit_repeat1,
    STATE(148), 1,
      sym_block_field,
  [3635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(171), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3648] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(37), 1,
      sym_int_lit,
    STATE(221), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3665] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(175), 1,
      sym_field_option,
    STATE(250), 1,
      sym_field_options,
    STATE(263), 1,
      sym_option_name,
  [3684] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(175), 1,
      sym_field_option,
    STATE(263), 1,
      sym_option_name,
    STATE(290), 1,
      sym_field_options,
  [3703] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(175), 1,
      sym_field_option,
    STATE(263), 1,
      sym_option_name,
    STATE(292), 1,
      sym_field_options,
  [3722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(480), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(187), 1,
      sym_int_lit,
    STATE(229), 1,
      sym_range,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3785] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      sym_identifier,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym_block_lit_repeat1,
    STATE(148), 1,
      sym_block_field,
  [3804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3815] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(486), 1,
      sym_float_lit,
    STATE(95), 1,
      sym_int_lit,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3843] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(191), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3856] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_to,
  [3867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3878] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(492), 1,
      anon_sym_max,
    STATE(209), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3906] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(498), 1,
      anon_sym_LBRACK,
    ACTIONS(501), 1,
      sym_identifier,
    STATE(137), 1,
      aux_sym_block_lit_repeat1,
    STATE(148), 1,
      sym_block_field,
  [3925] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(175), 1,
      sym_field_option,
    STATE(254), 1,
      sym_field_options,
    STATE(263), 1,
      sym_option_name,
  [3944] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      sym_octal_lit,
    STATE(33), 1,
      sym_field_number,
    STATE(37), 1,
      sym_int_lit,
    ACTIONS(504), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(37), 1,
      sym_int_lit,
    STATE(208), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4000] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      sym_hex_lit,
    ACTIONS(486), 1,
      sym_float_lit,
    STATE(95), 1,
      sym_int_lit,
    ACTIONS(230), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [4017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(516), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [4041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4052] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4063] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(524), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4087] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(187), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [4100] = 4,
    ACTIONS(528), 1,
      anon_sym_SQUOTE,
    ACTIONS(532), 1,
      sym_comment,
    STATE(168), 1,
      aux_sym_string_repeat1,
    ACTIONS(530), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(534), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4126] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(246), 1,
      sym_message_or_enum_type,
  [4142] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      anon_sym_SQUOTE,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat3,
    STATE(301), 1,
      sym_string,
  [4158] = 4,
    ACTIONS(528), 1,
      anon_sym_DQUOTE,
    ACTIONS(532), 1,
      sym_comment,
    STATE(169), 1,
      aux_sym_string_repeat2,
    ACTIONS(540), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4172] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(203), 1,
      sym_field_option,
    STATE(263), 1,
      sym_option_name,
  [4188] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(542), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4200] = 4,
    ACTIONS(532), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    STATE(158), 1,
      aux_sym_string_repeat1,
    ACTIONS(546), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(239), 1,
      sym_message_or_enum_type,
  [4230] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      sym_identifier,
    STATE(204), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(245), 1,
      sym_message_or_enum_type,
  [4246] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(549), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4266] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4276] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(557), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(559), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(561), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4318] = 4,
    ACTIONS(532), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_SQUOTE,
    STATE(158), 1,
      aux_sym_string_repeat1,
    ACTIONS(565), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4332] = 4,
    ACTIONS(532), 1,
      sym_comment,
    ACTIONS(563), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym_string_repeat2,
    ACTIONS(567), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4346] = 4,
    ACTIONS(532), 1,
      sym_comment,
    ACTIONS(569), 1,
      anon_sym_DQUOTE,
    STATE(170), 1,
      aux_sym_string_repeat2,
    ACTIONS(571), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4360] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_RBRACK,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_block_field_repeat1,
  [4373] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RBRACK,
    STATE(174), 1,
      aux_sym_block_field_repeat1,
  [4386] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    STATE(173), 1,
      aux_sym_field_options_repeat1,
  [4399] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(585), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_block_field_repeat1,
  [4412] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(587), 1,
      anon_sym_RBRACK,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    STATE(193), 1,
      aux_sym_field_options_repeat1,
  [4425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(297), 1,
      sym_option_name,
  [4438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(241), 1,
      sym_option_name,
  [4451] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(591), 1,
      anon_sym_EQ,
    STATE(68), 1,
      aux_sym_option_name_repeat1,
  [4464] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    STATE(162), 1,
      sym_rpc_body,
  [4477] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DOT,
    ACTIONS(597), 1,
      anon_sym_EQ,
    STATE(178), 1,
      aux_sym_option_name_repeat1,
  [4490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4499] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_rpc_body,
  [4512] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(171), 1,
      aux_sym_block_field_repeat1,
  [4525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_SEMI,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_ranges_repeat1,
  [4538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    ACTIONS(595), 1,
      anon_sym_LBRACE,
    STATE(165), 1,
      sym_rpc_body,
  [4551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_SEMI,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_field_names_repeat1,
  [4564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 1,
      anon_sym_to,
    ACTIONS(609), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_RBRACK,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_block_field_repeat1,
  [4588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_block_field_repeat1,
  [4601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_SEMI,
    STATE(196), 1,
      aux_sym_ranges_repeat1,
  [4614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(607), 1,
      anon_sym_COMMA,
    ACTIONS(622), 1,
      anon_sym_SEMI,
    STATE(197), 1,
      aux_sym_field_names_repeat1,
  [4627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_RBRACK,
    STATE(188), 1,
      aux_sym_block_field_repeat1,
  [4640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
    STATE(173), 1,
      aux_sym_field_options_repeat1,
  [4653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_RBRACK,
    STATE(189), 1,
      aux_sym_block_field_repeat1,
  [4666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      aux_sym_block_field_repeat1,
  [4679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_SEMI,
    ACTIONS(634), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_ranges_repeat1,
  [4692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_SEMI,
    ACTIONS(639), 1,
      anon_sym_COMMA,
    STATE(197), 1,
      aux_sym_field_names_repeat1,
  [4705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(295), 1,
      sym_option_name,
  [4718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 1,
      sym_identifier,
    STATE(296), 1,
      sym_option_name,
  [4731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      anon_sym_SEMI,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
  [4741] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    STATE(9), 1,
      sym_oneof_body,
  [4751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4767] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_identifier,
    STATE(206), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    STATE(78), 1,
      sym_enum_body,
  [4787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_identifier,
    STATE(206), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4797] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_SEMI,
    ACTIONS(659), 1,
      anon_sym_LBRACK,
  [4807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_SEMI,
    ACTIONS(663), 1,
      anon_sym_LBRACK,
  [4817] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4825] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_message_body,
  [4835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_identifier,
    STATE(205), 1,
      sym_enum_name,
  [4845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_LBRACE,
    STATE(81), 1,
      sym_message_body,
  [4855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      anon_sym_GT,
      sym_identifier,
  [4863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(289), 1,
      sym_rpc_name,
  [4873] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_LBRACE,
    STATE(80), 1,
      sym_service_body,
  [4883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym_identifier,
    STATE(206), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_DQUOTEproto3_DQUOTE,
      anon_sym_DQUOTEproto2_DQUOTE,
  [4901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(212), 1,
      sym_full_ident,
  [4911] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_identifier,
    STATE(210), 1,
      sym_message_name,
  [4921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 1,
      sym_identifier,
    STATE(215), 1,
      sym_service_name,
  [4931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
  [4941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(650), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_enum_body,
  [4961] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_message_body,
  [4971] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_message_body,
  [4981] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 1,
      sym_identifier,
    STATE(223), 1,
      sym_enum_name,
  [4991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_identifier,
    STATE(224), 1,
      sym_message_name,
  [5001] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(225), 1,
      sym_full_ident,
  [5011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5019] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(294), 1,
      sym_full_ident,
  [5029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5037] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_SEMI,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
  [5047] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(276), 1,
      sym_full_ident,
  [5057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(279), 1,
      sym_full_ident,
  [5067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [5075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      sym_identifier,
  [5082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_returns,
  [5089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_EQ,
  [5096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RPAREN,
  [5103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_GT,
  [5110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_EQ,
  [5117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_SEMI,
  [5124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_LPAREN,
  [5131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_EQ,
  [5138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
  [5145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_RPAREN,
  [5152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_returns,
  [5159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      anon_sym_LBRACE,
  [5166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_SEMI,
  [5173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_RBRACK,
  [5180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RPAREN,
  [5187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_SEMI,
  [5194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_identifier,
  [5201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_RBRACK,
  [5208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_SEMI,
  [5215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_EQ,
  [5222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_EQ,
  [5229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_SEMI,
  [5236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_EQ,
  [5243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_SEMI,
  [5250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_LPAREN,
  [5257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
  [5264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_EQ,
  [5271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_SEMI,
  [5278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      sym_identifier,
  [5285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_identifier,
  [5292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_EQ,
  [5299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_EQ,
  [5306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_EQ,
  [5313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_COMMA,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_COMMA,
  [5327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      sym_identifier,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_identifier,
  [5341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_DOT,
  [5348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      ts_builtin_sym_end,
  [5355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RPAREN,
  [5362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      anon_sym_RBRACK,
  [5369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_SEMI,
  [5376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SEMI,
  [5383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      anon_sym_SEMI,
  [5390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_identifier,
  [5397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_SEMI,
  [5404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_identifier,
  [5411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_LT,
  [5418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_SEMI,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_SEMI,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_SEMI,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_LPAREN,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_LPAREN,
  [5453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_RBRACK,
  [5460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_EQ,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
  [5474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_RPAREN,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RBRACK,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_EQ,
  [5495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_EQ,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_EQ,
  [5509] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      anon_sym_SEMI,
  [5516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_LBRACE,
  [5523] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
  [5530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(827), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 86,
  [SMALL_STATE(4)] = 172,
  [SMALL_STATE(5)] = 258,
  [SMALL_STATE(6)] = 344,
  [SMALL_STATE(7)] = 430,
  [SMALL_STATE(8)] = 468,
  [SMALL_STATE(9)] = 506,
  [SMALL_STATE(10)] = 544,
  [SMALL_STATE(11)] = 582,
  [SMALL_STATE(12)] = 620,
  [SMALL_STATE(13)] = 658,
  [SMALL_STATE(14)] = 696,
  [SMALL_STATE(15)] = 734,
  [SMALL_STATE(16)] = 772,
  [SMALL_STATE(17)] = 810,
  [SMALL_STATE(18)] = 848,
  [SMALL_STATE(19)] = 886,
  [SMALL_STATE(20)] = 924,
  [SMALL_STATE(21)] = 962,
  [SMALL_STATE(22)] = 1000,
  [SMALL_STATE(23)] = 1038,
  [SMALL_STATE(24)] = 1076,
  [SMALL_STATE(25)] = 1114,
  [SMALL_STATE(26)] = 1152,
  [SMALL_STATE(27)] = 1190,
  [SMALL_STATE(28)] = 1228,
  [SMALL_STATE(29)] = 1266,
  [SMALL_STATE(30)] = 1317,
  [SMALL_STATE(31)] = 1368,
  [SMALL_STATE(32)] = 1419,
  [SMALL_STATE(33)] = 1470,
  [SMALL_STATE(34)] = 1501,
  [SMALL_STATE(35)] = 1552,
  [SMALL_STATE(36)] = 1581,
  [SMALL_STATE(37)] = 1620,
  [SMALL_STATE(38)] = 1649,
  [SMALL_STATE(39)] = 1677,
  [SMALL_STATE(40)] = 1705,
  [SMALL_STATE(41)] = 1741,
  [SMALL_STATE(42)] = 1789,
  [SMALL_STATE(43)] = 1837,
  [SMALL_STATE(44)] = 1885,
  [SMALL_STATE(45)] = 1921,
  [SMALL_STATE(46)] = 1969,
  [SMALL_STATE(47)] = 2017,
  [SMALL_STATE(48)] = 2065,
  [SMALL_STATE(49)] = 2093,
  [SMALL_STATE(50)] = 2129,
  [SMALL_STATE(51)] = 2174,
  [SMALL_STATE(52)] = 2219,
  [SMALL_STATE(53)] = 2264,
  [SMALL_STATE(54)] = 2309,
  [SMALL_STATE(55)] = 2354,
  [SMALL_STATE(56)] = 2399,
  [SMALL_STATE(57)] = 2441,
  [SMALL_STATE(58)] = 2483,
  [SMALL_STATE(59)] = 2525,
  [SMALL_STATE(60)] = 2567,
  [SMALL_STATE(61)] = 2604,
  [SMALL_STATE(62)] = 2625,
  [SMALL_STATE(63)] = 2662,
  [SMALL_STATE(64)] = 2679,
  [SMALL_STATE(65)] = 2708,
  [SMALL_STATE(66)] = 2737,
  [SMALL_STATE(67)] = 2754,
  [SMALL_STATE(68)] = 2783,
  [SMALL_STATE(69)] = 2804,
  [SMALL_STATE(70)] = 2833,
  [SMALL_STATE(71)] = 2862,
  [SMALL_STATE(72)] = 2882,
  [SMALL_STATE(73)] = 2902,
  [SMALL_STATE(74)] = 2918,
  [SMALL_STATE(75)] = 2939,
  [SMALL_STATE(76)] = 2960,
  [SMALL_STATE(77)] = 2975,
  [SMALL_STATE(78)] = 2990,
  [SMALL_STATE(79)] = 3005,
  [SMALL_STATE(80)] = 3020,
  [SMALL_STATE(81)] = 3035,
  [SMALL_STATE(82)] = 3050,
  [SMALL_STATE(83)] = 3065,
  [SMALL_STATE(84)] = 3080,
  [SMALL_STATE(85)] = 3095,
  [SMALL_STATE(86)] = 3110,
  [SMALL_STATE(87)] = 3125,
  [SMALL_STATE(88)] = 3140,
  [SMALL_STATE(89)] = 3155,
  [SMALL_STATE(90)] = 3170,
  [SMALL_STATE(91)] = 3192,
  [SMALL_STATE(92)] = 3214,
  [SMALL_STATE(93)] = 3236,
  [SMALL_STATE(94)] = 3250,
  [SMALL_STATE(95)] = 3264,
  [SMALL_STATE(96)] = 3276,
  [SMALL_STATE(97)] = 3288,
  [SMALL_STATE(98)] = 3300,
  [SMALL_STATE(99)] = 3318,
  [SMALL_STATE(100)] = 3338,
  [SMALL_STATE(101)] = 3356,
  [SMALL_STATE(102)] = 3374,
  [SMALL_STATE(103)] = 3386,
  [SMALL_STATE(104)] = 3406,
  [SMALL_STATE(105)] = 3426,
  [SMALL_STATE(106)] = 3445,
  [SMALL_STATE(107)] = 3464,
  [SMALL_STATE(108)] = 3481,
  [SMALL_STATE(109)] = 3500,
  [SMALL_STATE(110)] = 3511,
  [SMALL_STATE(111)] = 3522,
  [SMALL_STATE(112)] = 3541,
  [SMALL_STATE(113)] = 3558,
  [SMALL_STATE(114)] = 3569,
  [SMALL_STATE(115)] = 3588,
  [SMALL_STATE(116)] = 3599,
  [SMALL_STATE(117)] = 3616,
  [SMALL_STATE(118)] = 3635,
  [SMALL_STATE(119)] = 3648,
  [SMALL_STATE(120)] = 3665,
  [SMALL_STATE(121)] = 3684,
  [SMALL_STATE(122)] = 3703,
  [SMALL_STATE(123)] = 3722,
  [SMALL_STATE(124)] = 3733,
  [SMALL_STATE(125)] = 3744,
  [SMALL_STATE(126)] = 3757,
  [SMALL_STATE(127)] = 3774,
  [SMALL_STATE(128)] = 3785,
  [SMALL_STATE(129)] = 3804,
  [SMALL_STATE(130)] = 3815,
  [SMALL_STATE(131)] = 3832,
  [SMALL_STATE(132)] = 3843,
  [SMALL_STATE(133)] = 3856,
  [SMALL_STATE(134)] = 3867,
  [SMALL_STATE(135)] = 3878,
  [SMALL_STATE(136)] = 3895,
  [SMALL_STATE(137)] = 3906,
  [SMALL_STATE(138)] = 3925,
  [SMALL_STATE(139)] = 3944,
  [SMALL_STATE(140)] = 3961,
  [SMALL_STATE(141)] = 3972,
  [SMALL_STATE(142)] = 3989,
  [SMALL_STATE(143)] = 4000,
  [SMALL_STATE(144)] = 4017,
  [SMALL_STATE(145)] = 4028,
  [SMALL_STATE(146)] = 4041,
  [SMALL_STATE(147)] = 4052,
  [SMALL_STATE(148)] = 4063,
  [SMALL_STATE(149)] = 4076,
  [SMALL_STATE(150)] = 4087,
  [SMALL_STATE(151)] = 4100,
  [SMALL_STATE(152)] = 4114,
  [SMALL_STATE(153)] = 4126,
  [SMALL_STATE(154)] = 4142,
  [SMALL_STATE(155)] = 4158,
  [SMALL_STATE(156)] = 4172,
  [SMALL_STATE(157)] = 4188,
  [SMALL_STATE(158)] = 4200,
  [SMALL_STATE(159)] = 4214,
  [SMALL_STATE(160)] = 4230,
  [SMALL_STATE(161)] = 4246,
  [SMALL_STATE(162)] = 4256,
  [SMALL_STATE(163)] = 4266,
  [SMALL_STATE(164)] = 4276,
  [SMALL_STATE(165)] = 4286,
  [SMALL_STATE(166)] = 4296,
  [SMALL_STATE(167)] = 4306,
  [SMALL_STATE(168)] = 4318,
  [SMALL_STATE(169)] = 4332,
  [SMALL_STATE(170)] = 4346,
  [SMALL_STATE(171)] = 4360,
  [SMALL_STATE(172)] = 4373,
  [SMALL_STATE(173)] = 4386,
  [SMALL_STATE(174)] = 4399,
  [SMALL_STATE(175)] = 4412,
  [SMALL_STATE(176)] = 4425,
  [SMALL_STATE(177)] = 4438,
  [SMALL_STATE(178)] = 4451,
  [SMALL_STATE(179)] = 4464,
  [SMALL_STATE(180)] = 4477,
  [SMALL_STATE(181)] = 4490,
  [SMALL_STATE(182)] = 4499,
  [SMALL_STATE(183)] = 4512,
  [SMALL_STATE(184)] = 4525,
  [SMALL_STATE(185)] = 4538,
  [SMALL_STATE(186)] = 4551,
  [SMALL_STATE(187)] = 4564,
  [SMALL_STATE(188)] = 4575,
  [SMALL_STATE(189)] = 4588,
  [SMALL_STATE(190)] = 4601,
  [SMALL_STATE(191)] = 4614,
  [SMALL_STATE(192)] = 4627,
  [SMALL_STATE(193)] = 4640,
  [SMALL_STATE(194)] = 4653,
  [SMALL_STATE(195)] = 4666,
  [SMALL_STATE(196)] = 4679,
  [SMALL_STATE(197)] = 4692,
  [SMALL_STATE(198)] = 4705,
  [SMALL_STATE(199)] = 4718,
  [SMALL_STATE(200)] = 4731,
  [SMALL_STATE(201)] = 4741,
  [SMALL_STATE(202)] = 4751,
  [SMALL_STATE(203)] = 4759,
  [SMALL_STATE(204)] = 4767,
  [SMALL_STATE(205)] = 4777,
  [SMALL_STATE(206)] = 4787,
  [SMALL_STATE(207)] = 4797,
  [SMALL_STATE(208)] = 4807,
  [SMALL_STATE(209)] = 4817,
  [SMALL_STATE(210)] = 4825,
  [SMALL_STATE(211)] = 4835,
  [SMALL_STATE(212)] = 4845,
  [SMALL_STATE(213)] = 4855,
  [SMALL_STATE(214)] = 4863,
  [SMALL_STATE(215)] = 4873,
  [SMALL_STATE(216)] = 4883,
  [SMALL_STATE(217)] = 4893,
  [SMALL_STATE(218)] = 4901,
  [SMALL_STATE(219)] = 4911,
  [SMALL_STATE(220)] = 4921,
  [SMALL_STATE(221)] = 4931,
  [SMALL_STATE(222)] = 4941,
  [SMALL_STATE(223)] = 4951,
  [SMALL_STATE(224)] = 4961,
  [SMALL_STATE(225)] = 4971,
  [SMALL_STATE(226)] = 4981,
  [SMALL_STATE(227)] = 4991,
  [SMALL_STATE(228)] = 5001,
  [SMALL_STATE(229)] = 5011,
  [SMALL_STATE(230)] = 5019,
  [SMALL_STATE(231)] = 5029,
  [SMALL_STATE(232)] = 5037,
  [SMALL_STATE(233)] = 5047,
  [SMALL_STATE(234)] = 5057,
  [SMALL_STATE(235)] = 5067,
  [SMALL_STATE(236)] = 5075,
  [SMALL_STATE(237)] = 5082,
  [SMALL_STATE(238)] = 5089,
  [SMALL_STATE(239)] = 5096,
  [SMALL_STATE(240)] = 5103,
  [SMALL_STATE(241)] = 5110,
  [SMALL_STATE(242)] = 5117,
  [SMALL_STATE(243)] = 5124,
  [SMALL_STATE(244)] = 5131,
  [SMALL_STATE(245)] = 5138,
  [SMALL_STATE(246)] = 5145,
  [SMALL_STATE(247)] = 5152,
  [SMALL_STATE(248)] = 5159,
  [SMALL_STATE(249)] = 5166,
  [SMALL_STATE(250)] = 5173,
  [SMALL_STATE(251)] = 5180,
  [SMALL_STATE(252)] = 5187,
  [SMALL_STATE(253)] = 5194,
  [SMALL_STATE(254)] = 5201,
  [SMALL_STATE(255)] = 5208,
  [SMALL_STATE(256)] = 5215,
  [SMALL_STATE(257)] = 5222,
  [SMALL_STATE(258)] = 5229,
  [SMALL_STATE(259)] = 5236,
  [SMALL_STATE(260)] = 5243,
  [SMALL_STATE(261)] = 5250,
  [SMALL_STATE(262)] = 5257,
  [SMALL_STATE(263)] = 5264,
  [SMALL_STATE(264)] = 5271,
  [SMALL_STATE(265)] = 5278,
  [SMALL_STATE(266)] = 5285,
  [SMALL_STATE(267)] = 5292,
  [SMALL_STATE(268)] = 5299,
  [SMALL_STATE(269)] = 5306,
  [SMALL_STATE(270)] = 5313,
  [SMALL_STATE(271)] = 5320,
  [SMALL_STATE(272)] = 5327,
  [SMALL_STATE(273)] = 5334,
  [SMALL_STATE(274)] = 5341,
  [SMALL_STATE(275)] = 5348,
  [SMALL_STATE(276)] = 5355,
  [SMALL_STATE(277)] = 5362,
  [SMALL_STATE(278)] = 5369,
  [SMALL_STATE(279)] = 5376,
  [SMALL_STATE(280)] = 5383,
  [SMALL_STATE(281)] = 5390,
  [SMALL_STATE(282)] = 5397,
  [SMALL_STATE(283)] = 5404,
  [SMALL_STATE(284)] = 5411,
  [SMALL_STATE(285)] = 5418,
  [SMALL_STATE(286)] = 5425,
  [SMALL_STATE(287)] = 5432,
  [SMALL_STATE(288)] = 5439,
  [SMALL_STATE(289)] = 5446,
  [SMALL_STATE(290)] = 5453,
  [SMALL_STATE(291)] = 5460,
  [SMALL_STATE(292)] = 5467,
  [SMALL_STATE(293)] = 5474,
  [SMALL_STATE(294)] = 5481,
  [SMALL_STATE(295)] = 5488,
  [SMALL_STATE(296)] = 5495,
  [SMALL_STATE(297)] = 5502,
  [SMALL_STATE(298)] = 5509,
  [SMALL_STATE(299)] = 5516,
  [SMALL_STATE(300)] = 5523,
  [SMALL_STATE(301)] = 5530,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(199),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(226),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(227),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(228),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(283),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(284),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 3, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extensions, 3, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_body, 2, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_body, 2, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, 0, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, 0, 3),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body_repeat1, 2, 0, 0), SHIFT_REPEAT(176),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_body_repeat1, 2, 0, 0), SHIFT_REPEAT(222),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_body_repeat1, 2, 0, 0),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body_repeat1, 2, 0, 0), SHIFT_REPEAT(213),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_body_repeat1, 2, 0, 0), SHIFT_REPEAT(152),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(234),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(211),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(219),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(218),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(220),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(150),
  [345] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(198),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0),
  [350] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(60),
  [353] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(268),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, 0, 0),
  [370] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2, 0, 0), SHIFT_REPEAT(236),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0), SHIFT_REPEAT(151),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2, 0, 0), SHIFT_REPEAT(155),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3, 0, 0),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_body, 3, 0, 0),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 3, 0, 0),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4, 0, 0),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, 0, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, 0, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_body, 2, 0, 0),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2, 0, 0),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_body_repeat1, 2, 0, 0), SHIFT_REPEAT(214),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 3, 0, 0),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 2, 0, 0),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2, 0, 0),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3, 0, 0),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_body_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_body_repeat1, 2, 0, 0), SHIFT_REPEAT(177),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_body_repeat1, 2, 0, 0),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1, 0, 0),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [456] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 7, 0, 18),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 7, 0, 19),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 4, 0, 9),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 8, 0, 20),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, 0, 10),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 2, 0, 4),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4, 0, 0),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4, 0, 0),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, 0, 11),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, 0, 12),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, 0, 13),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 4, 0, 7),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0), SHIFT_REPEAT(230),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 6, 0, 14),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 6, 0, 15),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 6, 0, 16),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7, 0, 0),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 4, 0, 8),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 3, 0, 5),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 1, 0, 0),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 3, 0, 6),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1, 0, 0),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2, 0, 0),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(158),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_body, 1, 0, 0),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10, 0, 0),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11, 0, 0),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_body, 2, 0, 0),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12, 0, 0),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_body, 3, 0, 0),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3, 0, 0),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(170),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2, 0, 0), SHIFT_REPEAT(156),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1, 0, 0),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 4, 0, 0),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 3, 0, 0),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1, 0, 0),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1, 0, 0),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1, 0, 0),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_field_repeat1, 2, 0, 0),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_field_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2, 0, 0),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2, 0, 0),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2, 0, 0),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0),
  [634] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2, 0, 0),
  [639] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2, 0, 0), SHIFT_REPEAT(99),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3, 0, 17),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0), SHIFT_REPEAT(274),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, 0, 0),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 1, 0, 0),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1, 0, 0),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2, 0, 0),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1, 0, 0),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_variant_name, 1, 0, 0),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1, 0, 0),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [775] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1, 0, 0),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1, 0, 0),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
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

TS_PUBLIC const TSLanguage *tree_sitter_proto(void) {
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
