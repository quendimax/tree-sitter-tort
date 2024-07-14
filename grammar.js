module.exports = grammar({
  name: "tort",

  extras: $ => [$._ws, $.simple_comment],

  conflicts: $ => [
    [$.ortho_gap, $.ortho_choice]
  ],

  word: $ => $._token,

  rules: {
    source_file: $ => seq(
      repeat(seq(optional($._line), $._lf)),
      optional($._line)
    ),

    _line: $ => choice(
      $._statement,
      $.info_comment,
      seq($._statement, $.info_comment),
    ),

    _statement: $ => choice(
      $.stmt_plain,
      $.stmt_translation,
      // TODO: $.stmt_stress,
      $.stmt_complex
    ),

    stmt_plain: $ => $.text,

    stmt_translation: $ => seq(
      field('original', $.text),
      '->',
      field('translation', optional($.text))
    ),

    stmt_complex: $ => seq(
      repeat1(seq(
        optional($.text),
        $._orthogram
      )),
      optional($.text)
    ),

    text: $ => repeat1($._token),

    strict_text: $ => repeat1($._strict_token),

    _orthogram: $ => choice(
      $.ortho_gap,
      $.ortho_choice
    ),

    ortho_gap: $ => seq(
      '[',
      field('answer', optional($.strict_text)),
      optional(seq(':', field('comment', $.text))),
      ']'
    ),

    ortho_choice: $ => seq(
      '[',
      field('right_answer', optional($.strict_text)),
      repeat(seq(
        '|',
        field('wrong_answer', $.strict_text)
      )),
      ']'
    ),

    _token: $ => /([^ #\r\n\t\p{C}\p{Z}\[\]])+/,
    _strict_token: $ => /([^ #\r\n\t\p{C}\p{Z}\[\]|:])+/,

    info_comment: $ => /#![^\r\n]*/,
    simple_comment: $ => /#([^!\r\n][^\r\n]*)?/,

    _lf: $ => /\n|\r|\r\n/,

    _ws: $ => /[\t\p{Z}]+/
  },
});
