/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex13.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex13
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void remove_special(char str[])
{
	int i,j;
	for(i=0;str[i]!='\0';i++)
	{
		if(!(  (str[i]>='a'&&str[i]<='z')  || (str[i]>='A' && str[i]<='Z') ) )
		{
			j=i;
			while(str[j]!='\0')
			{
			str[j]=str[j+1];
			j++;
			}
		}
	}
}

int main( void )
{
	char str[100];
	printf("Enter string within 99 characters: ");
	fflush(stdin);fflush(stdout);
	gets(str);

	remove_special(str);
	printf("The string after remove special characters is %s ",str);

	return 0;
}

