#include<stdio.h>
int main()
{
int x;                                //declare the integer variable as x
printf(" enter the value");           //prompt to the user enter the number
scanf("%d", &x);                      //read the number to user input
printf("%d\b\b\b   \n",x);            //print x
printf("%d\b\b  \r \n",x);            //print x
printf("%d\b \r \r  \n",x);           //print x
printf("%d \r \r   \n",x);            //print x
return 0;
}
