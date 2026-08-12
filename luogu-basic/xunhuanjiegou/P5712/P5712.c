#include <stdio.h>
int main()
{
    int n;
    int count=1;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            if(j!=i){
                printf("%02d",count);
                count++;
            }else {
                printf("%02d\n",count);
                count++;
            }
        }
    }
    return 0;

}