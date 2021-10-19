#include <stdio.h>

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int a[n],temp;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
           }
         int key=0;//记录最小值下标
         for(int j=1;j<n;j++){
             if(a[j]<a[key]) key=j;
            }
         temp=a[0];
         a[0]=a[key];
         a[key]=temp;
         for(int i=0;i<n;i++){
             if (i!=n-1)
             printf("%d ",a[i]);
             else printf("%d\n",a[i]);
            }
    }
    return 0;
}

