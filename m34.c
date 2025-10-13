/* 34. Decimal to binary conversion using while */
#include <stdio.h>
int main(){
    unsigned int n; printf("Enter decimal: "); scanf("%u",&n);
    if(n==0){ printf("0\n"); return 0; }
    int bits[32], idx=0;
    while(n){
        bits[idx++] = n%2;
        n/=2;
    }
    for(int i=idx-1;i>=0;i--) printf("%d", bits[i]);
    printf("\n");
    return 0;
}
