#include<stdio.h>
int main(void){
    int i,n,m,a[100000];
    while(scanf("%d%d",&n,&m)!=EOF){
            if(n==0&&m==0)
		break;
            if(n<m) m=n;
	    for(i=0;i<n;i++){
		    scanf("%d",&a[i]);
            }
            for(i=0;i<m-1;i++){
                int max=a[i],key=i,t;
                     for(int j=i+1;j<n;j++){
			 if(a[j]>max){
                            max=a[j];	
                            key=j;
                          }
                      }
                 if(key!=i){
                     t=a[i];
                     a[i]=a[key];
                     a[key]=t;
                 }
             }
     
             for(i=0;i<m;i++){
                printf("%d ",a[i]);
             }
    }      
    return 0;
}  
