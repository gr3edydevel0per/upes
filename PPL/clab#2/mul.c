 #include <stdio.h>

int main() {

 int num1 , num2,mul=0;
 printf("Please enter two numbers to perform multiplication \n");
 scanf("%d%d",&num1,&num2);
 while (num2!=0){
  mul+=num1;
 num2--;
}
printf("Multiplication of given numbers is %d \n",mul);



}
