/* 69. Generate sequence 1,2,4,7,11,16,... (difference increases by 1) */
#include <stdio.h>
int main(){
    int n; printf("n: "); scanf("%d",&n);
    int term=1, diff=1;
    for(int i=1;i<=n;i++){
        printf("%d ", term);
        diff++;
        term += diff-1;
    }
    printf("\n");
    return 0;
}
