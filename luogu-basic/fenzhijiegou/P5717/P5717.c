#include <stdio.h>
int main()
{
    int a,b,c;
    int flag=0;
    scanf("%d %d %d",&a,&b,&c);
    int t;
    //排序
    if(a>b){t=a,a=b,b=t;}
    if(b>c){t=b,b=c,c=t;}
    if(a>b){t=a,a=b,b=t;}
    //判断
    if(a+b<=c){
        printf("Not triangle");
    }else{
        flag=1;
        if (a*a+b*b==c*c){
            printf("Right triangle\n");
        }else if (a*a+b*b>c*c){
            printf("Acute triangle\n");
        }else{
            printf("Obtuse triangle\n");
        }
    }
    if(flag){
        if(a==b||a==c||b==c){
            printf("Isosceles triangle\n");
        }
        if(a==b&&a==c&&b==c){
            printf("Equilateral triangle");
        }
    }

    return 0;

}