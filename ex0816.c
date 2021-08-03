#include <stdio.h>

int main()
{
  printf("Do you want to continue?\n");
  printf("Press Y for yes or N for no\n");
  char choice;
  scanf("%c", &choice);
  if(choice == 'N' || choice == 'n')
  {
    printf("You chose to press %c\n", choice);
    printf("Goodbye!\n");
  }
  else if(choice == 'Y' || choice == 'y')
  {
    printf("You chose to press %c\n", choice);
    printf("Welcome!\n");
  }
  else printf("I think you didn't understand.\n");
  return(0);
}
