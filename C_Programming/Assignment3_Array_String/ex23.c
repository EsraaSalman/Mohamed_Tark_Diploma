/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex23.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex23
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 100

void freq_count(char str[])
{
	int i;

	int freq[256] = {0};

	for(i = 0; str[i] != '\0'; i++)
	{
		freq[str[i]] ++;
	}

	for(i = 0; i < 256; i++)
	{
		if(freq[i] != 0)
		{
			printf("%c %d\n", i, freq[i]);
		}
	}
}


int main( void )
{
	char str[size];

	printf("Enter string within 99 characters: ");
	fflush(stdin);fflush(stdout);
	gets(str);

	freq_count(str);

	return 0;
}

