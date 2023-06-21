/*
 ============================================================================
 Name        : Test3.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y,sum;
	printf("Enter two integers: ");
	fflush(stdin),fflush(stdout);
	scanf("%d %d",&x,&y);
	sum = x+y;
	printf("Sum: %d",sum);
	return EXIT_SUCCESS;
}
