#include <stdio.h>
#include <string.h>

struct Product {
  char name[50];
  float pricePerUnit;
  int quantity;
  float amountSpent;
};

int main() {
  struct Product product,*productptr;

  // Get the name of the product
  printf("Enter the name of the product: ");
  scanf("%s", product.name);

  // Get the price per unit of the product
  printf("Enter the price per unit of the product: ");
  scanf("%f", &product.pricePerUnit);

  // Get the quantity of the product
  printf("Enter the quantity of the product: ");
  scanf("%d", &product.quantity);

  // Calculate the amount spent on the product
  product.amountSpent = product.pricePerUnit * product.quantity;

  productPtr = &product;

  printf("Product Name: %s\n", productPtr->name);
  printf("Price per unit: %.2f\n", productPtr->pricePerUnit);
  printf("Quantity: %d\n", productPtr->quantity);
  printf("Amount spent: %.2f\n", productPtr->amountSpent);

  return 0;
}
