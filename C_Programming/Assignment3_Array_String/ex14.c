/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex14.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex14
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char str[], int len)
{
	int i,temp,j=len-1;
	for(i=0;i<j;i++,j--)
	{
		temp = str[i];
		str[i]=str[j];
		str[j] = temp;
	}
}

int main( void )
{
	char str[100];
	int len;
	printf("Enter string within 99 characters: ");
	fflush(stdin);fflush(stdout);
	gets(str);

	len=strlen(str);
	reverse(str,len);
	printf("The string after reversing is %s ",str);

	return 0;
}

