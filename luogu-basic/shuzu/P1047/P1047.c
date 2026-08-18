#include<stdio.h>
int main(){
    int l,n;
    scanf("%d %d",&l,&n);
    int a[l+1];
    for(int i=0;i<=l;i++){
        a[i]=1;
    }
    int num=0;
    for(;n>0;n--){
        int begin,end;
        scanf("%d %d",&begin,&end);
        int i=end-begin+1;
        int j=begin;
        for(;i>0;i--){
            a[j]=0;
            j++;
        }
    }
    for(int i=0;i<=l;i++){
        num+=a[i];
    }

    printf("%d",num);

    return 0;
}