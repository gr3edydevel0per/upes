#include <stdio.h>

int main() {
    
  int arr[3][3], sum_row[3], sum_col[3];
 
 // getting values of the matrix

  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
       scanf("%d",&arr[i][j]);
    }
}

// initializing sum array with 0

for(int a=0;a<3;a++){
    sum_row[a]=0;
    sum_col[a]=0;
}


// calculation sum

  for(int j=0;j<3;j++){
    for(int k=0;k<3;k++){
        sum_row[j]+=arr[j][k];
        sum_col[k]+=arr[j][k];
        
        
    }
  }
  
  // displaying sum
  for(int i=0;i<3;i++){
    printf("Sum of %d col is %d \t",i,sum_col[i]);
    printf("Sum of %d row is %d \n",i,sum_row[i]);
      
  }
}
