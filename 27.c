#include<stdio.h>//改了好久也没做出来
#include<string.h>
double nun[31];
int main(){
    double q,price;//q为报销额度
    int n,m;//n为发票张数，m为发票上物品的个数；
    char type;
    double sum[n+1];//记录每张发票能报销的金额
    while(scanf("%lf%d",&q,&n),n){    
        
        for(int i=0;i<n;i++){//n张发票n次循环
            scanf("%d",&m);//物品个数
            for(int j=0;j<m;j++){
                scanf("%c:%lf",&type,&price);
                if(price>600){
                    sum[i]=0;
                    for (int z=j+1;z<m;j++){
                        scanf("%c :%lf",&type,&price);
                    }
                    break;//如果不符合要求，我们也要将发票中剩下的部分给输入掉，不然下一次输入还是在这张发票里
                }//如果这张发票不符合要求，则该发票报销金额记作0,然后直接跳出循环，进行下一张
                if(type=='A'||type=='B'||type=='C')//求出一张发票的报销额
                    sum[i]+=price;
                else {
                    sum[i]=0;
                    for (int z=j+1;z<m;j++){
                        scanf("%c :%lf",&type,&price);
                    }
                    break;//
                 }
                if(sum[i]>1000||sum[i]>q) 
                {    
                    sum[i]=0;
                    for (int z=j+1;z<m;j++){
                        scanf("%c :%lf",&type,&price);
                    }
                    break;
                }
            }
                for(int k=0;k<i;k++){//插入排序
                    if(sum[i]>sum[k])//sum(i)插入k的位置，k以后的位置全部后移一位
                    {   int number=sum[i];
                        for(int x=i;x>k;x--){//x终值为k+1即sum[k+1]=sum[k];再把sum[i]给sum[k];
                            sum[x]=sum[x-1];
                            }
                       sum[k]=number;
                     }
                 }                
	   //循环结束
        }//n张发票循环结束，接下来通过数组sum算最大报销额
         double max=0,num=0;
         for(int i=0;i<=n;i++){
            for(int j=i;j<=n;j++){
                if(num+sum[i]<q)
                {    
                    num+=sum[i];
                    max=(max>num)?max:num;
                }
                else 
                {
                    num=0;
                    break;
                } 
            }
          }        
          printf("%.2lf\n",max);
    }
    return 0;
}        	                 
                 
                        
                        
                 
                 
                   
                 
                 
                      
