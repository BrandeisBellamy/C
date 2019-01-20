#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Name: Brandeis Bellamy
Homework: 3B
Purpose: Guess the number
*/

int main(void) {
  srand(time(NULL));
  int number = rand() % 1000 + 1; //random number
  int guess = 0;
  int count = 1;
  char decision; //yes no

  printf("I have a number between 1 and 1000");
  printf("\nCan you guess my number?");
  printf("\nPlease type your first guess. ");
  scanf("%d", &guess);

  while(guess > 0){
    if(guess > number){
      printf("\n%d.\tToo high. Try again.", count);
    }
    else if(guess < number){
      printf("\n%d.\tToo low. Try again.", count);
    }
    else if (guess == number){
      printf("\n%d.\tExcellent! You guessed the number!", count);
      printf("\n\tWould you like to play again (y or n)?");
      scanf(" %c", &decision);

      if (decision == 'y'){
        printf("\nI have a number between 1 and 1000");
        printf("\nCan you guess my number?");
 
        printf("\nPlease type your first guess. ");
        count = 0;
        number = rand() % 1000 + 1;
      }
    }
    count++;
    scanf("%d", &guess);
  }
  return 0;
}
