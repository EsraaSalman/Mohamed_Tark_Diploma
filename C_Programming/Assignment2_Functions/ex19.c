/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex19.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex19
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check_power_3( int num )
{
	if ( num == 0 || num == 1 )
	{
		return 1;
	}
	else
	{
		while(num!=1)
		{
			/* Check if the number can be divided by 3 */
			if((num % 3) == 0)
			{

				num/= 3;
			}
			else
			{
				return 1;
			}
		}
		return 0;
	}
}

int main( void )
{
	int num,result;
	printf("Enter the positive numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	result = check_power_3(num);
	if(result == 0)
	{
		printf("%d is power of 3\n",num);
	}
	else
	{
		printf("%d is not power of 3\n",num);
	}

	return 0;
}

