/*
 ============================================================================
 Name        : 5.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : the summition of numbers between 1to100
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Num,Sum;
	printf("Enter the integer : ");
	fflush(stdin),fflush(stdout);
	scanf("%d",&Num);
	for(Num= 0 ; Num<=100 ; Num++)
	{
		Sum = Sum+Num ;
	}
	printf("Sum = %d",Sum);
	return EXIT_SUCCESS;
}
