/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex17.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex17
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size1 10
#define size2 5

void swap(int arr1[],int arr2[])
{
	int i,temp;
	for(i=0;i<size2;i++)
	{
       temp=arr1[i];
       arr1[i]=arr2[i];
       arr2[i]=temp;
	}
}

int main( void )
{
	int arr1[size1],arr2[size2],count;
	printf("Enter first array within 10 elements: ");
	fflush(stdin);fflush(stdout);
	for(count=0;count<size1;count++)
		scanf("%d",&arr1[count]);
	printf("Enter second array within 5 elements: ");
	fflush(stdin);fflush(stdout);
	for(count=0;count<size2;count++)
		scanf("%d",&arr2[count]);

	swap(arr1,arr2);
	printf("The arrays after swapping is: \n");
	printf("First array:");
	for(count=0;count<size1;count++)
		printf("%3d",arr1[count]);
	printf("\nSecond array:");
	for(count=0;count<size2;count++)
		printf("%3d",arr2[count]);

	return 0;
}

