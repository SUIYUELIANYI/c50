#include<stdio.h>//Accepted
int main(){
    int n=0;
    while(scanf("%d",&n)){
        if(n==0)break;
        int a[n]={0};//老师的工资(gcc会报错这种初始化，但oj上是对的)
        int sum=0;//张数
        for(int i=0;i<n;i++){
	    scanf("%d",&a[i]);
        }
        int b[n]={0};//老师工资的张数
        for(int i=0;i<n;i++){
	    b[i]+=a[i]/100;
	    a[i]=a[i]%100;
	    b[i]+=a[i]/50;
	    a[i]=a[i]%50;
	    b[i]+=a[i]/10;
	    a[i]=a[i]%10;
	    b[i]+=a[i]/5;
	    a[i]=a[i]%5;
	    b[i]+=a[i]/2;
	    a[i]=a[i]%2;
	    b[i]+=a[i];
        }
        for(int i=0;i<n;i++){
	    sum+=b[i];
	}
	printf("%d\n",sum);
    }
    return 0;
}
