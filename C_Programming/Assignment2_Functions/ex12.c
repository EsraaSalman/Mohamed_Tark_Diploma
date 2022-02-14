/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex12.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex12
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int heater_activation_time (int temp)
{
    if( (temp>=0) && (temp<=30) )
    	return 7;
    else if( (temp>30) && (temp<=60) )
    	return 5;
    else if( (temp>60) && (temp<=90) )
    	return 3;
    else if( (temp>90) && (temp<=100) )
    	return 1;
    else
    	return 0;
}

int main( void )
{
	int temp,min;
	printf("Enter the temperature of water: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&temp);

	min=heater_activation_time(temp);
	if(min==0)
		printf("%d is invalid temperature",temp);
	else
		printf("The heater activation time of %d is %d minute",temp,min);

	return 0;
}

