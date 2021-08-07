#include <stdio.h>

#define SIZE 6

int main()
{
  char president[SIZE][11] = {
    "Clinton",
    "Bush",
    "Obama",
    "Washington",
    "Adams",
    "Jefferson"
  };
  int x, index;

  for(x=0; x<SIZE; x++)
  {
    index = 0;
    puts(president[x]);
  }
  return(0);
}
