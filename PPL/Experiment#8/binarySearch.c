#include <stdio.h>

int binarySearch(int arr[], int target, int start , int end){
    int mid = start+(end-end)/2;
    if (arr[mid]==target){
        return mid;}
    else if (target>arr[mid]){
      return binarySearch(arr,target,mid+1,end);   
    }
    else if (target<arr[mid]){
      return binarySearch(arr,target,start,mid-1); 
    }
    else{
     return -1;
    }
}

int main() {
  int arr[] = {12,34,54,65,78,95,100,123,329,500,969};
  int a;
  int n= sizeof(arr)/sizeof(arr[0]);
  a = binarySearch(arr,95,0,n-1);
  printf("%d",a);
}
