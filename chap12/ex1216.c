#include <stdio.h>
#include <stdlib.h>

#define SIZE 41

int main()
{
  char bubble[] = "C Programming is fun!";
  int size = 0;
  while(bubble[size] != '\0') size++;
  int inner, outer, temp, x;

  
  /* Display original array */
  puts("Original Array:");
  for(x=0; x<size; x++)
  {
    printf("(%d, %c, %d)\n", x, bubble[x], bubble[x]);
  }
  putchar('\n');

  /* Bubble sort */
  for(outer=0; outer<size-1; outer++)
  {
    for(inner=outer+1; inner<size; inner++)
    {
      if(bubble[outer] > bubble[inner])
      {
	temp=bubble[outer];
	bubble[outer] = bubble[inner];
	bubble[inner] = temp;
      }
    }
  }
  /* Display sorted array */
  printf("\n");
  puts("Sorted Array:");
  for(x=0; x<size; x++)
    printf("%c", bubble[x]);
  putchar('\n');

  return(0);
}
