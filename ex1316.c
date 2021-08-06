#include <stdio.h>

#define DIM1 2
#define DIM2 4
#define DIM3 10

int maxInt(int num1, int num2);
void disp3DcharTab(int dim1, int dim2, int dim3, char tab[dim1][dim2][dim3]);
void dispFirstLastName(int dim1, int dim2, int dim3, char tab[dim1][dim2][dim3]);

int main()
{
  
  char president[DIM1][DIM2][DIM3] = {
    {"George",  "John", "Thomas", "James"},
    
    {"Monroe", "Washington", "Adams", "Jefferson"}
  };
  int dim1 = DIM1, dim2 = DIM2, dim3 = DIM3;
  disp3DcharTab(dim1, dim2, dim3, president);

  dispFirstLastName(dim1, dim2, dim3, president);
    
  return(0);
}

int maxInt(int num1, int num2)
{
  if(num1 > num2) return(num1);
  else return(num2);
}
  
void disp3DcharTab(int dim1, int dim2, int dim3, char tab[dim1][dim2][dim3])
{
  printf("\n");
  for(int i = 0; i < dim1; i++)
  {
    printf("Matrix#%d:\n", i);
    for(int j = 0; j < dim2; j++)
    {
      printf("Line#%d: ", j);
      for(int k = 0; k < dim3; k++) printf("%c", tab[i][j][k]);
      printf("\n");
    }
    
  }
  printf("\n\n");
}

void dispFirstLastName(int dim1, int dim2, int dim3, char tab[dim1][dim2][dim3])
{
  int maxSize = maxInt(dim2, dim3);
  for(int x = 0; x < maxSize; x++) printf("=");
  printf("\n");
  for(int j = 0; j < dim2; j++)
  {
    for(int k = 0; k < dim3; k++) printf("%c", tab[0][j][k]);
    printf("\t");
    for(int k = 0; k < dim3; k++) printf("%c", tab[1][j][k]);
    printf("\n");
  }
  for(int x = 0; x < maxSize; x++) printf("=");
  printf("\n");
}
