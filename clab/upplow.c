#include <stdio.h>
int main() {

  char char1,char2;
  printf("Please enter the character in upper case \n");
  scanf("%c",&char1);
  char2=char1+32;
  printf("%c in lower case : %c",char1,char2);
  return 0;
}
