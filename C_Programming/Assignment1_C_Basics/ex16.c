/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex16.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex16
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int num,reminder,reverse=0;
	printf("Enter positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	while(num!=0)
	{
		reminder=num%10;
		reverse=(reverse*10)+reminder;
		num/=10;
	}

	printf("The reverse of %d is %d\n",num,reverse);

	return 0;
}

