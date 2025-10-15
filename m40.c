/* 40. Print all factors of a number */
#include <stdio.h>
int main(){
    int n; printf("Enter: "); scanf("%d",&n);
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            printf("%d ", i);
            if(i != n/i) printf("%d ", n/i);
        }
    }
    printf("\n");
    return 0;
}
