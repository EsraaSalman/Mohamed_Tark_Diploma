/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex1.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex1
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int summation(int size, int arr[])
{
	int sum=0,count;
	for(count=0;count<5;count++)
	{
		sum+=arr[count];
	}

	return sum;
}

int main( void )
{
	int arr[5],count,sum;
	printf("Enter positive number for array within 5 elements: ");
	fflush(stdin);fflush(stdout);
	for(count=0;count<5;count++)
	{
		scanf("%d",&arr[count]);
	}

	sum=summation(5,arr);
	printf("The sum of elements of array is:%d ",sum);

	return 0;
}

