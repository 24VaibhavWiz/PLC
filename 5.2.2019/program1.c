#include"stdio.h"
#include"stdlib.h"

int main()
  {
    int i = 0, line = 5,k;
    char ch[4];
    size_t n = sizeof(ch)/sizeof(ch[0]);
    int count1 = 0;
    int count2 = 0;
    int flag = 0;
    FILE *myfile;
    myfile = fopen("test.txt","r");
    if (myfile== NULL)
    {
        printf("can not open file \n");
        return 1;
    }

    while(line--)
    {
        fscanf(myfile,"%s",&ch[i]);
        i++;
        //printf("\n%s", &ch[i]);
    }
   
    for(k = 0; k<n; k++)
    {
    	if(((ch[k] == 0) || (ch[k] == 1)))
    	{
    		printf("\nno\n");
        }
        
        if(((ch[k] != 0) && (ch[k] != 1)))
        {   
           printf("\nyes\n");
        }
    }
    
    /*if((flag == 0) && ((count1 % 2 == 0)&&(count2 % 2 == 0)) || ((count1 % 2 != 0)&&(count2 % 2 != 0)) || ((count1 % 2 == 0)&&(count2 % 2 != 0)) || ((count1 % 2 != 0)&&(count2 % 2 == 0)))
        printf("\nString is Accepted\n");
    else if(flag != 0)
        printf("\nString is not Accepted\n");
        */
    fclose(myfile);
}
/*
	if((ch[i] != 0) || (ch[i] != 1))
        {	
        	flag = 1;
        }
    }
   // if(((count1 % 2 == 0)&&(count2 % 2 == 0)) || ((count1 % 2 != 0)&&(count2 % 2 != 0)) || ((count1 % 2 == 0)&&(count2 % 2 != 0)) || ((count1 % 2 != 0)&&(count2 % 2 == 0)) && (flag == 0))
        if(flag != 0)
        	printf("\nString is not Accepted\n");
    else
        printf("\nString is Accepted\n");
        
    fclose(myfile);
}
*/
