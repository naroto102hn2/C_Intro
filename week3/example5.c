#include <stdio.h>

int main()
{
  int i = 873;
  double f = 123.94536;
  char s[] = "Happy Birthday";

  printf("Using precision for integers\n");
  printf("\t%.4d\n\t%.9d\n\n",i,i);
  printf("Using precision for strings\n");
  printf("\t%.11s\n", s);

  return 0;
}

