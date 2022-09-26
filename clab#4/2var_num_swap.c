#include <stdio.h>
int main(){
  int num1,num2;
  printf("Please enter the numebrs to swap \n");
  scanf("%d%d",&num1,&num2);
  printf("Numbers before swapping num1:%d ; num2:%d \n",num1,num2);
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
  printf("Numbers after swapping num1:%d ; num2:%d \n",num1,num2);



}