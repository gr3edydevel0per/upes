// write a c program to find the execution time of bubble sort algorithm

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    clock_t start,end;
    start=clock();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    end=clock();
    printf("Sorted array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    double time_taken=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken by bubble sort algorithm is: %f\n",time_taken);
    return 0;

}
