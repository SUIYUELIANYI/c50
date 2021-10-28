#include<stdio.h>//Accepted
#include<string.h>

int main(void)
{
    int m,len,sum,k1,k2,k3,k4,i;
    char s[256], s1[]="~!@#$%^", *p;//使用指针
    scanf("%d",&m);
    while(m--){
	sum=0;
	k1=k2=k3=k4=0;
	scanf("%s",s);
        len=strlen(s);
        if(8<=len&&len<=16){
	    for(i=0;i<len;i++){
		if('A'<=s[i]&&s[i]<='Z')
		    k1=1;
                if('a'<=s[i]&&s[i]<='z')
		    k2=1;
		if('0'<=s[i]&&s[i]<='9')
		    k3=1;
		p=s1;
		while(*p){
		    if(s[i]==*p){
			k4=1;
			break;
		    }
		    p++;
		}
		sum=k1+k2+k3+k4;
		if(sum>=3)
		    break;
	    }	    
	} 
	if(sum>=3)
	    printf("YES\n");
	else
	    printf("NO\n");
    }
    return 0;
}	
