#include <stdio.h>


int lengthCharTab(char tab[]);
int lengthIntTab(int tab[]);
int maxTab(int tab[]);
void info(char tab[], int index, int sizes[]);
void fillFullTab(char tab[], int index, int maxSize, char fullTab[15][maxSize+1]);
void dispFullTab(int maxSize, char fullTab[15][maxSize+1]);

int main()
{
  
  int sizes[16];
  
  char tab0[] = "Function\tReturns TRUE When ch is";
  info(tab0, 0, sizes);
       
  char tab1[] = "isalnum(ch)\tA letter of the alphabet (lower or upper) or a number";
  info(tab1, 1, sizes);
  
  char tab2[] = "isalpha(ch)\tAn upper or lower letter of the alphabet";
  info(tab2, 2, sizes);
  
  char tab3[] = "isacii(ch)\tAn ASCII value in the range of 0 through 127";
  info(tab3, 3, sizes);
  
  char tab4[] = "isblank(ch)\tA char tab or space or another blank character";
  info(tab4, 4, sizes);
  
  char tab5[] = "iscntrl(ch)\tA control code character, values 0 through 31 and 127";
  info(tab5, 5, sizes);
  
  char tab6[] = "isdigit(ch)\tA character 0 through 9";
  info(tab6, 6, sizes);
  
  char tab7[] = "isgraph(ch)\tAny hexadecimal digit, 0 through 9 or A through F (upper or lowercase)";
  info(tab7, 7, sizes);
  
  char tab8[] = "islower(ch)\tA lowercase letter of the alphabet, a to z";
  info(tab8, 8, sizes);
  
  char tab9[] = "isnumber(ch)\tSee isdigit()";
  info(tab9, 9, sizes);
  
  char tab10[] = "isprint(ch)\tAny character that can be displayed, including the space";
  info(tab10, 10, sizes);
  
  char tab11[] = "ispunct(ch)\tA punctuation symbol";
  info(tab11, 11, sizes);
  
  char tab12[] = "isspace(ch)\tA white-space character, space, char tab, form feed, or an Enter, for example";
  info(tab12, 12, sizes);
  
  char tab13[] = "isupper(ch)\tAn uppercase letter of the alphabet, A to Z";
  info(tab13, 13, sizes);
  
  char tab14[] = "isxdigit(ch)\tSee ishexnumber()";
  info(tab14, 14, sizes);

  int maxSize = maxTab(sizes);
  printf("maxSize = %d\n", maxSize);
  char fullTab1[15][maxSize+1];
  fillFullTab(tab0, 0, maxSize, fullTab1);
  fillFullTab(tab1, 1, maxSize, fullTab1);
  fillFullTab(tab2, 2, maxSize, fullTab1);
  fillFullTab(tab3, 3, maxSize, fullTab1);
  fillFullTab(tab4, 4, maxSize, fullTab1);
  fillFullTab(tab5, 5, maxSize, fullTab1);
  fillFullTab(tab6, 6, maxSize, fullTab1);
  fillFullTab(tab7, 7, maxSize, fullTab1);
  fillFullTab(tab8, 8, maxSize, fullTab1);
  fillFullTab(tab9, 9, maxSize, fullTab1);
  fillFullTab(tab10, 10, maxSize, fullTab1);
  fillFullTab(tab11, 11, maxSize, fullTab1);
  fillFullTab(tab12, 12, maxSize, fullTab1);
  fillFullTab(tab13, 13, maxSize, fullTab1);
  fillFullTab(tab14, 14, maxSize, fullTab1);

  printf("\n\n");
  dispFullTab(maxSize, fullTab1);
  
  /*  char fullTab1[15][maxSize + 1] = {
    "Function\t\tReturns TRUE When ch is", // tab0
    "isalnum(ch)\tA letter of the alphabet (lower or upper) or a number", // tab1
    "isalpha(ch)\tAn upper or lower letter of the alphabet", // tab2
    "isacii(ch)\tAn ASCII value in the range of 0 through 127", // tab3
    "isblank(ch)\tA char tab or space or another blank character", // tab4
    "iscntrl(ch)\tA control code character, values 0 through 31 and 127", // tab5
    "isdigit(ch)\tA character 0 through 9", // tab6
    "isgraph(ch)\tAny hexadecimal digit, 0 through 9 or A through F (upper or lowercase)", // tab7
    "islower(ch)\tA lowercase letter of the alphabet, a to z", // tab8
    "isnumber(ch)\tSee isdigit()", // tab9
    "isprint(ch)\tAny character that can be displayed, including the space", // tab10
    "ispunct(ch)\tA punctuation symbol", // tab11
    "isspace(ch)\tA white-space character, space, char tab, form feed, or an Enter, for example", // tab12
    "isupper(ch)\tAn uppercase letter of the alphabet, A to Z" // tab13
    };*/
  
  //for(int x = 0; x < 16; x++) puts(fullTab1[x]);
 
  return(0);
}

int lengthCharTab(char tab[])
{
  int size = 0;
  while(tab[size] != '\0') size++;
  return size;
}

int lengthIntTab(int tab[])
{
  int size = 0;
  while(tab[size] != '\0') size++;
  return size;
}

int maxTab(int tab[])
{
  int max = tab[0];
  int size = lengthIntTab(tab);

  for(int i = 0; i < size; i++)
    if(max < tab[i]) max = tab[i];

  return max;
}

void info(char tab[], int index, int sizes[])
{
  printf("Line #%d: %s\n", index, tab);
  sizes[index] = lengthCharTab(tab);
  printf("Sizes[%d] = %d\n", index, sizes[index]);
}

void fillFullTab(char tab[], int index, int maxSize, char fullTab[15][maxSize+1])
{
  printf("Filling line #%d in fullTab[][]...\n", index);
  int size = lengthCharTab(tab);
  for(int j = 0; j < size; j++) fullTab[index][j] = tab[j];
  fullTab[index][size] = '\0';
  printf("Inside fullTab[][]...\nfullTab[%d] = %s\n", index, fullTab[index]);
}

void dispFullTab(int maxSize, char fullTab[15][maxSize+1])
{
  for(int i = 0; i < maxSize+12; i++) printf("=");
  printf("\n\n");
  printf("\t%s\n\n", fullTab[0]);
  for(int i = 0; i < maxSize+12; i++) printf("=");
  printf("\n");
  for(int i = 1; i < 15; i++)
  {
    printf("Line#%d: %s\n", i, fullTab[i]);
    for(int i = 0; i < maxSize+12; i++) printf("-");
    printf("\n");
  }
  printf("\n");
}
