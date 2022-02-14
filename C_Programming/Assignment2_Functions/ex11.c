/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex11.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex11
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check_power_2 (int num)
{
    while(num!=1)
    {
    	if(num%2==0)
    	num/=2;
    	else
    	return 0;
    }
	return 1;
}

int main( void )
{
	int num,flag;
	printf("Enter the number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);

	flag=check_power_2(num);
	if(flag==0)
		printf("%d is not power of 2",num);
	else
		printf("%d is power of 2",num);


	return 0;
}

