%{
	#include <stdio.h>
	int pos = 0, neg = 0, pos_fr = 0, neg_fr = 0;
%}

DIGIT   [0-9]

%%

\+?{DIGIT}+  {
    pos++;
}

-?{DIGIT}+ {
    neg++;
}

\+?{DIGIT}*\.{DIGIT}+ {
    pos_fr++;
}

-{DIGIT}*\.{DIGIT}+ {
    neg_fr++;
}

\n {
    printf("positive numbers = %d \n", pos);
    printf("negative numbers = %d \n", neg);
    printf("positive fractions = %d \n", pos_fr);
    printf("negative fractions = %d \n", neg_fr);
    exit(0);
}
