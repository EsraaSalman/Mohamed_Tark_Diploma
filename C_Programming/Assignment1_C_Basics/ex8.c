/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex8.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex8
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int num,root;
	printf("Enter the positive numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	root=sqrt(num);

	if(num==(root*root))
		printf("%d is perfect square",num);

	else
		printf("%d is not perfect square",num);

	return 0;
}
