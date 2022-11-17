

#include <stdio.h>

int sumArraay(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return (sumArraay(arr, n - 1) + arr[n - 1]);
}
 

int main()
{
     int sum;
     int arr[] = { 1, 2, 3, 4, 5 };
     int n = sizeof(arr) / sizeof(arr[0]);   
     sum= sumArraay(arr, n);
     printf("Sum of elements are %d",sum);
     return 0;
}

