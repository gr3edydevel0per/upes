#include <stdio.h>
int main(){
  int num1,num2,temp;
  printf("Please enter the numbers to swap \n");
  scanf("%d%d",&num1,&num2);
  printf("Numbers brfore swapping num1:%d ; num2:%d \n",num1,num2);
  temp=num1;
  num1=num2;
  num2=temp;
  printf("Numbers after swapping num1:%d ; num2:%d \n",num1,num2);
  



}
