#include<stdio.h>
#include<math.h>
int isPrime(int num){//定义判断是否为素数的函数
    if(num==1) return 0;
    if(num==2) return 1;
    int tmp=sqrt(num);
    for(int i=2;i<=tmp;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;        
}      
int main(){
    int a[10000]={0};//存储一万个素数
    int i=0,number=1;//数组下标,number为数
    while(i<=9999)
    {    
        if (isPrime(number) == 1){
            a[i]=number;
            i++;
            }
        number ++;
    }
    int M=0,N=0,k=0;
    scanf("%d %d",&M,&N);
    for(int i=M-1;i<=N-1;i++){
    k++;//按照结尾无空行，每10个一行标准输出
    if(k%10==0){
        printf("%d",a[i]);
        printf("\n");
        }
    else if(i==N-1){
         printf("%d",a[i]);
         }
    else printf("%d ",a[i]);
    }
 return 0;
}
