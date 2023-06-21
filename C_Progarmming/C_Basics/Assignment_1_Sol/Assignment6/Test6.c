/*
 ============================================================================
 Name        : Test6.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float Num_One,Num_Two,Temp;
	printf("Enter value of NumOne: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Num_One);
	printf("Enter value of NumTwo: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Num_Two);
	Temp = Num_One;
	Num_One = Num_Two;
	Num_Two = Temp;
	printf("After swapping, value of NumOne = %0.2f \n",Num_One);
	printf("After swapping, value of NumTwo = %0.2f \n",Num_Two);

	return EXIT_SUCCESS;
}
