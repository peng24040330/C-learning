#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int k=1;
    int x;
    for(x=100;x>0;x--){
        if((n-364*x)%1092==0&&(n-364*x)/1092>0){
            k=(n-364*x)/1092;
            break;
        }

    }
    printf("%d\n%d",x,k);

    return 0;

}