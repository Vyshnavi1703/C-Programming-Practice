/************************************************
* Name          : VYSHNAVI RACHAPUTI
* Date          : 07-10-25
* Program       : Write a function ,that can take two integers, swap their values and print their new values. return type should be void. 
                  function should print the values.
* Sample Input  : Enter two integers:
                  x: 4
                  y: 5
* Sample Output : Before swapping: x = 4, y = 5
                  After swapping: a = 5, b = 4

*
*************************************************/

#include <stdio.h>
/*  @brief  : This function is used to find the swap of two integers and returns integer
 *  @note   : swap function is repeated by number
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int int  - return void
*/
void swap(int *a, int *b) 
{
    int temp; 
    temp = *a;
	*a = *b;  
    *b = temp;
    printf("After swapping: a = %d, b = %d\n", *a, *b);
}

int main() 
{
    int x, y;                                                //declare the integers as x,y
    printf("Enter two integers:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);
    printf("Before swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);                                            //calling the swap function

    return 0;
}

