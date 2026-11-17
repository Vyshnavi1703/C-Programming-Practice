/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 17-10-25
* Program       : Write a program to convert a string into lower case and print.
* Sample Input  : Hello
* Sample Output : hello

*
*************************************************/

#include <stdio.h>
int main()           
{
    char str[100];           // Declaring a character array (string) of size 100
    printf("Enter a string: ");        // Prompting the user to enter a string
    scanf("%[^\n]",str);              // read the input string
    for(int i=0;str[i]!='\0';i++) 
    {
        if (str[i]>='A'&&str[i]<='Z')  //checking the given character is a uppercase letter
        {
            str[i]=str[i]-('A'-'a');    //converting the uppercase letter to lowercase letter
        }
    }
    printf("Lowercase string: %s\n",str);      //print the lower case string

    return 0;            
}






