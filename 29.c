#include<stdio.h>//Accepted
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j)
            sum+=a[i]*10+a[j];
        }
    }
    printf("%d",sum);
 return 0;
}
