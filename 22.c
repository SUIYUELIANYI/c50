#include<stdio.h>
int main(){
    int t1,t2,t;
    scanf("%d%d",&t1,&t2);
    t=(t2-t1+50)/100;//通过加50实现四舍五入
    printf("%02d:%02d:%02d\n",t/3600,t%3600/60,t%60);//时，分，秒,相当于60进制取整取余
    return 0;
}

