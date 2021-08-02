#include <stdio.h>

int main()
{
  printf("printf() Conversion Character\tType\t\t\tValue Range\n");
  printf("%%d\t\t\t\t_Bool\t\t\t0 to 1\n");
  printf("%%c\t\t\t\tchar\t\t\t-128 to 127\n");
  printf("%%u\t\t\t\tunsigned char\t\t0 to 255\n");
  printf("%%d\t\t\t\tshort int\t\t-32 768 to 32 767\n");
  printf("%%u\t\t\t\tunsigned short int\t0 to 65535\n");
  printf("%%d\t\t\t\tint\t\t\t-2147483648 to 2147483647\n");
  printf("%%u\t\t\t\tunsigned int\t\t0 to 4294967295\n");
  printf("%%ld\t\t\t\tlong int\t\t-2147483648 to 2147483647\n");
  printf("%%lu\t\t\t\tunsigned long int\t0 to 4294967295\n");
  printf("%%f\t\t\t\tfloat\t\t\t1.17x10^{-38} to 3.40x10^{38}\n");
  printf("%%f\t\t\t\tdouble\t\t\t2.22x10^{-308} to 1.79x10^{308}\n");
  return(0);
}
