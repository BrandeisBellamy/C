/*
Name: Brandeis Bellamy
Homework: 4B
Purpose: Palindrome
*/

#include <stdio.h>

void createReserveArray(int ar1[],int temp[], int size) {
  int j = size - 1;
  int i = 0; // i will be pointing to first element
  // reverse the element in array and copy to temp array
  for (i = 0; i < size; i++) {
    temp[i] = ar1[j--];
  }
}

int compareArray(int ar1[],int ar2[], int size) {
  int i;
  // compare the two array
  for (i = 0; i < size; i++) {
    if (ar1[i] != ar2[i]) { // if array element are different
      return 1; // return 1
    }
  }

  return 0; // if palindrome return 0
}

void printArray(int ar1[], int size) {
  int i, j;
  printf("Array elements are: ");
  // print elements in array
  for (i = 0; i < size; i++) {
    printf("%d ", ar1[i]);
  }

  printf("\n");
  j = size - 1; // points to last index array
}

int main()
{
  int myArray1[] = { 1, 2, 3, 2, 1 };
  int myArray2[] = { 1, 2, 3, 4, 1 };
  int myArray3[] = { 1, 2, 3, 3, 2, 1 };
  int myArray4[] = { 1, 2, 3, 4, 5, 6 };
  int result,size;

  // myArray1[]
  size = sizeof(myArray1) / sizeof(int);
  int temp1[size];
  createReserveArray(myArray1,temp1,size);
  printArray(myArray1,size);
  // call compare with myArray1 and size of array
  result = compareArray(myArray1,temp1,size);
  if (result == 0) {
    printf("The array is a palindrome\n");
  }
  else {
    printf("The array is not a palindrome\n");
  }

  // myArray2[]
  size = sizeof(myArray2) / sizeof(int);
  int temp2[size];
  createReserveArray(myArray2,temp2,size);
  printArray(myArray2,size);
  // call compare with myArray1 and size of array
  result = compareArray(myArray2,temp2,size);
  if (result == 0) {
    printf("The array is a palindrome\n");
  }
  else {
    printf("The array is not a palindrome\n");
  }

  // myArray3[]
  size = sizeof(myArray3) / sizeof(int);
  int temp3[size];
  createReserveArray(myArray3,temp3,size);
  printArray(myArray3,size);
  // call compare with myArray1 and size of array
  result = compareArray(myArray3,temp3,size);
  if (result == 0) {
    printf("The array is a palindrome\n");
  }
  else {
    printf("The array is not a palindrome\n");
  }

  // myArray4[]
  size = sizeof(myArray4) / sizeof(int);
  int temp4[size];
  createReserveArray(myArray4,temp4,size);
  printArray(myArray4,size);
  // call compare with myArray1 and size of array
  result = compareArray(myArray4,temp4,size);
  if (result == 0) {
    printf("The array is a palindrome\n");
  }
  else {
    printf("The array is not a palindrome\n");
  }
  return 0;
}
