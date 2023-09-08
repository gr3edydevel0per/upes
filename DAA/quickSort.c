#include <stdio.h>
int partition(int arr[], int low, int high) {
    int p = arr[low]; 
    int i = low - 1;
    
    for (int j = low; j <= high; j++) {
        if (arr[j] <= p) {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    int temp = arr[i];
    arr[i] = arr[low];
    arr[low] = temp;
    
    return i;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}

void printarray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("enter the elements wich space in between\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("unsorted array: \n");
    printarray(arr, n);
    
    quicksort(arr, 0, n - 1);
    
    printf("sorted array: \n");
    printarray(arr, n);
    
    return 0;
}