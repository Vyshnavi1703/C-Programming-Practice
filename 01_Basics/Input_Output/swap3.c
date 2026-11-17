//swap the 2 values
#include<stdio.h>
int main()
{
  int a,b,s;                 // declare the integer a,b,s are variables
  scanf("%d%d",&a,&b);
  s=a;                       // swap=a   s=2
  a=b;                       // a=b      2=4
  b=s;                       // b=s      4=2
  printf("swap %d%d\n",a,b); //print the numbers
  return 0;
}
