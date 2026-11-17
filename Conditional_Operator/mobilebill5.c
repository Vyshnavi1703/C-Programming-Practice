/************************************************
* Name          : VYSHNAVI RACHAPUTI
* Date          : 24-09-25
* Program       : For one type of mobile service, if cost is 250/- upto 100 calls and 1.25/- for each call made over and above 100 calls.
                  Write a program to read the number of calls made and compute and print the bill.
* Sample Input  : calls 400
* Sample Output : bill is 625
*
*************************************************/

#include <stdio.h>

int main()
{
    int call,bill;                 //declare the integer variable as call,bill
	scanf("%d",&call);             //read the calls from the user
	if(call<=100)                  //check the condition from the user
	{
		printf("bills is 250");    //print bills
	}
	else
	{
		call=call-100;              //calculation for each call
		bill=call*1.25;             //calculation for each bill
		bill=bill+250;              //calculation for each bill
		printf("bill is %d",bill);  //print bill
	}
    return 0;
}

