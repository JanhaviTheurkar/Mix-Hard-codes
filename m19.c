/* 19. Perfect numbers between 1 and 1000 */
#include <stdio.h>
int main(){
    for(int n=2; n<=1000; n++){
        int sum=1;
        for(int d=2; d*d<=n; d++){
            if(n%d==0){
                sum+=d;
                if(d != n/d) sum += n/d;
            }
        }
        if(n==sum) printf("%d is perfect\n", n);
    }
    return 0;
}
