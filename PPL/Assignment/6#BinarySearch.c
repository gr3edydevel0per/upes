#include <stdio.h>

int binarySearch(int arr[], int start, int end, int x)
{
    if (end >= start) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, start, mid - 1, x);
 
        return binarySearch(arr, mid + 1, end, x);
    }
    return -1;
}
 
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 ,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    if (result!=-1)
        printf("Element is present at index %d", result);
    else
        printf("Element is not present in the list");
    return 0;
}
