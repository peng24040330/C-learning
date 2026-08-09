#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    int time_bigin,time_finish,time_cost;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    time_bigin=a*60+b;
    time_finish=c*60+d;
    time_cost=time_finish-time_bigin;
    printf("%d %d",time_cost/60,time_cost%60);

    return 0;
}