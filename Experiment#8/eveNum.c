#include <stdio.h>
int main(){
 int arr[4][4];  //declaring the 2-D matrix
 int count=0 ;   //initializing count variable
 for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      scanf("%d",&arr[i][j])
    }
 }

  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++){
      if(arr[i][j]%2==0)
      count+=1;
    }
  }

  
  printf("Number of even numbers in the given 2-D Matrix is %d",count)


}
