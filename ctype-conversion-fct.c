#include <stdio.h>

int lengthCharTab(char tab[]);
int maxIntTab(int tabSize, int tab[tabSize]);
void dispIntTab(int tabSize, int tab[tabSize]);
void fillCharTab(char tab[], int index, int maxSize, char fullTab[5][maxSize+1]);
void dispCharTab(int nbLine, int maxSize, char tab[nbLine][maxSize+1]);

int main()
{
  int sizes[5];
  
  char intro[] = "\tCTYPE Conversion Functions";
  sizes[0] = lengthCharTab(intro);
  puts(intro);
  
  char line1[] = "Function\tReturns";
  sizes[1] = lengthCharTab(line1);
  puts(line1);
  
  char line2[] = "toascii(ch)\tThe ASCII code value of ch, in the range of 0 through 127";
  sizes[2] = lengthCharTab(line2);
  puts(line2);
  
  char line3[] = "tolower(ch)\tThe lowercase of character ch";
  sizes[3] = lengthCharTab(line3);
  puts(line3);
  
  char line4[] = "toupper(ch)\tThe uppercase of character ch";
  sizes[4] = lengthCharTab(line4);
  puts(line4);

  dispIntTab(5, sizes);
  int maxSize = maxIntTab(5, sizes);
  printf("maxSize = %d\n", maxSize);

  char table[5][maxSize+1];
  int index = 0;
  printf("Calling the fillCharTab function...\n");
  fillCharTab(intro, index, maxSize, table);
  index = 1;
  fillCharTab(line1, index, maxSize, table);
  index = 2;
  fillCharTab(line2, index, maxSize, table);
  index = 3;
  fillCharTab(line3, index, maxSize, table);
  index = 4;
  fillCharTab(line4, index, maxSize, table);

  for(int i = 0; i < maxSize; i++) printf("=");
  printf("\n\n");

  printf("Calling the dispCharTab function...\n\n");
  int nbLine = 5;
  dispCharTab(nbLine, maxSize, table);
  
  return(0);
}

int lengthCharTab(char tab[])
{
  int size = 0;
  while(tab[size] != '\0') size++;
  return size;
}


int maxIntTab(int tabSize,int tab[tabSize])
{
  int max = tab[0];
  for(int i = 0; i < tabSize; i++) if(max < tab[i]) max = tab[i];
  return max;
}

void dispIntTab(int tabSize, int tab[tabSize])
{
  for(int i = 0; i < tabSize; i++) printf("Line#%d: %d\n", i, tab[i]);
}

void fillCharTab(char tab[], int index, int maxSize, char fullTab[5][maxSize+1])
{
  int size = lengthCharTab(tab);
  for(int j = 0; j < size; j++) fullTab[index][j] = tab[j];
  fullTab[index][size] = '\0';
}

void dispCharTab(int nbLine, int maxSize, char tab[nbLine][maxSize+1])
{
  for(int i = 0; i < maxSize+4; i++) printf("=");
  putchar('\n');
  for(int i = 0; i < nbLine; i++) puts(tab[i]);
  for(int i = 0; i < maxSize+4; i++) printf("=");
  printf("\n\n");
  printf("Everything has been printed (I hope) correctly\n");
}
