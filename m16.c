/* 16. Sum of digits of a number */
#include <stdio.h>
int main(){
    long long n; printf("Enter: "); scanf("%lld",&n);
    if(n<0) n=-n;
    int sum=0;
    for(; n>0; n/=10) sum += n%10;
    printf("Sum digits = %d\n", sum);
    return 0;
}
