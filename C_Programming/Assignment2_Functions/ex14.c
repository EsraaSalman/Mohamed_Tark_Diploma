/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex14.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex14
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long fibonacci( long num )
{
	if ( num == 0 || num == 1 )
	{
		return num;
	}
	else
	{
		return fibonacci( num - 1 ) + fibonacci( num - 2 );
	}
}

int main( void )
{
	long num,result;
	printf("Enter the positive numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%ld",&num);

	result=fibonacci(num);
	printf("Fibonacci( %ld ) = %ld\n",num,result);

	return 0;
}

