/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex8.c
 Author      : Esraa_Salman
 Description : Assignment 3 - Ex8
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define size 100

int nth_term (int arr[], int num)
{
	int i;
	for(i=0;i<size;i++)
	{
       if(num==(i+1))
    	 break;
	}
	return arr[i];
}

int main( void )
{
	int arr[size]={1};
	int count,result,num;

	for(count=1;count<size;count++)
		arr[count]=arr[count-1]*3;

	printf("Enter the number of term: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

    result=nth_term(arr,num);
    printf("\nThe term of %dth is: %d",num,result);

	return 0;
}

