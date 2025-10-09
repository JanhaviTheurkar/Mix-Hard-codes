/* 4. Armstrong number check (3-digit general) */
#include <stdio.h>
#include <math.h>
int main(){
    int n,t, sum=0, d, digits=0;
    printf("Enter number: ");
    scanf("%d",&n);
    t=n;
    while(t){ digits++; t/=10; }
    t=n;
    while(t){
        d=t%10;
        sum += (int)pow(d,digits);
        t/=10;
    }
    if(sum==n) printf("%d is Armstrong\n",n);
    else printf("%d is not Armstrong\n",n);
    return 0;
}
