#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1][7];
    int b[8]={0};
    for(int i=0;i<=n;i++){
        for(int j=0;j<7;j++){
            int num;
            scanf("%d",&num);
            a[i][j]=num;
        }
    }
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=0;j<7;j++){
            for(int m=0;m<7;m++){
                if(a[0][j]==a[i][m]){
                    count++;
                }
            }
        }
        b[count]+=1;
    }
    for(int i=7;i>0;i--){
        printf("%d ",b[i]);
    }

    return 0;
}