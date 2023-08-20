#include <stdio.h>
#include <time.h>

int findLeast(int arr[]){
  //find least in arr
    int least = arr[0];
    for(int i=1;i<10;i++){
        if(arr[i]<least){
            least=arr[i];
        }
    }
    return least;
}

int main(){
 clock_t start,end;
    double cpu_time_used;
    start=clock();
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    //selection sort
    for(int i=0;i<10;i++){
        int least=findLeast(arr+i);
        int temp=arr[i];
        arr[i]=least;
        arr[i+least]=temp;
    }
    end=clock();
    printf("Sorted array is: ");
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    cpu_time_used=((double)(end-start))/CLOCKS_PER_SEC;
    printf("Time taken by selection sort algorithm is: %f\n",cpu_time_used);
    return 0;

}