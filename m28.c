/* 28. Number pyramid pattern (centered) */
#include <stdio.h>
int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int s=0;s<n-i;s++) printf(" ");
        for(int k=1;k<=i;k++) printf("%d ", k);
        printf("\n");
    }
    return 0;
}
