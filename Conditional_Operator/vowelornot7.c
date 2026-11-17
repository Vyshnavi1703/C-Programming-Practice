/************************************************
* Name          : VYSHNAVI RACHAPUTI
* Date          : 23-09-25
* Program       : check if a character is a vowel or not
* Sample Input  : v
* Sample Output : not a vowel
*
*************************************************/

#include <stdio.h>

int main()
{
    char ch;                        //declare the character variable
	scanf("%c",&ch);                //read the character to the user input
	ch=ch>=97?ch:ch+32;             //check the condition for character
	ch=='a'?printf("vowel"):ch=='e'?printf("vowel"):ch=='i'?printf("vowel"):ch=='o'?printf("vowel"):ch=='u'?printf("vowel"):
	printf("not a vowel");          //check the condition and print the character
    return 0;
}


