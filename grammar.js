module.exports = grammar({
  name: "micromanager",
  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($.item),
    item: $ => seq(
    	$.indentation,
		$.item_start,
		optional($.space),
    	optional($.item_tags),
    	optional($.item_content),
		$.new_line
	), 
    item_content: $ => prec(2, seq($.space, $.item_text)),
    item_tags: $ => choice(
    	prec.left(seq($.item_tags, $.space, $.item_tag)),
    	$.item_tag
	),
    item_tag: $ => choice(
    	prec(1, seq('#', $.identifier, ':', $.identifier)),
    	seq('#', $.identifier)
    ),
    item_start: $ => '-',
    identifier: $ => /\w+/,
    indentation: $ => /[\t\f\v ]*/,
    space: $ => /[\t\f\v ]+/,
    new_line: $ => prec(10, /\r?\n/),
    item_text: $ => /[^#\s][^\r\n]+/
  }
});