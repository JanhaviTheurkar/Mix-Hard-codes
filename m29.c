/* 29. Alphabet pattern A, AB, ABC... */
#include <stdio.h>
int main(){
    int n; printf("Rows: "); scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++) printf("%c", 'A'+j);
        printf("\n");
    }
    return 0;
}
