#include <stdio.h>

void main(){

    int even=0,odd=0, arr_len;

    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};   

    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
      if (arr[i][j]&1==1){
          odd+=1;}
      else{
      even+=1;}}
    }

    printf("Number of even numbers in arrays is %d",even);
    
    printf("\nNumber of odd numbers in array is %d",odd);
}