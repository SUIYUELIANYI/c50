#include<stdio.h>//Accepted
int main(){
    int a,da,b,db;
    scanf("%d%d%d%d",&a,&da,&b,&db);
    int sum1=0,sum2=0;
    while(a>0)
    {
	if(a%10==da)
	    sum1=sum1*10+da;
	a=a/10;
    }
    while(b>0)
    {
        if(b%10==db)
            sum2=sum2*10+db;
        b=b/10;
    }
    printf("%d",sum1+sum2);
    return 0;
}

