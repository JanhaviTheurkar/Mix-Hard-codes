/* 64. Generate AP and GP first n terms */
#include <stdio.h>
int main(){
    int n; printf("n: "); scanf("%d",&n);
    int a1, d; printf("AP a1 d: "); scanf("%d%d",&a1,&d);
    printf("AP: ");
    for(int i=0;i<n;i++) printf("%d ", a1 + i*d);
    printf("\nGP a1 r: ");
    long long g1; int r; scanf("%lld%d",&g1,&r);
    for(int i=0;i<n;i++){
        long long term = 1;
        for(int j=0;j<i;j++) term *= r;
        printf("%lld ", g1 * term);
    }
    printf("\n");
    return 0;
}
