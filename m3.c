/* 3. Number palindrome (without strings) */
#include <stdio.h>
int main(){
    int n, t, rev=0, d;
    printf("Enter number: ");
    scanf("%d",&n);
    t = n;
    while(t){
        d = t%10;
        rev = rev*10 + d;
        t/=10;
    }
    if(rev==n) printf("%d is palindrome\n",n);
    else printf("%d is not palindrome\n",n);
    return 0;
}
