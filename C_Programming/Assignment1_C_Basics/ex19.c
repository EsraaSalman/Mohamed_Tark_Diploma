/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex19.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex19
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

	for(row=ROW;row>=0;row--)
	{
		for(column=1;column<=row;column++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}

