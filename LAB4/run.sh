#!/bin/bash

lex lexer.l
yacc -d parser.y -Wno
gcc -g y.tab.c lex.yy.c -ll

./a.out<test_input_1.c
./a.out<test_input_2.c


