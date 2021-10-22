#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int i,j;
    int n[10]={0};//记录出现次数
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
       for(j=0;j<10;j++)//和10个数进行比较   
         {
             if(j==s[i]-'0')//n[i]-'0'从字符型转为整型
             {
                 n[j]++;
                 break;
             }
         }
    }     
    for(i=0;i<10;i++)
    {
        if (n[i]!=0)
            printf("%d:%d\n",i,n[i]);
    }
     return 0;
 }
