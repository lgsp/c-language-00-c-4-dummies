#include <stdio.h>

int main()
{
  char firstname[16];
  char lastname[16];

  printf("What is your first name? ");
  fgets(firstname, 16, stdin);
  printf("What is your last name? ");
  fgets(lastname, 16, stdin);
  printf("My name is %s, %s %s. I'm a secret agent.\n",
	 lastname, firstname, lastname);
  printf("Pleased to meet you, %s %s.\n", firstname, lastname);
  return(0);
}
