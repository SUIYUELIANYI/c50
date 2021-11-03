#include<ctype.h>//大小写转化的库//第3个测试点错误
#include<stdio.h>
#include<string.h>
void str_tolower(char s[])//大写转小写的函数
{
    int i=0;
    while(s[i]){
    	s[i]=tolower(s[i]);
    	i++;
    }
}

void str_dcount(const char s[],int cnt[])//将字符串中的小写字母保存在cnt数组中
{
    int i=0;
    while(s[i]){
        if(s[i]>='a'&&s[i]<='z'){
	    cnt[s[i]-'a']++;
	 }
	    i++;
	     
    }
}
int main(void)
{   
    char s[1001];
    int dcnt[26]={0};
    int max=0;//记录频率
    char letter='a';//记录频率最高的字母
    scanf("%[^'\n']",s);
    str_tolower(s);
    str_dcount(s,dcnt);
    for(int i=0;i<26;i++){
	if(dcnt[i]>max){
	    max=dcnt[i];
	    letter='a'+i;
	}
    }
    printf("%c %d",letter,max);
    return 0;
}
