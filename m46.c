/* 46. Sum of prime digits of a number */
#include <stdio.h>
int isPrimeDigit(int d){ return (d==2||d==3||d==5||d==7); }
int main(){
    long long n; printf("Enter: "); scanf("%lld",&n);
    if(n<0) n=-n;
    int sum=0;
    while(n){
        int d=n%10;
        if(isPrimeDigit(d)) sum+=d;
        n/=10;
    }
    printf("Sum prime digits = %d\n", sum);
    return 0;
}
