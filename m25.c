/* 25. Pascal's triangle using combinations (nCr iterative) */
#include <stdio.h>
long long nCr(int n,int r){
    long long res=1;
    if(r>n-r) r=n-r;
    for(int i=0;i<r;i++){
        res = res*(n-i)/(i+1);
    }
    return res;
}
int main(){
    int rows; printf("Rows: "); scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int s=0;s<rows-i-1;s++) printf(" ");
        for(int j=0;j<=i;j++) printf("%lld ", nCr(i,j));
        printf("\n");
    }
    return 0;
}
