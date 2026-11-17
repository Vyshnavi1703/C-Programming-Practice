#include<stdio.h>
int main()
{
  int area,perimeter,r;// integer area,perimeter, r are variables
  printf("enter the values:");
  scanf("%d",&r);
  float pi=3.14;// float pi value
  area=3.14*r*r;// area = 3.14*r*r
  perimeter=2*pi*r;//perimeter= 2*pi*r
  printf("area %d perimeter %d ",area,perimeter);
  return 0;
}
