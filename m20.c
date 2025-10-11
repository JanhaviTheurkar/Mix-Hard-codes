/* 20. Strong number check (sum factorial of digits equals number) */
#include <stdio.h>
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    int t=n, sum=0;
    while(t){
        int d = t%10;
        int f=1;
        for(int i=1;i<=d;i++) f*=i;
        sum += f;
        t/=10;
    }
    if(sum==n) printf("%d is Strong number\n", n);
    else printf("%d is not Strong\n", n);
    return 0;
}
