/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex1.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex1
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cube (int num)
{
   return num*num*num;
}

int main( void )
{
	int num;
	printf("Enter the positive number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	printf("The cube of %d is %d ",num,cube(num));

	return 0;
}

