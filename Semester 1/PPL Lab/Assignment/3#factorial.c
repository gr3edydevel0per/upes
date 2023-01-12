#include <stdio.h>

int factorial(int);
int main() {
    int num;
    printf("Please enter number to find factorial \n");
 scanf("%d",&num);
 
  printf("The factorial of given number is %d",factorial(num));
  
}

int factorial(int x){
  if(x==0)
    return 1;
  else
  return x * factorial(x-1);

}
