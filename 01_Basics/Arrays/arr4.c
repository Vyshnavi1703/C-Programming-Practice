/************************************************


* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Try experimenting with the below array syntaxes and see the results,check their sizes, try to also read values for 
                  elements and print them
				   int arr[5] = {};
                   int arr[10] = {2.4,5.6,7.3};
                   int arr[3] = {1,2,3,4,5};
                   int arr[0] = {};
                   int arr[0] = {1,2,3,4,5};
                   int arr[] = {};
                   int arr[‘a’];
* Sample Input  : 
* Sample Output : Array 1 elements:
                  0 0 0 0 0
				  Array 2 elements:
                  2 4 5 6 7 3 0 0 0 0 
                  Array 3 elements:
                  1 2 3 4 5 
                  Array 4 first 10 elements:
                  1 2 3 4 5 6 7 8 9 10 


*
*************************************************/

#include <stdio.h>

int main()
{
    int i;

    //  Example 1: Array with 5 elements initialized to 0
    int arr1[5] = {0};  // All elements become 0
    printf("Array 1 elements:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr1[i]);
    printf("\n\n");

    //  Example 2: Integer array initialized with some values
    int arr2[10] = {2, 4, 5, 6, 7, 3};  // rest will be 0
    printf("Array 2 elements:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", arr2[i]);
    printf("\n\n");

    //  Example 3: Array with 5 elements
    int arr3[5] = {1, 2, 3, 4, 5};
    printf("Array 3 elements:\n");
    for (i = 0; i < 5; i++)
        printf("%d ", arr3[i]);
    printf("\n\n");

    //Example 4: Character constant used for size (valid, but unusual)
    int arr4['a'];  // 'a' = 97 → creates array of size 97
    for (i = 0; i < 'a'; i++)
        arr4[i] = i + 1;  // fill array with values
    printf("Array 4 first 10 elements:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", arr4[i]);
    printf("\n");

    return 0;
}

