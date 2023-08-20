// execution time for linear search

#include <stdio.h>
#include <time.h>


int main() {

    clock_t start, end;
    double cpu_time_used;

    start = clock();
    int arr[100], n, i, num, c = 0, pos;
    printf("Enter the array size : ");
    scanf("%d", &n);
    printf("Enter Array Elements : \n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the number to be search : ");
    scanf("%d", &num); 
    for (i = 0; i < n; i++) {
        if (arr[i] == num) {
            c = 1;
            pos = i + 1;
            break;
        }
    }
    if (c == 0)
        printf("Number not found..!!\n");
    else
        printf("%d found at position %d\n", num, pos);

    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f\n", cpu_time_used);

    return 0;
}