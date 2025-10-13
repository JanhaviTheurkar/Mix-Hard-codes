/* 35. Prime check using while */
#include <stdio.h>
#include <math.h>
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    if(n<=1){ printf("Not prime\n"); return 0; }
    int i=2;
    while(i<=sqrt(n)){
        if(n%i==0){ printf("Not prime\n"); return 0; }
        i++;
    }
    printf("Prime\n");
    return 0;
}
