// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
void armstrong(int);
int factorial(int);
void coprime(int);

int main(){
    int num;
    printf("Please enter the number to perfrom operation \n");
    scanf("%d",&num);
    armstrong(num);
    printf("The factorial of %d is %d \n",num,factorial(num));
    coprime(num);
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
    
void coprime(int x){
      int hcf,rev_x=0,i;
      int temp=x;
          while (temp != 0){
        rev_x= rev_x * 10;
        rev_x = rev_x + temp%10;
        temp = temp/10;
    }
      for(i=1;i<=x;i++) {
	  if(x%i==0 && rev_x%i==0){
	   hcf = i; }
	 }
	 if(hcf == 1){
	  printf("%d and %d are CO-PRIME NUMBERS.", x, rev_x);
	 }
	 else{
	     printf("%d and %d are NOT CO-PRIME NUMBERS.", x, rev_x);
	 }
}
