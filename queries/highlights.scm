[ "[" "]" ] @punctuation.bracket
[ "|" ":" ] @punctuation.delimiter
[ "->" ] @operator

(simple_comment) @comment
(info_comment) @comment.documentation

(ortho_gap
    answer: (strict_text) @constant.numeric
    comment: (text) @comment.documenation
)

(ortho_choice
    right_answer: (strict_text) @constant.numeric
    wrong_answer: (strict_text) @constant.character
)
