#include<stdio.h>
#include<math.h>
double max(double a,double b)
{
    return (a>b)?a:b;
}
int main(){
    int N;
    scanf("%d",&N);
     double ans=0,pu=0;
    while(N--){
        double shi,xu;
        scanf("%lf %lf",&shi,&xu);
        pu=sqrt(shi*shi+xu*xu);
        ans=max(ans,pu);
    }
    printf("%.2lf",ans);
  return 0;
}

