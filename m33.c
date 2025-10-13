/* 33. Compute x^n using while (integer power) */
#include <stdio.h>
int main(){
    long long x; int n; printf("Enter x n: "); scanf("%lld%d",&x,&n);
    long long res=1;
    int i=0;
    while(i<n){ res*=x; i++; }
    printf("%lld\n", res);
    return 0;
}
