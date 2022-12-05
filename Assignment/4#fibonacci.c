#include <stdio.h>

int fibonacci(int);

int main() {

  int num;
  printf("Enter nth number to print series \n");
  scanf("%d",&num);
  printf("Fibonacci series upto %d term\n",num);
  for(int i=1;i<=num;i++)
     printf("%d \n",fibonacci(i));
  


}

int fibonacci(int x){
  if (x<=2)
   return 1;
  else
    return fibonacci(x-1)+fibonacci(x-2);
      
  }
