#include<stdio.h>//Accepted
/*
int Test(char s[])
{
    int  a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int  num,z;
    for(int i=0;i<17;i++){
        if(s[i]=='X')
            num+=10*a[i];
        else 
            num+=(s[i]-'0')*a[i];
    }
    z=num%11;
    if(M[z]==s[17])
        return 0;
    else 
        return 1;
}*///自己用了函数返回值不对，但单独拿出来却正确
        
int main(void){
    int n,key=0,key1=0;//key标记有没有错误,key1标记是否全部正确
    scanf("%d",&n);
    char s[18];
    for(int i=0;i<n;i++){
    	scanf("%s",s);
    	int  a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
        char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
        int num=0,z=0;
        for(int i=0;i<17;i++){
            if(s[i]=='X')
                num+=10*a[i];
            else 
            num+=(s[i]-'0')*a[i];
         }
         z=num%11;
         if(M[z]==s[17])
             key=0;
         else{
    	     key=1;
    	     key1=1;
    	  }
    	  while(key==1){
    	      if(i==n-1)
    	          printf("%s",s);
    	      else 
    	          printf("%s\n",s);
    	      key=1;
    	      break;
    	  }    
    }
    if (key1==0)
        printf("All passed");
    return 0;
}
    	
