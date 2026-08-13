#include <stdio.h>
int main ()
{
    int k,n=0,m=0;
    scanf("%d",&k);
    int day=0;
    int money=0;
    while (day<k){
        day++;
        if(day>n){
            m++;
            n+=m;
        }
        money+=m;
    }
    printf("%d",money);

    return 0;
}