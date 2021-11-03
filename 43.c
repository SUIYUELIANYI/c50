#include<stdio.h>//Accepted
#include<string.h>

int main(){
    int m,n,a,b,c;//m行，n列，灰度值在[a,b]间,c为给定替换值
    scanf("%d%d%d%d%d",&m,&n,&a,&b,&c);
    int s[n];
    for(int i=0;i<m;i++){//循环m次，每次处理一行
        for(int j=0;j<n;j++){
            scanf("%d",&s[j]);
            if(s[j]<=b&&s[j]>=a)
            	s[j]=c;
            if(s[j]>=100){
                printf("%d",s[j]);
                if(j!=n-1)
                    printf(" ");
            }        
            else if(s[j]>=10){
                printf("0%d",s[j]);
                 if(j!=n-1)
                    printf(" ");
            }
            else{
                printf("00%d",s[j]); 
                if(j!=n-1)
                    printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
    
            
            
        
        
    
    
    
