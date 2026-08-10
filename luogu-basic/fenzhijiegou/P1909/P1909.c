#include <stdio.h>
int main()
{
    int number,price,need,p,cost,cost_min;
    scanf("%d",&need);
    for(int i=0;i<3;i++){
        scanf("%d %d",&number,&price);
        p=(need+number-1)/number;
        cost=p*price;
        if(i==0){
            cost_min=p*price;
        }
        if(cost<cost_min){
            cost_min=cost;
        }
    }
    printf("%d",cost_min);

    return 0;

}