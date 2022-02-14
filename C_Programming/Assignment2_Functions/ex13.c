/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex13.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex13
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int add_float (float num1, float num2)
{
  return num1+num2;
}

int main( void )
{
	float num1,num2;
	int floor;
	printf("Enter the two float numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f%f",&num1,&num2);

	floor=add_float(num1,num2);
	printf("The floor of %.2f+%.2f=%d",num1,num2,floor);

	return 0;
}

