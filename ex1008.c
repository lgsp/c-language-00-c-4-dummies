#include <stdio.h>

void graph(int count, char symbol);

int main()
{
  int value;
  char sym;

  value = 2;
  sym = '^';

  while(value<=64)
  {
    graph(value, sym);
    printf("Value is %d\n", value);
    value = value * 2;
  }
  return(0);
}

void graph(int count, char symbol)
{
  int x;

  for(x=0; x<count; x=x+1)
    putchar(symbol);
  putchar('\n');
}
