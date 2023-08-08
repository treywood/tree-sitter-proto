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
#define STATE_COUNT 302
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 126
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 21

enum {
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
  sym_oneof_field = 87,
  sym_map_field = 88,
  sym_key_type = 89,
  sym_type = 90,
  sym_reserved = 91,
  sym_extensions = 92,
  sym_ranges = 93,
  sym_range = 94,
  sym_field_names = 95,
  sym_message_or_enum_type = 96,
  sym_field_number = 97,
  sym_service = 98,
  sym_service_name = 99,
  sym_rpc = 100,
  sym_rpc_name = 101,
  sym__constant = 102,
  sym_block_lit = 103,
  sym_block_field = 104,
  sym__identifier_or_string = 105,
  sym_full_ident = 106,
  sym_bool = 107,
  sym_int_lit = 108,
  sym_string = 109,
  aux_sym_source_file_repeat1 = 110,
  aux_sym_option_name_repeat1 = 111,
  aux_sym_enum_body_repeat1 = 112,
  aux_sym_message_body_repeat1 = 113,
  aux_sym_field_options_repeat1 = 114,
  aux_sym_oneof_repeat1 = 115,
  aux_sym_ranges_repeat1 = 116,
  aux_sym_field_names_repeat1 = 117,
  aux_sym_message_or_enum_type_repeat1 = 118,
  aux_sym_service_repeat1 = 119,
  aux_sym_rpc_repeat1 = 120,
  aux_sym_block_lit_repeat1 = 121,
  aux_sym_block_field_repeat1 = 122,
  aux_sym_string_repeat1 = 123,
  aux_sym_string_repeat2 = 124,
  aux_sym_string_repeat3 = 125,
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
  [sym_service_name] = "service_name",
  [sym_rpc] = "rpc",
  [sym_rpc_name] = "rpc_name",
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
  [aux_sym_oneof_repeat1] = "oneof_repeat1",
  [aux_sym_ranges_repeat1] = "ranges_repeat1",
  [aux_sym_field_names_repeat1] = "field_names_repeat1",
  [aux_sym_message_or_enum_type_repeat1] = "message_or_enum_type_repeat1",
  [aux_sym_service_repeat1] = "service_repeat1",
  [aux_sym_rpc_repeat1] = "rpc_repeat1",
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
  [sym_service_name] = sym_service_name,
  [sym_rpc] = sym_rpc,
  [sym_rpc_name] = sym_rpc_name,
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
  [aux_sym_oneof_repeat1] = aux_sym_oneof_repeat1,
  [aux_sym_ranges_repeat1] = aux_sym_ranges_repeat1,
  [aux_sym_field_names_repeat1] = aux_sym_field_names_repeat1,
  [aux_sym_message_or_enum_type_repeat1] = aux_sym_message_or_enum_type_repeat1,
  [aux_sym_service_repeat1] = aux_sym_service_repeat1,
  [aux_sym_rpc_repeat1] = aux_sym_rpc_repeat1,
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
  [sym_service_name] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc] = {
    .visible = true,
    .named = true,
  },
  [sym_rpc_name] = {
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
  [aux_sym_oneof_repeat1] = {
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
  [aux_sym_service_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_rpc_repeat1] = {
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

enum {
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
  [5] = 4,
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
  [37] = 17,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 19,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 50,
  [54] = 50,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 59,
  [62] = 17,
  [63] = 63,
  [64] = 19,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 65,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 66,
  [73] = 73,
  [74] = 27,
  [75] = 8,
  [76] = 18,
  [77] = 26,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 24,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 25,
  [87] = 23,
  [88] = 88,
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
  [111] = 17,
  [112] = 36,
  [113] = 19,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 110,
  [119] = 36,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 22,
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
  [178] = 173,
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
  [189] = 173,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 173,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 201,
  [206] = 206,
  [207] = 200,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 209,
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
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 220,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 225,
  [232] = 232,
  [233] = 222,
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
  [282] = 282,
  [283] = 258,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 258,
  [288] = 258,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 269,
  [297] = 269,
  [298] = 269,
  [299] = 299,
  [300] = 300,
  [301] = 286,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 'g'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || (c < 'e'
        ? c == 'c'
        : c <= 'e')))
    : (c <= 'h' || (c < 't'
      ? (c < 'p'
        ? (c >= 'j' && c <= 'n')
        : c <= 'r')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 'j'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || (c < 'g'
        ? c == 'c'
        : c <= 'h')))
    : (c <= 'l' || (c < 't'
      ? (c < 'p'
        ? c == 'n'
        : c <= 'q')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 'e'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || c == 'c'))
    : (c <= 'e' || (c < 't'
      ? (c < 'j'
        ? (c >= 'g' && c <= 'h')
        : c <= 'q')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 'e'
    ? (c < 'a'
      ? (c < '_'
        ? (c >= 'A' && c <= 'Z')
        : c <= '_')
      : (c <= 'a' || c == 'c'))
    : (c <= 'e' || (c < 't'
      ? (c < 'j'
        ? (c >= 'g' && c <= 'h')
        : c <= 'r')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '+') ADVANCE(274);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(230);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(231);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(231);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == ']') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(400);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == '+') ADVANCE(274);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == ']') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(391);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead == 'n') ADVANCE(392);
      if (lookahead == 't') ADVANCE(362);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '/') ADVANCE(418);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '[') ADVANCE(213);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(192);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'e') ADVANCE(297);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'm') ADVANCE(294);
      if (lookahead == 'o') ADVANCE(296);
      if (lookahead == 'r') ADVANCE(305);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 'r') ADVANCE(314);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(298);
      if (lookahead == 'd') ADVANCE(350);
      if (lookahead == 'f') ADVANCE(295);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead == 's') ADVANCE(291);
      if (lookahead == 'u') ADVANCE(332);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(378);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 17:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ';') ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          lookahead == 'p' ||
          lookahead == 'q' ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(359);
      if (lookahead == 'r') ADVANCE(321);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
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
      if (lookahead == 'n') ADVANCE(202);
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
      if (lookahead == '"') ADVANCE(416);
      if (lookahead == '\'') ADVANCE(409);
      if (lookahead == '(') ADVANCE(205);
      if (lookahead == ')') ADVANCE(206);
      if (lookahead == '+') ADVANCE(274);
      if (lookahead == ',') ADVANCE(225);
      if (lookahead == '-') ADVANCE(273);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(230);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(231);
      if (lookahead == '[') ADVANCE(213);
      if (lookahead == ']') ADVANCE(214);
      if (lookahead == 'b') ADVANCE(127);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == 'm') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(112);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead == 't') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead == '{') ADVANCE(211);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(189)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(399);
      END_STATE();
    case 190:
      if (eof) ADVANCE(191);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'm') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'p') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(136);
      if (lookahead == 's') ADVANCE(63);
      if (lookahead == '}') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(190)
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
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_option);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(335);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(333);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 't') ADVANCE(361);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'p') ADVANCE(316);
      if (lookahead == 'q') ADVANCE(383);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(218);
      if (lookahead == 's') ADVANCE(330);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          lookahead == 'j' ||
          lookahead == 'k' ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(352);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          lookahead == 'o' ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == 'p') ADVANCE(374);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(394);
      if (lookahead == 'n') ADVANCE(382);
      if (lookahead == 'x') ADVANCE(375);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(394);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead == 'y') ADVANCE(373);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'b') ADVANCE(337);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(263);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(284);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(285);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(292);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(396);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(398);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(341);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(360);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(300);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(358);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(393);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(301);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(353);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(302);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(389);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(369);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(394);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'g') ADVANCE(255);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'g') ADVANCE(308);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(363);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(354);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(349);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'i') ADVANCE(387);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'l') ADVANCE(370);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'l') ADVANCE(307);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'm') ADVANCE(210);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'm') ADVANCE(271);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(394);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(203);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(204);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(371);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(323);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(325);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(366);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(377);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'n') ADVANCE(379);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(381);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(334);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(390);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(324);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(342);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(347);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'o') ADVANCE(343);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'p') ADVANCE(229);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'p') ADVANCE(316);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'p') ADVANCE(380);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(385);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(384);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(317);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'r') ADVANCE(320);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(265);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(368);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(388);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(312);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(310);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(281);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(259);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(315);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(329);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(313);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(282);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(364);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 't') ADVANCE(331);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'u') ADVANCE(299);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'u') ADVANCE(338);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'u') ADVANCE(328);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'u') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'v') ADVANCE(319);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(394);
      if (lookahead == 'x') ADVANCE(306);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(394);
      if (lookahead == 'x') ADVANCE(322);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(326);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(339);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(372);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(336);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(340);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'a') ADVANCE(376);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
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
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 190},
  [56] = {.lex_state = 190},
  [57] = {.lex_state = 190},
  [58] = {.lex_state = 190},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 190},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 190},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 190},
  [74] = {.lex_state = 190},
  [75] = {.lex_state = 190},
  [76] = {.lex_state = 190},
  [77] = {.lex_state = 190},
  [78] = {.lex_state = 190},
  [79] = {.lex_state = 190},
  [80] = {.lex_state = 190},
  [81] = {.lex_state = 190},
  [82] = {.lex_state = 190},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 190},
  [86] = {.lex_state = 190},
  [87] = {.lex_state = 190},
  [88] = {.lex_state = 190},
  [89] = {.lex_state = 190},
  [90] = {.lex_state = 190},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 190},
  [94] = {.lex_state = 190},
  [95] = {.lex_state = 190},
  [96] = {.lex_state = 190},
  [97] = {.lex_state = 190},
  [98] = {.lex_state = 190},
  [99] = {.lex_state = 190},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 190},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 190},
  [108] = {.lex_state = 190},
  [109] = {.lex_state = 190},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 17},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 17},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 16},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 190},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 190},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 17},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 190},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 190},
  [138] = {.lex_state = 190},
  [139] = {.lex_state = 15},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 17},
  [151] = {.lex_state = 1},
  [152] = {.lex_state = 1},
  [153] = {.lex_state = 190},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 190},
  [159] = {.lex_state = 190},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 190},
  [163] = {.lex_state = 1},
  [164] = {.lex_state = 190},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 190},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 190},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 1},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 1},
  [213] = {.lex_state = 190},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 1},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 190},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 1},
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
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 1},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 1},
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
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 1},
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
    [sym_source_file] = STATE(281),
    [sym_empty_statement] = STATE(55),
    [sym_syntax] = STATE(56),
    [sym_import] = STATE(55),
    [sym_package] = STATE(55),
    [sym_option] = STATE(55),
    [sym_enum] = STATE(55),
    [sym_message] = STATE(55),
    [sym_extend] = STATE(55),
    [sym_service] = STATE(55),
    [aux_sym_source_file_repeat1] = STATE(55),
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
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(271), 1,
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
  [86] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      anon_sym_option,
    ACTIONS(61), 1,
      anon_sym_DOT,
    ACTIONS(64), 1,
      anon_sym_enum,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 1,
      anon_sym_message,
    ACTIONS(72), 1,
      anon_sym_extend,
    ACTIONS(78), 1,
      anon_sym_repeated,
    ACTIONS(81), 1,
      anon_sym_oneof,
    ACTIONS(84), 1,
      anon_sym_map,
    ACTIONS(90), 1,
      anon_sym_reserved,
    ACTIONS(93), 1,
      anon_sym_extensions,
    ACTIONS(96), 1,
      sym_identifier,
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(271), 1,
      sym_type,
    ACTIONS(75), 2,
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
    ACTIONS(87), 15,
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
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(271), 1,
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
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(271), 1,
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
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(271), 1,
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
  [1228] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      anon_sym_option,
    ACTIONS(195), 1,
      anon_sym_DOT,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(299), 1,
      sym_type,
    STATE(28), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(200), 15,
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
  [1279] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_option,
    ACTIONS(210), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(299), 1,
      sym_type,
    STATE(30), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
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
  [1330] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_option,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(299), 1,
      sym_type,
    STATE(28), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
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
  [1381] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(214), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(216), 17,
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
  [1412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(222), 17,
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
  [1441] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(224), 1,
      anon_sym_repeated,
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(268), 1,
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
  [1480] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(232), 1,
      anon_sym_COLON,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym_hex_lit,
    ACTIONS(242), 1,
      sym_float_lit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(238), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(149), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1531] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym_hex_lit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_COLON,
    ACTIONS(252), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(238), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(121), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(256), 17,
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
  [1611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(147), 17,
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
  [1639] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(263), 1,
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
  [1675] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym_hex_lit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(238), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(144), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1723] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(268), 1,
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
  [1759] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(270), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
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
  [1807] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    ACTIONS(274), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(193), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1855] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(221), 1,
      sym_message_or_enum_type,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(290), 1,
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
  [1891] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    ACTIONS(278), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(187), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1939] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(240), 1,
      sym_hex_lit,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(282), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(230), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(238), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(147), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1987] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(155), 17,
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
  [2015] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(286), 17,
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
  [2043] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(177), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2091] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(292), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(215), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2136] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(294), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(288), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2181] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(296), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(258), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2226] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(298), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(208), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2271] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(300), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
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
  [2316] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_identifier,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(302), 1,
      sym_float_lit,
    STATE(83), 1,
      aux_sym_string_repeat3,
    ACTIONS(236), 2,
      sym_true,
      sym_false,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(283), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2361] = 11,
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
    ACTIONS(304), 1,
      ts_builtin_sym_end,
    STATE(57), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2403] = 11,
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
    ACTIONS(304), 1,
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
  [2445] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      anon_sym_import,
    ACTIONS(314), 1,
      anon_sym_package,
    ACTIONS(317), 1,
      anon_sym_option,
    ACTIONS(320), 1,
      anon_sym_enum,
    ACTIONS(323), 1,
      anon_sym_message,
    ACTIONS(326), 1,
      anon_sym_extend,
    ACTIONS(329), 1,
      anon_sym_service,
    STATE(57), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2487] = 11,
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
    ACTIONS(332), 1,
      ts_builtin_sym_end,
    STATE(57), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2529] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(83), 1,
      aux_sym_string_repeat3,
    STATE(174), 1,
      sym_range,
    STATE(186), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(180), 2,
      sym__identifier_or_string,
      sym_string,
    STATE(286), 2,
      sym_ranges,
      sym_field_names,
  [2566] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(279), 1,
      sym_key_type,
    ACTIONS(336), 12,
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
  [2587] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(83), 1,
      aux_sym_string_repeat3,
    STATE(174), 1,
      sym_range,
    STATE(186), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(180), 2,
      sym__identifier_or_string,
      sym_string,
    STATE(301), 2,
      sym_ranges,
      sym_field_names,
  [2624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 11,
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
  [2641] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_option_name_repeat1,
    ACTIONS(338), 9,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [2662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 11,
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
  [2679] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_option,
    ACTIONS(347), 1,
      anon_sym_RBRACE,
    ACTIONS(349), 1,
      anon_sym_reserved,
    ACTIONS(351), 1,
      sym_identifier,
    STATE(67), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2705] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_option,
    ACTIONS(349), 1,
      anon_sym_reserved,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(68), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2731] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_SEMI,
    ACTIONS(358), 1,
      anon_sym_option,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    ACTIONS(363), 1,
      anon_sym_reserved,
    ACTIONS(366), 1,
      sym_identifier,
    STATE(67), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2757] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_option,
    ACTIONS(349), 1,
      anon_sym_reserved,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(67), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    STATE(70), 1,
      aux_sym_option_name_repeat1,
    ACTIONS(371), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [2803] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym_option_name_repeat1,
    ACTIONS(375), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [2823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 10,
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
  [2839] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_option,
    ACTIONS(349), 1,
      anon_sym_reserved,
    ACTIONS(351), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_RBRACE,
    STATE(65), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2865] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2925] = 2,
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
  [2940] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2985] = 2,
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
  [3000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3015] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat3,
    ACTIONS(389), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      anon_sym_SQUOTE,
    ACTIONS(396), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      aux_sym_string_repeat3,
    ACTIONS(391), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3057] = 2,
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
  [3072] = 2,
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
  [3087] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [3102] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(401), 1,
      anon_sym_RBRACE,
    ACTIONS(403), 1,
      anon_sym_rpc,
    STATE(90), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3124] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      anon_sym_SEMI,
    ACTIONS(408), 1,
      anon_sym_option,
    ACTIONS(411), 1,
      anon_sym_RBRACE,
    ACTIONS(413), 1,
      anon_sym_rpc,
    STATE(89), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3146] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(403), 1,
      anon_sym_rpc,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(89), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [3182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [3196] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(420), 1,
      anon_sym_RBRACE,
    STATE(95), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(96), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3232] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    STATE(96), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3250] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_SEMI,
    ACTIONS(429), 1,
      anon_sym_option,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
    STATE(96), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3268] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(422), 1,
      anon_sym_RBRACE,
    STATE(99), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3286] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(174), 1,
      sym_range,
    STATE(186), 1,
      sym_int_lit,
    STATE(261), 1,
      sym_ranges,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3306] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(434), 1,
      anon_sym_RBRACE,
    STATE(96), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3324] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    ACTIONS(436), 1,
      sym_identifier,
    STATE(83), 1,
      aux_sym_string_repeat3,
    STATE(199), 2,
      sym__identifier_or_string,
      sym_string,
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3356] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(424), 1,
      anon_sym_RBRACE,
    STATE(94), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3386] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3398] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      aux_sym_string_repeat3,
    STATE(273), 1,
      sym_string,
    ACTIONS(444), 2,
      anon_sym_weak,
      anon_sym_public,
  [3418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3430] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(230), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3447] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(228), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3464] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(219), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_hex_lit,
    ACTIONS(448), 1,
      sym_float_lit,
    STATE(101), 1,
      sym_int_lit,
    ACTIONS(238), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(147), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3522] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(155), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(179), 1,
      sym_field_option,
    STATE(247), 1,
      sym_field_options,
    STATE(294), 1,
      sym_option_name,
  [3554] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      sym_identifier,
    STATE(136), 1,
      aux_sym_block_lit_repeat1,
    STATE(140), 1,
      sym_block_field,
  [3573] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(462), 1,
      anon_sym_stream,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(237), 1,
      sym_message_or_enum_type,
  [3603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(448), 1,
      sym_float_lit,
    STATE(101), 1,
      sym_int_lit,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_to,
  [3631] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(179), 1,
      sym_field_option,
    STATE(240), 1,
      sym_field_options,
    STATE(294), 1,
      sym_option_name,
  [3650] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3672] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym_block_lit_repeat1,
    STATE(140), 1,
      sym_block_field,
  [3691] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(167), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3704] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(186), 1,
      sym_int_lit,
    STATE(224), 1,
      sym_range,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3721] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3732] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(478), 1,
      anon_sym_stream,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(241), 1,
      sym_message_or_enum_type,
  [3751] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(480), 1,
      anon_sym_max,
    STATE(214), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3768] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(179), 1,
      sym_field_option,
    STATE(249), 1,
      sym_field_options,
    STATE(294), 1,
      sym_option_name,
  [3787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(484), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3833] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      sym_octal_lit,
    STATE(31), 1,
      sym_field_number,
    STATE(32), 1,
      sym_int_lit,
    ACTIONS(492), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3850] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(179), 1,
      sym_field_option,
    STATE(260), 1,
      sym_field_options,
    STATE(294), 1,
      sym_option_name,
  [3869] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LBRACK,
    ACTIONS(458), 1,
      sym_identifier,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym_block_lit_repeat1,
    STATE(140), 1,
      sym_block_field,
  [3888] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(202), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3905] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(32), 1,
      sym_int_lit,
    STATE(206), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3922] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(498), 1,
      anon_sym_stream,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(295), 1,
      sym_message_or_enum_type,
  [3941] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(502), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [3954] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(504), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(508), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3998] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(179), 1,
      sym_field_option,
    STATE(277), 1,
      sym_field_options,
    STATE(294), 1,
      sym_option_name,
  [4017] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4061] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(522), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [4074] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(179), 1,
      sym_field_option,
    STATE(293), 1,
      sym_field_options,
    STATE(294), 1,
      sym_option_name,
  [4093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_DOT,
    ACTIONS(528), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4126] = 4,
    ACTIONS(532), 1,
      anon_sym_DQUOTE,
    ACTIONS(537), 1,
      sym_comment,
    STATE(155), 1,
      aux_sym_string_repeat2,
    ACTIONS(534), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4140] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(539), 1,
      sym_identifier,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(243), 1,
      sym_message_or_enum_type,
  [4156] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(539), 1,
      sym_identifier,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(237), 1,
      sym_message_or_enum_type,
  [4172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(541), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(543), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4192] = 4,
    ACTIONS(537), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_DQUOTE,
    STATE(155), 1,
      aux_sym_string_repeat2,
    ACTIONS(547), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4206] = 4,
    ACTIONS(537), 1,
      sym_comment,
    ACTIONS(545), 1,
      anon_sym_SQUOTE,
    STATE(171), 1,
      aux_sym_string_repeat1,
    ACTIONS(549), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4220] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(551), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4230] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_DOT,
    ACTIONS(553), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4252] = 4,
    ACTIONS(537), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_DQUOTE,
    STATE(160), 1,
      aux_sym_string_repeat2,
    ACTIONS(559), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4266] = 4,
    ACTIONS(537), 1,
      sym_comment,
    ACTIONS(557), 1,
      anon_sym_SQUOTE,
    STATE(161), 1,
      aux_sym_string_repeat1,
    ACTIONS(561), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      anon_sym_SQUOTE,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    STATE(83), 1,
      aux_sym_string_repeat3,
    STATE(255), 1,
      sym_string,
  [4296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(539), 1,
      sym_identifier,
    STATE(234), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(289), 1,
      sym_message_or_enum_type,
  [4312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_DOT,
    ACTIONS(563), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4324] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(210), 1,
      sym_field_option,
    STATE(294), 1,
      sym_option_name,
  [4340] = 4,
    ACTIONS(537), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_SQUOTE,
    STATE(171), 1,
      aux_sym_string_repeat1,
    ACTIONS(567), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4354] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_block_field_repeat1,
  [4367] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(269), 1,
      sym_option_name,
  [4380] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_SEMI,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      aux_sym_ranges_repeat1,
  [4393] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(578), 1,
      anon_sym_EQ,
    STATE(196), 1,
      aux_sym_option_name_repeat1,
  [4406] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_block_field_repeat1,
  [4419] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(582), 1,
      anon_sym_RBRACK,
    STATE(176), 1,
      aux_sym_block_field_repeat1,
  [4432] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(297), 1,
      sym_option_name,
  [4445] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    STATE(194), 1,
      aux_sym_field_options_repeat1,
  [4458] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_SEMI,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_field_names_repeat1,
  [4471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4480] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(592), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_block_field_repeat1,
  [4493] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(594), 1,
      anon_sym_SEMI,
    STATE(185), 1,
      aux_sym_ranges_repeat1,
  [4506] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_COMMA,
    ACTIONS(596), 1,
      anon_sym_SEMI,
    STATE(188), 1,
      aux_sym_field_names_repeat1,
  [4519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_SEMI,
    ACTIONS(600), 1,
      anon_sym_COMMA,
    STATE(185), 1,
      aux_sym_ranges_repeat1,
  [4532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_to,
    ACTIONS(603), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RBRACK,
    STATE(195), 1,
      aux_sym_block_field_repeat1,
  [4556] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 1,
      anon_sym_SEMI,
    ACTIONS(611), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_field_names_repeat1,
  [4569] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(296), 1,
      sym_option_name,
  [4582] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 1,
      anon_sym_RBRACK,
    ACTIONS(616), 1,
      anon_sym_COMMA,
    STATE(190), 1,
      aux_sym_block_field_repeat1,
  [4595] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_block_field_repeat1,
  [4608] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 1,
      anon_sym_RBRACK,
    ACTIONS(623), 1,
      anon_sym_COMMA,
    STATE(192), 1,
      aux_sym_field_options_repeat1,
  [4621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(626), 1,
      anon_sym_RBRACK,
    STATE(182), 1,
      aux_sym_block_field_repeat1,
  [4634] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_RBRACK,
    STATE(192), 1,
      aux_sym_field_options_repeat1,
  [4647] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
    STATE(190), 1,
      aux_sym_block_field_repeat1,
  [4660] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(632), 1,
      anon_sym_EQ,
    STATE(63), 1,
      aux_sym_option_name_repeat1,
  [4673] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LPAREN,
    ACTIONS(452), 1,
      sym_identifier,
    STATE(298), 1,
      sym_option_name,
  [4686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(245), 1,
      sym_full_ident,
  [4696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4704] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    STATE(8), 1,
      sym_message_body,
  [4714] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_enum_body,
  [4724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(640), 1,
      anon_sym_SEMI,
    ACTIONS(642), 1,
      anon_sym_LBRACK,
  [4734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(246), 1,
      sym_full_ident,
  [4744] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 1,
      sym_identifier,
    STATE(235), 1,
      sym_rpc_name,
  [4754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_LBRACE,
    STATE(76), 1,
      sym_enum_body,
  [4764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      anon_sym_SEMI,
    ACTIONS(650), 1,
      anon_sym_LBRACK,
  [4774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_message_body,
  [4784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_message_body,
  [4802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(621), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_message_body,
  [4820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(272), 1,
      sym_full_ident,
  [4830] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_DQUOTEproto3_DQUOTE,
      anon_sym_DQUOTEproto2_DQUOTE,
  [4838] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(658), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(660), 1,
      sym_identifier,
    STATE(229), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(664), 1,
      sym_identifier,
    STATE(257), 1,
      sym_service_name,
  [4884] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(666), 1,
      anon_sym_SEMI,
    ACTIONS(668), 1,
      anon_sym_LBRACK,
  [4894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(209), 1,
      sym_full_ident,
  [4904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(670), 2,
      anon_sym_GT,
      sym_identifier,
  [4912] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym_identifier,
    STATE(201), 1,
      sym_enum_name,
  [4922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      anon_sym_SEMI,
    ACTIONS(674), 1,
      anon_sym_LBRACE,
  [4932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_identifier,
    STATE(200), 1,
      sym_message_name,
  [4950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_SEMI,
    ACTIONS(678), 1,
      anon_sym_LBRACE,
  [4960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      sym_identifier,
    STATE(211), 1,
      sym_full_ident,
  [4970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 1,
      anon_sym_SEMI,
    ACTIONS(682), 1,
      anon_sym_LBRACK,
  [4980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(684), 1,
      sym_identifier,
    STATE(229), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(689), 1,
      anon_sym_LBRACK,
  [5000] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(676), 1,
      sym_identifier,
    STATE(207), 1,
      sym_message_name,
  [5010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_SEMI,
    ACTIONS(693), 1,
      anon_sym_LBRACE,
  [5020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(672), 1,
      sym_identifier,
    STATE(205), 1,
      sym_enum_name,
  [5030] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(662), 1,
      sym_identifier,
    STATE(229), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_LPAREN,
  [5047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      anon_sym_LPAREN,
  [5054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_RPAREN,
  [5061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      anon_sym_SEMI,
  [5068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_EQ,
  [5075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      anon_sym_RBRACK,
  [5082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 1,
      anon_sym_RPAREN,
  [5089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      sym_identifier,
  [5096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_RPAREN,
  [5103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_DOT,
  [5110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RBRACK,
  [5117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_RPAREN,
  [5124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
  [5131] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_SEMI,
  [5138] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
  [5145] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 1,
      sym_identifier,
  [5152] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      anon_sym_LPAREN,
  [5159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 1,
      anon_sym_SEMI,
  [5166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_SEMI,
  [5173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_EQ,
  [5180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      anon_sym_SEMI,
  [5187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(735), 1,
      anon_sym_SEMI,
  [5194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_LBRACE,
  [5201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_SEMI,
  [5208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_LBRACE,
  [5215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_RBRACK,
  [5222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_SEMI,
  [5229] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_EQ,
  [5236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      sym_identifier,
  [5243] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
  [5250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(753), 1,
      anon_sym_LBRACE,
  [5257] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(755), 1,
      anon_sym_EQ,
  [5264] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_LBRACE,
  [5271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_identifier,
  [5278] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_EQ,
  [5285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      anon_sym_EQ,
  [5292] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      sym_identifier,
  [5299] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_SEMI,
  [5306] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      anon_sym_SEMI,
  [5313] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(771), 1,
      anon_sym_COMMA,
  [5320] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_LPAREN,
  [5327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_returns,
  [5334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_RBRACK,
  [5341] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(779), 1,
      sym_identifier,
  [5348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(781), 1,
      anon_sym_COMMA,
  [5355] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      anon_sym_SEMI,
  [5362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(785), 1,
      ts_builtin_sym_end,
  [5369] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_identifier,
  [5376] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      anon_sym_SEMI,
  [5383] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      anon_sym_LT,
  [5390] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_returns,
  [5397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(795), 1,
      anon_sym_SEMI,
  [5404] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_SEMI,
  [5411] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(799), 1,
      anon_sym_SEMI,
  [5418] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_RPAREN,
  [5425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_GT,
  [5432] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(805), 1,
      anon_sym_EQ,
  [5439] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 1,
      anon_sym_EQ,
  [5446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 1,
      anon_sym_RBRACK,
  [5453] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_EQ,
  [5460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_RPAREN,
  [5467] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_EQ,
  [5474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_EQ,
  [5481] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_EQ,
  [5488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(821), 1,
      sym_identifier,
  [5495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_EQ,
  [5502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
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
  [SMALL_STATE(29)] = 1279,
  [SMALL_STATE(30)] = 1330,
  [SMALL_STATE(31)] = 1381,
  [SMALL_STATE(32)] = 1412,
  [SMALL_STATE(33)] = 1441,
  [SMALL_STATE(34)] = 1480,
  [SMALL_STATE(35)] = 1531,
  [SMALL_STATE(36)] = 1582,
  [SMALL_STATE(37)] = 1611,
  [SMALL_STATE(38)] = 1639,
  [SMALL_STATE(39)] = 1675,
  [SMALL_STATE(40)] = 1723,
  [SMALL_STATE(41)] = 1759,
  [SMALL_STATE(42)] = 1807,
  [SMALL_STATE(43)] = 1855,
  [SMALL_STATE(44)] = 1891,
  [SMALL_STATE(45)] = 1939,
  [SMALL_STATE(46)] = 1987,
  [SMALL_STATE(47)] = 2015,
  [SMALL_STATE(48)] = 2043,
  [SMALL_STATE(49)] = 2091,
  [SMALL_STATE(50)] = 2136,
  [SMALL_STATE(51)] = 2181,
  [SMALL_STATE(52)] = 2226,
  [SMALL_STATE(53)] = 2271,
  [SMALL_STATE(54)] = 2316,
  [SMALL_STATE(55)] = 2361,
  [SMALL_STATE(56)] = 2403,
  [SMALL_STATE(57)] = 2445,
  [SMALL_STATE(58)] = 2487,
  [SMALL_STATE(59)] = 2529,
  [SMALL_STATE(60)] = 2566,
  [SMALL_STATE(61)] = 2587,
  [SMALL_STATE(62)] = 2624,
  [SMALL_STATE(63)] = 2641,
  [SMALL_STATE(64)] = 2662,
  [SMALL_STATE(65)] = 2679,
  [SMALL_STATE(66)] = 2705,
  [SMALL_STATE(67)] = 2731,
  [SMALL_STATE(68)] = 2757,
  [SMALL_STATE(69)] = 2783,
  [SMALL_STATE(70)] = 2803,
  [SMALL_STATE(71)] = 2823,
  [SMALL_STATE(72)] = 2839,
  [SMALL_STATE(73)] = 2865,
  [SMALL_STATE(74)] = 2880,
  [SMALL_STATE(75)] = 2895,
  [SMALL_STATE(76)] = 2910,
  [SMALL_STATE(77)] = 2925,
  [SMALL_STATE(78)] = 2940,
  [SMALL_STATE(79)] = 2955,
  [SMALL_STATE(80)] = 2970,
  [SMALL_STATE(81)] = 2985,
  [SMALL_STATE(82)] = 3000,
  [SMALL_STATE(83)] = 3015,
  [SMALL_STATE(84)] = 3036,
  [SMALL_STATE(85)] = 3057,
  [SMALL_STATE(86)] = 3072,
  [SMALL_STATE(87)] = 3087,
  [SMALL_STATE(88)] = 3102,
  [SMALL_STATE(89)] = 3124,
  [SMALL_STATE(90)] = 3146,
  [SMALL_STATE(91)] = 3168,
  [SMALL_STATE(92)] = 3182,
  [SMALL_STATE(93)] = 3196,
  [SMALL_STATE(94)] = 3214,
  [SMALL_STATE(95)] = 3232,
  [SMALL_STATE(96)] = 3250,
  [SMALL_STATE(97)] = 3268,
  [SMALL_STATE(98)] = 3286,
  [SMALL_STATE(99)] = 3306,
  [SMALL_STATE(100)] = 3324,
  [SMALL_STATE(101)] = 3344,
  [SMALL_STATE(102)] = 3356,
  [SMALL_STATE(103)] = 3374,
  [SMALL_STATE(104)] = 3386,
  [SMALL_STATE(105)] = 3398,
  [SMALL_STATE(106)] = 3418,
  [SMALL_STATE(107)] = 3430,
  [SMALL_STATE(108)] = 3447,
  [SMALL_STATE(109)] = 3464,
  [SMALL_STATE(110)] = 3481,
  [SMALL_STATE(111)] = 3498,
  [SMALL_STATE(112)] = 3511,
  [SMALL_STATE(113)] = 3522,
  [SMALL_STATE(114)] = 3535,
  [SMALL_STATE(115)] = 3554,
  [SMALL_STATE(116)] = 3573,
  [SMALL_STATE(117)] = 3584,
  [SMALL_STATE(118)] = 3603,
  [SMALL_STATE(119)] = 3620,
  [SMALL_STATE(120)] = 3631,
  [SMALL_STATE(121)] = 3650,
  [SMALL_STATE(122)] = 3661,
  [SMALL_STATE(123)] = 3672,
  [SMALL_STATE(124)] = 3691,
  [SMALL_STATE(125)] = 3704,
  [SMALL_STATE(126)] = 3721,
  [SMALL_STATE(127)] = 3732,
  [SMALL_STATE(128)] = 3751,
  [SMALL_STATE(129)] = 3768,
  [SMALL_STATE(130)] = 3787,
  [SMALL_STATE(131)] = 3800,
  [SMALL_STATE(132)] = 3811,
  [SMALL_STATE(133)] = 3822,
  [SMALL_STATE(134)] = 3833,
  [SMALL_STATE(135)] = 3850,
  [SMALL_STATE(136)] = 3869,
  [SMALL_STATE(137)] = 3888,
  [SMALL_STATE(138)] = 3905,
  [SMALL_STATE(139)] = 3922,
  [SMALL_STATE(140)] = 3941,
  [SMALL_STATE(141)] = 3954,
  [SMALL_STATE(142)] = 3965,
  [SMALL_STATE(143)] = 3976,
  [SMALL_STATE(144)] = 3987,
  [SMALL_STATE(145)] = 3998,
  [SMALL_STATE(146)] = 4017,
  [SMALL_STATE(147)] = 4028,
  [SMALL_STATE(148)] = 4039,
  [SMALL_STATE(149)] = 4050,
  [SMALL_STATE(150)] = 4061,
  [SMALL_STATE(151)] = 4074,
  [SMALL_STATE(152)] = 4093,
  [SMALL_STATE(153)] = 4104,
  [SMALL_STATE(154)] = 4114,
  [SMALL_STATE(155)] = 4126,
  [SMALL_STATE(156)] = 4140,
  [SMALL_STATE(157)] = 4156,
  [SMALL_STATE(158)] = 4172,
  [SMALL_STATE(159)] = 4182,
  [SMALL_STATE(160)] = 4192,
  [SMALL_STATE(161)] = 4206,
  [SMALL_STATE(162)] = 4220,
  [SMALL_STATE(163)] = 4230,
  [SMALL_STATE(164)] = 4242,
  [SMALL_STATE(165)] = 4252,
  [SMALL_STATE(166)] = 4266,
  [SMALL_STATE(167)] = 4280,
  [SMALL_STATE(168)] = 4296,
  [SMALL_STATE(169)] = 4312,
  [SMALL_STATE(170)] = 4324,
  [SMALL_STATE(171)] = 4340,
  [SMALL_STATE(172)] = 4354,
  [SMALL_STATE(173)] = 4367,
  [SMALL_STATE(174)] = 4380,
  [SMALL_STATE(175)] = 4393,
  [SMALL_STATE(176)] = 4406,
  [SMALL_STATE(177)] = 4419,
  [SMALL_STATE(178)] = 4432,
  [SMALL_STATE(179)] = 4445,
  [SMALL_STATE(180)] = 4458,
  [SMALL_STATE(181)] = 4471,
  [SMALL_STATE(182)] = 4480,
  [SMALL_STATE(183)] = 4493,
  [SMALL_STATE(184)] = 4506,
  [SMALL_STATE(185)] = 4519,
  [SMALL_STATE(186)] = 4532,
  [SMALL_STATE(187)] = 4543,
  [SMALL_STATE(188)] = 4556,
  [SMALL_STATE(189)] = 4569,
  [SMALL_STATE(190)] = 4582,
  [SMALL_STATE(191)] = 4595,
  [SMALL_STATE(192)] = 4608,
  [SMALL_STATE(193)] = 4621,
  [SMALL_STATE(194)] = 4634,
  [SMALL_STATE(195)] = 4647,
  [SMALL_STATE(196)] = 4660,
  [SMALL_STATE(197)] = 4673,
  [SMALL_STATE(198)] = 4686,
  [SMALL_STATE(199)] = 4696,
  [SMALL_STATE(200)] = 4704,
  [SMALL_STATE(201)] = 4714,
  [SMALL_STATE(202)] = 4724,
  [SMALL_STATE(203)] = 4734,
  [SMALL_STATE(204)] = 4744,
  [SMALL_STATE(205)] = 4754,
  [SMALL_STATE(206)] = 4764,
  [SMALL_STATE(207)] = 4774,
  [SMALL_STATE(208)] = 4784,
  [SMALL_STATE(209)] = 4792,
  [SMALL_STATE(210)] = 4802,
  [SMALL_STATE(211)] = 4810,
  [SMALL_STATE(212)] = 4820,
  [SMALL_STATE(213)] = 4830,
  [SMALL_STATE(214)] = 4838,
  [SMALL_STATE(215)] = 4846,
  [SMALL_STATE(216)] = 4854,
  [SMALL_STATE(217)] = 4864,
  [SMALL_STATE(218)] = 4874,
  [SMALL_STATE(219)] = 4884,
  [SMALL_STATE(220)] = 4894,
  [SMALL_STATE(221)] = 4904,
  [SMALL_STATE(222)] = 4912,
  [SMALL_STATE(223)] = 4922,
  [SMALL_STATE(224)] = 4932,
  [SMALL_STATE(225)] = 4940,
  [SMALL_STATE(226)] = 4950,
  [SMALL_STATE(227)] = 4960,
  [SMALL_STATE(228)] = 4970,
  [SMALL_STATE(229)] = 4980,
  [SMALL_STATE(230)] = 4990,
  [SMALL_STATE(231)] = 5000,
  [SMALL_STATE(232)] = 5010,
  [SMALL_STATE(233)] = 5020,
  [SMALL_STATE(234)] = 5030,
  [SMALL_STATE(235)] = 5040,
  [SMALL_STATE(236)] = 5047,
  [SMALL_STATE(237)] = 5054,
  [SMALL_STATE(238)] = 5061,
  [SMALL_STATE(239)] = 5068,
  [SMALL_STATE(240)] = 5075,
  [SMALL_STATE(241)] = 5082,
  [SMALL_STATE(242)] = 5089,
  [SMALL_STATE(243)] = 5096,
  [SMALL_STATE(244)] = 5103,
  [SMALL_STATE(245)] = 5110,
  [SMALL_STATE(246)] = 5117,
  [SMALL_STATE(247)] = 5124,
  [SMALL_STATE(248)] = 5131,
  [SMALL_STATE(249)] = 5138,
  [SMALL_STATE(250)] = 5145,
  [SMALL_STATE(251)] = 5152,
  [SMALL_STATE(252)] = 5159,
  [SMALL_STATE(253)] = 5166,
  [SMALL_STATE(254)] = 5173,
  [SMALL_STATE(255)] = 5180,
  [SMALL_STATE(256)] = 5187,
  [SMALL_STATE(257)] = 5194,
  [SMALL_STATE(258)] = 5201,
  [SMALL_STATE(259)] = 5208,
  [SMALL_STATE(260)] = 5215,
  [SMALL_STATE(261)] = 5222,
  [SMALL_STATE(262)] = 5229,
  [SMALL_STATE(263)] = 5236,
  [SMALL_STATE(264)] = 5243,
  [SMALL_STATE(265)] = 5250,
  [SMALL_STATE(266)] = 5257,
  [SMALL_STATE(267)] = 5264,
  [SMALL_STATE(268)] = 5271,
  [SMALL_STATE(269)] = 5278,
  [SMALL_STATE(270)] = 5285,
  [SMALL_STATE(271)] = 5292,
  [SMALL_STATE(272)] = 5299,
  [SMALL_STATE(273)] = 5306,
  [SMALL_STATE(274)] = 5313,
  [SMALL_STATE(275)] = 5320,
  [SMALL_STATE(276)] = 5327,
  [SMALL_STATE(277)] = 5334,
  [SMALL_STATE(278)] = 5341,
  [SMALL_STATE(279)] = 5348,
  [SMALL_STATE(280)] = 5355,
  [SMALL_STATE(281)] = 5362,
  [SMALL_STATE(282)] = 5369,
  [SMALL_STATE(283)] = 5376,
  [SMALL_STATE(284)] = 5383,
  [SMALL_STATE(285)] = 5390,
  [SMALL_STATE(286)] = 5397,
  [SMALL_STATE(287)] = 5404,
  [SMALL_STATE(288)] = 5411,
  [SMALL_STATE(289)] = 5418,
  [SMALL_STATE(290)] = 5425,
  [SMALL_STATE(291)] = 5432,
  [SMALL_STATE(292)] = 5439,
  [SMALL_STATE(293)] = 5446,
  [SMALL_STATE(294)] = 5453,
  [SMALL_STATE(295)] = 5460,
  [SMALL_STATE(296)] = 5467,
  [SMALL_STATE(297)] = 5474,
  [SMALL_STATE(298)] = 5481,
  [SMALL_STATE(299)] = 5488,
  [SMALL_STATE(300)] = 5495,
  [SMALL_STATE(301)] = 5502,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(19),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(178),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(217),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(222),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(225),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(227),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(33),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(40),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(282),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(284),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(221),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(59),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(98),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(154),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extensions, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 3),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(46),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(197),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(217),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(221),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(154),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [311] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(212),
  [317] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(173),
  [320] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(233),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(231),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(220),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(218),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_name_repeat1, 2), SHIFT_REPEAT(250),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(113),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(189),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(61),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(262),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(166),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(165),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(64),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(173),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(204),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(64),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(173),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 2),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 8, .production_id = 20),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 2, .production_id = 4),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 7, .production_id = 19),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2),
  [470] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2), SHIFT_REPEAT(198),
  [473] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2), SHIFT_REPEAT(35),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 7, .production_id = 18),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 6, .production_id = 16),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 6, .production_id = 15),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 6, .production_id = 14),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 1),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 3, .production_id = 5),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, .production_id = 13),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 4, .production_id = 9),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 3, .production_id = 6),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, .production_id = 12),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, .production_id = 11),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, .production_id = 10),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 4, .production_id = 7),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 4, .production_id = 8),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(155),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(171),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 3),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [600] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2), SHIFT_REPEAT(125),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2), SHIFT_REPEAT(100),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_field_repeat1, 2),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_field_repeat1, 2), SHIFT_REPEAT(49),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2), SHIFT_REPEAT(170),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 4),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [652] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3, .production_id = 17),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [684] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2), SHIFT_REPEAT(244),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_name, 1),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [785] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_proto(void) {
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
