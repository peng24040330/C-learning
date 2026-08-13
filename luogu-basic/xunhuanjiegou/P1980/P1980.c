#include <stdio.h>
int main ()
{
    int n,x;
    int count=0;
    int t;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        int j=i;
        while(j!=0){
            t=j%10;
            if(t==x){
                count++;
            }
            j/=10;
        }
    }
    printf("%d",count);

    return 0;

}