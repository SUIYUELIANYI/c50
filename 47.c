#include<stdio.h>//Accepted
int s[1000000];//学校的总分
int main(){
    int n,a,b,max=-1,key=0;//max要是负数，因为可能全部得0分
    scanf("%d",&n);
    getchar();
    for(int i=0;i<n;i++){
	scanf("%d %d",&a,&b);
	//getchar();
        s[a]+=b;
        if(s[a]>max){
	    max=s[a];
	    key=a;
	}
    }
    printf("%d %d",key,max);
    return 0;
}

