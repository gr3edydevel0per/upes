#include <stdio.h>
#include <math.h>

int main() {
  int num,temp,digit;
  printf("Please enter the number to check \n");
  scanf("%d",&num);
  printf("All Armstrong number upto %d \n : ",num);
  for (int j=1;j<=num;j++){
  int sum=0,count=0;
  temp=j;
  while(temp!=0){
      digit=temp%10;
      count+=1;
      temp/=10;
  }
  temp=j;
  while(temp!=0){
      digit=temp%10;
      sum+=pow(digit,count);
      temp/=10;
  }
 
 if (sum==j){
     printf("%d \n",j);
 }
}

    
    
    
}
