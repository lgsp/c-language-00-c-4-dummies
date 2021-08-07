#include <stdio.h>
#include <stdlib.h>

int main()
{
  int r, a;

  puts("100 Random Numbers");
  for(a=0; a<100; a++)
  {
    r=rand();
    printf("a = %d\tr = %d\n", a, r);
  }
  putchar('\n');
  return(0);
}
