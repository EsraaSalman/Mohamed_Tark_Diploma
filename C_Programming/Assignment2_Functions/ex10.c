/**************************************************************************************************
 Mohamed_Tark_Diploma
 Name        : ex10.c
 Author      : Esraa_Salman
 Description : Assignment 2 - Ex10
 **************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void no_holes (int num)
{
	int hole,reminder;
	printf("The number of holes of %d is:",num);
    while(num!=0)
    {
    	reminder=num%10;
    	if( (reminder==0) || (reminder==4) || (reminder==6) || (reminder==9))
    		hole++;
    	else if (reminder==8)
    		hole+=2;
    	num/=10;
    }
	printf(" %d",hole);
}

int main( void )
{
	int num;
	printf("Enter the number: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	no_holes(num);

	return 0;
}

