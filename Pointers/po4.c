/************************************************
* Name          : Vyshnavi Rachaputi
* KMID			: KM62BEAI09
* Date          : 17-10-25
* Program       : Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in 
                  succession and print the value of the variable using indirection operator on the pointer.
* Sample Input  :
* Sample Output : value of a is:2
                  value of b  is:4
                  value of c is:5

*
*************************************************/

#include <stdio.h>

int main()
{
   int a=2;                            //intialize the integer variable as a=2
   int b=4;                            //intialize the integer variable as b=4
   int c=5;                            //intialize the integer variable c=5
   int *p1=&a;                         //assign pointer to the address
   printf("value of a is:%d\n",*p1);
   p1=&b;                              //assign the value to address
   printf("value of b  is:%d\n",*p1);
   p1=&c;                              //assign to the value of address
   printf("value of c is:%d\n",*p1);
   return 0;
}

