#include<stdio.h>
int main(){
    int y,m,d;//年月日
    int sum=0;//第几天(注意最好定义时就赋初值,不然结果不对）
    scanf("%d/%d/%d",&y,&m,&d);
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};//每个月份的天数
    if ((y%4==0&&y%100!=0)||(y%400==0)) a[1]=29;
    for(int i=0;i<m-1;i++){
        sum+=a[i];
    }
    sum+=d;
    printf("%d\n",sum);
    return 0;
}   
