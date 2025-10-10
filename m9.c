/* 9. Simple calculator using if-else */
#include <stdio.h>
int main(){
    char op;
    double x,y;
    printf("Enter op (+-*/): ");
    scanf(" %c",&op);
    printf("Enter two nums: ");
    scanf("%lf%lf",&x,&y);
    if(op=='+') printf("%.2f\n", x+y);
    else if(op=='-') printf("%.2f\n", x-y);
    else if(op=='*') printf("%.2f\n", x*y);
    else if(op=='/') {
        if(y!=0) printf("%.2f\n", x/y);
        else printf("Division by zero\n");
    } else printf("Invalid op\n");
    return 0;
}
