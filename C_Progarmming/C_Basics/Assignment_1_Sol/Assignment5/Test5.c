/*
 ============================================================================
 Name        : Test5.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char G;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&G);
	printf("ASCII value of G = %d",G);
	return EXIT_SUCCESS;
}
