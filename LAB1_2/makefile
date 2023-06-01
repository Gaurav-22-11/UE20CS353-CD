all:
	lex lexer.l
	yacc -d parser.y -Wno
	gcc -g y.tab.c lex.yy.c -ll

	./a.out<lab-1_test-2_invalid.c>output1.txt
