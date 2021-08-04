#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
  srand((unsigned)time(NULL));
  int secret = rand() % 101;
  int guess;

  printf("Can you guess the secret number: ");
  scanf("%d", &guess);
  if(guess==secret)
  {
    puts("You guessed it!");
    return(0);
  }
  if(guess!=secret)
  {
    puts("Wrong!");
    printf("The secret number was %d.\n", secret);
    return(1);
  }
}
