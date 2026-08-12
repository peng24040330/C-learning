#include <stdio.h>
int main()
{
    int fact[100]={1};
    int sum[100]={0};
    int n;
    scanf("%d",&n);
    for (int k=n;k>0;k--){
        int fact[100]={1};
        int len=1;
        for(int a=1;a<=k;a++){
            int carry1=0;
            for (int j=0;j<len;j++){
                int n=fact[j]*a+carry1;
                fact[j]=n%10;
                carry1=n/10;
            }
            while (carry1>0){
                fact[len++]=carry1%10;
                carry1/=10;
            }
        }
        //累加到总和
        int carry2=0;
        for (int i=0;i<100;i++){
            int t=sum[i]+fact[i]+carry2;
            sum[i]=t%10;
            carry2=t/10;
        }
    }
    int flag=0;
    for(int i=99;i>=0;i--){
        if(sum[i]!=0&&flag==0){
            flag=1;
        }
        if(flag){
            printf("%d",sum[i]);
        }

    }
}