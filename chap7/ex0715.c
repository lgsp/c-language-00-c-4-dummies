#include <stdio.h>

int main()
{
  float fav;

  printf("What is your favorite floating point number: ");
  scanf("%f", &fav);
  printf("%f is my favorite number, too!\n", fav);
  return(0);
}
