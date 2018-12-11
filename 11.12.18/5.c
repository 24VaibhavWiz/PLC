#include "stdio.h"
#include "stdlib.h" 
#include "string.h" 
struct person  
{ 
    int id; 
    char fname[20]; 
    char lname[20]; 
}; 
  
int main () 
{ 
    FILE *p; 
    p = fopen ("assin2.txt", "w"); 
    if (p == NULL) 
    { 
        fprintf(stderr, "\nError opend file\n"); 
        exit (0); 
    } 
  
    struct person input1 = {1, "abc", "def"}; 
    struct person input2 = {2, "qew", "srt"}; 
    fwrite (&input1, sizeof(struct person), 1, p); 
    fwrite (&input2, sizeof(struct person), 1, p); 
      
    if(fwrite != 0)  
        printf("contents to file written successfully\n"); 
    else 
        printf("error writing file !\n"); 
    fclose (p); 
  
} 