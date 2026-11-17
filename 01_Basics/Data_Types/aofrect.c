#include<stdio.h>
int main()
{
int l,b,area,perimeter,sum;/*integer l,b,area, perimeter,sum variables*/
printf("enter the values");
scanf("%d%d",&l,&b);
area=l*b;//area = length * breadth
sum=l+b;// sum = length + breadth
perimeter=2*sum;// perimeter = 2* sum
printf("area %d perimeter %d",area, perimeter);
return 0;
}
