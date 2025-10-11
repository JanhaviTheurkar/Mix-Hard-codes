/* 18. GCD and LCM using loops (brute force) */
#include <stdio.h>
int main(){
    int a,b; printf("Enter a b: "); scanf("%d%d",&a,&b);
    int gcd=1;
    for(int i=1;i<= (a<b? a:b); i++) if(a%i==0 && b%i==0) gcd=i;
    long long lcm = (long long)a / gcd * b;
    printf("GCD=%d LCM=%lld\n", gcd, lcm);
    return 0;
}
