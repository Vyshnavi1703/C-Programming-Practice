/************************************************
* Name          : VYSHNAVI RACHAPUTI
* Date          : 07-10-25
* Program       : Write a function to determine if a character is alphanumeric or not and print the appropriate output in main function.
                  (return 1 if it is alphanumeric, 0 if it is not alpha numeric).
* Sample Input  : enter character:@
* Sample Output : not alphanumeric
*
*************************************************/

#include <stdio.h>
/*  @brief  : This function is used to find the character is alphanumeric or not
 *  @note   : character is alphanumeric or not 
 *  @Param1 : char
 *	@retval : int 
 */
int alphanumeric(char ch)
{
	if(ch>=97 && ch<=122 || ch>=65 && ch<=90 || ch>=48 && ch<=57)
		return 1;
	else
		return 0;
}

int main()
{
    int var;                      //declare the integer variables
	char ch;                      //declare the character variable as ch
	printf("enter character");
	scanf(" %c",&ch);
	var=alphanumeric(ch);         //function call
	if(var==1)                    //check the condition
		printf("alphanumeric");
	else
		printf("not alphanumeric");

    return 0;
}

