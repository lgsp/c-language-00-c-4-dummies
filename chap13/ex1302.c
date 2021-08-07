#include <stdio.h>
#include <ctype.h>

int main()
{
  char phrase[] = "When in the Course of human events, \
it becomes necessary for one people to \
dissolve the political bands which have \
connected them with another, and to assume \
among the powers of the earth, the separate \
and equal station to which the Laws of Nature \
and of Nature's God entitle them, a decent respect \
to the opinions of mankind requires that they \
should declare the causes which impel them to \
the separation.";

  int index, alpha, blank, punct, lower, upper;

  alpha = blank = punct = lower = upper = 0;

  /* gather data */
  index = 0;
  while(phrase[index])
  {
    if(isalpha(phrase[index])) alpha++;
    if(isblank(phrase[index])) blank++;
    if(ispunct(phrase[index])) punct++;
    if(islower(phrase[index])) lower++;
    if(isupper(phrase[index])) upper++;
    index++;
  }

  /* print results */
  printf("\"%s\"\n", phrase);
  puts("Statistics:");
  printf("%d alphabetic characters\n", alpha);
  printf("%d blanks\n", blank);
  printf("%d punctuation symbols\n", punct);
  printf("%d lower case letters\n", lower);
  printf("%d upper case letters\n", upper);
  return(0);
}
