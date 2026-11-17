/************************************************


* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 14-10-25
* Program       : Write a program to convert a string into upper case and print.
* Sample Input  : hello
* Sample Output : HELLO

*
*************************************************/
#include <stdio.h>
#include <string.h>
int main()           
{
    char str[100];                     // Declaring a character array (string) of size 100
    printf("Enter a string: ");        // Prompting the user to enter a string
    scanf("%[^\n]",str);              // read the input string
    for(int i=0;str[i]!='\0';i++) 
    {
        if (str[i]>='a'&&str[i]<='z')  //checking the given character is a lowercase letter
        {
            str[i]=str[i]-('a'-'A');    //converting the uppercase letter to uppercase letter
        }
    }
    printf("Uppercase string: %s\n",str);      //print the upper case string

    return 0;            
}


