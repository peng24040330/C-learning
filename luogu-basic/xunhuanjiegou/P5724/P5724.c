#include <stdio.h>
int main()
{
    int n;
    int max;
    int min;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        int t;
        scanf("%d",&t);
        if(i==n){
            max=t;
            min=t;
        }else if(t>max){
            max=t;
        }else if(t<min){
            min=t;
        }
    }
    printf("%d",max-min);

    return 0;
}