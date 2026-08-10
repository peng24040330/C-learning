#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d",&t);
    switch(t){
        case 1:
            printf("I love Luogu!");
            break;
        case 2:
            printf("6 4");
            break;
        case 3:
            printf("3\n12\n2\n");
            break;
        case 4:
            printf("%.6g",500/3.0);
            break;
        case 5:
            printf("%d",480/32);
            break;
        case 6:
            printf("%.6g",sqrt(117));
            break;
        case 7:
            printf("110\n90\n0\n");
            break;
        case 8:
            printf("%.6g\n%.6g\n%.6g\n",2*3.141593*5,3.141593*25,4/3.0*3.141593*125);
            break;
        case 9:
            printf("%d",22);
            break;
        case 10:
            printf("%d",9);
            break;
        case 11:
            printf("%.6g",100/3.0);
            break;
        case 12:
            printf("%d\n%c\n",'M'-'A'+1,'A'+17);
            break;
        case 13:
            printf("%d",(int)cbrt(4/3.0*3.141593*64+4/3.0*3.141593*1000));
            break;
        case 14:
            printf("%d",50);
            break;
    }

    return 0;
}
