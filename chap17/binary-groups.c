#include <stdio.h>

void dispTab(int dim1, int dim2, char tab[dim1][dim2]);

int main()
{
  char binGroup[7][100] = {
    "\t\tBinary Groupings",
    "Term\tC Variable\tBits\tValue Range Unsigned\tValue Range Signed",
    "Bit\t_Bool\t\t1\t\t0 to 1\t\t\t0 to 1",
    "Byte\tchar\t\t8\t\t0 to 255\t\t-128 to 127",
    "Word\tshort int\t16\t\t0 to 65,535\t-32,768 to 32,767",
    "Long\tlong int\t32\t0 to 4,294,967,295\t-2,147,483,648 to 2,147,483,647"
  };

  int dim1 = 7, dim2 = 100;
  dispTab(dim1, dim2, binGroup);
  return(0);
}

void dispTab(int dim1, int dim2, char tab[dim1][dim2])
{
  for(int i = 0; i < dim1; i++)
  {
    for(int j = 0; j < dim2; j++) printf("%c", tab[i][j]);
    printf("\n");
    printf("-------------------------------------------------------------------------");
    printf("\n");
  }
}
