/*
 ============================================================================
 Name        : 6.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Find factorial
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num,fact = 1;
	int count;
	printf("Enter an integer : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if (num<0)
	{
		printf("Error!!!Factorial of negative number doesn't exist");
	}
	else
	{
		for(count=1;count<=num; count++)
		{
			fact*=count;
		}
		printf("The factorial of Number (%d) is : %d",num,fact);
	}
	return EXIT_SUCCESS;
}

