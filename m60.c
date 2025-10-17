/* 60. Sum of cubes of first n natural nums */
#include <stdio.h>
int main(){
    int n; printf("n: "); scanf("%d",&n);
    long long sum=0;
    for(int i=1;i<=n;i++) sum += 1LL*i*i*i;
    printf("Sum cubes=%lld\n", sum);
    return 0;
}
