#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct subject {
    char name[100];
    char code[10];
    int credit_hours;
};

int main() {
    int n;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    // Allocate dynamic memory for 'n' subjects
    struct subject *s = (struct subject *)malloc(n * sizeof(struct subject));

    // Obtain details of subjects using a for loop
    for (int i = 0; i < n; i++) {
        printf("Enter the details of subject %d: \n", i+1);
        printf("Subject name: ");
        scanf("%s", s[i].name);
        printf("Subject code: ");
        scanf("%s", s[i].code);
        printf("Credit hours: ");
        scanf("%d", &s[i].credit_hours);
    }

    // Print the details of subjects
    printf("Subject details: \n");
    for (int i = 0; i < n; i++) {
        printf("Subject %d: \n", i+1);
        printf("Name: %s \n", s[i].name);
        printf("Code: %s \n", s[i].code);
        printf("Credit hours: %d \n", s[i].credit_hours);
    }

    return 0;
}
