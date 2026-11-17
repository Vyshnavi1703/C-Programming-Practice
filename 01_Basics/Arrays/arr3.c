/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Declare an array of size 10. Enter 10 elements and save them in the array. Print the array .
                  Find out the biggest and smallest numbers and their indexes and print.
* Sample Input  : 45 67 89 
* Sample Output : small:45 big:89

*
*************************************************/

#include <stdio.h>

int main()
{ 
   int i,big,small;//declare i,big and small
	int array[10];//declare integer array variables
	for(i=0;i<10;i++)//check the condition and increment i value as 1
	{
		scanf("%d",&array[i]);//read the array variables
	}
	big=array[0];//value of array index 0 and stored in big var
	small=array[0];//value of array index 0 and stored in small var
	for(i=0;i<10;i++)//check the condition
	{
		if(array[i]>big)//check the condition for biggest number
		{
			big=array[i];//value of array index i and stored in big
		}
		if(array[i]<small)//check the condition for smallest number
		{
			small=array[i];//value of array index i and stored in small
		}
	}
	printf("biggest numbers is:%d\n",big);//print the biggest number
	printf("smallest numbers is:%d\n",small);//print the smallest number
    return 0;
}

