/* 62. Count prime numbers between 1 and N */
#include <stdio.h>
#include <math.h>
int main(){
    int N; printf("N: "); scanf("%d",&N);
    int cnt=0;
    for(int i=2;i<=N;i++){
        int isprime=1;
        for(int d=2; d<=sqrt(i); d++) if(i%d==0){ isprime=0; break; }
        if(isprime) cnt++;
    }
    printf("Primes <= %d : %d\n", N, cnt);
    return 0;
}
