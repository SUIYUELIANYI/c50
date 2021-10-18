#include<stdio.h>
int main(){
    int n,i,num,product;//product为乘积
    product=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&num);
        if(num%2!=0)
           product*=num;
    }
    printf("%d\n",product);    
    return 0;
}            
     
