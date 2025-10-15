/* 38. Sum of harmonic series 1 + 1/2 + ... + 1/n */
#include <stdio.h>
int main(){
    int n; printf("n: "); scanf("%d",&n);
    double sum=0.0;
    int i=1;
    while(i<=n){ sum += 1.0/i; i++; }
    printf("Sum = %.6f\n", sum);
    return 0;
}
