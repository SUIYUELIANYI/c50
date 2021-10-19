#include <stdio.h>
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        int a[n];
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            printf("%c",a[i]);
          }
    }
    return 0;
}
         

