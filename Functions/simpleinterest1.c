/************************************************
* Name          : VYSHNAVI RACHAPUTI
* Date          : 07-10-25
* Program       : Write a function to calculate simple interest. Call it in main function with appropriate inputs and print the total 
                  amount the user will get after the tenure (principle + interest)
* Sample Input  : 2000 3 90
* Sample Output : 450.000000
*
*************************************************/

#include <stdio.h>
/*
@brief  : This function is used to calculate simple interest
 *  @note   : calculation of principle rate interest 
 *  @Param1 : int
 *	@Param2 : int
 *  @Param3 : float
 *	@retval : int - simpe interest of p,r,n
 */

	float simple_interest(int p,float r,int n) 
{
	float y,si;         
	y=n/12.0;
	si=p*r*y/100;
	return si;
}
 int main()
{
	int p,n,y;                     //declare the integer varaible as p,n,y
	float r,si;                    //declare float variable as r,si
	scanf("%d%d%f",&p,&n,&r); 
	si=simple_interest(p,r,n);     //function call
	printf("%f",si);
    return 0;
}

