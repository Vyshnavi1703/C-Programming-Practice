/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write a function to take an array as input, and count how many times the biggest number is repeated in that array, 
                  and return the count. 
* Sample Input  : array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};
* Sample Output : biggest number is repeated 4 times

*
*************************************************/

#include <stdio.h>

int main(void)
{   
    int count=0;                                      //intialize  the integer variable as count=0
    int i,arr[10]={16,14,16,10,10,16,14,14,16,16};    //intialize the index,array
    int large;                                        //declare the integer variable as large
    large=arr[0];                                     //performs the operation
      for(i=1;i<10;i++)                               //check the condition
      {
      if(arr[i]>large)                                //performs the operation
         large=arr[i];
	}
	for(i=0;i<10;i++)                                 //check the condition
	{
	if(large==arr[i])                                 //performs the operation
  		count++;
	}
  printf("largest=%d\n count= %d\n",large,count);  
    return 0;

}






