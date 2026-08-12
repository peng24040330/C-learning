#include <stdio.h>
int main()
{
    int a,b,c;
    //排序
    int t;
    char order_1 [4];
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){t=a;a=b;b=t;}
    if(b>c){t=b;b=c;c=t;}
    if(a>b){t=a;a=b;b=t;}
    int order_2[3]={a,b,c};
    scanf("%s",order_1);
    printf("%d %d %d",order_2[order_1[0]-'A'],order_2[order_1[1]-'A'],order_2[order_1[2]-'A']);

    return 0;

}