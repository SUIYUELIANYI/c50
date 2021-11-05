#include<stdio.h>//这题做了挺长时间，一开始想用字符串处理结果输出乱数，以及后面的有序数组如何除去重复数，好在最后还是ac了

int main(){
    int n,i,j,temp=0;
    scanf("%d",&n);
    int b;//存储数字
    int num[10005];//存储每位数字和,如果长度用n表示也会出错
    for(i=0;i<n;i++){//我原来是用数组s来进行的，但输出总是出错，比如21 33 输出了3 70;
	scanf("%d",&b);
	while(b){
	    num[i]+=b%10;
	    b/=10;
	}//求数字每位数字之和
    }
    //对num[]进行升序排序
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            if(num[j]<num[j-1]){
                temp=num[j-1];
                num[j-1]=num[j];
                num[j]=temp;
            }
        }
    }
      /*for(i=0;i<n;i++)
        printf("%d ",num[i]);*///测试排序是否出错
    int num1[10005],k=1;//除去重复的
    for(i=0;i<n;i++)//将数组num1初始化为0
        num1[i]=0;
    num1[0]=num[0];
    for(i=0;i<n-1;i++){
        if(num[i]!=num[i+1]){
            num1[k]=num[i+1];
            k++;
        }
    }
    /*if(num[n-2]!=num[n-1]){
        num1[k]=num[n-1];
        k++;
    }*/
    printf("%d\n",k);
    for(i=0;i<k;i++){
        printf("%d",num1[i]);
        if(i!=k-1)
        printf(" ");
    }
    return 0;
}
    
