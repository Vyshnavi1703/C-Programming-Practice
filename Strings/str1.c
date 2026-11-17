/************************************************

* Name          : Vyshnavi Rachaputi
* KM ID         : KM62BEAI09
* Date          : 14-10-25
* Program       : Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question
                  mark and fullstop as delimitters for word counting.
* Sample Input  : Hi, I am Vyshnavi! How are you doing? I hope you are good and healthy.
* Sample Output : 15

*
*************************************************/

#include <stdio.h>
#include<string.h>

int main()
{
   int count=0,i=0;                              //intialize the integer count =0
   char str[50];                                 //declare the character variable as str
   printf("enter a string : ");
   scanf("%s",str);
   while(str[i]!='\0')                           //check the condition
   {
     if(str[i]==',' || str[i]==' ' || str[i]=='?' || str[i]=='.' || str[i]=='!')  //performs the operation
     count++;                                   //incremented by one
   }
   printf("words count is:%d",count); 
   return 0;

}






