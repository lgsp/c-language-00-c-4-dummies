#include <stdio.h>

void prompt(); /* function prototype */

int main()
{
  prompt();
  return(0);
}

/* Display prompt */

void prompt()
{
  int loop;
  char input[32];

  loop=0;
  while(loop<5)
  {
    printf("C:\\DOS> ");
    fgets(input, 31, stdin);
    loop=loop+1;
  }
}
