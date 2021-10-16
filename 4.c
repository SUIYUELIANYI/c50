#include<stdio.h>
int main(){
    int a,b,c;//a为较大数，b为较小数
    scanf("%d%d",&a,&b);
    if(a<b){
    c=a;a=b;b=c;
    }
    c=a%b;//如果c=0则最大公约数为b,即最后输出除数
    while(c!=0){//while语句中为真则继续循环
    a=b;b=c;c=a%b;
    }
    printf("%d",b);
    return 0;
}
