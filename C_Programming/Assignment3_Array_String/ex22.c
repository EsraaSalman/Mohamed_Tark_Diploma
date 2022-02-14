/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex22.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex22
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 10

int removeDuplicates(int arr_old[], int size_old, int arr_new[], int *size_new)
{
	int i;
	if (size_old==0)
		return 0;
	else
	{
		for(i=0;i<size_old;i++)
		{
			if (arr_old[i] != arr_old[i+1])
			{
				arr_new[*size_new] = arr_old[i];
				(*size_new)++;
			}
		}
	}

	return 1;
}

int main( void )
{
	int arr_old[size],arr_new[size],count,size_arr_new=0,flag;

	printf("Enter sorted array within 10 elements: ");
	fflush(stdin);fflush(stdout);
	for(count=0;count<10;count++)
		scanf("%d",&arr_old[count]);

	flag=removeDuplicates(arr_old,size,arr_new,&size_arr_new);

	if(flag == 1)
	{
		for(count=0;count<size_arr_new;count++)
		{
			printf("%3d",arr_new[count]);
		}
	}

	return 0;
}

