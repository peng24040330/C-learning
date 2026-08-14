#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[100]={0};
    int b[100]={0};
    for (int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
        a[i]=t;
        int count=0;
        for(int j=i-1;j>=0;j--){
            if (a[j]<a[i]){
               count++;
            }
            b[i]=count;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",b[i]);
    }

    return 0;
}