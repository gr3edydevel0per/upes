// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void armstrong(int);
int factorial(int);

int main(){
    int num;
    printf("Please enter the number to perfrom operation \n");
    scanf("%d",&num);
    armstrong(num);
    printf("The factorial of %d is %d \n",num,factorial(num));
    return 0;
}

void armstrong(int x){
   int sum=0,count=0,temp,digit;
  temp=x;
  while(temp!=0){
      digit=temp%10;
      count+=1;
      temp/=10;
  }
  temp=x;
  while(temp!=0){
      digit=temp%10;
      sum+=pow(digit,count);
      temp/=10;
  }
 
 if (sum==x){
     printf("%d is an armstrong number\n",x);
 }   
 else{
          printf("%d is not an armstrong number\n",x);
 }
}


int factorial(int x){
    if (x==0){
        return 1;
    }
    else{
        return x * factorial(x-1);
    }}
