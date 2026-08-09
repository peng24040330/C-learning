#include <stdio.h>
int main()
{
    double a;
    int b;
    scanf("%lf",&a);
    b=a*10;
    b=b%10*1000+b/10%10*100+b/100%10*10+b/1000;
    a=b/1000.0;
    printf("%.3f",a);
    
    return 0;
}