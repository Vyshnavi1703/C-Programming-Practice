/************************************************
* Name          : VYSHNAVI RACHAPUTI
* Date          : 23-09-25
* Program       : Take an integer as input and print its magnitude (remove sign).
* Sample Input  : enter the number:-2
* Sample Output :  2
*
*************************************************/

#include <stdio.h>

int main()
{
    int num,c;                                                       //declare the integer variable as num,c
	printf("enter the number:");                                     //Prompt to the user to enter the numbers
	scanf("%d",&num);                                                //read the numbers to the user input
    c=num>=0?printf("magnitude number=%d",num):printf("%d",-1*num);  //check the condition c and print the number
    return 0;
}


