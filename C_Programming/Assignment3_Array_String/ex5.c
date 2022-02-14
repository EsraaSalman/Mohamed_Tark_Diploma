/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex5.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex5
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 10

int research_first (int arr[], int num)
{
	int i;
	for(i=0;i<size;i++)
	{
       if(num==arr[i])
       break;
	}
	return i;
}

int main( void )
{
	int arr[size]={10,4,9,4,1,3,5,4,6,7};
	int count,index,num;
	printf("The elements of array: ");
	for(count=0;count<size;count++)
		printf("%3d",arr[count]);

	printf("\nEnter the number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

    index=research_first(arr,num);
    printf("\nThe index of first occurrence of a number: ");
	printf("%d",index);

	return 0;
}

