/*
 ============================================================================
 Name        : 0.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Know the Number is odd or even
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Num;
	printf("Enter an integer you want to check : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&Num);
	if(Num%2)
	{
		printf("%d is odd",Num);
	}
	else {
		printf("%d is even",Num);
	}
	return EXIT_SUCCESS;
}
