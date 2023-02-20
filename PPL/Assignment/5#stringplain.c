#include <stdio.h>
#include <string.h>

int main(){
 char string[100];
 int counter=1;
 printf("Please enter the string to check\n");
 gets(string);


 for(int i=0;string[i]!='\0';i++){
     for(int j=strlen(string);j>=0;j--){
         if (string[i]==string[j])
          counter=0;
      else
         counter=1;
     }
 }
if(counter==0){
    printf("The given string is palindrome \n");
}
else {
    printf("The given string is not  a palindrome \n");
}

}
