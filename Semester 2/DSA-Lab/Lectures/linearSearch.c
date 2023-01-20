#include <stdio.h>
#define N 3

int searchElement(int matrix[N][N], int target, int *rowAddr , int *colAddr){
    int counter=-1;
    for(int row=0;row<N;row++){
        for(int col=0;col<N;col++){
            if (matrix[row][col]==target){
                *rowAddr = row;
                *colAddr = col;
                counter=1;
                break;
            }
            }
           if (counter==1)
                break;
    }
  return (counter==-1)?-1:1;
}

int main() {
    int rowAddr , colAddr,target,result;
    printf("Enter ther element to find in the matrix \n");
    scanf("%d",&target);
	int mat[N][N] = { { 4, 5, 8 },
						{ 5, 6, 3 },
						{ 4, 1,9 }};

    result = searchElement(mat,target,&rowAddr,&colAddr);

    if (result== -1){
        printf("Element Not Found \n");
    }
    else{
     printf("Element found at %d row and  %d column",rowAddr+1,colAddr+1);
    }

    }