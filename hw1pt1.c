/*
09/13/2018 Sales-Commission Calculator
One large chemical company pays its salespeople on a commission basis.
The salespeople receive $200 per week plus 9% of their gross sales for that week. 
For example, a salesperson who sells $5000 worth of chemicals in a week receives $200 plus 9% of $5000, or a total of $650. 
Develop a program that will input each salesperson’s gross sales for last week and will calculate and display that salesperson’s earnings. 
Process one salesperson's figures at a time. 
*/

#include <stdio.h>

int main()
{
  float sale = 0.00;
  float total = 0.00;
  float base = 200.00;
  printf("Enter sale in dollars (-1 to end): ");
  scanf("%f", &sale);

  while (sale != -1){
    total = base + (sale * 0.09);
    printf("Salary is: $%.2f \n \n", total);
    printf("Enter sale in dollars (-1 to end): ");
    scanf("%f", &sale);
  }
}
