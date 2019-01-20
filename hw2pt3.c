#include <stdio.h>

/*
Name: Brandeis Bellamy
Homework: 2C
Purpose: Write a program that writes a series of pairs of numbers with product number and quantity sold.
*/

int main(void) {

  int product = 0;
  int product1 = 0;
  int product2 = 0;
  int product3 = 0;
  int product4 = 0;
  int product5 = 0;
  int quantity = 0;
  int quantity1 = 0;
  int quantity2 = 0;
  int quantity3 = 0;
  int quantity4 = 0;
  int quantity5 = 0;
  float sales = 0.00;
  float sales1 = 0.00;
  float sales2 = 0.00;
  float sales3 = 0.00;
  float sales4 = 0.00;
  float sales5 = 0.00;
  float total = 0;

  printf("Please enter the product number between 1 and 5.  -1 to end : ");
  scanf("%d", &product);

  while(product != -1){
    printf("Please enter quantity sold: ");
    scanf("%d", &quantity);

    switch(product){
      case 1:
        sales = (float) 2.98 * quantity;
        product1 = product;
        break;

      case 2:
        sales = (float) 4.50 * quantity;
        product2 = product;
        break;

      case 3:
        sales = (float) 9.98 * quantity;
        product3 = product;
        break;

      case 4:
        sales = (float) 4.49 * quantity;
        product4 = product;
        break;

      case 5:
        sales = (float) 6.87 * quantity;
        product5 = product;
        break;
    }

    if(product == 1){
      sales1 += sales;
      quantity1 += quantity;
    }
    else if(product == 2){
      sales2 += sales;
      quantity2 += quantity;
    } 
    else if(product == 3){
      sales3 += sales;
      quantity3 += quantity;
    } 
    else if(product == 4){
      sales4 += sales;
      quantity4 += quantity;
    } 
    else if(product == 5){
      sales5 += sales;
      quantity5 += quantity;
    }

    printf("Please enter the product number between 1 and 5.  -1 to end : ");
    scanf("%d", &product);
  }

  total = sales1 + sales2 + sales3 + sales4 + sales5;
  printf("\nProduct \tQty \tSales");
  printf("\nProduct %d: \t%d \t%.2f", product1, quantity1, sales1);
  printf("\nProduct %d: \t%d \t%.2f", product2, quantity2, sales2);
  printf("\nProduct %d: \t%d \t%.2f", product3, quantity3, sales3);
  printf("\nProduct %d: \t%d \t%.2f", product4, quantity4, sales4);
  printf("\nProduct %d: \t%d \t%.2f", product5, quantity5, sales5);
  printf("\n\nTotal : %.2f", total);

  return 0;
}
