/* 6. Triangle type (scalene/isosceles/equilateral) */
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter sides a b c: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        if(a==b && b==c) printf("Equilateral\n");
        else if(a==b || b==c || c==a) printf("Isosceles\n");
        else printf("Scalene\n");
    } else printf("Not a valid triangle\n");
    return 0;
}
