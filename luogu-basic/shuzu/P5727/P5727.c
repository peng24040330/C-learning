#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    int a[200]={0};
    a[count]=n;
    count++;
    while (n!=1){
        if(n%2==1){
            n=3*n+1;
        }else{
            n/=2;
    }
        a[count]=n;
        count++;
    }
    while(count>0){
        count--;
        printf("%d ",a[count]);
    }


    return 0;
}