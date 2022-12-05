#include <stdio.h>
#include <math.h>

int main() {
  int num,temp,digit;
  printf("Please enter the number to check \n");
  scanf("%d",&num);
  int sum=0,count=0;
  temp=num;
  while(temp!=0){
      digit=temp%10;
      count+=1;
      temp/=10;
  }
  temp=num;
  while(temp!=0){
      digit=temp%10;
      sum+=pow(digit,count);
      temp/=10;
  }
 
 if (sum==num){
     printf("%d is Armstrong Number",num);
 }
 else{
        printf("%d is not a Armstrong Number",num);
  
 }
}

    
    
