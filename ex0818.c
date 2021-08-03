#include <stdio.h>

int main()
{
  char letter;

  printf("Enter one of the letters (A, B, C): ");
  scanf("%c", &letter);

  switch(letter)
  {
   case 'A':
   case 'a':
     printf("You typed the letter %c\n", letter);
     break;
   case 'B':
   case 'b':
     printf("You typed the letter %c\n", letter);
     break;
   case 'C':
   case 'c':
     printf("You typed the letter %c\n", letter);
     break;
   default:
     puts("That's not A, B, or C");
  }
  return(0);
}
