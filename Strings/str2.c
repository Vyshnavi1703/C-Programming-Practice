/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 14-10-25
* Program       : Write a program to replace a given character by another character in a string.  WAP to display the word expansion
                  of a number
* Sample Input  : String : "789"
* Sample Output : "Seven Eight Nine"

*
*************************************************/

#include <stdio.h>
#include<string.h>
int main()
{ 
  int i=0;                              //intialize the integer variable as i=0
  char str[50];                         //declare the character variable as str
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)             //check the condition
  {
  switch(str[i])                       //performs the operation
  {
  case '0':printf("zero");break; 
  case '1':printf("one");break;
  case '2':printf("two");break;
  case '3':printf("three");break;
  case '4':printf("four");break;
  case '5':printf("five");break;
  case '6':printf("six");break;
  case '7':printf("seven");break;
  case '8':printf("eight");break;
  case '9':printf("nine");break;
}
}  
  
    return 0;

}






