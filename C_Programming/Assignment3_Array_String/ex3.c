/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex3.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex3
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 10

void bubble_sorting (int arr[])
{
	int i,j,var;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				var=arr[i];
				arr[i]=arr[j];
				arr[j]=var;
			}
		}
	}
}

int main( void )
{
	int arr[size]={10,4,9,8,1,3,5,2,6,7};
	int count;
	printf("The elements before sorting: ");
	for(count=0;count<size;count++)
		printf("%3d",arr[count]);
    bubble_sorting(arr);
    printf("\nThe elements after bubble sorting: ");
	for(count=0;count<size;count++)
		printf("%3d",arr[count]);

	return 0;
}

