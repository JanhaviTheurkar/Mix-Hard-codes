/* 58. Find nth prime number */
#include <stdio.h>
#include <math.h>
int isPrime(int n){ if(n<=1) return 0; for(int i=2;i<=sqrt(n);i++) if(n%i==0) return 0; return 1; }
int main(){
    int n; printf("n: "); scanf("%d",&n);
    int count=0, num=2;
    while(1){
        if(isPrime(num)) count++;
        if(count==n){ printf("%d\n", num); break; }
        num++;
    }
    return 0;
}
