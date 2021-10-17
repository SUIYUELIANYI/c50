#include<stdio.h>
#include<math.h>
#include<stdlib.h>//貌似是abs要用到的库
int main(void){
    int n;//为每行第一个数即长度
    int m;
    int a[101];//存储输入的数
    int i,j;//用于排序
    while (scanf("%d",&n)!=EOF){//while为最外层的循环
        if(n==0)
            break;
        for( i=1;i<=n;i++){//为方便直接从a[1]开始
            scanf("%d",&m);
            a[i]=m;
        }
        for(j=1;j<=n-1;j++){//排序n-1次
            int k=j;//k记录绝对值最大数的下标的位置
            int max=a[k];//记录绝对值最大的数
            for(int i=j;i<=n;i++){
                if(abs(a[i])>abs(max)){
                    max=a[i];
                    k=i;
                }    
            }
            a[k]=a[j];//将被交换的数放到绝对值最大的数的位置上
            a[j]=max;
        }         
        for(i=1;i<n;i++){//输出n-1个数
            if(a[i]!=a[i-1])
                printf("%d ",a[i]);        
        }
        if(a[i]!=a[i-1])    
            printf("%d\n",a[n]);//最后一个数输出后要换行
        else printf("\n");
    }
    return 0;
}
