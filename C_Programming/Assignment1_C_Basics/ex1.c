/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex1.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex1
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	int num1,num2,result;
	printf("Enter two integer numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);
	result= ((num1+num2)*3)-10;
	printf("The result of (( %d + %d )*3)-10 =%d",num1,num2,result);

    return 0;
}
