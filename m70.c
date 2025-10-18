/* 70. Print number pyramid 1,12,123,... using loops */
#include <stdio.h>
int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int val=0;
        for(int d=1;d<=i;d++){
            val = val*10 + d;
        }
        printf("%d\n", val);
    }
    return 0;
}
