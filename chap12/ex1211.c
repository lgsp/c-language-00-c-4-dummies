#include <stdio.h>

int main()
{
  char firstname[16];
  char lastname[16];

  printf("What is your first name? ");
  scanf("%s", firstname);
  printf("What is your last name? ");
  scanf("%s", lastname);
  printf("My name is %s, %s %s. I'm a secret agent.\n",
	 lastname, firstname, lastname);
  printf("Pleased to meet you, %s %s.\n", firstname, lastname);
  return(0);
}