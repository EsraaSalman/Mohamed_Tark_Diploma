/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex13.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex13
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int num,count,prime=1;
	printf("Enter positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	for(count=2;count<=(num/2);count++)
	{
		if(num%count==0)
		{
			prime=0;
			break;
		}
	}

	if(prime==0)
		printf(" %d is not prime number\n",num);
	else
		printf(" %d is prime number\n",num);

	return 0;
}

