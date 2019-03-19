%{

#include"stdio.h"

int count=0;

%}

op [+-*/]

letter [a-zA-Z]

digitt [0-9]

id {letter}*|({letter}{digitt})+

notid ({digitt}{letter})+

%%

[\t\n]+

("int")|("float")|("char")|("case")|("default") | ("if")|("for")|("printf")|("scanf")	{printf("%s is a keyword\n", yytext);}

{id}	{printf("%s is an identifier\n", yytext); count++;}

{notid}	{printf("%s is not an identifier\n", yytext);}

%%

int main()

{

	FILE *fp;
	fp=fopen("example","r");
	yyin=fp;
	yylex();	
	printf("\n");
	printf("Total identifiers are: %d\n", count);

}
