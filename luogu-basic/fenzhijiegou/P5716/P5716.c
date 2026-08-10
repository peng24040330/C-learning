#include <stdio.h>
int main()
{
    int year,month;
    int flag,day;
    scanf("%d %d",&year,&month);
    if(year%400==0){
        flag=1;
    }else if(year%100!=0&&year%4==0){
        flag=1;
    }else {
        flag=0;
    }
    switch(month){
        
        case 2:
            if(flag){
                day=29;
            }else{
                day=28;
            }
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 12:
            day=31;
            break;
        default:
            day=30;
            break;
    }

    printf("%d",day);
    
    return 0;
}