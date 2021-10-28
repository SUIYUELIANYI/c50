#include<stdio.h>//Accepted
void put_chars(int ch,int n)
{
    while(n-->0)
    	putchar(ch);
}
int main(void){
    int m,b,s,n;
    scanf("%d",&m);
    b=m/100;
    s=(m%100)/10;
    n=m%10;
    put_chars('B',b);
    put_chars('S',s);
    for(int i=1;i<=n;i++)
	printf("%d",i);
    return 0;
}
