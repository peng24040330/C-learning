#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int grade[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int m;
            scanf("%d",&m);
            grade[i][j]=m;
        }
    }
    int sum1=0,sum2=0;
    int count=0;
    for(int i=0;i<=n-2;i++){
        sum1=grade[i][0]+grade[i][1]+grade[i][2];
        for(int j=i+1;j<n;j++){
            sum2=grade[j][0]+grade[j][1]+grade[j][2];
            if(abs(grade[i][0]-grade[j][0])<=5&&abs(grade[i][1]-grade[j][1])<=5&&abs(grade[i][2]-grade[j][2])<=5&&abs(sum1-sum2)<=10){
                count++;
            }
        }
    }
    printf("%d",count);

    return 0;
}