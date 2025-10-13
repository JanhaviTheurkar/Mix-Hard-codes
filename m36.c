/* 36. Smallest digit in a number */
#include <stdio.h>
int main(){
    long long n; printf("Enter: "); scanf("%lld",&n);
    if(n<0) n=-n;
    int min=9;
    if(n==0) min=0;
    while(n){
        int d=n%10;
        if(d<min) min=d;
        n/=10;
    }
    printf("Smallest digit: %d\n", min);
    return 0;
}
