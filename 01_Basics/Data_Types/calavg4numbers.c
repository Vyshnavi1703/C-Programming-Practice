#include<stdio.h>
int main()
{
int a,b,c,d;//integer a,b,c,d are variables
float avg;// float avaerage
printf("enter the values");
scanf("%d%d%d%d",&a,&b,&c,&d);
avg=(a+b+c+d)/4.0;// avaerage=sum of numbers/no of numbers
printf("Average of  numbers is %f",avg);
return 0;
}
