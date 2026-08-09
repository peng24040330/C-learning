#include <stdio.h>
int main()
{
    const int water_need=20*1000;
    int h,r,n;
    double v;
    scanf("%d %d",&h,&r);
    v=3.14*r*r*h;
    n=(water_need+v-1)/v;
    printf("%d",n);

    return 0;
}