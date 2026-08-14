#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int max=1;
    int count=1;
    int t1,t2;
    for(int i=n;i>0;i--){
        
        scanf("%d",&t2);
        if(i==n){
            t1=t2;
        }else{
            if(t2==t1+1){
                count++;
                if(count>max){
                    max=count;
                }
                t1=t2;
            }else{
                count=1;
                t1=t2;
            }
        }

    }
    printf("%d",max);

    return 0;
}