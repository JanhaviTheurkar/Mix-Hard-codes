/* 37. Largest digit in a number */
#include <stdio.h>
int main(){
    long long n; printf("Enter: "); scanf("%lld",&n);
    if(n<0) n=-n;
    int max=0;
    while(n){
        int d=n%10;
        if(d>max) max=d;
        n/=10;
    }
    printf("Largest digit: %d\n", max);
    return 0;
}
