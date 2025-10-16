/* 57. Prime Fibonacci numbers (first n Fibonacci that are prime) */
#include <stdio.h>
#include <math.h>
int isPrime(int n){ if(n<=1) return 0; for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0; return 1; }
int main(){
    int n; printf("Count n: "); scanf("%d",&n);
    int count=0;
    long long a=0,b=1;
    while(count<n){
        long long c = a+b;
        a=b; b=c;
        if(c>1 && c<=1000000000 && isPrime((int)c)){
            printf("%lld ", c);
            count++;
        }
    }
    printf("\n");
    return 0;
}
