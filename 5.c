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
int main()
{
    int i=1;
    int number=0;//记录素数的个数
    while(i<=100)
    {    
        if (isPrime(i) == 1)
            {printf("%5d",i);number ++;}
        if ((isPrime(i)==1)&&(number % 5 == 0)) 
        printf("\n");
        i++;
    }
 return 0;
}
