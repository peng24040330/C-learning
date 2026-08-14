#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    double a;
    double b=(1+sqrt(5))/2;
    double c=(1-sqrt(5))/2;
    double t1=0;
    double t2=0;
    if(n==0){
        printf("0.00");
    }else{
    for (int i=1;i<=n;i++){
        if(i==1){
            t1=b;
            t2=c;
        }else{
        t1*=b;
        t2*=c;
    }
    }
    double fn=(t1-t2)/sqrt(5);
    printf("%.2f",fn);
    }
    return 0;
}