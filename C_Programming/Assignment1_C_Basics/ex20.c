/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex20.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex20
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
		for(column=1;column<=ROW-row;column++)
		{
			printf(" ");
		}
		for(column=1;column<=(2*row)-1;column++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}

