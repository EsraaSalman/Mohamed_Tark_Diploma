/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex5.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex5
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
	char character;
	printf("Enter the character:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);

	printf("ASCII of %c is: %d",character,character);

    return 0;
}
