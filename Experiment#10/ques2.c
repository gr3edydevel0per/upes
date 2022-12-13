#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NumBlock{
    int num1;
    int num2;
    struct NumBlock* next;
    
};

int main()
{
    struct NumBlock Block1,Block2;
    char big_num[] = "123456789012345678901234567890"; 
    int num_subs = strlen(big_num) / 5;
    int substrings[num_subs];
    int *substring;
    substring = (int*)malloc(num_subs*sizeof(int));
    
    for (int i = 0; i < num_subs; i++) {
        char substring[6]; 
        memcpy(substring, big_num + (i * 5), 5);
        substring[5] = '\0';
        substrings[i] = atoi(substring);
    }

  //initializing fist block
  Block1.next=NULL;
  Block1.num1=substrings[0];
  Block1.num2=substrings[1];
  Block1.next = &Block2;
  Block2.num1=substrings[2];
  Block2.num2=substrings[3];

 printf("%d%d%d%d",Block1.num1,Block1.num2,Block1.next->num1,Block1.next->num2);
    return 0;
}
