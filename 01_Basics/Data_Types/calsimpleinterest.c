#include<stdio.h>
int main()
{
int p,n; // integer p,n are variables
float r,m,si;// float r,m,si are variables
printf("please enter  the month");
printf("time in months");
printf("rate of interest");
scanf("%d%d%f",&p,&n,&r);
m=n/12.0;// m=n/12.0
si=(p*m*r)/100;// simple interest=(p*m*r)/100
printf("simple interest=%f",si);
return 0;
}

