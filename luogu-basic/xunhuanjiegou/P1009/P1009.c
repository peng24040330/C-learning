#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int m=1;
    int sum=0;
    for (int i=n;i>0;i--){
        m=1;
        for(int j=i;j>=1;j--){
            m*=j;
        }
        sum+=m;
    }
    printf("%d",sum);

    return 0;
    
}