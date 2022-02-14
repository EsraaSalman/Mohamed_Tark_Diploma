/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex14.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex14
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check( int num )
{
	int result;
	result=(unsigned int)sqrt(num);
	if(num==(result*result))
		return 1;
	else
		return 0;
}

int main( void )
{
	int num,result;
	printf("Enter the positive numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	result=check(num);
	if(result == 1)
	{
		printf("The input number %d is super square \n",num);
	}
	else
	{
		printf("The input number %d is not super square \n",num);
	}
	return 0;
}

