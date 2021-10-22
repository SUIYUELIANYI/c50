#include<stdio.h>//自己编译应该没问题，但系统改的是错误的
#include<string.h>
int main(){
    char s[101];
    scanf("%s",s);
    int i,sum;
    for(i=0;i<strlen(s);i++)
        sum+=(s[i]-'0');
    int t=sum,p=0;
    while(t!=0)//计算sum的位数
    {
        p++;
        t/=10;
    }
    int wei[p];
    for(i=0;i<p;i++)
    {
        wei[p-i-1]=sum%10;
        sum=sum/10;
    }
    for(i=0;i<p;i++)
    {
        if (wei[i]==0) printf("ling");
        if (wei[i]==1) printf("yi");
        if (wei[i]==2) printf("er");
        if (wei[i]==3) printf("san");
        if (wei[i]==4) printf("si");
        if (wei[i]==5) printf("wu");
        if (wei[i]==6) printf("liu");
        if (wei[i]==7) printf("qi");
        if (wei[i]==8) printf("ba");
        if (wei[i]==9) printf("jiu");
        if(i!=p-1) printf(" ");
     }         
    return 0;
}
        
