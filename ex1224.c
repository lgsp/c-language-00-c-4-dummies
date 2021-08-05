#include <stdio.h>

#define SIZE 5

void showarray(int array[]);
void arrayinc(int array[]);

int main()
{
  int n[] = { 1, 2, 3, 5, 7 };

  puts("Here's your array:");
  showarray(n);
  puts("Let's add 1 to each element!");
  arrayinc(n);
  puts("Here's your NEW array:");
  showarray(n);
  return(0);
}

void showarray(int array[])
{
  int x;

  for(x=0; x<SIZE; x++)
    printf("%d\t", array[x]);
  putchar('\n');
}

void arrayinc(int array[])
{
  int counter = 0;
  while(array[counter] != '\0')
  {
    array[counter] += 1;
    counter++;
  }
}
