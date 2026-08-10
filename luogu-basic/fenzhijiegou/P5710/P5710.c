#include <stdio.h>
int main()
{
    int x;
    int flag1,flag2;
    scanf("%d",&x);
    flag1=x%2==0;
    flag2=(x>4)&&(x<=12);
    printf("%d %d %d %d",flag1&&flag2,flag1||flag2,(flag1&&!flag2)||(!flag1&&flag2),!flag1&&!flag2);

    return 0;


}