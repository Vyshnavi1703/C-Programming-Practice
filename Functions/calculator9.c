/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 12-10-25
* Program       : Write a calculator program with 5 functions below to do the operations of addition, subtraction, multiplication, 
                  division for quotient and division for remainder.
				  1) int add (int a, int b) // to be called when user chooses +
                  2) int sub (int a,int b) // to be called when user chooses -
                  3) int mul(int a, int b) // to be called when user chooses *
                  4) int quotient(int a, int b) // to be called when user chooses /
                  5) int remainder(int a,int b) // to be called when user choose%
* Sample Input  : Simple Calculator
                  Choose an operation:
                  1. Addition (+)
                  2. Subtraction (-)
                  3. Multiplication (*)
                  4. Division Quotient (/)
                  5. Division Remainder (%)
                  Enter your choice (1-5): 1
                  Enter two numbers: 4 5
* Sample Output : Result: 4 + 5 = 9
*
*************************************************/

#include <stdio.h>
/*  @brief  : This function is used to find the calculator of two integers and returns integer
 *  @note   : calculator is performing by same number
 *  @Param1 : int
 *	@Param2 : int
 *	@retval : int - calculator  of a & b
*/
// Function to add two numbers
int add(int a, int b) 
{
    return a + b;
}

// Function to subtract two numbers
int sub(int a, int b) 
{
    return a - b;
}

// Function to multiply two numbers
int mul(int a, int b)
{
    return a * b;
}


int quotient(int a, int b) 
{
    if (b != 0) 
	{
        return a / b;
    }
	else 
	{
        printf("Error: Division by zero!\n");
        return 0; // Return 0 in case of division by zero
    }
}


int remainderr(int a, int b) 
{
    if (b != 0) 
	{
        return a % b;
    }
	else 
	{
        printf("Error: Division by zero!\n");
        return 0; // Return 0 in case of division by zero
    }
}

int main() 
{
    int a, b, choice;
    int result;
    printf("Simple Calculator\n");
    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division Quotient (/)\n");
    printf("5. Division Remainder (%%)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Input numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Perform the chosen operation
    switch (choice) {
        case 1:
            result = add(a, b);
            printf("Result: %d + %d = %d\n", a, b, result);
            break;
        case 2:
            result = sub(a, b);
            printf("Result: %d - %d = %d\n", a, b, result);
            break;
        case 3:
            result = mul(a, b);
            printf("Result: %d * %d = %d\n", a, b, result);
            break;
        case 4:
            result = quotient(a, b);
            printf("Result: %d / %d = %d\n", a, b, result);
            break;
        case 5:
            result = remainderr(a, b);
            printf("Result: %d %% %d = %d\n", a, b, result);
            break;
        default:
            printf("Invalid choice! Please select a valid operation (1-5).\n");
    }

    return 0;
}






