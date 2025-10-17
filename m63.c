/* 63. Reverse digits and check palindrome (combined) */
#include <stdio.h>
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    int t=n, rev=0;
    while(t){ rev = rev*10 + t%10; t/=10; }
    if(rev==n) printf("Palindrome\n"); else printf("Not palindrome\n");
    return 0;
}
