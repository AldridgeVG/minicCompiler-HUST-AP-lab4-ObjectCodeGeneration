chcp 65001
win_flex lex.l
win_bison -d -v parser.y
gcc -o objcgen lex.yy.c parser.tab.c ast.c Analysis.c objectCodeGen.c
objcgen test2.c
pause