#include<stdio.h>
int main(){
    int score1,score2;
    scanf("%d%d",&score1,&score2);
    if (score1>=0&&score1<=100&&score2>=0&&score2<=100)
    switch(score1/60){
          case 0:
          printf("it is not pass");
          break;
          case 1:
          switch(score2/60){
                case 0:
                printf("it is not pass");
                break;
                case 1:
                printf("it is pass");
                break;}
     break;}
     else printf("it is error");
     return 0;
}
          
