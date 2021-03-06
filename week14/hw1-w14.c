#include <stdio.h>
#include <stdlib.h>
#define MAX 100 
typedef struct { 
    int numerator;
    int denominator;
}fraction;

void fractionInput(fraction *ps){
    int n,d;
    printf("Numerator:"); scanf("%d",&n);
    ps->numerator = n;
    do {
        printf("Denominator:"); scanf("%d",&d);
    } while (d==0);
    ps->denominator = d;
}
void fractionArrayInput(fraction *ps, int n){
    int i;
    for (i=0; i<n; i++){
        printf("Data input for the i-th fraction:\n");
        fractionInput(dsps[i]);
    }
}

void fractionOutput(fraction ps){
    printf(" %d/%d ", ps.numerator, ps.denominator);
}
void fractionArrayOutput(fraction dsps[], int n){
    int i;
    printf("Data output for the array of fraction:\n");
    for (i=0; i<n; i++){
        fractionOutput(dsps[i]);
    }
    printf("\n");
    }

fraction inverse(fraction ps){
    fraction tmp;
    if (ps.numerator ==0) { 
        printf("Can not have an inverse fraction of 0!\n");
        exit(1);
    }
    tmp.numerator = ps.denominator; tmp.denominator=ps.numerator;
    return tmp;
}
int fractionCmp(fraction ps1, fraction ps2){ 
  //long smd =(ps1.numerator*ps2.denominator –ps2.numerator*ps1.denominator )*ps1.denominator*ps2.denominator;
    long smd = (ps1.numerator*ps2.denominator - ps2.numerator*ps1.denominator)*ps1.denominator*ps2.denominator;
    if(smd> 0)return 1; 
    else if (smd<0) return -1;
    else return 0; 
} 

void inverseArray(fraction dsps[], int n){
    int i;
    for(i=0; i<n; i++) { 
        dsps[i]= inverse(dsps[i]); 
    } 
    } 
int main(){
    int n; 
   fraction a[MAX], max, s, p; 
   printf("Enter the number of fractions:"); scanf("%d",&n); 
   fractionArrayInput(a, n); 
     fractionArrayOutput(a, n);
   printf("Inverse all fractions in the array.\n");
    inverseArray(a,n);
printf("Enter first fraction to compare:");
    fractionInput(s);
    printf("Enter second fraction to compare:");
    fractionInput(p);
    if (fractionCmp(s,p) ==0)
        printf("Two fractions are equals.\n");
    else if (fractionCmp(s,p) < 0){
        fractionOutput(s);
        printf("is smaller than");
        fractionOutput(p);
        printf("\n");
    }
    else{
      fractionOutput(s);
      printf("is bigger than");
      fractionOutput(p);
      printf("\n");
    }
    inverseArray(a,n);
    fractionArrayOutput(a,n);
    
    return 0;
}

