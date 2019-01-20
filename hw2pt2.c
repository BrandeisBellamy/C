#include <stdio.h>

/*
Name: Brandeis Bellamy
Homework: 2B
Purpose: Write a program that computes factorial for a desired number repeatedly until -1 is entered. 
*/

int main(void) {
  int number = 0;
  int count = 1;
  int factorial = 1;
  int increase = 1;

  printf("Please enter number between 1 and 10 for factorial calculation (-1 to end): ");
  scanf("%d", &number);

  while(number != -1){
    count = number;

    while (count > 0){
      factorial *= count;
      count--;
    }

    printf("\nfactorial for %d is %d", number, factorial);
    factorial = 1;

    printf("\n\nPlease enter number between 1 and 10 for factorial calculation (-1 to end): ");
    scanf("%d", &number);
  }

  return 0;
}
