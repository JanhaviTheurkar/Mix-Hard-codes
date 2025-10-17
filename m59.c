/* 59. Sum of squares 1^2 + 2^2 + ... + n^2 */
#include <stdio.h>
int main(){
    int n; printf("n: "); scanf("%d",&n);
    long long sum=0;
    for(int i=1;i<=n;i++) sum += 1LL*i*i;
    printf("Sum squares=%lld\n", sum);
    return 0;
}
