/* 56. Pascal's triangle using factorial formula */
#include <stdio.h>
long long factll(int n){ long long f=1; for(int i=1;i<=n;i++) f*=i; return f; }
long long nCr(int n,int r){ return factll(n)/(factll(r)*factll(n-r)); }
int main(){
    int rows; printf("Rows: "); scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int s=0;s<rows-i-1;s++) printf(" ");
        for(int j=0;j<=i;j++) printf("%lld ", nCr(i,j));
        printf("\n");
    }
    return 0;
}
