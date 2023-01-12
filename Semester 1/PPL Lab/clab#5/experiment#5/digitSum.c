#include <stdio.h>


int main() {
  int num,sum=0,temp,digit;
  printf("Please enter the number to check \n");
  scanf("%d",&num);
  temp=num;
  while(temp!=0){
      digit=temp%10;
      sum+=digit;
      temp/=10;
  }
printf("Sum of number %d is %d",num,sum);
}
