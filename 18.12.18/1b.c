#include "stdio.h"

int main (void)
{
    int n,i,a,V[i],ch,aux;
    FILE *f1, *f2;

    f1 = fopen("source.txt", "r");
    f2 = fopen("target.txt", "w"); 

    char line[1024];
    n = 0;
    while( fgets(line,sizeof(line),f1) != NULL)
       n++; 

    for (i=0; i<n; i++)
        fscanf(f1,"%d", &V[i]);
	
    fseek(f1, 0, SEEK_SET);

    do {
        ch=0;
        for (i=0; i<n-1; i++)
            if (V[i]>V[i+1])
            {
                aux=V[i]; V[i]=V[i+1]; V[i+1]=aux; ch=1;
            }
    } while (ch); 

    for (i=0; i<n; i++)
        fprintf(f2, "%d\n", V[i]); 
    fclose(f1);
    fclose(f2);

}
