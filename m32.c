    /* 32. Count even and odd digits */
#include <stdio.h>
int main(){
    long long n; printf("Enter: "); scanf("%lld",&n);
    if(n<0) n=-n;
    int even=0, odd=0;
    while(n){
        int d = n%10;
        if(d%2==0) even++; else odd++;
        n/=10;
    }
    printf("Even=%d Odd=%d\n", even, odd);
    return 0;
}
