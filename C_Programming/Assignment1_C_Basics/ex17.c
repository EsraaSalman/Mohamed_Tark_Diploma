/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex17.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex17
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int num,digit=0;
	printf("Enter positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	while(num!=0)
	{
		num/=10;
		++digit;
	}

	printf("The number of digits is %d\n",digit);

	return 0;
}

