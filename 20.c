#include<stdio.h>
#include<math.h>
int main(){
    int m;
    scanf("%d",&m);
    while(m--){
        int n=0;
        double sum=0;
        scanf("%d",&n);
        for(double i=1;i<=n;i++){
            if (fmod(i,2)==0)//double类型取余
            sum+=-1/i;
            else 
            sum+=1/i;
        }
        printf("%.2lf\n",sum);
    }
  return 0;
}
//一次过
