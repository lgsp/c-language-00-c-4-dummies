#include <stdio.h>

int main()
{
  int increment = -5, decrement = 5;
  while(increment <= decrement)
  {
    printf("%d\t", increment);
    increment++;
  }
  increment = -5;
  while(decrement > increment)
  {
    decrement--;
    printf("%d\t", decrement);
  }
  printf("\n");
  return(0);
}
