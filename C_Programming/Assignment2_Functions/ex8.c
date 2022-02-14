/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex8.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex8
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void prime (int num1, int num2)
{
	int i,j,not_prime=0;
	printf("The prime numbers between %d and %d are: ",num1,num2);
	for(i=num1;i<=num2;i++)
	{
		for (j=2;j<=(i/2);j++)
		{
			if(i%j==0)
			{
				not_prime=1;
				break;
			}
		}
		if(not_prime==0)
		{
			printf("%d ",i);
		}
		else
		{
			not_prime=0;
		}
	}
}

int main( void )
{
	int num1,num2;
	printf("Enter the two numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);
	prime(num1,num2);

	return 0;
}

