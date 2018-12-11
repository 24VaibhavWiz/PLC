#include "stdio.h"
#include "stdlib.h"
 
int main()
{
   char ch, src_file[20], tar_file[20];
   FILE *src, *tar;
 
   printf("Enter name of file to copy\n");
   gets(src_file);
 
   src = fopen(src_file, "r");
 
   if( src == NULL )
   {
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }
 
   printf("Enter name of target file\n");
   gets(tar_file);
 
   tar = fopen(tar_file, "w");
 
   if( tar == NULL )
   {
      fclose(src);
      printf("Press any key to exit...\n");
      exit(EXIT_FAILURE);
   }
 
   while( ( ch = getc(src) ) != EOF )
      putc(ch, tar);
 
   printf("File copied successfully.\n");
   fclose(src);
   fclose(tar);
 
}
