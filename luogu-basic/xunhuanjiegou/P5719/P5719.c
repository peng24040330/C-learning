#include <stdio.h>
int main()
{
    int sum1=0,count1=0,sum2=0,count2=0;
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=1;i<=n;i++){
        if(i%k==0){
            sum1+=i;
            count1++;
        }else{
            sum2+=i;
            count2++;
        }
    }
    printf("%.1f %.1f",(double)sum1/count1,(double)sum2/count2);

}
