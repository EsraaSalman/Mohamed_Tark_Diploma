/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex21.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex21
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 256
int arr[size];

int * array_containing(int lower, int upper, int *size_arr)
{
	int i;
	*size_arr=0;
	if(lower>upper)
	{
		arr[0]=arr[1]=0xff;
		*size_arr= 2;
	}
	else
	{
		for(i=upper;i>=lower;i--)
		{
			arr[*size_arr]=i;
			(*size_arr)++;
		}
	}
	return arr;
}

int main( void )
{
	int *ptr,lower,upper,i,size_arr=0;

	printf("Enter the lower value: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&lower);

	printf("Enter the upper value: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&upper);

	ptr= array_containing (lower,upper,&size_arr);

	printf("The size of array is %d elements of array are: \n",size_arr);
	for(i=0;i<size_arr;i++)
		printf("%3d",ptr[i]);

	return 0;
}

