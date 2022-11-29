#include <stdio.h>

int main() {
    
  int arr[2][2], sum_row[2], sum_col[2];
 
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
       scanf("%d",&arr[i][j]);
    }
}

for(int a=0;a<2;a++){
    sum_row[a]=0;
    sum_col[a]=0;
}


  for(int j=0;j<2;j++){
    for(int k=0;k<2;k++){
        sum_row[j]+=arr[j][k];
    }
    printf("Sum of %d row is %d",j,sum_row[j]);
  }
 
}
