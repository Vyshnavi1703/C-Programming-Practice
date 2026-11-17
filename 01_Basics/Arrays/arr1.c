/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Declare an integer array of size 100.Assign numbers 1-100 to each element of the array.Print all the numbers.
                  Print all even elements.Print all odd elements.Add also 5 to each element and print 6 – 105 numbers.
* Sample Input  :
* Sample Output : 1- 100, even 2-100 ,odd 1-99

*
*************************************************/

#include <stdio.h>

int main()
{
    int i, j, a[100];
    
    // Store numbers 1 to 100 in the array and print them
    for(i = 0; i < 100; i++)
    {
        a[i] = i + 1;     // assign values 1 to 100
        printf("%d\n", a[i]);
    }

    // Print even numbers
    printf("even: ");
    for(i = 0; i < 100; i++)
    {
        if(a[i] % 2 == 0)   // check if number is even
        { 
            printf("%d\n", a[i]);
        }
    } 

    // Print odd numbers
    printf("odd:");
    for(i = 0; i < 100; i++)
    {
        if(a[i] % 2 != 0)   // check if number is odd
        {
            printf("%d\n", a[i]);
        } 
    }
   
    // Add 5 to each number and print new values
    for(i = 0; i < 100; i++)
    {
        a[i] += 5;   // increase each element by 5
        printf("Added elements %d\n", a[i]);
    } 
    
    return 0;
}

