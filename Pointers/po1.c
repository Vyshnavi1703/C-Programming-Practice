/************************************************
* Name          : Vyshnavi Rachaputi
* KMID			: KM62BEAI09
* Date          : 17-10-25
* Program       : Write a program to print the address of a variable , its value ,its size, try different executions and note the 
                  address printed. Assign the address of the variable to a pointer variable.Print the size of pointer and its indirected 
				  value (apply * operator)
* Sample Input  :
* Sample Output :address of a 10
                 size of 4
                 address of a 0x7ffcad92136c
                 address of a 8
                 value of a 10
                 address of p1 0x7ffcad921370
*
*************************************************/

#include <stdio.h>

int main()
{
    int a=10;                          //declare the integer variable as a
	int*p1;                            //declare the pointer
    p1=&a;                             //assign the address to the variable
	printf("address of a %d\n",a);
	printf("size of %ld\n",sizeof(a));
    printf("address of a %p\n",&a);
	printf("address of a %ld\n",sizeof(p1));
	printf("value of a %d\n",*p1);
	printf("address of p1 %p\n",&p1);
    return 0;
}

