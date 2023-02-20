#include <stdio.h>
#include <string.h>
 
int main()
{
    char string[1000];  

 
    printf("Please enter the string : ");
    gets(string);
    
     
    for(int i=0;string[i];i++)  
    {
        if(string[i]>=65 && string[i]<=90)
         string[i]+=32;
 	}
 

    printf("string in lowercase ='%s'\n",string);
 
    return 0;
}
