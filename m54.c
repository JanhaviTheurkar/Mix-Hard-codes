/* 54. Binary to decimal manually */
#include <stdio.h>
#include <math.h>
int main(){
    long long b; printf("Enter binary (digits): "); scanf("%lld",&b);
    long long t=b; int p=0; long long dec=0;
    while(t){
        dec += (t%10)* (1LL<<p);
        t/=10; p++;
    }
    printf("Decimal: %lld\n", dec);
    return 0;
}
