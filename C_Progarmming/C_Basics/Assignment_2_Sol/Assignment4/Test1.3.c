/*
 ============================================================================
 Name        : 3.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Know the positive and the negative Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float Num;
	printf("Enter the Number : ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Num);
	if(Num>0)
	{
		printf("%f : The Number is Positive ",Num);
	}
	else if (Num<0)
	{
		printf("%f : The Number is Negative ",Num);
	}
	else
	{
		printf("You Entered Zero ");
	}
	return EXIT_SUCCESS;
}
