#include<stdio.h>//Accepted
void put_chars(char ch,int n)
{
    while(n--)
        putchar(ch);
}
int main(){
    int n,m;//m为列
    char c;
    scanf("%d %c",&n,&c);
    m=(int)(n*0.5+0.5);//四舍五入
    for(int i=1;i<=m;i++){
	if(i==1||i==m)
	{
	    put_chars(c,n);
	    printf("\n");
	    
	}    
	else{
	       putchar(c);
	       put_chars(' ',n-2);
	       putchar(c);
	       printf("\n");
	    }
     }
     return 0;
}
