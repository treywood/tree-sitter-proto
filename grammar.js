const
  letter = /[a-zA-Z]/,
  decimal_digit = /[0-9]/,
  octal_digit = /[0-7]/,
  hex_digit = /[0-9A-Fa-f]/

function array_of(content) {
  return seq(
    '[',
    optional(seq(content, repeat(seq(',', content)))),
    ']',
  );
}

module.exports = grammar({
  name: 'proto',

  extras: $ => [$.comment, /\s/],

  rules: {
    // proto = syntax { import | package | option | topLevelDef | emptyStatement }
    // topLevelDef = message | enum | service
    source_file: $ => seq(
      optional(choice($.syntax, $.edition)),
      optional(repeat(choice(
        $.import,
        $.package,
        $.option,
        $.enum,
        $.message,
        $.extend,
        $.service,
        $.empty_statement,
      ))),
    ),

    empty_statement: _ => ';',

    // syntax = "syntax" "=" quote "proto3" quote ";"
    syntax: _ => seq('syntax', '=', choice('"proto3"', '"proto2"'), ';'),

    edition: $ => seq('edition', '=', field('year', $.string), ';'),

    // import = "import" [ "weak" | "public" ] strLit ";"
    import: $ => seq(
      'import',
      optional(choice('weak', 'public')),
      field('path', $.string),
      ';',
    ),

    // package = "package" fullIdent ";"
    package: $ => seq(
      'package',
      $.full_ident,
      ';',
    ),

    // option = "option" optionName  "=" constant ";"
    // optionName = ( ident | "(" fullIdent ")" ) { "." ident }
    option: $ => seq(
      'option',
      field('name', $.option_name),
      '=',
      field('value', $._constant),
      ';',
    ),

    option_name: $ => choice(
      $.identifier,
      seq(
        seq('(', $.full_ident, ')'),
        repeat(seq('.', $.identifier)),
      ),
    ),

    // enum = "enum" enumName enumBody
    // enumBody = "{" { option | enumField | emptyStatement } "}"
    // enumField = ident "=" [ "-" ] intLit [ "[" enumValueOption { ","  enumValueOption } "]" ]";"
    // enumValueOption = optionName "=" constant
    enum: $ => seq(
      'enum',
      $.enum_name,
      $.enum_body,
    ),

    enum_name: $ => $.identifier,

    enum_body: $ => seq(
      '{',
      repeat(choice(
        $.option,
        $.enum_field,
        $.empty_statement,
        $.reserved,
      )),
      '}',
    ),

    enum_field: $ => seq(
      $.enum_variant_name,
      '=',
      $.field_number,
      optional(seq('[', $.field_options,']')),
      ';',
    ),

    // message = "message" messageName messageBody
    // messageBody = "{" { field | enum | message | option | oneof | mapField | reserved | emptyStatement } "}"
    message: $ => seq(
      'message',
      $.message_name,
      $.message_body,
    ),

    message_body: $ => seq(
      '{',
      repeat(choice(
        $.field,
        $.enum,
        $.message,
        $.option,
        $.oneof,
        $.map_field,
        $.reserved,
        $.extensions,
        $.extend,
        $.empty_statement,
      )),
      '}',
    ),

    message_name: $ => $.identifier,
    field_name: $ => $.identifier,

    extend: $ => seq(
      'extend',
      $.full_ident,
      $.message_body,
    ),

    // field = [ "repeated" ] type fieldName "=" fieldNumber [ "[" fieldOptions "]" ] ";"
    // fieldOptions = fieldOption { ","  fieldOption }
    // fieldOption = optionName "=" constant
    field: $ => seq(
      // This isn't allowed according to the spec and yet the proto3 compiler
      // accepts it so we put it here for parsing.
      optional(choice('optional', 'required')),

      optional('repeated'),
      $.type,
      $.field_name,
      '=',
      $.field_number,
      optional(seq('[', $.field_options, ']')),
      ';',
    ),

    field_options: $ => seq(
      $.field_option,
      repeat(seq(',', $.field_option)),
    ),

    field_option: $ => seq(
      field('name', $.option_name),
      '=',
      field('value', $._constant),
    ),

    // oneof = "oneof" oneofName "{" { option | oneofField | emptyStatement } "}"
    // oneofField = type fieldName "=" fieldNumber [ "[" fieldOptions "]" ] ";"
    oneof: $ => seq(
      'oneof',
      $.identifier,
      $.oneof_body
    ),

    oneof_body: $ => seq(
      '{',
      repeat(choice(
        $.option,
        $.oneof_field,
        $.empty_statement,
      )),
      '}',
    ),

    oneof_field: $ => seq(
      $.type,
      $.field_name,
      '=',
      $.field_number,
      optional(seq('[', $.field_options, ']')),
    ),

    // mapField = "map" "<" keyType "," type ">" mapName "=" fieldNumber [ "[" fieldOptions "]" ] ";"
    // keyType = "int32" | "int64" | "uint32" | "uint64" | "sint32" | "sint64" |
    //        "fixed32" | "fixed64" | "sfixed32" | "sfixed64" | "bool" | "string"
    map_field: $ => seq(
      'map',
      '<',
      $.key_type,
      ',',
      $.type,
      '>',
      $.field_name,
      '=',
      $.field_number,
      optional(seq('[', $.field_options, ']')),
      ';',
    ),

    key_type: _ => choice(
      'int32',
      'int64',
      'uint32',
      'uint64',
      'sint32',
      'sint64',
      'fixed32',
      'fixed64',
      'sfixed32',
      'sfixed64',
      'bool',
      'string',
    ),

    // type = "double" | "float" | "int32" | "int64" | "uint32" | "uint64"
    //    | "sint32" | "sint64" | "fixed32" | "fixed64" | "sfixed32" | "sfixed64"
    //    | "bool" | "string" | "bytes" | messageType | enumType
    type: $ => choice(
      'double',
      'float',
      'int32',
      'int64',
      'uint32',
      'uint64',
      'sint32',
      'sint64',
      'fixed32',
      'fixed64',
      'sfixed32',
      'sfixed64',
      'bool',
      'string',
      'bytes',
      $.message_or_enum_type,
    ),

    // reserved = "reserved" ( ranges | fieldNames ) ";"
    // ranges = range { "," range }
    // range =  intLit [ "to" ( intLit | "max" ) ]
    // fieldNames = fieldName { "," fieldName }
    reserved: $ => seq(
      'reserved',
      choice($.ranges, $.field_names),
      ';',
    ),

    extensions: $ => seq(
      'extensions',
      $.ranges,
      ';',
    ),

    ranges: $ => seq($.range, repeat(seq(',', $.range))),

    range: $ => seq(
      $.int_lit,
      optional(seq(
        'to',
        choice($.int_lit, 'max'),
      )),
    ),

    field_names: $ => seq(
      $._identifier_or_string,
      repeat(seq(',', $._identifier_or_string)),
    ),

    // messageType = [ "." ] { ident "." } messageName
    message_or_enum_type: $ => seq(
      optional('.'),
      repeat(seq(
        $.identifier,
        '.',
      )),
      $.identifier,
    ),

    // fieldNumber = intLit;
    field_number: $ => $.int_lit,

    // service = "service" serviceName "{" { option | rpc | emptyStatement } "}"
    // rpc = "rpc" rpcName "(" [ "stream" ] messageType ")" "returns" "(" [ "stream" ]
    //          messageType ")" (( "{" {option | emptyStatement } "}" ) | ";")
    service: $ => seq(
      'service',
      $.service_name,
      $.service_body,
    ),

    service_body: $ => seq(
      '{',
      repeat(choice(
        $.option,
        $.rpc,
        $.empty_statement,
      )),
      '}',
    ),

    service_name: $ => $.identifier,

    rpc: $ => seq(
      'rpc',
      $.rpc_name,
      '(',
      optional('stream'),
      $.message_or_enum_type,
      ')',
      'returns',
      '(',
      optional('stream'),
      $.message_or_enum_type,
      ')',
      $.rpc_body
    ),

    rpc_body: $ => choice(
      seq(
        '{',
        repeat(choice(
          $.option,
          $.empty_statement,
        )),
        '}',
      ),
      ';',
    ),

    rpc_name: $ => $.identifier,
    enum_variant_name: $ => $.identifier,

    // constant = fullIdent | ( [ "-" | "+" ] intLit ) | ( [ "-" | "+" ] floatLit ) | strLit | boolLit
    _constant: $ => choice(
      $.full_ident,
      seq(
        optional(choice('-', '+')),
        $.int_lit,
      ),
      seq(
        optional(choice('-', '+')),
        $.float_lit,
      ),
      $.string,
      $.bool,

      // block_lit is not specified but is used in the real world
      // (i.e. grpc-gateway) so we define it
      $.block_lit,
    ),

    // block_lit is completely unspecified. I determined what is allowed
    // based on the "a bit of everything" grpc-gateway example which has
    // wildly inconsistent syntax and yet it actually parses and compiles
    // with protoc.
    block_lit: $ => seq(
      '{',
      repeat(
        seq($.block_field, optional(choice(',', ';')))
      ),
      '}',
    ),

    block_field: $ => seq(
      field('key', choice($.field_name, seq('[', $.full_ident, ']'))),
      optional(':'),
      field('value', choice($._constant, array_of($._constant)))
    ),

    // ident = letter { letter | decimalDigit | "_" }
    identifier: _ => token(seq(
      choice(letter, '_'),
      repeat(choice(letter, decimal_digit, '_')),
    )),

    _identifier_or_string: $ => choice($.identifier, $.string),

    // fullIdent = ident { "." ident }
    full_ident: $ => seq(
      $.identifier,
      repeat(seq('.', $.identifier)),
    ),

    // boolLit = "true" | "false"
    bool: $ => choice($.true, $.false),
    true: _ => 'true',
    false: _ => 'false',

    // intLit     = decimalLit | octalLit | hexLit
    int_lit: $ => choice(
      $.decimal_lit,
      $.octal_lit,
      $.hex_lit,
    ),

    // decimalLit = ( "1" … "9" ) { decimalDigit }
    decimal_lit: _ => token(seq(
      /[1-9]/,
      repeat(decimal_digit),
    )),

    // octalLit   = "0" { octalDigit }
    octal_lit: _ => token(seq(
      '0',
      repeat(octal_digit),
    )),

    // hexLit     = "0" ( "x" | "X" ) hexDigit { hexDigit }
    hex_lit: _ => token(seq(
      '0',
      choice('x', 'X'),
      repeat1(hex_digit),
    )),

    // floatLit = ( decimals "." [ decimals ] [ exponent ] | decimals exponent | "."decimals [ exponent ] ) | "inf" | "nan"
    // decimals  = decimalDigit { decimalDigit }
    // exponent  = ( "e" | "E" ) [ "+" | "-" ] decimals
    float_lit: _ => {
      const decimals = repeat1(decimal_digit);
      const exponent = seq(
        choice('e', 'E'),
        optional(choice('+', '-')),
        decimals,
      );

      return token(
        choice(
          seq(decimals, '.', optional(decimals), optional(exponent)),
          seq(decimals, exponent),
          seq('.', decimals, optional(exponent)),
          'inf',
          'nan',
        )
      );
    },

    string: $ => {
      function str(delimiter) {
        const pattern = new RegExp(`[^${delimiter}\\\\]+`);
        return seq(
          delimiter,
          repeat(choice(
            token.immediate(prec(1, pattern)),
            $.escape_sequence
          )),
          delimiter,
        );
      }

      return repeat1(choice(str("'"), str('"')));
    },

    escape_sequence: _ => token.immediate(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    )),

    comment: _ => token(choice(
      seq('//', /.*/),
      seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')
    ))
  }
});
