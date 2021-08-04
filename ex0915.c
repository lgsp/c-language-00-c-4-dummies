#include <stdio.h>

int main()
{
  float start = -5;

  while(start <= 5)
  {
    printf("%.1f\n", start);
    start += 0.5;
  }
  return(0);
}
