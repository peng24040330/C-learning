#include <stdio.h>
int main(){
    int w,x,h;
    scanf("%d %d %d",&w,&x,&h);
    int v[21][21][21];
    for(int i=1;i<=w;i++){
        for (int j=1;j<=x;j++){
            for(int m=1;m<=h;m++){
                v[i][j][m]=1;
            }
        }
    }
    int q;
    scanf("%d",&q);
    int x1,y1,z1;
    int x2,y2,z2;
    for(int cut=0;cut<q;cut++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&z1,&x2,&y2,&z2);
            for (int j=x1;j<=x2;j++){
                for(int m=y1;m<=y2;m++){
                    for(int n=z1;n<=z2;n++){
                        v[j][m][n]=0;
                    }
                }
            }
    }
    int count=0;
    for(int i=1;i<=w;i++){
        for (int j=1;j<=x;j++){
            for(int m=1;m<=h;m++){
                count+=v[i][j][m];
            }
        }
    }
    printf("%d",count);

    return 0;
}