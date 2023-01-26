

#include <stdio.h>

void swapNumByvalue(int x , int y){
       x = x ^ y;
       y = x ^ y;
       x = x ^ y;
}

void swapNumByref(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}


int main(){
   int num1=2,num2=3,num3=4,num4=17;
   // Call by value
   printf("Swapping of Numbers using call by value \n");
      swapNumByvalue(num1,num2);
   printf("num1 = %d\t num2 = %d",num1,num2);
  printf("\n+++++++++++++++++++++++++++++++++++++++\n");
  // call by reference
   printf("Swapping of Numbers using call by reference \n");
   swapNumByref(&num3,&num4);
   printf("num3 = %d\t num4 = %d",num3,num4);


}


