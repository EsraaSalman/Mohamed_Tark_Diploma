/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex7.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex7
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int check_multi (int num1, int num2)
{
	while(num1!=1)
	{
		if(num1%num2==0)
			num1/=num2;
		else
			return 0;
	}
	return 1;
}

int main( void )
{
	int num1,num2,flag;
	printf("Enter the two numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);

	flag=check_multi(num1,num2);
	if(flag==1)
		printf("%d is multiply of %d",num1,num2);
	else
		printf("%d is not multiply of %d",num1,num2);

	return 0;
}

