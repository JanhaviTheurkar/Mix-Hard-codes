/* 11. Fibonacci up to n terms */
#include <stdio.h>
int main(){
    int n,i;
    printf("n: "); scanf("%d",&n);
    int a=0,b=1;
    if(n>=1) printf("%d ",a);
    if(n>=2) printf("%d ",b);
    for(i=3;i<=n;i++){
        int c=a+b;
        printf("%d ",c);
        a=b; b=c;
    }
    printf("\n");
    return 0;
}
