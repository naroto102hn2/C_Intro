#include <stdio.h>

int main(){
  int a=3,b=4,c=5;
  int *p;
  p=&a;
  printf("p = %d\n",*p);
  p=&b;
  printf("p = %d\n",*p);
  p=&c;
  printf("p = %d\n",*p);
  printf("z = %d address: %p\n",*p,p);
  return 0;
}
