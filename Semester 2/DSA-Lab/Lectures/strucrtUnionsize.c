#include <stdio.h>

struct Product {
  char name[50];
  float pricePerUnit;
  int quantity;
  float amountSpent;
};

union product {
  char name[50];
  float pricePerUnit;
  int quantity;
  float amountSpent;
} ;


int main(){
  struct Product p1;
  union product p2;
  printf("%lu\n",sizeof(p1));
  printf("%lu\n",sizeof(p2));


}