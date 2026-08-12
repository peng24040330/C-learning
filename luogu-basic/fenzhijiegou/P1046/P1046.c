#include <stdio.h>
int main()
{
    int r1,r_total;
    int r2=30;
    int count=0;
    int height[10];
    for(int i=0;i<10;i++){
        scanf("%d",&height[i]);
    }
    scanf("%d",&r1);
    r_total=r1+r2;
    for(int i=0;i<10;i++){
        if(r_total>=height[i]){
            count++;
        }
    }
    printf("%d",count);
    
    return 0;
}