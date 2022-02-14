/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex6.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex6
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int num1,num2;
	printf("Enter the two integer numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);

	if(num1>num2)
	printf("num1(%d) is greater than num2(%d)",num1,num2);

	else if(num2>num1)
	printf("num1(%d) is smaller than num2(%d)",num1,num2);

	else
	printf("num1(%d) is equal num2(%d)",num1,num2);


    return 0;
}
