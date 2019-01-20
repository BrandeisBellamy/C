#include <stdio.h>

int hw1pt2()
{
  float principal = 0.00;
  float rate = 0.00;
  float days = 0.00;
  float interest = 0.00;

  printf("Enter loan principal (-1 to end): ");
  scanf("%f", &principal);

  while (principal != -1) {
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter term of loan in days: ");
    scanf("%f", &days);
  
    interest = principal * rate * days/365;
    printf("The interest charge is: $%.2f \n \n", interest);

    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);
  }
  return 0;
}
