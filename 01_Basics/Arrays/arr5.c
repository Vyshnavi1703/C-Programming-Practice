/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write the following program.
                   Declare an integer variable ‘size’.
                   Take the value of ‘size’ from user using scanf.
                   Declare an array of any datatype, and give the integer variable ‘size’, in place of size of the array  and initialize 
				   it to some values.
                   (syntax: float array[size] = {1.0,2.5};) Using for loop, try to take user input using scanf. Loop should execute 
				   ‘size’ number of times.
                   Using for loop, print the elements of the array.

* Sample Input  : enter size 3
                   1 2 3
* Sample Output :  1 

*
*************************************************/

#include <stdio.h>

int main()
{ 
int i,size,arr[i];                      //declare the integer variable as i,size,array
printf("enter size");
scanf("%d",&size);
for(i=0;i<size;i++)                    //check the condition
{
scanf("%d",&arr[i]);
printf("%d",arr[i]);
}


    return 0;

}






