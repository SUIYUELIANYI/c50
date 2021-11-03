#include<stdio.h>//Accepted
int main(){
    int n,num1=0,num2=0,a,b,c,d;
    scanf("%d",&n);
    while(n--){
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if ((a+c)==b&&(a+c)!=d)
	    num2++;
	else if((a+c)!=b&&(a+c)==d)
	    num1++;
    }
    printf("%d %d",num1,num2);
    return 0;
}
        
	
