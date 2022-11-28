#inlcude <stdio.h>

int binarySearch(int arr[], int target, int start , int end){
    int mid = (start+end)/2;
    if (arr[mid]==target)
        return mid
    else if (target>mid){
      start=mid+1;
      return binarySearch(arr[],target,start,end    
    }
    else if (target<mid){
      endd=mid-1;
      return binarySearch(arr[],target,start,end    
    }
    else{
     return -1
    }
}

int main() {
  int arr[10] = {12,34,54,65,78,95,100,123,329,500}
  a = binarySearch(arr,54,0,9)



}
