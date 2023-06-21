/*
 ============================================================================
 Name        : Test4.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float Num_One,Num_Two,multiple;
	printf("Enter two numbers: ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&Num_One,&Num_Two);
	multiple = Num_One * Num_Two;
	printf("Product: %f",multiple);
	return EXIT_SUCCESS;
}
