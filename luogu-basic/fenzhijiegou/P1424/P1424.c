#include <stdio.h>
int main()
#define week 7
{
    int x,n;
    int dist=0;
    int list[week]={250,250,250,250,250,0,0};
    scanf("%d %d",&x,&n);
    x=x-1;
    while(n>0){
        n--;
        dist+=list[x];
        x=(x+1)%7;
    }
    
    printf("%d",dist);
    return 0;
}