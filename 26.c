#include<stdio.h>//Accepted
int main(){
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF){
        int max=0;
        max=(a>b)?a:b;
	for(int i=max;;i++){
	    if(i%a==0&&i%b==0){
		printf("%d\n",i);
		break;
	    }
	}
    }
    return 0;
}
