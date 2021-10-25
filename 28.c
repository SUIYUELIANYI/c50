#include<stdio.h>//Accepted
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	char str[1000];
	while(n--){
	    char a;
	    int sum=0;
		scanf("%s",str);
		for(int j=0;j<strlen(str);j++){
		    if(str[j]<='9'&&str[j]>='0')//注意是大于0不是大于1
		        sum++;
		}      
		printf("%d\n",sum);	
	}
	return 0;
}	
