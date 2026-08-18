#include <stdio.h>
int main(){
    int count=0;
    int a[100]={0};
    int i;
while(scanf("%d",&i)==1&&i!=0){
    a[count]=i;
    count++;
}
while(count>0){
    count--;
    printf("%d ",a[count]);
}

return 0;
}