/* 65. Product of digits in a number */
#include <stdio.h>
int main(){
    long long n; printf("Enter: "); scanf("%lld",&n);
    if(n<0) n=-n;
    long long prod=1;
    if(n==0) prod=0;
    while(n){ prod *= n%10; n/=10; }
    printf("Product = %lld\n", prod);
    return 0;
}
