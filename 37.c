#include<stdio.h>//Accepted
int main(){
    int n,i,j,m;
    scanf("%d",&n);
    char z[n][17];//不要设置成16长度，不然输出会有错误
    int s[n],k[n];
    for(i=0;i<n;i++){
        scanf("%s%d%d",z[i],&s[i],&k[i]);
    }
    scanf("%d",&m);
    int s1[m];
    for(i=0;i<m;i++){
    	scanf("%d",&s1[i]);
    	    for(j=0;j<n;j++){
    	        if(s1[i]==s[j]&&i!=m-1){
    	            printf("%s %d\n",z[j],k[j]);
    	            break;
    	        }    
    	        else if(s1[i]==s[j]&&i==m-1){
    	            printf("%s %d\n",z[j],k[j]);
    	            break;
    	        }
    	            
    	     }
    }
    return 0;
}
    
   
