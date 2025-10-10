/* 14. Count digits in a number */
#include <stdio.h>
int main(){
    long long n; printf("Enter: "); scanf("%lld",&n);
    if(n==0) { printf("1\n"); return 0; }
    int cnt=0;
    if(n<0) n=-n;
    for(; n>0; n/=10) cnt++;
    printf("Digits: %d\n",cnt);
    return 0;
}
