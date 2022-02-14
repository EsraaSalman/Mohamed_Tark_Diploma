/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex4.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex4
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculator (int num1, int num2, int operator)
{
	switch(operator)
	{
	case '*':
		return num1*num2;
		break;
	case '/':
		return num1/num2;
		break;
	case '+':
		return num1+num2;
		break;
	case '-':
		return num1-num2;
		break;
	default:
		printf("Error!!!");
		return 0;
	}
}

int main( void )
{
	int num1,num2,result;
	char operator;
	printf("Enter the two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);
	printf("Enter the operator: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);

    result=calculator (num1,num2,operator);
    printf("The result of %d %c %d = %d ",num1,operator,num2,result);

	return 0;
}

