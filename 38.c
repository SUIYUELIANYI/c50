#include<stdio.h>//Accepted
#include<string.h>
int main(){
    int m,n,i,j;
    scanf("%d%d",&n,&m);//n为学生人数，m为判断题数量
    int score[m];//分数
    int answer[m];//标准答案
    int getscore[n];
    memset(getscore,0,sizeof(getscore));
    for(i=0;i<m;i++)
        scanf("%d",&score[i]);
    for(i=0;i<m;i++)
        scanf("%d",&answer[i]);
    int a[n][m];
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){//n个学生循环n遍
        for(j=0;j<m;j++){
            if(a[i][j]==answer[j])
            getscore[i]+=score[j];
        }
     }
     for(i=0;i<n;i++){
         if(i!=n)
         printf("%d\n",getscore[i]);
         else 
         printf("%d",getscore[i]);
     }
     return 0;   
}


