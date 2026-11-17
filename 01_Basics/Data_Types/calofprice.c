#include<stdio.h>
int main()
{
  int sp,cp,n,p,sub;//integer sp,cp,n,p,sub are variables
  printf("enter the values");
  scanf("%d %d %d", &sp,&p,&n);
  sub=sp-p;//sub= selling price-profit
  cp=sub/n;//cost price=sub/no of items
  printf("cost price %d",cp);
  return 0;
}
