#include<stdio.h>
int main(){
    int n;
    long a,b,c;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%ld%ld%ld",&a,&b,&c);
        if(a+b<=c) 
            printf("Case #%d: false\n",i);
        else 
            printf("Case #%d: true\n",i);
     }
     return 0;
}         
