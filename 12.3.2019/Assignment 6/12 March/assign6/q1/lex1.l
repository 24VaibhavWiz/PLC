%{
	#include<stdio.h>
	int v=0,c=0;
%}

	
v	[aeiouAEIOU]

%%

{v}  {printf("\n %c is a vowel",yytext[0]); v++;}
[a-zA-Z] {printf("\n %c is a consonent",yytext[0]); c++;}
\n  {printf("\n %d vowels && %d consonent",v,c); exit(0);}

