/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex9.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex9
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap (int num1, int num2)
{
	printf("The swapping of %d,%d is:",num1,num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf(" %d,%d",num1,num2);
}

int main( void )
{
	int num1,num2;
	printf("Enter the two numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);
	swap(num1,num2);

	return 0;
}

