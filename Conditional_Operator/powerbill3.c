/************************************************
* Name          : VYSHNAVI RACHAPUTI
* Date          : 23-09-25
* Program       : Find the power bill for the input number of units
                  Completion requirements
                  0 - 200 units : 100/- min
                  201 - 400 units : 100 + 0.65 per unit excess of 200
                  401 - 600 units : 230 + 0.80 per unit excess of 400
                  601 and above units : 390 + 1.00 per unit excess of 600
* Sample Input  : enter number of units:400
* Sample Output : bill is 230
*
*************************************************/

#include <stdio.h>

int main()
{
    int units,bill;                    //declare the integer variable as units,bills
	scanf("%d",&units);                //read the units to the user
	if(units<=200)                     //check the conditiion for units
	{
		printf("%d", bill=100);        //print bill
	}
	else if(units>200 && units<=400)   //check the condition for units
	{
		units= units-200;              //to check the condition for units
		bill=(units*0.65)+100;         //to check the condition for bills
		printf("bill is %d",bill);     //print bill
	}
	else if(units>400 && units<=600)   //check the condition for units
	{
		units=units-400;               //to check the condition for units
		bill=(units*0.80)+230;         //to check the condition for bill
		printf("bill%d",bill);         //print bill
	}
	else
	{
		units=units-600;              //to check the condition for units
		bill=(units*1.00)+390;        //to check the condition for bill
		printf("bill is %d",bill);    //print bill
	}
    return 0;
}

