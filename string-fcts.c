#include <stdio.h>
#include <stdlib.h>

#define LENGTH 100

int lengthCharTab(char tab[]);
void fillCharTab(int nbLine, char tab[nbLine][LENGTH]);
void dispCharTab(int nbLine, char tab[nbLine][LENGTH]);

int main()
{
  int nbLine = 0;
  printf("Number of line: ");
  scanf("%d", &nbLine);
  printf("You have chosen to enter %d lines.\n", nbLine);
  char table[nbLine][LENGTH];
  fillCharTab(nbLine, table);
  dispCharTab(nbLine, table);
  
  return(0);
}

int lengthCharTab(char tab[])
{
  int size = 0;
  while(tab[size] != '\0') size++;
  return(size);
}

void fillCharTab(int nbLine, char tab[nbLine][LENGTH])
{
  printf("Filling the tab of char...\n");
  char *temp;
  for(int i = 0; i < nbLine; i++)
  {
    printf("Loop processing...\n");
    temp = (char*)malloc(LENGTH * sizeof(char));
    printf("Enter line#%d: ", i);
    fgets(temp, LENGTH, stdin);
    for(int j = 0; j < LENGTH; j++) tab[i][j] = temp[j];
    free(temp);
  }
}

void dispCharTab(int nbLine, char tab[nbLine][LENGTH])
{
  for(int i = 0; i < LENGTH; i++) printf("=");
  printf("\n");
  for(int i = 0; i < nbLine; i++) puts(tab[i]);
  for(int i = 0; i < LENGTH; i++) printf("=");
  printf("\n\n");
}
