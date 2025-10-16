/* 55. List strong numbers in a range */
#include <stdio.h>
int fact(int x){ int f=1; for(int i=1;i<=x;i++) f*=i; return f; }
int isStrong(int n){ int t=n,sum=0; while(t){ sum+=fact(t%10); t/=10;} return sum==n; }
int main(){
    int a,b; printf("a b: "); scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++) if(isStrong(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
