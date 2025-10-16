/* 51. Happy number check */
#include <stdio.h>
int next(int n){ int s=0; while(n){ int d=n%10; s+=d*d; n/=10; } return s; }
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    int slow=n, fast=n;
    do{
        slow = next(slow);
        fast = next(next(fast));
    } while(slow!=fast);
    if(slow==1) printf("%d is Happy\n", n);
    else printf("%d is not Happy\n", n);
    return 0;
}
