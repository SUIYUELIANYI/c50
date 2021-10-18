#include<stdio.h>
int main(){
    float num=0,sum=0,a[100];
    int i=0,n;
    scanf("%d",&n);
    for(i;i<=n-1;i++){
        scanf("%f",&a[i]);
        }
    float max=a[0];
    float min=a[0];
    for(int m=0;m<n;m++){
        sum+=a[m];
        if(a[m]>max) max=a[m];
        if(a[m]<min) min=a[m];
     }
     printf("%.2f\n",(sum-max-min)/(n-2));
     return 0;
}


