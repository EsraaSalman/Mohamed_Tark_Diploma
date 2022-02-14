/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex15.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex15
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenate(char str1[], char str2[])
{
	int i,j;
	for(i=strlen(str1),j=0;str1[j]!='\0';i++,j++)
	{
       str1[i]=str2[j];
	}
	str1[i]='\0';
}

int main( void )
{
	char str1[100],str2[50];
	printf("Enter two strings within 49 characters: ");
	fflush(stdin);fflush(stdout);
	gets(str1);gets(str2);
	concatenate(str1,str2);
	printf("The string after concatenate two strings is %s ",str1);

	return 0;
}

