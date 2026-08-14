#include <stdio.h>
int main()
{
    int n;
    int p;
    scanf("%d",&n);
    for (int i=2;i<n;i++){
        if(n%i==0){
            p=n/i;
            break;
        }
    }
    printf("%d",p);

    return 0;
}