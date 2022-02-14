/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex5.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex5
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int even_odd (int num)
{
	if (num%2==0)
		return 0;
	else
		return 1;
}

int main( void )
{
	int num;
	printf("Enter the number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

    printf("The input %d, the output = %d",num,even_odd (num));

	return 0;
}

