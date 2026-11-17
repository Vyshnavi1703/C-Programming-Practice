/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write a program to print an integer in binary format using arrays.
* Sample Input  : 17
* Sample Output : 10001

*
*************************************************/

#include <stdio.h>

int main(void)
{ 
   int num,arr[15],i,j;           //declare the integer variable as num,array
   printf("enter a number :");
   scanf("%d",&num);
   i=0;                           //assign the condition equal to 0
   while(num>0)                   //check the condition
   {
       arr[i]=num%2;              //store the remainder in arrays
       num/=2;                      //performs the operation
       i++;           //incremented by one
   }
printf("Binary number is :");
for(j=i-1;j>=0;j--) //print tha array backwards
     printf("%d",arr[j]);
printf("\n");

    return 0;

}






