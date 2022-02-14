/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex16.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex16
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 10

void reverse(int arr[])
{
	int i,temp;
	for(i=0;i<size/2;i++)
	{
	   temp=arr[i];
       arr[i]=arr[size-i-1];
       arr[size-i-1]=temp;
	}
}

int main( void )
{
	int arr[size],count;
	printf("Enter array to reversing within 10 elements: ");
	fflush(stdin);fflush(stdout);
	for(count=0;count<size;count++)
		scanf("%d",&arr[count]);

	reverse(arr);
	printf("The array after reversing is: ");
	for(count=0;count<size;count++)
		printf("%3d",arr[count]);

	return 0;
}

