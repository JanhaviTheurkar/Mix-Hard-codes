/* 12. Factorial using for loop */
#include <stdio.h>
int main(){
    int n; unsigned long long fact=1;
    printf("Enter n: "); scanf("%d",&n);
    if(n<0) printf("Undefined\n");
    else {
        for(int i=1;i<=n;i++) fact*=i;
        printf("Factorial: %llu\n", fact);
    }
    return 0;
}
