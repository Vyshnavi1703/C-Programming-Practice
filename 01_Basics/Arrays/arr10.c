/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write a program to swap two arrays in reverse order.
* Sample Input  : array1 = {1,2,3,4,5}
                  array2 = {6,7,8,9,10}
* Sample Output : array1 : {10,9,8,7,6}
                  array2 : { 5,4,3,2,1}

*
*************************************************/

#include <stdio.h>

int main()
{
   
	int size,j,temp1,temp2;	//declare integer variables
	printf("Enter the sizes of the array: ");//prints the message to enter the size of the array
	scanf("%d",&size);//reads the input
	int i;	//declare integer variable
	int arr1[size],arr2[size];//declare array integer variables with size 
	for(i=0;i<size;i++)	//for loop for taking the input values of array 1
	{
		printf("Enter the element %d of array 1:",i);
		scanf("%d",&arr1[i]);
	}
	for(i=0;i<size;i++)	//for loop for taking the input values of array 2
	{
		printf("Enter the element %d of array 2:",i);
		scanf("%d",&arr2[i]);
	}
	for(i=0,j=size-1;i<size/2;i++,j--)//for loop for swaping the values in both the arrays from both the ends and comes to the middle
	{
		temp1 = arr1[j];
		arr1[j] = arr1[i];
		arr1[i] = temp1;
		temp2 = arr2[j];
		arr2[j] = arr2[i];
		arr2[i] = temp2;
	}
	for(i=0;i<size;i++)	//for loop for swapping the values of both arrays '1' & '2' 
	{
		temp1 = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp1;
	}
	for(i=0;i<size;i++)//for loop for printing the swapped values of array1
		printf("%d ",arr1[i]);
		printf("\n");											
	for(i=0;i<size;i++)//for loop for printing the swapped values of array2
		printf("%d ",arr2[i]);
		printf("\n");										
		return 0;												
}

