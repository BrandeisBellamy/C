int hw1pt1()
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
