#include<stdio.h>
#include<string.h>
int max(int a,int b)
{
   return(a>b)?a:b;
}
int main(){
    int num;
    scanf("%d",&num); 
    int m,n,x,y;
    int a[1010][1010];
    int i,j;
    while(num--){
        int ans=0;
        memset(a,0,sizeof(a));//用于清空数组
        scanf("%d %d %d %d",&m,&n,&x,&y);
        for(i=1;i<=m;i++){
            for(j=1;j<=n;j++){
                scanf("%d",&a[i][j]);
                a[i][j]+=a[i-1][j]+a[i][j-1]-a[i-1][j-1];
                if(i>=x&&j>=y){
                    ans=max(a[i][j]-a[i-x][j]-a[i][j-y]+a[i-x][j-y],ans);
                }
             }
        }
         printf("%d\n",ans);
    }
    return 0;
}
//dp[i][j]-dp[i][j-y]-dp[i-x][j]+dp[i-x][j-y]就是dp[i][j]中x长y宽的子矩阵的元素和（右下角元素为a[i][j]）
