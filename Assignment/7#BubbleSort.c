
#include <stdio.h>

int main() {
    int temp;
    int arr[] = {2,5,6,3,4,10,9,20,30,43,45,29};
    int arr_len=sizeof(arr)/sizeof(arr[0]);
        int i, j;
    for (i = 0; i < arr_len - 1; i++)
        for (j = 0; j < arr_len - i - 1; j++){
        temp=arr[j];
            if (arr[j] > arr[j + 1]){
             arr[j]=arr[j+1];
             arr[j+1]=temp;}
}
        for(int j=0;j<=arr_len-1;j++){
          printf("\n%d",arr[j]);
}
    return 0;
}
