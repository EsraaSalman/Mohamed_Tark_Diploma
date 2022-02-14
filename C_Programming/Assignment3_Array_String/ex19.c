/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex19.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex19
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size1 5
#define size2 5

int compare(int arr1[],int arr2[])
{
	int i;
	for(i=0;i<size1;i++)
	{
		if(arr1[i]!=arr2[i])
			return 0;
	}
	return 1;
}

int main( void )
{
	int arr1[size1],arr2[size2],count,flag;

	printf("Enter first array within 5 elements: ");
	fflush(stdin);fflush(stdout);
	for(count=0;count<size1;count++)
		scanf("%d",&arr1[count]);

	printf("Enter second array within 5 elements: ");
	fflush(stdin);fflush(stdout);
	for(count=0;count<size2;count++)
		scanf("%d",&arr2[count]);

	flag=compare(arr1,arr2);

	if(flag==1)
		printf("The two arrays are identical\n");
	else
		printf("The two arrays are not identical\n");

	return 0;
}

