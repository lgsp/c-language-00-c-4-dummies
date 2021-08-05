#include <stdio.h>

int main()
{
  printf("Stock Market Close\n");
  float marketclose[] = { 14450.06, 14458.62, 14539.14, 14514.11, 14452.06 };
  for(int i = 0; i < 5; i++)
  {
    printf("Day %d: %.2f\n", i+1, marketclose[i]);
  }
  return(0);
}
