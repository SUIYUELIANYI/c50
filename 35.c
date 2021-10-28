#include<stdio.h>//Accepted
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int m;
	scanf("%d",&m);
	double a[m];
        double max=0;
	for(int i=0;i<m;i++){
	    scanf("%lf",&a[i]);
            if(a[i]>max)
		max=a[i];
	}
        printf("%.2lf\n",max);
    }
    return 0;
}
  
