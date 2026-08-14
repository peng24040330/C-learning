#include <stdio.h>
int main(){
    int m_save=0,m_left=0,m_cost=0;
    const int m_give=300;
    int flag=1,month;
    for(int i=1;i<=12;i++){
        scanf("%d",&m_cost);
        m_left+=m_give;
        if(m_left<m_cost){
            month=i;
            flag=0;
        }else{
            m_left-=m_cost;
            m_save+=m_left/100*100;
            m_left=m_left%100;
        }
    }
    if(flag){
        printf("%.0f",m_save*1.2+m_left);
    }else{
        printf("%d",-month);
    }

    return 0;
}