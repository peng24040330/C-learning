#include <stdio.h>
int main()
{
    int time=8*60;
    int time_cost,s,v;
    scanf("%d %d",&s,&v);
    time_cost=(s+v-1)/v+10;
    if (time_cost<=time) printf("%02d:%02d",(time-time_cost)/60,(time-time_cost)%60);
    else {
        time+=24*60;
        printf("%02d:%02d",(time-time_cost)/60,(time-time_cost)%60);
         }
         
    return 0;
}