/* 44. Reverse Fibonacci sequence (generate n then print backwards) */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n; printf("n: "); scanf("%d",&n);
    if(n<=0) return 0;
    int *a = malloc(sizeof(int)*n);
    a[0]=0; if(n>1) a[1]=1;
    for(int i=2;i<n;i++) a[i]=a[i-1]+a[i-2];
    for(int i=n-1;i>=0;i--) printf("%d ", a[i]);
    printf("\n");
    free(a);
    return 0;
}
