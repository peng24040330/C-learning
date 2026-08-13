#include <stdio.h>
int isprime(int n){
    if(n<2){return 0;}
    if(n==2){return 1;}
    if(n%2==0){return 0;}
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int sum=0;
    int count=0;
    int L;
    scanf("%d",&L);
    for(int i=2;sum<=L;i++){
        if(isprime(i)){
            if(sum+i>L){
                printf("%d",count);
                break;
            }else{
                sum+=i;
                printf("%d\n",i);
                count++;
            }
        }
    }

    return 0;
}