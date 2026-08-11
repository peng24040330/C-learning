#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int number=rand()%98+1;
    int count=0;
    int a;
    printf("%d\n",number);//调试用
    do{
        scanf("%d",&a);
        count++;
        if(a>number){
            printf("big\n");            
        }else if(a<number){
            printf("small\n");
        }else if(a==number){
            printf("nice\n");
            break;
        }
      }while(a!=number);
      printf("%d",count);

    return 0;

}
