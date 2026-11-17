/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write a function to search for a specific element given by the user, in an array and display its index.  Function takes
                  array and element to search as inputs, and returns the index as output. If element not found, return -1.
* Sample Input  : enter size of array:3
                  enter search number:5
                            456
                             5 
                             6
* Sample Output : matching element index number:1

*
*************************************************/

#include <stdio.h>

/*  @brief  : This function is used to find the specific element  and display the array index
 *  @note   : repeated by multiple times
 *  @Param1 : int
 *	@Param2 : int
 *  @Param3 : int
 *	@retval : int 
 */
int main()
{
int i,r,search,j;         //declare i,r,j,search variables
	printf("enter size of array:");  //print the enter size of array
	scanf("%d",&j); //read the array size
	int arr[j];//declare array size
	printf("enter search number:");//print the message
	scanf("%d",&search);//read the search element
	for(i=0;i<j;i++)//check the condition and increment i value as 1
	{
		scanf("%d",&arr[i]);//read the input
	}
	r=search_element(arr,j,search);//calls the function
	if(r==-1)//check the condition
	{
		printf("not matching\n");// above con is true then print the not matching element
	}
	else
	{
		printf("matching element index number:%d\n",r);//else matching element index number
	}
}
int search_element(int arr[],int j,int search)//declare search_elemenet function
{
	int i;// declare i variable
	for(i=0;i<j;i++)//check the condition
	{
		if(search == arr[i])//check the condition for checking element
		return i;//returns i value
	}
	return -1;

}







