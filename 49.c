#include<stdio.h>//Accepted(删除重复字符难)
#include<string.h>
#include<ctype.h>//大小写转换
void str_toupper(char s[])
{
    int i=0;
    while(s[i]){
        s[i]=toupper(s[i]);
        i++;
    }
}
char * str_uniq(char* str)//删除重复字符
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(str[i] != '\0')
	{
		j = i + 1;
		while(str[j] != '\0')
		{
			if(str[i] == str[j])
			{
				k = j;
				while(str[k] != '\0')
				{
					str[k] = str[k+1];
					k++;
				}
				str[k] = '\0';
				j--;
			}
			j++;
		}
		i++;
	}
	return str;
}

int main(){
    char x[81];
    char y[81];
    char z[81];//记录重复字符
    int a,b;//记录长度
    int i,j,n=0,key=0;//i,j用于循环，n作为z数组的下标，key作为标记来指示每一次内循环的起点
    scanf("%s",x);
    scanf("%s",y);
    a=strlen(x);
    b=strlen(y);
    for(j=0;j<b;j++){
        for(i=key;i<a;i++){
            if (x[i]!=y[j])
                z[n++]=x[i];
            else {
                key=i+1;
                break;
            }    
        }
    }//这里我们将每一个y数组的字符对应的z的字符前的字符存储到z中但并没有存储y数组结尾字符对应x的字符之后的
    for(i=key;i<a;i++)
        z[n++]=x[i];//加入这个循环后z数组目前的存储就从错误的7TiitU变成了正确的7Tiitt
    //我们先得到有重复且有小写的数组z,接下来对z数组进行处理
    str_toupper(z);//转为大写
    str_uniq(z);
    printf("%s\n",z);
    //printf("%d %d",a,b);
    return 0;
}
