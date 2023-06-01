%{
//SRN:PES1UG20CS150
#include<stdio.h>
#include "y.tab.h"
void yyerror(char *s);
int yylineno;
%}

letter [a-zA-Z_]
digit [0-9]
sign [+-]?
fraction  (\.{digit}+)?
exp ([Ee][+-]{digit}+)?
number {sign}?{digit}+{fraction}{exp}
id {letter}({letter}|{digit})*

%x state
%%
^("//").*     ;
\/\* {yymore(); BEGIN state;}
<state>[' '|\t] {yymore(); BEGIN state;}
<state>[\n] {yymore(); ++yylineno; BEGIN state;}
<state>[^\*] {yymore(); BEGIN state;}
<state>"*"[^/] {yymore(); BEGIN state;}
<state>"*"\/ BEGIN 0 ;

main return T_MAIN; 
int return T_INT; 
char return T_CHAR; 
float return T_FLOAT; 
double return T_DOUBLE; 
for return T_FOR; 
while return T_WHILE; 
if return T_IF; 
else return T_ELSE; 
#include return T_INCLUDE; 
{id} return T_ID; 
"+" return *yytext; 
"-" return *yytext; 
{number} return T_NUM; 
{id}\.h return T_HEADER; 

"++" return T_INC; 
"--" return T_DEC; 

">=" return T_GREATEREQ; 
"<=" return T_LESSEREQ; 

"==" return T_EQCOMP; 
"!=" return T_NOTEQUAL; 

"&&" return T_ANDAND; 
"||" return T_OROR; 

\r ;
\t ;
[' '] ;
\n { ++yylineno; }; 
. return *yytext; 

%%
