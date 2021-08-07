#include <stdio.h>
#include <stdlib.h>

#define SIZE 41

int main()
{
  int bubble[SIZE];
  int inner, outer, temp, x;

  
  /* Display original array */
  puts("Original Array:");
  for(x=0; x<SIZE; x++)
  {
    if(x % 10 == 0) printf("\n");
    bubble[x] = rand() % 100;
    printf("(%2d, %2d) ", x, bubble[x]);
  }
  putchar('\n');

  /* Bubble sort */
  for(outer=0; outer<SIZE-1; outer++)
  {
    for(inner=outer+1; inner<SIZE; inner++)
    {
      if(bubble[outer] < bubble[inner])
      {
	temp=bubble[outer];
	bubble[outer] = bubble[inner];
	bubble[inner] = temp;
      }
    }
  }
  /* Display sorted array */
  printf("\n");
  printf("====================================================================================================\n\n");
  puts("Sorted Array:");
  for(x=0; x<SIZE; x++)
  {
    if(x % 10 == 0) printf("\n");
    printf("(%2d, %2d) ", x, bubble[x]);
  }
  putchar('\n');

  return(0);
}
