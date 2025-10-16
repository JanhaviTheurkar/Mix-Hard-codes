/* 50. Generate series 2,6,12,20,30,... (n terms) */
#include <stdio.h>
int main(){
    int n; printf("n: "); scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ", i*(i+1));
    }
    printf("\n");
    return 0;
}
