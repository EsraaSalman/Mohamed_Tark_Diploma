/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex9.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex9
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 100

int Fibonacci (int num)
{
    if(num==0 || num==1)
    	return 1;
    else
	return Fibonacci(num-1)+Fibonacci(num-2);
}

int main( void )
{
	int result,num;

	printf("Enter the number of term: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

    result=Fibonacci(num);
    printf("\nThe term of %dth is: %d",num,result);

	return 0;
}

