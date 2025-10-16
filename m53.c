/* 53. Harshad (Niven) number - divisible by sum of its digits */
#include <stdio.h>
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    int t=n, sum=0;
    while(t){ sum += t%10; t/=10; }
    if(sum != 0 && n%sum==0) printf("%d is Harshad\n", n);
    else printf("Not Harshad\n");
    return 0;
}
