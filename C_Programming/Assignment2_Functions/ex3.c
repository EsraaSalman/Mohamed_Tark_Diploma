/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex3.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex3
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void check_sign (int num)
{
	if(num==0)
		printf("Number %d is zero neither positive nor negative ",num);
	else if (num<0)
		printf("Number %d is negative ",num);
	else
		printf("Number %d is positive ",num);

}

int main( void )
{
	int num;
	printf("Enter the number to check: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
    check_sign (num);

	return 0;
}

