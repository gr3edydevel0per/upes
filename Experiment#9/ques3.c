#include <stdio.h>
#include <string.h>

// Define a union to store the details of a product purchased
union product {
    // Fields to store the product name, price per unit, and number of quantities
    char name[100];
    float pricePerUnit;
    int numberOfQuantities;

    // Calculate and store the amount spent on the product
    float amountSpent() {
        return pricePerUnit * numberOfQuantities;
    }
};

int main() {
    // Declare a union variable to store the details of a product
    union product p;

    // Declare a union pointer and initialize it to point to the union variable
    union product* pptr = &p;

    // Get the name, price per unit, and number of quantities of the product
    printf("Enter the name of the product: ");
    scanf("%s", pptr->name);
    printf("Enter the price per unit of the product: ");
    scanf("%f", &pptr->pricePerUnit);
    printf("Enter the number of quantities of the product: ");
    scanf("%d", &pptr->numberOfQuantities);

    // Calculate and store the amount spent on the product
    pptr->amountSpent();

    // Display all the details of the product
    printf("Product name: %s\n", pptr->name);
    printf("Price per unit: %.2f\n", pptr->pricePerUnit);
    printf("Number of quantities: %d\n", pptr->numberOfQuantities);
    printf("Amount spent: %.2f\n", pptr->amountSpent());

    return 0;
}
