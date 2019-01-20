#include <stdio.h>
#include <math.h>

/*
Name: Brandeis Bellamy
Homework: 3A
Purpose: Create a c program that evaluates a quadratic function x^2 +5x +6.  
The main program will call a function passing the value for x (accepted as input) and the function returns the evaluated value. 
The evaluated value should be printed in the main program along with the x value. 
Output should be as follows, with at least the five different user inputs. 
The program should work repeatedly as long as the input is between -100.0 and 100.0 (end points not included).
*/

float quadratic(float x){
  float answer = 0;
  answer = pow(x,2) + 5*x + 6;
  return answer;
}

int main(void) {
  float value = 0;
  printf("This program evaluates x^2 + 5x + 6");
  printf("\n*** Note: Invalid values will terminate the program ***");
  printf("\n\nEnter a decimal value between -100.0 and 100.00: ");
  scanf("%f", &value);

  while(value >-100.0 && value <100.00){
    float b = quadratic(value);
    printf("\nf(%.4f) = %.4f", value, b);
    printf("\n\nEnter a decimal value between -100.0 and 100.00: ");
    scanf("%f", &value);
  }

  if (value <=-100.0 || value >=100.00){
    printf("\n%.3f is invalid. Good bye", value);
  }
  return 0;
}
