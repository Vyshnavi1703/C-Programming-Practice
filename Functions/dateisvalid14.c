/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 12-10-25
* Program       : Write a function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid.
* Sample Input  : Enter a date (dd mm yyyy): 17 09 2003
* Sample Output : The date 17-09-2003 is valid.
*
*************************************************/
#include <stdio.h>
/*
 *  @brief  : This function is used to find the date is valid or not
 *  @note   : function is repeated
 *  @Param1 : int
 *	@retval : int 
*/
int isLeapYear(int year) 
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
	{
        return 1; // Leap year
    }
    return 0; // Not a leap year
}


int isValidDate(int day, int month, int year) 
{
    // Check the year range
    if (year < 1) 
	{
        return 0; // Invalid year
    }
    if (month < 1 || month > 12)
	{
        return 0; // Invalid month
    }

    // Check the days in month
    int daysInMonth;
    switch (month) 
	{
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31; // Months with 31 days
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30; // Months with 30 days
            break;
        case 2:
            daysInMonth = isLeapYear(year) ? 29 : 28; // February
            break;
        default:
            return 0; // Should never reach here
    }

    // Check if the day is valid
    if (day < 1 || day > daysInMonth) 
	{
        return 0; // Invalid day
    }

    return 1; // Valid date
}

int main() 
{
    int day, month, year;                      //declare the integer as day,month,year
    printf("Enter a date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);
    // Call the function to check date validity
    if (isValidDate(day, month, year)) 
	{
        printf("The date %02d-%02d-%04d is valid.\n", day, month, year);
    } 
	else 
	{
        printf("The date %02d-%02d-%04d is invalid.\n", day, month, year);
    }

    return 0;
}

