#include<stdio.h>//Accepted
int main(){
    int n;
    scanf("%d",&n);
    while(n--)
    {
	int a,b;
	scanf("%d%d",&a,&b);
	if(a%b==0)
	    printf("YES\n");
	else
	    printf("NO\n");
    }	
    return 0;
}    
