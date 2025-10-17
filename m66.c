/* 66. Check if digits are in increasing order (left to right) */
#include <stdio.h>
int main(){
    long long n; printf("Enter: "); scanf("%lld",&n);
    if(n<0) n=-n;
    int prev = 10;
    int ok = 1;
    long long digits[20]; int idx=0;
    while(n){ digits[idx++]=n%10; n/=10; }
    for(int i=idx-1;i>0;i--){
        if(digits[i] >= digits[i-1]) continue;
        else { ok=0; break; }
    }
    if(ok) printf("Digits increasing\n"); else printf("Not increasing\n");
    return 0;
}
