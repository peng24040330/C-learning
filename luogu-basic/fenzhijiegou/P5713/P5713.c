#include <stdio.h>
int main()
{
    int n,time_local,time_luogu;
    scanf("%d",&n);
    time_local=5*n;
    time_luogu=11+3*n;
    if(time_local<time_luogu){
        printf("Local");
    }else{
        printf("Luogu");
    }

    return 0;
    
}