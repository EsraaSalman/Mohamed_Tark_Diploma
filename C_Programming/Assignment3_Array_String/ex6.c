/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex6.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex6
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 10

int research_last (int arr[], int num)
{
	int i,index;
	for(i=0;i<size;i++)
	{
       if(num==arr[i])
    	   index=i;
	}

	return index;
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

    index=research_last(arr,num);
    printf("\nThe index of last occurrence of a number: ");
	printf("%d",index);

	return 0;
}


