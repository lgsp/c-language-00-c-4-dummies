#include <stdio.h>

/*
  1) Compile as usual
  2) When executing pass a string argument for exemple ./a.out YourName
 */

int main(int argc, char *argv[])
{
  printf("You typed %d arguments.\n", argc);
  for(int i = 0; i < argc; i++)
  {
    if(i == 1) printf("The %dst argument is %s.\n", i, argv[i]);
    else if(i == 2) printf("The %dnd argument is \"%s\".\n", i, argv[i]);
    else if(i == 3) printf("The %drd argument is \"%s\".\n", i, argv[i]);
    else printf("The %dth argument is \"%s\".\n", i, argv[i]);
  }
  return(0);
}
