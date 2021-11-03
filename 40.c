#include<stdio.h>//Accepted
int main(){
    int T,k,n1,b,t,n2;
    scanf("%d %d",&T,&k);
    for(int i=0;i<k;i++){
        scanf("%d %d %d %d",&n1,&b,&t,&n2);
	if(t>T){
	    printf("Not enough tokens.  Total = %d.",T);
	    if(i!=k-1)
	    printf("\n");
	    continue;
	}
        if((n1>n2)!=b){
	    T+=t;
            printf("Win %d!  Total = %d.",t,T);
            if(i!=k-1)
	    printf("\n");
	}
	else{
	    T-=t;
	    printf("Lose %d.  Total = %d.",t,T);
	    if(i!=k-1)
	    printf("\n");
	}
	if(T==0){
	printf("Game Over.");
	break;
	}
    }
   return 0;
}
    
