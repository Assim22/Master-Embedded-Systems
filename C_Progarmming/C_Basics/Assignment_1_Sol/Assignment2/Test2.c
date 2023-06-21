/*
 ============================================================================
 Name        : Test2.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Num;
	printf("Enter a integer: ")	;
	fflush(stdin);fflush(stdout);
	scanf("%d",&Num);
	printf("You entered: %d",Num);
	return EXIT_SUCCESS;
}
