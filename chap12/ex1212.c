#include <stdio.h>

int main()
{
  char firstname[16];
  char lastname[16];

  printf("Computer) What is your first name? ");
  scanf("%15s", firstname);
  printf("Computer) What is your last name? ");
  scanf("%15s", lastname);
  printf("Me) My name is %s, %s %s. I'm a secret agent.\n",
	 lastname, firstname, lastname);
  printf("Computer) Pleased to meet you, Sir %s %s.\n",
	 firstname, lastname);
  return(0);
}
