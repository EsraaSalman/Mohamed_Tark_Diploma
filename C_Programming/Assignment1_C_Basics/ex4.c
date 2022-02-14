/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex4.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex4
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define pi 3.14

int main( void )
{
	float radius,area,circumference;
	printf("Enter the radius:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);

	area=radius*pi*pi;
	circumference=2*radius*pi;

	printf("Area=%.2f\nCircumference=%.2f",area,circumference);

    return 0;
}
