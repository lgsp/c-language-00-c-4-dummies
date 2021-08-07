#include <stdio.h>
#include <math.h>

int main()
{
  for(int i = 0; i < 11; i++) printf("2^%d = %1.0f\n", i, pow(2, i));
  return(0);
}
