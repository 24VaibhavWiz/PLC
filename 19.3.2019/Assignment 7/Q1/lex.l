%{
	int ch=0,wd=0,l=0,sp=0;
%}

%%

(" ") {sp++;}

[\n] {l++;}

[^ \t \n]+ {wd++; ch=ch+yyleng;}

%%

main()
{
	yyin=fopen("example","r");
	yylex();
	printf("char=%d \t words=%d \t spaces=%d \t lines=%d",ch,wd,sp,l);
}

