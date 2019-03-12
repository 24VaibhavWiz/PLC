%{
    #include <unistd.h>
%}

%%

username    printf("%s\n", getlogin());

%%

int main()
{
  yylex();
}
