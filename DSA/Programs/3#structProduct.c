#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
  char name[50];
  float pricePerUnit;
  int quantity;
  float amountSpent;
};
int main() {
    int n;
    printf("Enter the number of products: ");
    scanf("%d", &n);

    // Allocate dynamic memory for 'n' products
    struct Product *product = (struct Product *)malloc(n * sizeof(struct Product));
    // Obtain details of products using a for loop
    for (int i = 0; i < n; i++) {
            printf("Please enter the details of %d products \n:",i+1);
            // Get the name of the product
            printf("Enter the name of the product: ");
            scanf("%s", product[i].name);

            // Get the price per unit of the product
            printf("Enter the price per unit of the product: ");
            scanf("%f", &product[i].pricePerUnit);

            // Get the quantity of the product
            printf("Enter the quantity of the product: ");
            scanf("%d", &product[i].quantity);
            product[i].amountSpent = product[i].pricePerUnit * product[i].quantity;
    }

printf("\n+++++++++++++++++++++++++++++++++++\n");
    // Print the details of products
    printf("product details: \n");
    for (int i = 0; i < n; i++) {
        printf("product %d: \n", i+1);
            printf("Product Name: %s\n", product[i].name);
            printf("Price per unit: %.2f\n", product[i].pricePerUnit);
            printf("Quantity: %d\n", product[i].quantity);
            printf("Amount spent: %.2f\n", product[i].amountSpent);
    }

    return 0;
}
