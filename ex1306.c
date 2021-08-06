#include <stdio.h>
#include <ctype.h>

int main()
{
  char text[100];
  printf("Type your text (100 characters max): ");
  fgets(text, 100, stdin);
  for(int i = 0; i < 100; i++)
  {
    if(islower(text[i])) text[i] = toupper(text[i]);
    else if(isupper(text[i])) text[i] = tolower(text[i]);
    else continue;
  }
  printf("Here is the reverse lower/upper:\n");
  printf("%s\n", text);
  return(0);
}
