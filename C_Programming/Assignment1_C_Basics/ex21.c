/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex21.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex21
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

	for(row=0;row<ROW;row++)
	{
		for(column=0;column<ROW;column++)
		{
			if( (column==row)||(column==ROW-row-1) )
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

