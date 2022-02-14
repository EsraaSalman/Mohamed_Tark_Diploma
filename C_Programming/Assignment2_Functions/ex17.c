/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex17.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex17
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void xor( int A, int B )
{
	int i,j,res=0,max=0;

	printf("The maximum xor value is:");

	for(i=A;i<=B;i++)
	{
		for(j=A;j<=B;j++)
		{
			res=i^j;
			if(res>max)
			{
				max=res;
			}
		}
	}
	printf("%d",max);
}

int main( void )
{
	int L,R;
	printf("Enter the two positive numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&L,&R);
	xor(L,R);

	return 0;
}

