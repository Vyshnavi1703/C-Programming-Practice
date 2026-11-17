/************************************************
* Name          : Vyshnavi Rachaputi
* KMID			: KM62BEAI09
* Date          : 17-10-25
* Program       : Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3
                  pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check 
				  the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable 
				  value and indirected values of all pointers every time you change.
* Sample Input  :
* Sample Output : value of a is :2 2 2
                  p1,p2,p3=10 10 10
                  50p1,p2,p3=50 50 50

*
*************************************************/

#include <stdio.h>

int main()
{
 int a=2,*p1,*p2,*p3;                                 //declare the integer variable as a and pointer *p1,*p2,*p3
    p1=&a;                                            //assign the address
    p2=&a;                                            //assign address
    p3=&a;                                            //assign address
 printf("value of a is :%d %d %d\n",*p1,*p2,*p3);
  a=10;                                               //assign value to a
 printf("p1,p2,p3=%d %d %d\n",*p1,*p2,*p3);
 *p1=20,*p2=30,*p3=50;                                //intialize the pointer *p1=20,*p2=30,*p3=50
 printf("%d",a);
 printf("p1,p2,p3=%d %d %d\n",*p1,*p2,*p3);
    return 0;
}

