
#include <stdio.h>
#include <math.h>
void prime(int);

int main() {
    int num;
   printf("Please enter the number to check whether it is prime or not \n");
   scanf("%d",&num);
   prime(num);
  
    return 0;
}
void prime(int x){
    int sqr;
    int counter=0;
    sqr= sqrt(x);
    for(int i=2;i<=sqr+1;i++){
        if (x%i==0 && x!=i)
           counter=1;
    }
    if (counter==0){
        printf("%d is prime number",x);
    }
    else{
        printf("%d is not a prime number",x);
    }
    
}
