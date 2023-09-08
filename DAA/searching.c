//program to search an element in an array using binary search
#include <stdio.h>
#include <time.h>
int main(){
    clock_t start, end;
    double cpu_time_used;
    
    int arr[100],n,i,num,first,last,middle;
    printf("Enter the array size : ");
    scanf("%d",&n);
    printf("Enter Array Elements : \n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter the number to be search : ");
    scanf("%d",&num);
    first=0;
    last=n-1;
    start = clock();
    middle=(first+last)/2;
    while(first<=last){
        if(arr[middle]<num)
            first=middle+1;
        else if(arr[middle]==num){
            printf("%d found at position %d\n",num,middle+1);
            break;
        }
        else
            last=middle-1;
        middle=(first+last)/2;
    }
        end = clock();
    if(first>last)
        printf("Not found! %d isn't present in the list.\n",num);

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f\n", cpu_time_used);
    return 0;

}
