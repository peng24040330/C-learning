#include <stdio.h>
int main()
{
    int a;
    int count=1;
    scanf("%d",&a);
    while(a!=1){
        a/=2;
        count++;
    }
    printf("%d",count);

    return 0;
}