/* 52. Automorphic number (ends with its square) */
#include <stdio.h>
#include <math.h>
int pow10(int k){ int p=1; while(k--) p*=10; return p; }
int digits(int n){ int c=0; if(n==0) return 1; while(n){ c++; n/=10;} return c; }
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    long long sq = 1LL*n*n;
    int d = digits(n);
    if(sq % pow10(d) == n) printf("%d is Automorphic\n", n);
    else printf("Not Automorphic\n");
    return 0;
}
