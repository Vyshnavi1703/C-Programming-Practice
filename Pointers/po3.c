/************************************************
* Name          : Vyshnavi Rachaputi
* KMID			: KM62BEAI09
* Date          : 17-10-25
* Program       : Write a program to take input for two character variables using pointers and find out which character has higher
                  ascii value.
* Sample Input  :  enter two characters:v V
* Sample Output : character of a  higher
*
*************************************************/

#include <stdio.h>

int main()
{
	char a;                             //declare the character variable as a
	char b;                             //declare the charcter varaiable b
	char *p1=&a;                        //assign the address 
	char *p2=&b;                        //assign the address
    printf("enter two characters:");
	scanf("%c %c",&a,&b);
	if((*p1)>(*p2))                      //check the condition
		printf("character of a  higher");
	else if((*p1)<(*p2))                 //check the condition
		printf("character of b  higher");
    else
		printf("invalid");
    return 0;
}

