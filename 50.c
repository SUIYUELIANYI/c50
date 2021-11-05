#include<stdio.h>//万绿从中一点红,四周的数虽然周围没有8个数也得算,注意有独一无二颜色的那个像素点，也就是说该数只能出现一次，测试点5就是判断你周围数是否判断，改了很多次才通过
#include<stdlib.h>//取绝对值，长整型用labs();  
long t[16777216];
int main(){
    int m,n,num=0,x,y;
    long tol;
    scanf("%d%d%ld",&m,&n,&tol);
    long s[n][m];
    for(int i=0;i<n;i++){
	for(int j=0;j<m;j++){
	    scanf("%ld",&s[i][j]);
	    t[s[i][j]]++;
 	}
    }//这里分为了外圈和里面的情况,后来发现不用算外圈
    /*if(labs(s[0][0]-s[0][1])>tol&&labs(s[0][0]-s[1][0])>tol&&(s[0][0]-s[1][1])>tol){
        num++;
        x=0;
        y=0;
    }
    if(labs(s[0][m-1]-s[0][m-2])>tol&&labs(s[0][m-1]-s[1][m-1])>tol&&(s[0][m-1]-s[1][m-2])>tol){
        num++;
        x=m-1;
        y=0
    }
    if(labs(s[n-1][0]-s[n-2][0])>tol&&labs(s[n-1][0]-s[n-2][1])>tol&&(s[n-1][0]-s[n-1][1])>tol){
        num++;
        x=0;
        y=n-1;
    }
    if(labs(s[n-1][m-1]-s[n-2][m-2])>tol&&labs(s[n-1][m-1]-s[n-2][m-1])>tol&&(s[n-1][m-1]-s[n-1][m-2])>tol){
        num++;
        x=m-1;
        y=n-1;}*/
    /*for(int i=1;i<n-1;i++){
        for(int j=1;j<m-1;j++){
        if(t[s[i][j]]==1){
            if(labs(s[i][j]-s[i-1][j-1])>tol&&labs(s[i][j]-s[i-1][j])>tol&&labs(s[i][j]-s[i-1][j+1])>tol&&labs(s[i][j]-s[i][j-1])>tol&&labs(s[i][j]-s[i][j+1])>tol&&labs(s[i][j]-s[i+1][j-1])>tol&&labs(s[i][j]-s[i+1][j])>tol&&labs(s[i][j]-s[i+1][j+1])>tol){
            num++;
            x=j+1;
            y=i+1;
            }
         }
         }
    }*///这种判断方法无法实现对周围数的判断
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(t[s[i][j]]==1)
            {
                //↖、↑、↗、←、→、↙、↓、↘
                if(i-1>=0 && j-1>=0)
                {
                    if(abs(s[i][j]-s[i-1][j-1])<=tol)continue;
                }
                if(i-1>=0)
                {
                    if(abs(s[i][j]-s[i-1][j])<=tol)continue;
                }
                if(i-1>=0 && j+1<m)
                {
                    if(abs(s[i][j]-s[i-1][j+1])<=tol)continue;
                }
                if(j-1>=0)
                {
                    if(abs(s[i][j]-s[i][j-1])<=tol)continue;
                }
                if(j+1<m)
                {
                    if(abs(s[i][j]-s[i][j+1])<=tol)continue;
                }
                if(i+1<n && j-1>=0)
                {
                    if(abs(s[i][j]-s[i+1][j-1])<=tol)continue;
                }
                if(i+1<n)
                {
                    if(abs(s[i][j]-s[i+1][j])<=tol)continue;
                }
                if(i+1<n && j+1<m)
                {
                    if(abs(s[i][j]-s[i+1][j+1])<=tol)continue;
                }
                num++;
                x=j+1;
                y=i+1;
                
            }
        }
    }
    if(num==0)
        printf("Not Exist");
    if(num>1)
        printf("Not Unique");
    if(num==1)
        printf("(%d, %d): %ld",x,y,s[y-1][x-1]);
    return 0;
}

