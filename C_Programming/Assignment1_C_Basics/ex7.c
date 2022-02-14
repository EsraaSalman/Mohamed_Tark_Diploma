/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex7.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex7
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int num1,num2,num3,min;
	printf("Enter the three integer numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d%d",&num1,&num2,&num3);
	min=num1;

	if(num2<min)
		min=num2;

	if(num3<min)
		min=num3;


	printf("The smallest number is:%d",min);


    return 0;
}
