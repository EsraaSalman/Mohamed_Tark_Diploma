/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex16.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex16
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count_ones (char num)
{
	char count,ones=0;
	int mask=0x80;
	for(count=0;count<8;count++)
	{
		if ( (num<<count) &mask )
			ones++;
	}
	return ones;
}

int main( void )
{
	int num,ones;
	printf("Enter the positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	ones=count_ones(num);
	printf("The number of ones in %d is %d",num,ones);

	return 0;
}

