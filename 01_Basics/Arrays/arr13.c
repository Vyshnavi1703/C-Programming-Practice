/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write an compare function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal 
                  (sizes to be sent as separate arguments)
* Sample Input  : arr1= 12 13 14 15
                  arr2= 19 18 16 13
* Sample Output : not equal

*
*************************************************/

#include <stdio.h>
int compare(int arr1[], int m, int arr2[], int n) 
{
    //First, checking if the sizes are equal
    if (m != n) 
	{
        return 0;  //Arrays are not equal if their sizes don't match
    }

    // Compare each element in both arrays
    for (int i = 0; i < m; i++) 
	{
        if (arr1[i] != arr2[i]) 
		{
            return 0;  // Return 0 if any corresponding elements are not equal
        }
    }

    return 1;  // Return 1 if all elements are equal
}

int main() 
{
    int m, n;

    //Taking input for the size of the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &m);

    int arr1[m];

    //Taking input for the elements of the first array
    printf("Enter the elements of the first array:\n");
    for (int i = 0; i < m; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    //Taking input for the size of the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &n);

    int arr2[n];

    //Taking input for the elements of the second array
    printf("Enter the elements of the second array:\n");
    for (int i = 0; i < n; i++) 
	{
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    //Calling the compare function and printing the result
    if (compare(arr1, m, arr2, n)) 
	{
        printf("Both arrays are equal.\n");
    } 
	else 
	{
        printf("The arrays are not equal.\n");
    }

    return 0;
}


 






