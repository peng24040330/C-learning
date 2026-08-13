#include <stdio.h>
int main()
{
    int k;
    scanf("%d",&k);
    double sum=0;
    int t=0;
    while(sum<=k){
        t++;
        double a=1.0/t;
        sum+=a;
    }
    printf("%d",t);

    return 0;
    
}