/* 41. Perfect number check */
#include <stdio.h>
int main(){
    int n; printf("Enter n: "); scanf("%d",&n);
    if(n<=1){ printf("Not perfect\n"); return 0; }
    int sum=1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){ sum += i; if(i != n/i) sum += n/i; }
    }
    if(sum==n) printf("%d is Perfect\n", n); else printf("Not perfect\n");
    return 0;
}
