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
#define STATE_COUNT 320
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 128
#define ALIAS_COUNT 0
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 19

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
  anon_sym_DASH = 17,
  anon_sym_LBRACK = 18,
  anon_sym_COMMA = 19,
  anon_sym_RBRACK = 20,
  anon_sym_message = 21,
  anon_sym_extend = 22,
  anon_sym_optional = 23,
  anon_sym_required = 24,
  anon_sym_repeated = 25,
  anon_sym_oneof = 26,
  anon_sym_map = 27,
  anon_sym_LT = 28,
  anon_sym_GT = 29,
  anon_sym_int32 = 30,
  anon_sym_int64 = 31,
  anon_sym_uint32 = 32,
  anon_sym_uint64 = 33,
  anon_sym_sint32 = 34,
  anon_sym_sint64 = 35,
  anon_sym_fixed32 = 36,
  anon_sym_fixed64 = 37,
  anon_sym_sfixed32 = 38,
  anon_sym_sfixed64 = 39,
  anon_sym_bool = 40,
  anon_sym_string = 41,
  anon_sym_double = 42,
  anon_sym_float = 43,
  anon_sym_bytes = 44,
  anon_sym_reserved = 45,
  anon_sym_extensions = 46,
  anon_sym_to = 47,
  anon_sym_max = 48,
  anon_sym_service = 49,
  anon_sym_rpc = 50,
  anon_sym_stream = 51,
  anon_sym_returns = 52,
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
  sym__option_name = 74,
  sym_enum = 75,
  sym_enum_name = 76,
  sym_enum_body = 77,
  sym_enum_field = 78,
  sym_enum_value_option = 79,
  sym_message = 80,
  sym_message_body = 81,
  sym_message_name = 82,
  sym_extend = 83,
  sym_field = 84,
  sym_field_options = 85,
  sym_field_option = 86,
  sym_oneof = 87,
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
  sym_service_name = 100,
  sym_rpc = 101,
  sym_rpc_name = 102,
  sym__constant = 103,
  sym_block_lit = 104,
  sym_block_field = 105,
  sym__identifier_or_string = 106,
  sym_full_ident = 107,
  sym_bool = 108,
  sym_int_lit = 109,
  sym_string = 110,
  aux_sym_source_file_repeat1 = 111,
  aux_sym__option_name_repeat1 = 112,
  aux_sym_enum_body_repeat1 = 113,
  aux_sym_enum_field_repeat1 = 114,
  aux_sym_message_body_repeat1 = 115,
  aux_sym_field_options_repeat1 = 116,
  aux_sym_oneof_repeat1 = 117,
  aux_sym_ranges_repeat1 = 118,
  aux_sym_field_names_repeat1 = 119,
  aux_sym_message_or_enum_type_repeat1 = 120,
  aux_sym_service_repeat1 = 121,
  aux_sym_rpc_repeat1 = 122,
  aux_sym_block_lit_repeat1 = 123,
  aux_sym_block_field_repeat1 = 124,
  aux_sym_string_repeat1 = 125,
  aux_sym_string_repeat2 = 126,
  aux_sym_string_repeat3 = 127,
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
  [anon_sym_DASH] = "-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_message] = "message",
  [anon_sym_extend] = "extend",
  [anon_sym_optional] = "optional",
  [anon_sym_required] = "required",
  [anon_sym_repeated] = "repeated",
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
  [sym__option_name] = "_option_name",
  [sym_enum] = "enum",
  [sym_enum_name] = "enum_name",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_enum_value_option] = "enum_value_option",
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
  [aux_sym__option_name_repeat1] = "_option_name_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_enum_field_repeat1] = "enum_field_repeat1",
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
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_message] = anon_sym_message,
  [anon_sym_extend] = anon_sym_extend,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_required] = anon_sym_required,
  [anon_sym_repeated] = anon_sym_repeated,
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
  [sym__option_name] = sym__option_name,
  [sym_enum] = sym_enum,
  [sym_enum_name] = sym_enum_name,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_enum_value_option] = sym_enum_value_option,
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
  [aux_sym__option_name_repeat1] = aux_sym__option_name_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_enum_field_repeat1] = aux_sym_enum_field_repeat1,
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym__option_name] = {
    .visible = false,
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
  [sym_enum_value_option] = {
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
  [aux_sym__option_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_field_repeat1] = {
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
  field_path = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_path] = "path",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 3},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 4},
  [7] = {.index = 13, .length = 4},
  [8] = {.index = 17, .length = 3},
  [9] = {.index = 20, .length = 5},
  [10] = {.index = 25, .length = 4},
  [11] = {.index = 29, .length = 5},
  [12] = {.index = 34, .length = 4},
  [13] = {.index = 38, .length = 6},
  [14] = {.index = 44, .length = 5},
  [15] = {.index = 49, .length = 5},
  [16] = {.index = 54, .length = 7},
  [17] = {.index = 61, .length = 6},
  [18] = {.index = 67, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_path, 2},
  [2] =
    {field_key, 0},
    {field_value, 1},
  [4] =
    {field_key, 0},
    {field_value, 1},
    {field_value, 2},
  [7] =
    {field_key, 0},
    {field_value, 2},
  [9] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
  [13] =
    {field_key, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
  [17] =
    {field_key, 0},
    {field_value, 2},
    {field_value, 3},
  [20] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
    {field_value, 4},
  [25] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 4},
  [29] =
    {field_key, 0},
    {field_value, 1},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [34] =
    {field_key, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
  [38] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
  [44] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 4},
    {field_value, 5},
  [49] =
    {field_key, 0},
    {field_value, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
  [54] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 3},
    {field_value, 4},
    {field_value, 5},
    {field_value, 6},
  [61] =
    {field_key, 0},
    {field_key, 1},
    {field_key, 2},
    {field_value, 4},
    {field_value, 5},
    {field_value, 6},
  [67] =
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
  [4] = 2,
  [5] = 5,
  [6] = 5,
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
  [43] = 18,
  [44] = 16,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 49,
  [55] = 49,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 60,
  [63] = 63,
  [64] = 18,
  [65] = 16,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 66,
  [70] = 68,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 26,
  [78] = 24,
  [79] = 23,
  [80] = 8,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 27,
  [87] = 7,
  [88] = 25,
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
  [117] = 34,
  [118] = 118,
  [119] = 119,
  [120] = 16,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 21,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 34,
  [131] = 131,
  [132] = 18,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 115,
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
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 202,
  [204] = 204,
  [205] = 202,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 202,
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
  [221] = 219,
  [222] = 215,
  [223] = 220,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 230,
  [236] = 229,
  [237] = 227,
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
  [303] = 301,
  [304] = 261,
  [305] = 301,
  [306] = 301,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 287,
  [315] = 287,
  [316] = 287,
  [317] = 317,
  [318] = 318,
  [319] = 319,
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
      if (lookahead == ',') ADVANCE(215);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(231);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(232);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead == ']') ADVANCE(216);
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
      if (lookahead == ',') ADVANCE(215);
      if (lookahead == '.') ADVANCE(207);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(232);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == ']') ADVANCE(216);
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
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(178);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == ']') ADVANCE(216);
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
      if (lookahead == '[') ADVANCE(214);
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
      if (lookahead == '2') ADVANCE(233);
      END_STATE();
    case 19:
      if (lookahead == '2') ADVANCE(241);
      END_STATE();
    case 20:
      if (lookahead == '2') ADVANCE(237);
      END_STATE();
    case 21:
      if (lookahead == '2') ADVANCE(245);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(249);
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
      if (lookahead == '4') ADVANCE(235);
      END_STATE();
    case 30:
      if (lookahead == '4') ADVANCE(243);
      END_STATE();
    case 31:
      if (lookahead == '4') ADVANCE(239);
      END_STATE();
    case 32:
      if (lookahead == '4') ADVANCE(247);
      END_STATE();
    case 33:
      if (lookahead == '4') ADVANCE(251);
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
      if (lookahead == 'c') ADVANCE(270);
      END_STATE();
    case 52:
      if (lookahead == 'c') ADVANCE(199);
      END_STATE();
    case 53:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'd') ADVANCE(219);
      END_STATE();
    case 55:
      if (lookahead == 'd') ADVANCE(219);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 56:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 57:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 58:
      if (lookahead == 'd') ADVANCE(263);
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
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(269);
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
      if (lookahead == 'f') ADVANCE(227);
      END_STATE();
    case 86:
      if (lookahead == 'g') ADVANCE(255);
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
      if (lookahead == 'l') ADVANCE(253);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(221);
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
      if (lookahead == 'm') ADVANCE(271);
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
      if (lookahead == 'o') ADVANCE(267);
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
      if (lookahead == 'p') ADVANCE(229);
      if (lookahead == 'x') ADVANCE(268);
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
      if (lookahead == 's') ADVANCE(261);
      END_STATE();
    case 149:
      if (lookahead == 's') ADVANCE(273);
      END_STATE();
    case 150:
      if (lookahead == 's') ADVANCE(265);
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
      if (lookahead == 't') ADVANCE(259);
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
      if (lookahead == 'x') ADVANCE(268);
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
      if (lookahead == ',') ADVANCE(215);
      if (lookahead == '-') ADVANCE(213);
      if (lookahead == '.') ADVANCE(208);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(401);
      if (lookahead == ':') ADVANCE(275);
      if (lookahead == ';') ADVANCE(192);
      if (lookahead == '<') ADVANCE(231);
      if (lookahead == '=') ADVANCE(194);
      if (lookahead == '>') ADVANCE(232);
      if (lookahead == '[') ADVANCE(214);
      if (lookahead == ']') ADVANCE(216);
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
      if (lookahead == '-') ADVANCE(213);
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
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_message);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_message);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_extend);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_extend);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_required);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_repeated);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_repeated);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_oneof);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_oneof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_int32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_int64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_uint32);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_uint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_uint64);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_uint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_sint32);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_sint32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_sint64);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_sint64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_fixed32);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_fixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_fixed64);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_fixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_sfixed32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_sfixed64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_bytes);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_bytes);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_reserved);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_extensions);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_extensions);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_rpc);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_stream);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_stream);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_returns);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(250);
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
      if (lookahead == '4') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(252);
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
      if (lookahead == 'd') ADVANCE(220);
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
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'd') ADVANCE(264);
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
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'e') ADVANCE(218);
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
      if (lookahead == 'f') ADVANCE(228);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'g') ADVANCE(256);
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
      if (lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 'l') ADVANCE(222);
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
      if (lookahead == 'm') ADVANCE(272);
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
      if (lookahead == 'p') ADVANCE(230);
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
      if (lookahead == 's') ADVANCE(262);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(394);
      if (lookahead == 's') ADVANCE(266);
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
      if (lookahead == 't') ADVANCE(260);
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
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 14},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
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
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 190},
  [65] = {.lex_state = 190},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 17},
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
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 190},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 190},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 190},
  [96] = {.lex_state = 190},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 190},
  [101] = {.lex_state = 190},
  [102] = {.lex_state = 190},
  [103] = {.lex_state = 190},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 190},
  [107] = {.lex_state = 190},
  [108] = {.lex_state = 190},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 17},
  [113] = {.lex_state = 190},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 17},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 15},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 17},
  [125] = {.lex_state = 190},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 1},
  [128] = {.lex_state = 190},
  [129] = {.lex_state = 1},
  [130] = {.lex_state = 1},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 17},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 17},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 16},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 190},
  [139] = {.lex_state = 190},
  [140] = {.lex_state = 15},
  [141] = {.lex_state = 15},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 17},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 17},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 190},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 190},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 190},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 190},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 190},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 190},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 3},
  [171] = {.lex_state = 190},
  [172] = {.lex_state = 190},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 3},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 190},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 190},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 190},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 1},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 1},
  [210] = {.lex_state = 190},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 1},
  [222] = {.lex_state = 1},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 190},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 1},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 1},
  [249] = {.lex_state = 1},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 1},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 190},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
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
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 1},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 1},
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
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_message] = ACTIONS(1),
    [anon_sym_extend] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_repeated] = ACTIONS(1),
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
    [sym_source_file] = STATE(299),
    [sym_empty_statement] = STATE(57),
    [sym_syntax] = STATE(56),
    [sym_import] = STATE(57),
    [sym_package] = STATE(57),
    [sym_option] = STATE(57),
    [sym_enum] = STATE(57),
    [sym_message] = STATE(57),
    [sym_extend] = STATE(57),
    [sym_service] = STATE(57),
    [aux_sym_source_file_repeat1] = STATE(57),
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
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(267), 1,
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
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(267), 1,
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
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(267), 1,
      sym_type,
    ACTIONS(39), 2,
      anon_sym_optional,
      anon_sym_required,
    STATE(6), 11,
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
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(267), 1,
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
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(267), 1,
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
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      anon_sym_option,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(260), 1,
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
  [1279] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    ACTIONS(198), 1,
      anon_sym_option,
    ACTIONS(201), 1,
      anon_sym_DOT,
    ACTIONS(204), 1,
      anon_sym_RBRACE,
    ACTIONS(209), 1,
      sym_identifier,
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(260), 1,
      sym_type,
    STATE(29), 4,
      sym_empty_statement,
      sym_option,
      sym_oneof_field,
      aux_sym_oneof_repeat1,
    ACTIONS(206), 15,
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
    ACTIONS(189), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      anon_sym_option,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(260), 1,
      sym_type,
    STATE(29), 4,
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
  [1381] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(218), 1,
      anon_sym_LBRACK,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_hex_lit,
    ACTIONS(230), 1,
      sym_float_lit,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(216), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(147), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1432] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(236), 1,
      anon_sym_repeated,
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(319), 1,
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
  [1471] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(240), 17,
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
  [1502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(246), 17,
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
  [1531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 4,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(250), 17,
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
  [1560] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_hex_lit,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(256), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(216), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(121), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1611] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_hex_lit,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(260), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(216), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(126), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1659] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(270), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
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
  [1707] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(272), 1,
      anon_sym_RBRACK,
    ACTIONS(274), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
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
  [1755] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(228), 1,
      sym_hex_lit,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(276), 1,
      anon_sym_LBRACK,
    ACTIONS(278), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(216), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(145), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1803] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(283), 1,
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
  [1839] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(280), 1,
      anon_sym_RBRACK,
    ACTIONS(282), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(192), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [1887] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(151), 17,
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
  [1915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_RBRACE,
    ACTIONS(143), 17,
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
  [1943] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(269), 1,
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
  [1979] = 3,
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
  [2007] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(239), 1,
      sym_message_or_enum_type,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(319), 1,
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
  [2043] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    ACTIONS(290), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
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
  [2091] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(292), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(303), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2136] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(294), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(301), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2181] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(296), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(217), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2226] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(298), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(241), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2271] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(300), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(232), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2316] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(302), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(305), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2361] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    ACTIONS(222), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(304), 1,
      sym_float_lit,
    STATE(75), 1,
      aux_sym_string_repeat3,
    ACTIONS(224), 2,
      sym_true,
      sym_false,
    ACTIONS(262), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
    STATE(306), 6,
      sym__constant,
      sym_block_lit,
      sym_full_ident,
      sym_bool,
      sym_int_lit,
      sym_string,
  [2406] = 11,
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
    ACTIONS(306), 1,
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
  [2448] = 11,
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
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    STATE(59), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2490] = 11,
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
    STATE(59), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2532] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      ts_builtin_sym_end,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_import,
    ACTIONS(318), 1,
      anon_sym_package,
    ACTIONS(321), 1,
      anon_sym_option,
    ACTIONS(324), 1,
      anon_sym_enum,
    ACTIONS(327), 1,
      anon_sym_message,
    ACTIONS(330), 1,
      anon_sym_extend,
    ACTIONS(333), 1,
      anon_sym_service,
    STATE(59), 9,
      sym_empty_statement,
      sym_import,
      sym_package,
      sym_option,
      sym_enum,
      sym_message,
      sym_extend,
      sym_service,
      aux_sym_source_file_repeat1,
  [2574] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(75), 1,
      aux_sym_string_repeat3,
    STATE(182), 1,
      sym_int_lit,
    STATE(197), 1,
      sym_range,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(186), 2,
      sym__identifier_or_string,
      sym_string,
    STATE(304), 2,
      sym_ranges,
      sym_field_names,
  [2611] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(272), 1,
      sym_key_type,
    ACTIONS(338), 12,
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
  [2632] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(75), 1,
      aux_sym_string_repeat3,
    STATE(182), 1,
      sym_int_lit,
    STATE(197), 1,
      sym_range,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
    STATE(186), 2,
      sym__identifier_or_string,
      sym_string,
    STATE(261), 2,
      sym_ranges,
      sym_field_names,
  [2669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(340), 9,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 11,
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
  [2707] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 11,
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
  [2724] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      anon_sym_option,
    ACTIONS(349), 1,
      anon_sym_RBRACE,
    ACTIONS(351), 1,
      anon_sym_reserved,
    ACTIONS(353), 1,
      sym_identifier,
    STATE(68), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2750] = 7,
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
  [2776] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      anon_sym_option,
    ACTIONS(351), 1,
      anon_sym_reserved,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_RBRACE,
    STATE(67), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2802] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      anon_sym_option,
    ACTIONS(351), 1,
      anon_sym_reserved,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_RBRACE,
    STATE(70), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2828] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      anon_sym_option,
    ACTIONS(351), 1,
      anon_sym_reserved,
    ACTIONS(353), 1,
      sym_identifier,
    ACTIONS(373), 1,
      anon_sym_RBRACE,
    STATE(67), 5,
      sym_empty_statement,
      sym_option,
      sym_enum_field,
      sym_reserved,
      aux_sym_enum_body_repeat1,
  [2854] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 10,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DOT,
    STATE(73), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(375), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2890] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DOT,
    STATE(63), 1,
      aux_sym__option_name_repeat1,
    ACTIONS(379), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2910] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_SQUOTE,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(381), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2931] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(74), 1,
      aux_sym_string_repeat3,
    ACTIONS(389), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [2952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_import,
      anon_sym_package,
      anon_sym_option,
      anon_sym_enum,
      anon_sym_message,
      anon_sym_extend,
      anon_sym_service,
  [2967] = 2,
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
  [2982] = 2,
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
  [2997] = 2,
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
  [3012] = 2,
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
  [3027] = 2,
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
  [3042] = 2,
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
  [3057] = 2,
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
  [3072] = 2,
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
  [3087] = 2,
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
  [3102] = 2,
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
  [3117] = 2,
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
  [3132] = 2,
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
  [3147] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(403), 1,
      anon_sym_RBRACE,
    ACTIONS(405), 1,
      anon_sym_rpc,
    STATE(91), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [3183] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(405), 1,
      anon_sym_rpc,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(93), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 8,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [3219] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_SEMI,
    ACTIONS(414), 1,
      anon_sym_option,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    ACTIONS(419), 1,
      anon_sym_rpc,
    STATE(93), 4,
      sym_empty_statement,
      sym_option,
      sym_rpc,
      aux_sym_service_repeat1,
  [3241] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3253] = 5,
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
  [3271] = 5,
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
  [3289] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3301] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat3,
    STATE(291), 1,
      sym_string,
    ACTIONS(436), 2,
      anon_sym_weak,
      anon_sym_public,
  [3321] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    ACTIONS(438), 1,
      sym_identifier,
    STATE(75), 1,
      aux_sym_string_repeat3,
    STATE(240), 2,
      sym__identifier_or_string,
      sym_string,
  [3341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(95), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3359] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(182), 1,
      sym_int_lit,
    STATE(197), 1,
      sym_range,
    STATE(317), 1,
      sym_ranges,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3379] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(107), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(440), 1,
      anon_sym_RBRACE,
    STATE(96), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_identifier,
  [3439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(103), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3457] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(15), 1,
      anon_sym_option,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
    STATE(96), 3,
      sym_empty_statement,
      sym_option,
      aux_sym_rpc_repeat1,
  [3475] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(35), 1,
      sym_int_lit,
    STATE(244), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3503] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(458), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3538] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_octal_lit,
    STATE(33), 1,
      sym_field_number,
    STATE(35), 1,
      sym_int_lit,
    ACTIONS(460), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3555] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(183), 1,
      sym_field_option,
    STATE(307), 1,
      sym_field_options,
    STATE(310), 1,
      sym__option_name,
  [3574] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_hex_lit,
    ACTIONS(468), 1,
      sym_float_lit,
    STATE(94), 1,
      sym_int_lit,
    ACTIONS(226), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3591] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(183), 1,
      sym_field_option,
    STATE(281), 1,
      sym_field_options,
    STATE(310), 1,
      sym__option_name,
  [3610] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_SEMI,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_to,
  [3621] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3643] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(143), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3667] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(476), 1,
      anon_sym_stream,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(255), 1,
      sym_message_or_enum_type,
  [3686] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RBRACE,
    ACTIONS(480), 1,
      anon_sym_LBRACK,
    ACTIONS(483), 1,
      sym_identifier,
    STATE(123), 1,
      aux_sym_block_lit_repeat1,
    STATE(153), 1,
      sym_block_field,
  [3705] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(163), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3718] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(182), 1,
      sym_int_lit,
    STATE(238), 1,
      sym_range,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3735] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(490), 1,
      anon_sym_max,
    STATE(213), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3774] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3785] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3796] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3807] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(151), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3820] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(183), 1,
      sym_field_option,
    STATE(310), 1,
      sym__option_name,
    STATE(311), 1,
      sym_field_options,
  [3839] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(498), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [3852] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(183), 1,
      sym_field_option,
    STATE(258), 1,
      sym_field_options,
    STATE(310), 1,
      sym__option_name,
  [3871] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_hex_lit,
    ACTIONS(468), 1,
      sym_float_lit,
    STATE(94), 1,
      sym_int_lit,
    ACTIONS(266), 2,
      sym_decimal_lit,
      sym_octal_lit,
  [3888] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      sym_identifier,
    STATE(153), 1,
      sym_block_field,
    STATE(154), 1,
      aux_sym_block_lit_repeat1,
  [3907] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(35), 1,
      sym_int_lit,
    STATE(212), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3924] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(35), 1,
      sym_int_lit,
    STATE(228), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [3941] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(506), 1,
      anon_sym_stream,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(257), 1,
      sym_message_or_enum_type,
  [3960] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(53), 1,
      sym_identifier,
    ACTIONS(508), 1,
      anon_sym_stream,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(259), 1,
      sym_message_or_enum_type,
  [3979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [3990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(514), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [4003] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 5,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_COMMA,
      sym_identifier,
  [4058] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(528), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [4071] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(183), 1,
      sym_field_option,
    STATE(265), 1,
      sym_field_options,
    STATE(310), 1,
      sym__option_name,
  [4090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    ACTIONS(530), 1,
      anon_sym_DASH,
    STATE(234), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [4107] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(534), 3,
      anon_sym_option,
      anon_sym_reserved,
      sym_identifier,
  [4120] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(538), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4133] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_LBRACK,
    ACTIONS(504), 1,
      sym_identifier,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    STATE(123), 1,
      aux_sym_block_lit_repeat1,
    STATE(153), 1,
      sym_block_field,
  [4152] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(35), 1,
      sym_int_lit,
    STATE(245), 1,
      sym_field_number,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [4169] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(243), 1,
      sym_field_option,
    STATE(310), 1,
      sym__option_name,
  [4185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(542), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4195] = 4,
    ACTIONS(544), 1,
      anon_sym_SQUOTE,
    ACTIONS(549), 1,
      sym_comment,
    STATE(158), 1,
      aux_sym_string_repeat1,
    ACTIONS(546), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4209] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(196), 1,
      sym_enum_value_option,
    STATE(254), 1,
      sym__option_name,
  [4225] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_DOT,
    ACTIONS(551), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(555), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4247] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(286), 1,
      sym_message_or_enum_type,
  [4263] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      anon_sym_SQUOTE,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      aux_sym_string_repeat3,
    STATE(273), 1,
      sym_string,
  [4279] = 4,
    ACTIONS(549), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_SQUOTE,
    STATE(177), 1,
      aux_sym_string_repeat1,
    ACTIONS(561), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(563), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4303] = 4,
    ACTIONS(549), 1,
      sym_comment,
    ACTIONS(565), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym_string_repeat2,
    ACTIONS(567), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4317] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(259), 1,
      sym_message_or_enum_type,
  [4333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4343] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(218), 1,
      sym_enum_value_option,
    STATE(254), 1,
      sym__option_name,
  [4359] = 4,
    ACTIONS(549), 1,
      sym_comment,
    ACTIONS(559), 1,
      anon_sym_DQUOTE,
    STATE(176), 1,
      aux_sym_string_repeat2,
    ACTIONS(572), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 4,
      anon_sym_SEMI,
      anon_sym_option,
      anon_sym_RBRACE,
      anon_sym_rpc,
  [4383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym_octal_lit,
    STATE(251), 1,
      sym_int_lit,
    ACTIONS(268), 2,
      sym_decimal_lit,
      sym_hex_lit,
  [4397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(195), 1,
      sym_enum_value_option,
    STATE(254), 1,
      sym__option_name,
  [4413] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_DOT,
    ACTIONS(576), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4425] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_DOT,
    ACTIONS(578), 3,
      anon_sym_RPAREN,
      anon_sym_GT,
      sym_identifier,
  [4437] = 4,
    ACTIONS(549), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym_string_repeat2,
    ACTIONS(582), 2,
      aux_sym_string_token2,
      sym_escape_sequence,
  [4451] = 4,
    ACTIONS(549), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_SQUOTE,
    STATE(158), 1,
      aux_sym_string_repeat1,
    ACTIONS(584), 2,
      aux_sym_string_token1,
      sym_escape_sequence,
  [4465] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(557), 1,
      sym_identifier,
    STATE(248), 1,
      aux_sym_message_or_enum_type_repeat1,
    STATE(263), 1,
      sym_message_or_enum_type,
  [4481] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(589), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_block_field_repeat1,
  [4494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(593), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_field_options_repeat1,
  [4507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_COMMA,
    ACTIONS(598), 1,
      anon_sym_RBRACK,
    STATE(181), 1,
      aux_sym_field_options_repeat1,
  [4520] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_to,
    ACTIONS(600), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4531] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_COMMA,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(180), 1,
      aux_sym_field_options_repeat1,
  [4544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_SEMI,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_ranges_repeat1,
  [4557] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DOT,
    ACTIONS(611), 1,
      anon_sym_EQ,
    STATE(63), 1,
      aux_sym__option_name_repeat1,
  [4570] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_SEMI,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_field_names_repeat1,
  [4583] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(619), 1,
      anon_sym_RBRACK,
    STATE(211), 1,
      aux_sym_block_field_repeat1,
  [4596] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(621), 1,
      anon_sym_SEMI,
    STATE(207), 1,
      aux_sym_field_names_repeat1,
  [4609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(623), 1,
      anon_sym_SEMI,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    STATE(184), 1,
      aux_sym_ranges_repeat1,
  [4622] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 3,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      sym_identifier,
  [4631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DOT,
    ACTIONS(627), 1,
      anon_sym_EQ,
    STATE(185), 1,
      aux_sym__option_name_repeat1,
  [4644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    STATE(198), 1,
      aux_sym_block_field_repeat1,
  [4657] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RBRACK,
    STATE(194), 1,
      aux_sym_block_field_repeat1,
  [4670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_block_field_repeat1,
  [4683] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(206), 1,
      aux_sym_enum_field_repeat1,
  [4696] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RBRACK,
    STATE(199), 1,
      aux_sym_enum_field_repeat1,
  [4709] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_SEMI,
    STATE(189), 1,
      aux_sym_ranges_repeat1,
  [4722] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_block_field_repeat1,
  [4735] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(637), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_enum_field_repeat1,
  [4748] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(645), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_block_field_repeat1,
  [4761] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DOT,
    ACTIONS(647), 1,
      anon_sym_EQ,
    STATE(63), 1,
      aux_sym__option_name_repeat1,
  [4774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(287), 1,
      sym__option_name,
  [4787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(314), 1,
      sym__option_name,
  [4800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(649), 1,
      anon_sym_COMMA,
    ACTIONS(652), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_enum_field_repeat1,
  [4813] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(315), 1,
      sym__option_name,
  [4826] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(635), 1,
      anon_sym_COMMA,
    ACTIONS(654), 1,
      anon_sym_RBRACK,
    STATE(204), 1,
      aux_sym_enum_field_repeat1,
  [4839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_SEMI,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    STATE(207), 1,
      aux_sym_field_names_repeat1,
  [4852] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(200), 1,
      aux_sym_block_field_repeat1,
  [4865] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 1,
      sym_identifier,
    STATE(316), 1,
      sym__option_name,
  [4878] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_DOT,
    ACTIONS(663), 1,
      anon_sym_EQ,
    STATE(201), 1,
      aux_sym__option_name_repeat1,
  [4891] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
    STATE(179), 1,
      aux_sym_block_field_repeat1,
  [4904] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      anon_sym_SEMI,
    ACTIONS(669), 1,
      anon_sym_LBRACK,
  [4914] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [4922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(290), 1,
      sym_full_ident,
  [4932] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym_identifier,
    STATE(235), 1,
      sym_enum_name,
  [4942] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      sym_identifier,
    STATE(231), 1,
      aux_sym_message_or_enum_type_repeat1,
  [4952] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [4968] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(236), 1,
      sym_message_name,
  [4978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(227), 1,
      sym_full_ident,
  [4988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      sym_identifier,
    STATE(229), 1,
      sym_message_name,
  [4998] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym_identifier,
    STATE(230), 1,
      sym_enum_name,
  [5008] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(237), 1,
      sym_full_ident,
  [5018] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      sym_identifier,
    STATE(275), 1,
      sym_service_name,
  [5028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 2,
      anon_sym_DQUOTEproto3_DQUOTE,
      anon_sym_DQUOTEproto2_DQUOTE,
  [5036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym_identifier,
    STATE(216), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5046] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_message_body,
  [5056] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 1,
      anon_sym_SEMI,
    ACTIONS(693), 1,
      anon_sym_LBRACK,
  [5066] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(689), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      sym_message_body,
  [5076] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(695), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_enum_body,
  [5086] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_identifier,
    STATE(231), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(252), 1,
      sym_full_ident,
  [5114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(700), 1,
      anon_sym_SEMI,
    ACTIONS(702), 1,
      anon_sym_LBRACK,
  [5124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(704), 1,
      anon_sym_LBRACE,
    STATE(86), 1,
      sym_enum_body,
  [5134] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    STATE(87), 1,
      sym_message_body,
  [5144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_LBRACE,
    STATE(77), 1,
      sym_message_body,
  [5154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(708), 2,
      anon_sym_GT,
      sym_identifier,
  [5170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [5178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(710), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5186] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(448), 1,
      anon_sym_SEMI,
    ACTIONS(712), 1,
      anon_sym_LBRACE,
  [5196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [5204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(714), 1,
      anon_sym_SEMI,
    ACTIONS(716), 1,
      anon_sym_LBRACK,
  [5214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(718), 1,
      anon_sym_SEMI,
    ACTIONS(720), 1,
      anon_sym_LBRACK,
  [5224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(673), 1,
      sym_identifier,
    STATE(288), 1,
      sym_full_ident,
  [5234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_SEMI,
    ACTIONS(722), 1,
      anon_sym_LBRACE,
  [5244] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      sym_identifier,
    STATE(231), 1,
      aux_sym_message_or_enum_type_repeat1,
  [5254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(724), 1,
      sym_identifier,
    STATE(292), 1,
      sym_rpc_name,
  [5264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(726), 1,
      anon_sym_SEMI,
    ACTIONS(728), 1,
      anon_sym_LBRACE,
  [5274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(730), 1,
      anon_sym_SEMI,
    ACTIONS(732), 1,
      anon_sym_LBRACK,
  [5284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
  [5291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(736), 1,
      anon_sym_LBRACE,
  [5298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(738), 1,
      anon_sym_EQ,
  [5305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(740), 1,
      anon_sym_RPAREN,
  [5312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(742), 1,
      anon_sym_SEMI,
  [5319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(744), 1,
      anon_sym_RPAREN,
  [5326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(746), 1,
      anon_sym_RBRACK,
  [5333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
  [5340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(750), 1,
      sym_identifier,
  [5347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(752), 1,
      anon_sym_SEMI,
  [5354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(754), 1,
      anon_sym_EQ,
  [5361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
  [5368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      anon_sym_returns,
  [5375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RBRACK,
  [5382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_LPAREN,
  [5389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      sym_identifier,
  [5396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      sym_identifier,
  [5403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(768), 1,
      anon_sym_GT,
  [5410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(770), 1,
      anon_sym_SEMI,
  [5417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(553), 1,
      anon_sym_DOT,
  [5424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(772), 1,
      anon_sym_COMMA,
  [5431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(774), 1,
      anon_sym_SEMI,
  [5438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(776), 1,
      anon_sym_SEMI,
  [5445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 1,
      anon_sym_LBRACE,
  [5452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_COMMA,
  [5459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(782), 1,
      anon_sym_LBRACE,
  [5466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(784), 1,
      anon_sym_LT,
  [5473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(786), 1,
      anon_sym_EQ,
  [5480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(788), 1,
      anon_sym_SEMI,
  [5487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
  [5494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(792), 1,
      anon_sym_LBRACE,
  [5501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(794), 1,
      sym_identifier,
  [5508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(796), 1,
      anon_sym_SEMI,
  [5515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(798), 1,
      anon_sym_EQ,
  [5522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
  [5529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(802), 1,
      anon_sym_EQ,
  [5536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(804), 1,
      anon_sym_RBRACK,
  [5543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(806), 1,
      anon_sym_returns,
  [5550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(808), 1,
      anon_sym_SEMI,
  [5557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(810), 1,
      anon_sym_SEMI,
  [5564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(812), 1,
      anon_sym_LPAREN,
  [5571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_LPAREN,
  [5578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(816), 1,
      anon_sym_EQ,
  [5585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(818), 1,
      sym_identifier,
  [5592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(820), 1,
      anon_sym_LPAREN,
  [5599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(822), 1,
      anon_sym_SEMI,
  [5606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(824), 1,
      anon_sym_SEMI,
  [5613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(826), 1,
      ts_builtin_sym_end,
  [5620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(828), 1,
      anon_sym_EQ,
  [5627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(830), 1,
      anon_sym_SEMI,
  [5634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(832), 1,
      anon_sym_EQ,
  [5641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(834), 1,
      anon_sym_SEMI,
  [5648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(836), 1,
      anon_sym_SEMI,
  [5655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(838), 1,
      anon_sym_SEMI,
  [5662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(840), 1,
      anon_sym_SEMI,
  [5669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(842), 1,
      anon_sym_RBRACK,
  [5676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(844), 1,
      sym_identifier,
  [5683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(846), 1,
      anon_sym_EQ,
  [5690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(848), 1,
      anon_sym_EQ,
  [5697] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(850), 1,
      anon_sym_RBRACK,
  [5704] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(852), 1,
      sym_identifier,
  [5711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(854), 1,
      anon_sym_SEMI,
  [5718] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(856), 1,
      anon_sym_EQ,
  [5725] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(858), 1,
      anon_sym_EQ,
  [5732] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(860), 1,
      anon_sym_EQ,
  [5739] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(862), 1,
      anon_sym_SEMI,
  [5746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(864), 1,
      anon_sym_LBRACE,
  [5753] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(866), 1,
      sym_identifier,
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
  [SMALL_STATE(32)] = 1432,
  [SMALL_STATE(33)] = 1471,
  [SMALL_STATE(34)] = 1502,
  [SMALL_STATE(35)] = 1531,
  [SMALL_STATE(36)] = 1560,
  [SMALL_STATE(37)] = 1611,
  [SMALL_STATE(38)] = 1659,
  [SMALL_STATE(39)] = 1707,
  [SMALL_STATE(40)] = 1755,
  [SMALL_STATE(41)] = 1803,
  [SMALL_STATE(42)] = 1839,
  [SMALL_STATE(43)] = 1887,
  [SMALL_STATE(44)] = 1915,
  [SMALL_STATE(45)] = 1943,
  [SMALL_STATE(46)] = 1979,
  [SMALL_STATE(47)] = 2007,
  [SMALL_STATE(48)] = 2043,
  [SMALL_STATE(49)] = 2091,
  [SMALL_STATE(50)] = 2136,
  [SMALL_STATE(51)] = 2181,
  [SMALL_STATE(52)] = 2226,
  [SMALL_STATE(53)] = 2271,
  [SMALL_STATE(54)] = 2316,
  [SMALL_STATE(55)] = 2361,
  [SMALL_STATE(56)] = 2406,
  [SMALL_STATE(57)] = 2448,
  [SMALL_STATE(58)] = 2490,
  [SMALL_STATE(59)] = 2532,
  [SMALL_STATE(60)] = 2574,
  [SMALL_STATE(61)] = 2611,
  [SMALL_STATE(62)] = 2632,
  [SMALL_STATE(63)] = 2669,
  [SMALL_STATE(64)] = 2690,
  [SMALL_STATE(65)] = 2707,
  [SMALL_STATE(66)] = 2724,
  [SMALL_STATE(67)] = 2750,
  [SMALL_STATE(68)] = 2776,
  [SMALL_STATE(69)] = 2802,
  [SMALL_STATE(70)] = 2828,
  [SMALL_STATE(71)] = 2854,
  [SMALL_STATE(72)] = 2870,
  [SMALL_STATE(73)] = 2890,
  [SMALL_STATE(74)] = 2910,
  [SMALL_STATE(75)] = 2931,
  [SMALL_STATE(76)] = 2952,
  [SMALL_STATE(77)] = 2967,
  [SMALL_STATE(78)] = 2982,
  [SMALL_STATE(79)] = 2997,
  [SMALL_STATE(80)] = 3012,
  [SMALL_STATE(81)] = 3027,
  [SMALL_STATE(82)] = 3042,
  [SMALL_STATE(83)] = 3057,
  [SMALL_STATE(84)] = 3072,
  [SMALL_STATE(85)] = 3087,
  [SMALL_STATE(86)] = 3102,
  [SMALL_STATE(87)] = 3117,
  [SMALL_STATE(88)] = 3132,
  [SMALL_STATE(89)] = 3147,
  [SMALL_STATE(90)] = 3169,
  [SMALL_STATE(91)] = 3183,
  [SMALL_STATE(92)] = 3205,
  [SMALL_STATE(93)] = 3219,
  [SMALL_STATE(94)] = 3241,
  [SMALL_STATE(95)] = 3253,
  [SMALL_STATE(96)] = 3271,
  [SMALL_STATE(97)] = 3289,
  [SMALL_STATE(98)] = 3301,
  [SMALL_STATE(99)] = 3321,
  [SMALL_STATE(100)] = 3341,
  [SMALL_STATE(101)] = 3359,
  [SMALL_STATE(102)] = 3379,
  [SMALL_STATE(103)] = 3397,
  [SMALL_STATE(104)] = 3415,
  [SMALL_STATE(105)] = 3427,
  [SMALL_STATE(106)] = 3439,
  [SMALL_STATE(107)] = 3457,
  [SMALL_STATE(108)] = 3475,
  [SMALL_STATE(109)] = 3492,
  [SMALL_STATE(110)] = 3503,
  [SMALL_STATE(111)] = 3514,
  [SMALL_STATE(112)] = 3525,
  [SMALL_STATE(113)] = 3538,
  [SMALL_STATE(114)] = 3555,
  [SMALL_STATE(115)] = 3574,
  [SMALL_STATE(116)] = 3591,
  [SMALL_STATE(117)] = 3610,
  [SMALL_STATE(118)] = 3621,
  [SMALL_STATE(119)] = 3632,
  [SMALL_STATE(120)] = 3643,
  [SMALL_STATE(121)] = 3656,
  [SMALL_STATE(122)] = 3667,
  [SMALL_STATE(123)] = 3686,
  [SMALL_STATE(124)] = 3705,
  [SMALL_STATE(125)] = 3718,
  [SMALL_STATE(126)] = 3735,
  [SMALL_STATE(127)] = 3746,
  [SMALL_STATE(128)] = 3757,
  [SMALL_STATE(129)] = 3774,
  [SMALL_STATE(130)] = 3785,
  [SMALL_STATE(131)] = 3796,
  [SMALL_STATE(132)] = 3807,
  [SMALL_STATE(133)] = 3820,
  [SMALL_STATE(134)] = 3839,
  [SMALL_STATE(135)] = 3852,
  [SMALL_STATE(136)] = 3871,
  [SMALL_STATE(137)] = 3888,
  [SMALL_STATE(138)] = 3907,
  [SMALL_STATE(139)] = 3924,
  [SMALL_STATE(140)] = 3941,
  [SMALL_STATE(141)] = 3960,
  [SMALL_STATE(142)] = 3979,
  [SMALL_STATE(143)] = 3990,
  [SMALL_STATE(144)] = 4003,
  [SMALL_STATE(145)] = 4014,
  [SMALL_STATE(146)] = 4025,
  [SMALL_STATE(147)] = 4036,
  [SMALL_STATE(148)] = 4047,
  [SMALL_STATE(149)] = 4058,
  [SMALL_STATE(150)] = 4071,
  [SMALL_STATE(151)] = 4090,
  [SMALL_STATE(152)] = 4107,
  [SMALL_STATE(153)] = 4120,
  [SMALL_STATE(154)] = 4133,
  [SMALL_STATE(155)] = 4152,
  [SMALL_STATE(156)] = 4169,
  [SMALL_STATE(157)] = 4185,
  [SMALL_STATE(158)] = 4195,
  [SMALL_STATE(159)] = 4209,
  [SMALL_STATE(160)] = 4225,
  [SMALL_STATE(161)] = 4237,
  [SMALL_STATE(162)] = 4247,
  [SMALL_STATE(163)] = 4263,
  [SMALL_STATE(164)] = 4279,
  [SMALL_STATE(165)] = 4293,
  [SMALL_STATE(166)] = 4303,
  [SMALL_STATE(167)] = 4317,
  [SMALL_STATE(168)] = 4333,
  [SMALL_STATE(169)] = 4343,
  [SMALL_STATE(170)] = 4359,
  [SMALL_STATE(171)] = 4373,
  [SMALL_STATE(172)] = 4383,
  [SMALL_STATE(173)] = 4397,
  [SMALL_STATE(174)] = 4413,
  [SMALL_STATE(175)] = 4425,
  [SMALL_STATE(176)] = 4437,
  [SMALL_STATE(177)] = 4451,
  [SMALL_STATE(178)] = 4465,
  [SMALL_STATE(179)] = 4481,
  [SMALL_STATE(180)] = 4494,
  [SMALL_STATE(181)] = 4507,
  [SMALL_STATE(182)] = 4520,
  [SMALL_STATE(183)] = 4531,
  [SMALL_STATE(184)] = 4544,
  [SMALL_STATE(185)] = 4557,
  [SMALL_STATE(186)] = 4570,
  [SMALL_STATE(187)] = 4583,
  [SMALL_STATE(188)] = 4596,
  [SMALL_STATE(189)] = 4609,
  [SMALL_STATE(190)] = 4622,
  [SMALL_STATE(191)] = 4631,
  [SMALL_STATE(192)] = 4644,
  [SMALL_STATE(193)] = 4657,
  [SMALL_STATE(194)] = 4670,
  [SMALL_STATE(195)] = 4683,
  [SMALL_STATE(196)] = 4696,
  [SMALL_STATE(197)] = 4709,
  [SMALL_STATE(198)] = 4722,
  [SMALL_STATE(199)] = 4735,
  [SMALL_STATE(200)] = 4748,
  [SMALL_STATE(201)] = 4761,
  [SMALL_STATE(202)] = 4774,
  [SMALL_STATE(203)] = 4787,
  [SMALL_STATE(204)] = 4800,
  [SMALL_STATE(205)] = 4813,
  [SMALL_STATE(206)] = 4826,
  [SMALL_STATE(207)] = 4839,
  [SMALL_STATE(208)] = 4852,
  [SMALL_STATE(209)] = 4865,
  [SMALL_STATE(210)] = 4878,
  [SMALL_STATE(211)] = 4891,
  [SMALL_STATE(212)] = 4904,
  [SMALL_STATE(213)] = 4914,
  [SMALL_STATE(214)] = 4922,
  [SMALL_STATE(215)] = 4932,
  [SMALL_STATE(216)] = 4942,
  [SMALL_STATE(217)] = 4952,
  [SMALL_STATE(218)] = 4960,
  [SMALL_STATE(219)] = 4968,
  [SMALL_STATE(220)] = 4978,
  [SMALL_STATE(221)] = 4988,
  [SMALL_STATE(222)] = 4998,
  [SMALL_STATE(223)] = 5008,
  [SMALL_STATE(224)] = 5018,
  [SMALL_STATE(225)] = 5028,
  [SMALL_STATE(226)] = 5036,
  [SMALL_STATE(227)] = 5046,
  [SMALL_STATE(228)] = 5056,
  [SMALL_STATE(229)] = 5066,
  [SMALL_STATE(230)] = 5076,
  [SMALL_STATE(231)] = 5086,
  [SMALL_STATE(232)] = 5096,
  [SMALL_STATE(233)] = 5104,
  [SMALL_STATE(234)] = 5114,
  [SMALL_STATE(235)] = 5124,
  [SMALL_STATE(236)] = 5134,
  [SMALL_STATE(237)] = 5144,
  [SMALL_STATE(238)] = 5154,
  [SMALL_STATE(239)] = 5162,
  [SMALL_STATE(240)] = 5170,
  [SMALL_STATE(241)] = 5178,
  [SMALL_STATE(242)] = 5186,
  [SMALL_STATE(243)] = 5196,
  [SMALL_STATE(244)] = 5204,
  [SMALL_STATE(245)] = 5214,
  [SMALL_STATE(246)] = 5224,
  [SMALL_STATE(247)] = 5234,
  [SMALL_STATE(248)] = 5244,
  [SMALL_STATE(249)] = 5254,
  [SMALL_STATE(250)] = 5264,
  [SMALL_STATE(251)] = 5274,
  [SMALL_STATE(252)] = 5284,
  [SMALL_STATE(253)] = 5291,
  [SMALL_STATE(254)] = 5298,
  [SMALL_STATE(255)] = 5305,
  [SMALL_STATE(256)] = 5312,
  [SMALL_STATE(257)] = 5319,
  [SMALL_STATE(258)] = 5326,
  [SMALL_STATE(259)] = 5333,
  [SMALL_STATE(260)] = 5340,
  [SMALL_STATE(261)] = 5347,
  [SMALL_STATE(262)] = 5354,
  [SMALL_STATE(263)] = 5361,
  [SMALL_STATE(264)] = 5368,
  [SMALL_STATE(265)] = 5375,
  [SMALL_STATE(266)] = 5382,
  [SMALL_STATE(267)] = 5389,
  [SMALL_STATE(268)] = 5396,
  [SMALL_STATE(269)] = 5403,
  [SMALL_STATE(270)] = 5410,
  [SMALL_STATE(271)] = 5417,
  [SMALL_STATE(272)] = 5424,
  [SMALL_STATE(273)] = 5431,
  [SMALL_STATE(274)] = 5438,
  [SMALL_STATE(275)] = 5445,
  [SMALL_STATE(276)] = 5452,
  [SMALL_STATE(277)] = 5459,
  [SMALL_STATE(278)] = 5466,
  [SMALL_STATE(279)] = 5473,
  [SMALL_STATE(280)] = 5480,
  [SMALL_STATE(281)] = 5487,
  [SMALL_STATE(282)] = 5494,
  [SMALL_STATE(283)] = 5501,
  [SMALL_STATE(284)] = 5508,
  [SMALL_STATE(285)] = 5515,
  [SMALL_STATE(286)] = 5522,
  [SMALL_STATE(287)] = 5529,
  [SMALL_STATE(288)] = 5536,
  [SMALL_STATE(289)] = 5543,
  [SMALL_STATE(290)] = 5550,
  [SMALL_STATE(291)] = 5557,
  [SMALL_STATE(292)] = 5564,
  [SMALL_STATE(293)] = 5571,
  [SMALL_STATE(294)] = 5578,
  [SMALL_STATE(295)] = 5585,
  [SMALL_STATE(296)] = 5592,
  [SMALL_STATE(297)] = 5599,
  [SMALL_STATE(298)] = 5606,
  [SMALL_STATE(299)] = 5613,
  [SMALL_STATE(300)] = 5620,
  [SMALL_STATE(301)] = 5627,
  [SMALL_STATE(302)] = 5634,
  [SMALL_STATE(303)] = 5641,
  [SMALL_STATE(304)] = 5648,
  [SMALL_STATE(305)] = 5655,
  [SMALL_STATE(306)] = 5662,
  [SMALL_STATE(307)] = 5669,
  [SMALL_STATE(308)] = 5676,
  [SMALL_STATE(309)] = 5683,
  [SMALL_STATE(310)] = 5690,
  [SMALL_STATE(311)] = 5697,
  [SMALL_STATE(312)] = 5704,
  [SMALL_STATE(313)] = 5711,
  [SMALL_STATE(314)] = 5718,
  [SMALL_STATE(315)] = 5725,
  [SMALL_STATE(316)] = 5732,
  [SMALL_STATE(317)] = 5739,
  [SMALL_STATE(318)] = 5746,
  [SMALL_STATE(319)] = 5753,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(18),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(205),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(226),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(222),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_body_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(221),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(220),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(32),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(47),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(295),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(278),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(239),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(60),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(101),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_body_repeat1, 2), SHIFT_REPEAT(175),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 10),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 10),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 10),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 10),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 9),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 9),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 8),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 8),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 5),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 5),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extensions, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extensions, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_empty_statement, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_empty_statement, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_field, 13),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_map_field, 13),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reserved, 3),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reserved, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 7),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 7),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_body, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_body, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_body, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extend, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extend, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(43),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(209),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(226),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_oneof_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(239),
  [209] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_oneof_repeat1, 2), SHIFT_REPEAT(175),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int_lit, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_int_lit, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_number, 1),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_number, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [270] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [274] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_oneof_field, 7),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_oneof_field, 7),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [296] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [298] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [300] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [312] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [318] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(214),
  [321] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(202),
  [324] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(215),
  [327] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(219),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(223),
  [333] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(224),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__option_name_repeat1, 2), SHIFT_REPEAT(268),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(132),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(203),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(62),
  [366] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_enum_body_repeat1, 2), SHIFT_REPEAT(309),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(164),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 2), SHIFT_REPEAT(170),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 3, .production_id = 1),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 4, .production_id = 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_syntax, 4),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat3, 3),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(64),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(202),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_service_repeat1, 2), SHIFT_REPEAT(249),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__constant, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [426] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(64),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2), SHIFT_REPEAT(202),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_rpc_repeat1, 2),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_lit, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 7, .production_id = 17),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 6, .production_id = 13),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 6, .production_id = 15),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 7),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 7),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, .production_id = 12),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, .production_id = 11),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 2, .production_id = 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2), SHIFT_REPEAT(246),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 2), SHIFT_REPEAT(36),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, .production_id = 10),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 7, .production_id = 16),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 5, .production_id = 9),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 6, .production_id = 14),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 8),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 8),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 3, .production_id = 4),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 5),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 5),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 4, .production_id = 8),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 3, .production_id = 5),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 4, .production_id = 7),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 4, .production_id = 6),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_field, 8, .production_id = 18),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 9),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 9),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 4),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum_field, 4),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_lit_repeat1, 1),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 12),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(158),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 13),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 10),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2),
  [567] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2), SHIFT_REPEAT(166),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 11),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc, 14),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_or_enum_type, 1),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_field_repeat1, 2), SHIFT_REPEAT(53),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_field_repeat1, 2),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 2),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2), SHIFT_REPEAT(156),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_options_repeat1, 2),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_options, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_ranges_repeat1, 2), SHIFT_REPEAT(125),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_names, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 2),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ranges, 1),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 4),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2), SHIFT_REPEAT(169),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_field_repeat1, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_names_repeat1, 2), SHIFT_REPEAT(99),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__option_name, 3),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_value_option, 3),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [697] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2), SHIFT_REPEAT(271),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_option, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_name, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_type, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_service_name, 1),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_name, 1),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rpc_name, 1),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [826] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_or_enum_type_repeat1, 2),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
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
