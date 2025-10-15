/* 43. Armstrong numbers in a range */
#include <stdio.h>
#include <math.h>
int digits(long long x){
    int c=0; while(x){ c++; x/=10; } return c;
}
int main(){
    int a,b; printf("Range a b: "); scanf("%d%d",&a,&b);
    for(int n=a;n<=b;n++){
        int d = digits(n);
        long long t=n, sum=0;
        while(t){ sum += (int)pow(t%10, d); t/=10; }
        if(sum==n) printf("%d ", n);
    }
    printf("\n");
    return 0;
}
