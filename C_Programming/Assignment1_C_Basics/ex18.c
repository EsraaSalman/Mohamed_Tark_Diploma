/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex18.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex18
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int ROW,row,column;
	printf("Enter positive number of row: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&ROW);

	for(row=1;row<=ROW;row++)
	{
		for(column=1;column<=row;column++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}

