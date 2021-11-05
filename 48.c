#include<stdio.h>//Accepted(getchar()的使用)
int main(){
    int n,i;
    scanf("%d",&n);
    getchar();//这里也要加一个getchar();否则还是出错
    char s1[200000],s2[200000];
    int a=0,b=0,c=0;//a为甲胜，b为乙胜，c为平
    int A[3],B[3];//a[0]为甲锤子C胜利的次数,a[1]为剪刀J,a[2]为布B
    for(i=0;i<n;i++){
	scanf("%c %c",&s1[i],&s2[i]);
	getchar();//获取换行符
	if(s1[i]==s2[i])
	    c++;
	else if(s1[i]=='C'){
		if(s2[i]=='J'){
		    a++;
		    A[0]++;
		}
		else{
		        b++;
			B[2]++;
		}
	}
	else if(s1[i]=='J'){
                if(s2[i]=='B'){
                    a++;
                    A[1]++;
                }
                else{
                        b++;
                        B[0]++;
                }
	}
        else{
                if(s2[i]=='C'){
                    a++;
                    A[2]++;
                }
                else{
                      b++;
                      B[1]++;
                }
	     }
    }
    //由于这里还要考虑字母序，我就直接枚举各种情况了，注意要根据B C J的字母序来对应添加等号
    printf("%d %d %d\n",a,c,b);
    printf("%d %d %d\n",b,c,a);
    if(A[0]>=A[1]&&A[0]>A[2]) printf("C ");
    if(A[1]>A[0]&&A[1]>A[2]) printf("J ");
    if(A[2]>=A[1]&&A[2]>=A[0]) printf("B ");
    if(B[0]>=B[1]&&B[0]>B[2]) printf("C");
    if(B[1]>B[0]&&B[1]>B[2]) printf("J");
    if(B[2]>=B[1]&&B[2]>=B[0]) printf("B");
    return 0;
}

        
	
