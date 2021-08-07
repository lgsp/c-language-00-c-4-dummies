#include <stdio.h>

/*
  1) Compile as usual
  2) When executing pass a string argument for exemple ./a.out YourName
 */

int main(int argc, char *argv[])
{
  printf("You typed %d arguments.\n", argc);
  return(0);
}
