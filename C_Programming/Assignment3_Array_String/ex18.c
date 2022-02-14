/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex18.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex18
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define size 15


int research_count(int arr[], int num)
{
	int i,count=0,max=0;
	for(i=0;i<size;i++)
	{
		if(num==arr[i])
			count++;
		else
		{
			if(count>max)
				max=count;
			count=0;
		}
	}
	return max;
}

int main( void )
{
	int arr[size]={1,1,2,2,3,3,3,3,4,4,4,4,3,3,3};
	int count,result,num;
	printf("The elements of array: ");
	for(count=0;count<size;count++)
		printf("%3d",arr[count]);

	printf("\nEnter the number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

    result=research_count(arr,num);
    printf("\nThe  the count of the longest consecutive occurrence of %d is %d: ",num,result);
	return 0;
}



