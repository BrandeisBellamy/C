/*
Name: Brandeis Bellamy
Homework: 4A
Purpose: Calculate Standard Deviation
*/

#include <stdio.h>
#include <math.h>

int main(void) {
  int grades[7] = {80, 82, 90, 95, 90, 87, 92};
  float sum = 0.0;
  float mean = 0.0;
  float stDev = 0.0;
  float math = 0.0;
  int pass = 0;
  int hold = 0;

  printf("Exam scores: ");
  for (int i=0; i<7; ++i){
    printf(" %d ", grades[i]);
    sum += grades[i];
  }
  
  mean = sum / 7;

  for (int i=0; i<7; ++i){
    math += pow(grades[i] - mean, 2);
  }

  stDev = sqrt(math/7);
  printf("\n\nStandard deviation: %.4f", stDev);
  printf("\n\nAdjusted exam scores: ");

  for (int i=0; i<7; ++i){
    grades[i] += stDev + 1;
    printf(" %d ", grades[i]);
  }

  for (pass=0; pass<7; ++pass){

    for (int i=0; i<7-1; ++i){
  
      if (grades[i] > grades[i+1]){
        hold = grades[i];
        grades[i] = grades[i+1];
        grades[i+1] = hold;
      }
    }
  }

  printf("\n\nSorted exam scores: ");

  for (int i=0; i<7; ++i){
    printf(" %d ", grades[i]);
  }
}
