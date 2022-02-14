/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex2.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex2
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TRUE  1
#define FALSE 0

int check(char str[])
{
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		for(j=i+1;str[j]!='\0';j++)
		{
			if(str[i]==str[j])
			{
				return FALSE;
			}
		}
	}
	return TRUE;
}

int main( void )
{
	char str[10];
	int flag;
	printf("Enter string within 9 characters: ");
	fflush(stdin);fflush(stdout);
	gets(str);

	flag=check(str);

	if(flag==TRUE)
		printf("All characters are distinct");
	else
		printf("There are character are repeated");

	return 0;
}

