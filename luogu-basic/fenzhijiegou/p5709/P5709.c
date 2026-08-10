#include <stdio.h>
int main()
{
    int m,t,s,l;
    scanf("%d %d %d",&m,&t,&s);
    if (t==0){
        l=0;
    }else{
        l=m-(s+t-1)/t;
        if(l<0){
            l=0;
        }
    }
    printf("%d",l);

    return 0;
}