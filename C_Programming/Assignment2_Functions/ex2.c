/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex2.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex2
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void check_alphabet (char character)
{
	if( ( (character>='a') && (character<='z') ) || ( (character>='A') && (character<='Z') ))
		printf("Character %c is alphabet ",character);
	else
		printf("Character %c is not alphabet ",character);
}

int main( void )
{
	char character;
	printf("Enter the character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);
    check_alphabet (character);

	return 0;
}

