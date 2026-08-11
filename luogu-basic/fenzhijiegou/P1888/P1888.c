#include <stdio.h>
//求最大公约数
int gcd(int m,int n){
        while(n!=0){
            int t=m%n;
            m=n;
            n=t;
        }
        return m;
    }
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int t;
    if(a>b){t=a,a=b,b=t;}
    if(b>c){t=b,b=c,c=t;}
    if(a>b){t=a,a=b,b=t;}
    int g=gcd(c,a);
    printf("%d/%d",a/g,c/g);

    return 0;
}