/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex10.c
 Author      : Esraa_Salman
 Description : Assignment 1 - Ex10
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main( void )
{
	int num1,num2,result;
	char operator;
	printf("Enter the operator:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);
	printf("Enter the two integer numbers:");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&num1,&num2);

	switch(operator)
	{
	case '*':
		result=num1*num2;
		break;
	case '/':
		result=num1/num2;
		break;
	case '+':
		result=num1+num2;
		break;
	case '-':
		result=num1-num2;
		break;
	default:
		printf("Error operator !!!");
		break;
	}

	printf("The result of %d %c %d =%d",num1,operator,num2,result);

	return 0;
}

