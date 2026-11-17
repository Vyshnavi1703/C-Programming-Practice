/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 13-10-25
* Program       : Write an average function to return the average of marks of all students in a class. 
                  float average( int arr[] , int n, int s); 
                  arr[] contains the number of subjects.
                  Where 'n' is the number of students and 's' is the number of subjects. 
* Sample Input  :
* Sample Output :Enter number of students: 6
                 Enter number of subjects: 3
                 Enter marks for student 1:
                 Subject 1: 80
                 Subject 2: 80
                 Subject 3: 80
                 Enter marks for student 2:
                 Subject 1: 990
                 Subject 2: 90
                 Subject 3: 90        
                 Enter marks for student 3:
                 Subject 1: 89
                 Subject 2: 89
                 Subject 3: 89
                 Enter marks for student 4:
                 Subject 1: 78
                 Subject 2: 89
                 Subject 3: 90 
                 Enter marks for student 5:
                 Subject 1: 100
                 Subject 2: 100
                 Subject 3: 100
                 Enter marks for student 6:
                 Subject 1: 30
                 Subject 2: 59
                 Subject 3: 60
                 The average marks of all students: 132.39


*
*************************************************/

#include <stdio.h>
float average(int arr[], int n, int s) 
{
    int totalMarks = 0;
    int i, j;

    // Loop through each student
    for(i = 0; i < n; i++) 
	{
        // Loop through each subject for the current student
        for(j = 0; j < s; j++) 
		{
            totalMarks += arr[i * s + j];  // Access marks and add to total
        }
    }

    // Return the average marks
    return (float)totalMarks / (n * s);
}

int main() 
{
    int n, s;

    // Taking input for number of students and number of subjects
    printf("Enter number of students: ");
    scanf("%d", &n);

    printf("Enter number of subjects: ");
    scanf("%d", &s);

    // Declare a 1D array to store marks of all students
    int arr[n * s];

    // Taking input for marks of each student in each subject
    for(int i = 0; i < n; i++) 
	{
        printf("Enter marks for student %d:\n", i + 1);
        for(int j = 0; j < s; j++) 
		{
            printf("Subject %d: ", j + 1);
            scanf("%d", &arr[i * s + j]);  // Storing marks in the array
        }
    }

    //Calling the average function and print the result
    float avg = average(arr, n, s);
    printf("The average marks of all students: %.2f\n", avg);

    return 0;
}








