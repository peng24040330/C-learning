#include <stdio.h>
int main(){
    double step=2;
    double s;
    scanf("%lf",&s);
    double dist=0;
    int count=0;
    while(dist<s){
        dist+=step;
        count++;
        step*=0.98;

    }
    printf("%d",count);

    return 0;
}