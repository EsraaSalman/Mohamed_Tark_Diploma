/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex3.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex3
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	float degree_c,degree_f;
	printf("Enter the temperature on Celsius scale:");
	fflush(stdin);fflush(stdout);
	scanf("%f",&degree_c);
	degree_f= ((degree_c*9)/5)+32;
	printf("Temperature on Fahrenheit scale is: %.2f",degree_f);

    return 0;
}
