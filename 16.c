#include<stdio.h>//最后提交了还是Presentation Error
#include<string.h>
int main(){
   int n,x,j,a=0,e=0,i=0,o=0,u=0;
   scanf("%d",&n);
   getchar();//接收暗含的换行符
   char s[n][100];
   for(x=0;x<n;x++){
       //scanf("%[^\n]",s[x]);我们发现用scanf无法接收有空格的字符串
       gets(s[x]);//gcc好像会报错gets
      }
    for(x=0;x<n;x++){
        for(j=0;j<strlen(s[x]);j++){
        if(s[x][j]=='a') a++;
        if(s[x][j]=='e') e++;
        if(s[x][j]=='i') i++;
        if(s[x][j]=='o') o++;
        if(s[x][j]=='u') u++;
       }
       printf("a:%d\n",a);
       printf("e:%d\n",e);
       printf("i:%d\n",i);
       printf("o:%d\n",o);
       printf("u:%d\n",u);
       a=0,e=0,i=0,o=0,u=0;
       if (x!=0) 
       printf("\n");
      }    
    return 0;
} 

