#include <stdio.h>

int main()
{
  char name[10];

  
  printf("Who are you? (10 characters max) ");
  fgets(name, 10, stdin);
  printf("Glad to meet you, %s.\n", name);
  return(0);
}
