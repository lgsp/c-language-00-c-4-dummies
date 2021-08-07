#include <stdio.h>

/*
  1) Compile as usual
  2) When executing pass a string argument for exemple ./a.out YourName
 */

int main(int argc, char *argv[])
{
  if(argc>1) printf("Greetings, %s!\n", argv[1]);
  return(0);
}
