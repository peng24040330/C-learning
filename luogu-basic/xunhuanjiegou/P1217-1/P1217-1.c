#include <stdio.h>
int isprime(int n){
    if(n<2){return 0;}
    if(n==2){return 1;}
    if(n%2==0){return 0;}
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){return 0;}
    }return 1;
}
int rev(int i){
    int r=0;
    while(i>0){
        r=r*10+i%10;
        i/=10;
    }
    return r;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    //一位
    for(int i=5;i<=7&&i<=b;i+=2){
        if(i>=a&&i<=b){
            printf("%d\n",i);
        }
    }
    //两位
    if(b>=11&&a<=11){
        printf("11\n");
    }
    //三位
    for(int i=10;i<=99;i++){
            int huiwen=i*10+rev(i/10);
            if(huiwen>=a&&huiwen<=b&&isprime(huiwen)){
                printf("%d\n",huiwen);
            }
    }
    //五位
    for(int i=100;i<=999&&i<=b;i++){
            int huiwen=i*100+rev(i/10);
            if(huiwen>=a&&huiwen<=b&&isprime(huiwen))
                printf("%d\n",huiwen);
    }
    //七位
    for(int i=1000;i<=9999&&i<=b;i++){
            int huiwen=i*1000+rev(i/10);
            if(huiwen>=a&&huiwen<=b&&isprime(huiwen))
                printf("%d\n",huiwen);
    }
    //九位
    for(int i=10000;i<=99999&&i<=b;i++){
            int huiwen=i*10000+rev(i/10);
            if (huiwen>=a&&huiwen<=b&&isprime(huiwen)){
                printf("%d\n",huiwen);
        }
    }

    return 0;
            
}