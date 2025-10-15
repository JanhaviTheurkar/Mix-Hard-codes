/* 42. Strong number check (reuse earlier) */
#include <stdio.h>
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    int t=n, sum=0;
    while(t){
        int d=t%10, f=1;
        for(int i=1;i<=d;i++) f*=i;
        sum += f; t/=10;
    }
    if(sum==n) printf("Strong\n"); else printf("Not Strong\n");
    return 0;
}
