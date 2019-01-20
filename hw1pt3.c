/*
09/13/2018 Square of Asterisks
Write a program that reads in the side of a square and then prints that square out of asterisks. 
Your program should work for squares of all side sizes between 1 and 20. 
*/

#include <stdio.h>

int hw1pt3() {
  int side = 0;
  int star = 0;
  int row = 0;
  printf("Enter the size of the hollow square: ");
  scanf("%d", &side);

  while (row < side) {
    star = 0;

    while (star < side) {
      if ( row == 0) {
      printf("*");
      } 
      else if (row == side - 1 ){
        printf("*");
      }
      else if (star == 0 ){
        printf("*");
      } 
      else if (star == side - 1 ){
        printf("*");
      } 
      else {
        printf(" ");
      }
      star++;
    }
    printf("\n");
    row++;
  }
}
