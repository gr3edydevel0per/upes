#include <stdio.h>
int main(){
 int num1 , num2,num3,max;
 printf("Please enter three numbers to compare \n");
 scanf("%d%d%d",&num1,&num2,&num3);
 max=num1;
 if (max>num2){
    if (max>num3){
   printf("Biggest among above given three is %d \n",max);}
 }
else{
   max=num2;
   if (max>num3){
   printf("Biggest among above given three is %d \n",max);}
  else{
   max=num3;
printf("Biggest among above given three is %d \n",max);}
}






















}
