/* 17. Print prime numbers between 1 and 100 */
#include <stdio.h>
#include <math.h>
int main(){
    for(int n=2;n<=100;n++){
        int isprime=1;
        for(int d=2; d<=sqrt(n); d++) if(n%d==0){ isprime=0; break;}
        if(isprime) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
