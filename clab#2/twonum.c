#include <stdio.h>

int main(){
  int num1, num2,sum,mul,div,diff;
  printf("Please enter two numbers to perform operations \n");
  scanf("%d%d",&num1,&num2);
  sum=num1+num2;
  if (num1>num2){
   diff=num1-num2;}
  else{
  diff=num2-num1;}
  mul=num1*num2;
  div=num1/num2;
  printf("Given Numbers are %d,  %d \n",num1,num2);
printf("Result of Arithmatic Operations on given number \n");
printf("Sum %d \t Difference %d \n",sum,diff);
printf("Multiplication %d \t Divison %d \n",mul,div);













}
