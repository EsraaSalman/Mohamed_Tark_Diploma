/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex15.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex15
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int num,power,count,result=1;
	printf("Enter positive number to be base: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("Enter positive number ro be power: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&power);

	for(count=1;count<=power;count++)
	{
		result*=num;
	}

	printf("The result of %d power %d is %d\n",num,power,result);

	return 0;
}

