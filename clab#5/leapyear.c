#include <stdio.h>

int main(){
 int year;
  printf("Please enter the year to check : ")
 scanf("%d",&year);
 if (year%4==0){
    if (year%100 !=0){
      printf("\nGiven year is a leap year)
    }
    else if (year%100==0){
     if (year%400==0){
       printf("\nGiven year is a leap year")
     }
     else{
     printf("\nGiven year is not a leap year")
     }
    }
 else{
  printf("\nGiven year is not a leap year")  
 }
}
