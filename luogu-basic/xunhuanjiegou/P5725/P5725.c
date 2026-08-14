#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=1;
    for(int i=1;i<=n*n;i++){
        if(i%n==0){
            printf("%02d\n",t);
            t++;
        }else{
            printf("%02d",t);
            t++;
        }
    }
    t=1;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(j==1){
                printf("\n");
                for(int k=n-i;k>0;k--){
                    printf("  ");
                }
                printf("%02d",t);
                t++;
            }else{
                printf("%02d",t);
                t++;
            }
        }
    }

    return 0;
}