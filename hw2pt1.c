#include <stdio.h>

/*
Name: Brandeis Bellamy
Homework: 2A
Purpose: Write a program that sums a sequence of integers.
Assume that the first integer read with scanf specifies the number of values remaining to be entered. 
*/

int main(void) {

  int value = 0;
  int number = 0;
  int count = 1;
  int total = 0;
  printf("Please enter number of values to be entered: ");
  scanf("%d", &value);

  while(count <= value){
    printf("Please enter #%d :", count);
    scanf("%d", &number);
    total += number;
    count++;
  }
  printf("The total is %d", total);
  return 0;
}
