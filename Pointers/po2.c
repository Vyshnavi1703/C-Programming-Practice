/************************************************
* Name          : Vyshnavi Rachaputii
* KMID			: KM62BEAI09
* Date          : 17-10-25
* Program       : Write a program to add two variables using their pointers.
* Sample Input  :
* Sample Output : a value is  5
                  b values is 5
                  add is 10
*
*************************************************/

#include <stdio.h>

int main()
{
    int a=5;                      //intialize the integer variable a=5;
	int b=5;                      //intialize the integer variable b=5;
	int *p1=&a;                   //assign the pointer address
	int *p2=&b;                   //assign the pointer address
	printf("a value is  %d\n",a);
	printf("b values is %d\n",b);
	printf("add is %d\n",*p1+*p2);
    return 0;
}

