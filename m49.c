/* 49. Palindromic numbers in a range */
#include <stdio.h>
int isPal(int n){
    int t=n, rev=0;
    while(t){ rev=rev*10 + t%10; t/=10; }
    return rev==n;
}
int main(){
    int a,b; printf("a b: "); scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++) if(isPal(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
