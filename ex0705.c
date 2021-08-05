#include <stdio.h>

int main()
{
  int a, ch;

  printf("Press Enter: ");
  a = getchar();
  putchar(a);
  ch = 'H';
  putchar(ch);
  ch = 'i';
  putchar(ch);
  putchar('!');
  putchar('\n');
  return(0);
}
