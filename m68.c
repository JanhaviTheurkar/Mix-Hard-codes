/* 68. Count numbers between 1..N divisible by both 3 and 5 */
#include <stdio.h>
int main(){
    int N; printf("N: "); scanf("%d",&N);
    int cnt = N/15;
    printf("Count divisible by both 3 and 5: %d\n", cnt);
    return 0;
}
