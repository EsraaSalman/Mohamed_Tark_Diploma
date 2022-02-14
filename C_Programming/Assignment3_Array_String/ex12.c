/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex12.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex12
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int length(char str[])
{
	int count,len_str=0;
	for(count=0;str[count]!='\0';count++)
	{
		len_str++;
	}
	return len_str;
}

int main( void )
{
	char str[100];
	int len_str;
	printf("Enter string within 99 characters: ");
	fflush(stdin);fflush(stdout);
	gets(str);

	len_str=length(str);
	printf("The length of string is %d ",len_str);

	return 0;
}

