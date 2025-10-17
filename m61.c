/* 61. Number of digits in factorial(n) using log (for big n) */
#include <stdio.h>
#include <math.h>
int main(){
    int n; printf("Enter n: "); scanf("%d",&n);
    if(n<0) { printf("Invalid\n"); return 0; }
    if(n==0 || n==1) { printf("1\n"); return 0; }
    double sum=0;
    for(int i=2;i<=n;i++) sum += log10(i);
    int digits = (int)floor(sum) + 1;
    printf("Digits in %d! = %d\n", n, digits);
    return 0;
}
