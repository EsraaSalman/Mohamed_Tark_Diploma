/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex9.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex9
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	float grade;
	printf("Enter the grade percentage of student:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&grade);

	if(grade>=85)
		printf("Excellent");
	else if ((grade<85) && (grade>=75))
		printf("VeryGood");
	else if ((grade<75) && (grade>=65))
		printf("Good");
	else if ((grade<65) && (grade>=50))
		printf("pass");
	else
		printf("Fail");

	return 0;
}
