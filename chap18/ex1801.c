#include <stdio.h>

int main()
{
  char c = 'c';
  int i = 123;
  float f = 98.6;
  double d = 6.022E23;

  printf("char\t%lu\n", sizeof(c));
  printf("int\t%lu\n", sizeof(i));
  printf("float\t%lu\n", sizeof(f));
  printf("double\t%lu\n", sizeof(d));
  return(0);
}
