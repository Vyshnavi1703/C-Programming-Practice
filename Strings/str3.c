/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 14-10-25
* Program       : Write a program to find the length of a string. Length is the number of characters in a string (null character is not 
                  counted).
* Sample Input  : char name[10] = ""abc""; //size of name is 10 bytes
* Sample Output : length of name is 3" 

*
*************************************************/

#include <stdio.h>
#include<string.h>
int main()
{
    int a;                          //declare the integer variable as a
    char name[10];                  //declare the character variable name
    scanf("%s",name);
    a=strlen(name);                 //performs the operation
    printf("size of the name is :%d\n",a);
    printf("length of the name is :%ld\n",sizeof(name));
    return 0;

}






