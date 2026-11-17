/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write an neg_to_pos function to modify the array such that all negative numbers are converted to positive.
* Sample Input  : arr= -1 2 -3 4 -5
* Sample Output : arr=  1 2 3 4 5

*
*************************************************/

#include <stdio.h>


void neg_to_pos(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < 0) 
	{
            arr[i] = -arr[i];  //Convert negative number to positive
        }
    }
}

int main() 
{
    int arr[] = {-1, 2, -3, 4, -5};
    int n = sizeof(arr) / sizeof(arr[0]);  //Calculate number of elements in the array
    printf("Array before conversion:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    //Calling neg_to_pos function to convert negative numbers to positive
    neg_to_pos(arr, n);
    printf("Array after conversion:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

