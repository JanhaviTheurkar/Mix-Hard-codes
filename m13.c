/* 13. Reverse a number using for (simulate for with division) */
#include <stdio.h>
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    int t=n, rev=0;
    for(; t!=0; t/=10){
        rev = rev*10 + t%10;
    }
    printf("Reversed: %d\n", rev);
    return 0;
}
