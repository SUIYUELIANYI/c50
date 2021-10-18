#include<stdio.h>
int main(){
    int n,m,i,j;//n为学生数，m为科目数
    float sum;
    scanf("%d%d",&n,&m);
    float a[n*m],b[m],c[n],d[m];//a数组记录学生成绩，b数组记录课的总成绩,c数组记录学生平均成绩，d数组记录课的平均成绩
    for(i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%f",&a[(i-1)*m+j]);
		sum+=a[(i-1)*m+j];
		b[j]+=a[(i-1)*m+j];
        }
	c[i]=sum/m;
	sum=0;
    }
    for(i=1;i<=m;i++){
        d[i]=b[i]/n;
    }
    for(i=1;i<=n;i++){
        printf("%.2f ",c[i]);
    }
    printf("\n");
    for(i=1;i<=m;i++){
        printf("%.2f ",d[i]);
    }
    printf("\n");
    int num=0,key;
    for(i=1;i<=n;i++){
        key=1;
        for(j=1;j<=m;j++){
          if (a[(i-1)*m+j]<d[j])
              key=0;
        }
        if (key==1) num++;
    }
    printf("%d",num);
    return 0;
}
        	
