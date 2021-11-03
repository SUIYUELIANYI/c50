#include<stdio.h>//Accepted
#include<string.h>
int max3(int a,int b,int c)
{
    int max=a;
    
    if(b>max) max=b;
    if(c>max) max=c;
    return max;
}
int main(){
    char a[101];
    int n,z,o,j,x;
    while(scanf("%s",a)){
	if(a[0]=='E')
	    break;
	n=0;
	z=0;
	o=0;
	j=0;
	n=strlen(a);
	for(int i=0;i<n;i++){
	    if(a[i]=='Z'){
		z++;
		continue;
	    }
	    if(a[i]=='O'){
	        o++;
	        continue;
	    }
	    if(a[i]='J')
	        j++;    
	}
	x=max3(z,o,j);
	for(int i=1;i<=x;i++){
	    if(z>0){
	        printf("Z");
	        z--;
	    }
	    if(o>0){
	        printf("O");
	        o--;
	    }
	    if(j>0){
	        printf("J");
	        j--;
	    }
	}   
	printf("\n");
    }
    return 0;
}
		
