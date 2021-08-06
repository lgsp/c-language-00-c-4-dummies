#include <stdio.h>
#include <ctype.h>

int main()
{
  char answer;

  printf("Would you like to blow up the moon? ");
  scanf("%c", &answer);
  answer = toupper(answer);
  printf("You type %c\n", answer);
  if(answer=='Y') puts("BOOM!");
  else puts("The moon is safe");
  return(0);
}
