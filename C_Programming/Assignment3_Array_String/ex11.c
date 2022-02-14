/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex11.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex11
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int frequency(char str[], char character)
{
	int count,freq=0;
	for(count=0;str[count]!='\0';count++)
	{
		if(character==str[count])
		freq++;
	}
	return freq;
}

int main( void )
{
	char str[100],character;
	int freq;
	printf("Enter string within 99 characters: ");
	fflush(stdin);fflush(stdout);
	gets(str);

	printf("Enter the character to find his frequency in string: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&character);

	freq=frequency(str,character);
	printf("The frequency of %c in string is %d ",character,freq);

	return 0;
}

