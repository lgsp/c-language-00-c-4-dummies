#include <stdio.h>

int main()
{
  int letter1, letter2, letter3;

  for(letter1='A'; letter1<='Z'; letter1=letter1+1)
  {
    for(letter2='A'; letter2<='Z'; letter2=letter2+1)
    {
      for(letter3='A'; letter3<='Z'; letter3=letter3+1)
      {
	printf("%c%c%c\t", letter1, letter2, letter3);
      }
    }
    putchar('\n');
  }
  return(0);
}
