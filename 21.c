#include<stdio.h>
int main(){
    int a[1002]={0,0,2,2};
    int i,n,k=4;
    for(i=4;i<1001;i++){
        a[i]=(k%10000+a[i-2]%10000)%10000;
        k=k*2%10000;
        //下面是原来想的递推式，但会超出存储大小
        //int a=1,b=0,c=0;//记录走到此处的a,b,c有几种
        //for(int j=1;j<=i;j++){
            //int A=a,B=b,C=c;
            //a=B+C;
            //b=A+C;
            //c=A+B;
        //}
        //a=a%10000;
        //ans[i]=a;
    }
    while(scanf("%d",&n),n)
        printf("%d\n",a[n]);
    return 0;
}
