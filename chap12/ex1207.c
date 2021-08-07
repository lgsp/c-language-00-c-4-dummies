#include <stdio.h>
#include <math.h>

int main()
{
  int array1[] = { 10, 12, 14, 15, 16, 18, 20 };
  float array2[7];
  for(int i = 0; i < 7; i++)
  {
    array2[i] = sqrt(array1[i]);
    printf("√%d ~ %.2f\n", array1[i], array2[i]);
  }
  return(0);
}
