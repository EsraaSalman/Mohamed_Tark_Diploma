/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex9.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex9
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 100

int main( void )
{
	int arr[size]={1,1};
	int count,result,num;

	printf("Enter the number of term: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	for(count=2;count<size;count++)
	{
		arr[count]=arr[count-1]+arr[count-2];
		if(num==(count+1))
		result=arr[count];
	}

    printf("\nThe term of %dth is: %d",num,result);

	return 0;
}

