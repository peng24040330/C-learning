#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    int min,max;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        if(i==1){
            min=t;
            max=t;
            sum+=t;
        }else{
            if(t<min){
                min=t;
                sum+=t;
            }else if(t>max){
                max=t;
                sum+=t;
            }
            else{
                sum+=t;
            }
        }
    }
    double aver;
    aver=(sum-min-max)/(n-2.0);
    printf("%.2f",aver);

    return 0;
}