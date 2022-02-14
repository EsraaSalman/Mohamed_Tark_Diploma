/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex12.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex12
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int num,fact=1,count;
    printf("Enter positive number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d",&num);

    for(count=1;count<=num;count++)
    {
        fact *= count;
    }

    printf("Factorial of %d is: %d\n",num,fact);


	return 0;
}

