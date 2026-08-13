#include <stdio.h>
int isprime(int n){
    if(n<2){return 0;}
    if(n==2){return 1;}
    if(n%2==0){return 0;}
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){return 0;}
    }return 1;
}

int is_huiwen(int n){
    int num=n;
    int ans=0;
    while(num!=0){
        ans*=10;
        ans+=num%10;
        num/=10;
    }
    if(ans==n){
        return 1;
    }else{return 0;}
}

int main()
{   int a,b;
    scanf("%d %d",&a,&b);
    for (int i=a;i<=b;i++){
        if(isprime(i)&&is_huiwen(i)){
            printf("%d\n",i);
        }
    }

    return 0;
}