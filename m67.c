/* 67. Sum of even and odd numbers up to N separately */
#include <stdio.h>
int main(){
    int N; printf("N: "); scanf("%d",&N);
    long long se=0, so=0;
    for(int i=1;i<=N;i++){
        if(i%2==0) se+=i; else so+=i;
    }
    printf("Sum even=%lld Sum odd=%lld\n", se, so);
    return 0;
}
