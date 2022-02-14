/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex11.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex11
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int count=0,sum=0;

    for(count=0;count<100;count++)
    {
        sum += count;
    }

    printf("sum of the first 100 integer numbers equals : %d\n",sum);

    if(sum == 4950)
    {
        printf("sum of the first 100 integer numbers is correct\n");
    }
    else
    {
        printf("sum of the first 100 integer numbers is not correct\n");
    }

	return 0;
}

