#include <stdio.h>

#define LENGTH 20

int main()
{
  char name[LENGTH];

  printf("Who are you? ");
  fgets(name, LENGTH, stdin);
  printf("Glad to meet you, %s.\n", name);
  return(0);
}
