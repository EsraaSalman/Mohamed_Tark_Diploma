/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex15.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex15
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count_ones (int num)
{
	int count,ones=0;
	int mask=0x80000000;
	for(count=0;count<32;count++)
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

