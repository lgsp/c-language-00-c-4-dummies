#include <stdio.h>
#include <stdlib.h>

int main()
{
  int r, a;

  puts("100 Random Numbers Between 0 And 20");
  for(a=0; a<100; a++)
  {
    r=rand()%21;
    printf("a = %d\tr = %d\n", a, r);
  }
  putchar('\n');
  return(0);
}
