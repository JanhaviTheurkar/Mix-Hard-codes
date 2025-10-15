/* 39. HCF by subtraction (while) */
#include <stdio.h>
int main(){
    int a,b; printf("Enter a b: "); scanf("%d%d",&a,&b);
    if(a==0) { printf("HCF=%d\n", b); return 0; }
    if(b==0) { printf("HCF=%d\n", a); return 0; }
    a = a>0? a: -a; b = b>0? b: -b;
    while(a!=b){
        if(a>b) a -= b; else b -= a;
    }
    printf("HCF=%d\n", a);
    return 0;
}
