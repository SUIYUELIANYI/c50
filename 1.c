#include<stdio.h>
void main()
{
  int a,b,c;
  printf("请输入三个实数:");
  scanf("%d%d%d",&a,&b,&c);
  if (a<0||b<0||c<0)
  printf("0");
  else if(a+b<c||a+c<b||b+c<a)
  printf("0");
  else if(a==b&&b==c)
  printf("1");
  else if(a==b||b==c||a==c)
  printf("2");
  else  printf("3");
  return 0;
}
