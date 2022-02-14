/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex10.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex10
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void upr_lwr(char str[])
{
	int count;
	int diff='a'-'A';
	for(count=0;str[count]!='\0';count++)
	{
		if((str[count]>='A') && (str[count]<='Z'))
		str[count]=str[count]+diff;
	}
}

int main( void )
{
	char str[10];
	printf("Enter string within 9 characters: ");
	fflush(stdin);fflush(stdout);
	gets(str);

	upr_lwr(str);
	printf("The string after conversation: %s ",str);

	return 0;
}

