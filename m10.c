/* 10. Point location (axis or origin) */
#include <stdio.h>
int main(){
    int x,y;
    printf("Enter x y: ");
    scanf("%d%d",&x,&y);
    if(x==0 && y==0) printf("Origin\n");
    else if(x==0) printf("On Y-axis\n");
    else if(y==0) printf("On X-axis\n");
    else printf("In quadrant\n");
    return 0;
}
