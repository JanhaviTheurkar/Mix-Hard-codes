/* 47. Sum of factorials of digits */
#include <stdio.h>
int fact(int x){ int f=1; for(int i=1;i<=x;i++) f*=i; return f; }
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    int t=n, sum=0;
    while(t){ sum+=fact(t%10); t/=10; }
    printf("Sum factorial digits: %d\n", sum);
    return 0;
}
