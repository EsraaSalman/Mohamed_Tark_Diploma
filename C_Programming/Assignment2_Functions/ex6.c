/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex6.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex6
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char lwr_upr (char character)
{
	int diff='a'-'A';
	if((character>='a')&&(character<='z'))
		return character-diff;
	else if ((character>='A')&&(character<='Z'))
		return character;
	else
		return 0;
}

int main( void )
{
	char character,flag;
	printf("Enter the character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);

	flag=lwr_upr(character);
	if(flag==0)
		printf("Error character!!!");
	else
    printf("The upper case of  %c is %c",character,flag);

	return 0;
}

