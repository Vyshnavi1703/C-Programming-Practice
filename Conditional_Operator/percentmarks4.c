/************************************************
* Name          : VYSHNAVI RACHAPUTI
* Date          : 23-09-25
* Program       : Find the % of marks for 6 subjects
                  Read 6 subject marks and calculate percentage, for a student, and print the grade of the student as per below division,
				  using if else statement and type casting operator to get perfect floating point percentage.
                  80 - 100        : Honours
                  60 - 79         : First Division
                  50 - 59         : Second Division
                  40 - 49         : Third Division
                  0 - 39          : Fail
* Sample Input  : enter the marks of 6 subjects :
                  enter the marks of 1 subject  : 89                             
                  enter the marks of 2nd subject: 67                             
                  enter the marks of 3rd subject: 90
                  enter the marks of 4th subject: 100
                  enter the marks of 5th subject: 45
                  enter the marks of 6th subject: 89
* Sample Output : honours
*
*************************************************/

#include <stdio.h>

int main()
{
    int m1,m2,m3,m4,m5,m6,total;                   //declare the integer variable marks as m1,m2,m3,m4,m5,m6,total
    float percentage;                              //declare the float variable as percentage
	printf("enter the marks of 6 subjects:");      //Prompt to the user to enter the marks 6 subjects
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6); //read the marks for 6 subjects to the user
	total=m1+m2+m3+m4+m5+m6;                       //calculate the total marks for 6 subjects
	percentage=(total/6)*100;                      //calculate the percentage for each student
	if(percentage>=85)                             //check the condition for percentage

		printf("honours");                         //print honours
	
    	else if(percentage<85  && percentage>=70)  //check the condition for pracentage
	
     	 printf("first division");                 //print first division
	
	   else if(percentage<70 && percentage>=55)    //check the condition for percentage
	
	   printf("second division");                  //print the second division
	
	   else if(percentage<55 && percentage>=40)   //check the condition for percentage
	
    	printf("third division");                //print third division
	
    else
	
       printf("fail");                          //print fail
	

    return 0;
}

