/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and
                  repeat till middle of the array)
* Sample Input  : array1 ={1,2,3,4,5};
* Sample Output : array1 ={5,4,3,2,1};

*
*************************************************/

#include <stdio.h>

int main()
{
    int i,j,temp;                                       //declare the integer variable as i,j,temp
    int arr1[5]={1,2,3,4,5};                            //intialize the array size for elements
    for(i=0,j=4;i<j;i++,j--)                            //check the condition
    {              
    temp=arr1[i];                                       //performs the opeartion
    arr1[i]=arr1[j];                                    //performs the operation
    arr1[j]=temp;                                       //performs the operation
}
    printf("After reversing,the array is:");
    for(i=0;i<5;i++)                                   //check the condition
           printf("%d ",arr1[i]);
    printf("\n");

    return 0;

}






