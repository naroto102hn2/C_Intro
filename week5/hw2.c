#include <stdio.h>

int main()
{
  int height,old1,height1,old2,height2;
  int n1,m1,n2,m2;
  printf("Login -enter your height(cm): ");
  scanf("%d",&height);
  printf("Hi Lan: \n");
  printf("How old are you? ");
  scanf("%d",&old1);
  if(old1<=16) n1=-2;
  else if(old1<21) n1=5;
  else n1=2;
  printf("(%d)\nWhat's your height? ",n1);
  scanf("%d",&height1);
  if(height1>=height) m1=-1;
  else if(height1>height-30) m1=3;
  else m1=-2;
  printf("(%d)\nHi Mai: \n",m1);
  printf("How old are you? ");
  scanf("%d",&old2);
  if(old2<=16) n2=-2;
  else if(old2<21) n2=5;
  else n2=2;
  printf("(%d)\nWhat's your height? ",n2);
  scanf("%d",&height2);
  if(height2>=height) m2=-1;
  else if(height2>height-30) m2=3;
  else m2=-2;
  printf("(%d)\n",m2);
  if(n1+m1==n2+m2){
    printf("Lan, are you free on Saturday?\n");
    printf("mai, are you free on Sunday?\n");
  }
  else if(n1+m1>n2+m2){
    printf("Lan, are you free on Saturday?\n");
  }
  else{
    printf("Mai, are you free on Saturday?\n");
  }
  return 0;
}
