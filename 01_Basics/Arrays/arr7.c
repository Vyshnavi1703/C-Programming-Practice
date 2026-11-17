/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write a program to print an array in reverse order
* Sample Input  : 90 98 76 54 32 45 67 99 99 99
* Sample Output : 99 99 99 67 45 32 54 76 98 90

*
*************************************************/

#include <stdio.h>

int main(void)
{
    int i,j,temp,arr[10]={90,98,76,54,32,45,67,99,99,99};    //declare the integer variable as i,j,temp,arr
    for(i=0,j=9;i<j;i++,j--)
    {
       temp=arr[i];                                          //performs the operation
       arr[i]=arr[j];                                        //performs the operation
       arr[j]=temp;                                          //performs the operation
    }
printf("after revesring the array is :");
for(i=0;i<10;i++)                                            //check the condition
   printf("%d ",arr[i]);
printf("\n");

    return 0;

}






