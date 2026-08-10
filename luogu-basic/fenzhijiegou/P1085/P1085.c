#include <stdio.h>
int main()
{
    int a,b;
    int flag=0,day,max;
    for(int i=0;i<7;i++){
        scanf("%d %d",&a,&b);
        if(a+b>8){
            if(a+b>max){
                max=a+b;
                day=i+1;
            }
            flag=1;
        }
    }
    if (flag==0){
        printf("0");
    }else{
        printf("%d",day);
    }

    return 0;

}