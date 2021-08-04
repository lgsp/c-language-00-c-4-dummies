#include <stdio.h>

void limit(int stop);
int verify(int stop);

int main()
{
  int s;

  printf("Enter a stopping value (0-100): ");
  scanf("%d", &s);
  if(verify(s)) limit(s);
  
  return(0);
}

void limit(int stop)
{
  int x;

  for(x=0; x<=100; x=x+1)
  {
    printf("%d ", x);
    if(x==stop)
    {
      puts("You won!");
      return;
    }
  }
  puts("I won!");
}

int verify(int stop)
{
  if(stop >=0 && stop <= 100) return 1;
  else
  {
    puts("Out of range");
    return 0;
  }
}
