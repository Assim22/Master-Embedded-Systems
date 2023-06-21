/*
 ============================================================================
 Name        : Test7.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float Num_One,Num_Two;
	printf("Enter value of NumOne: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Num_One);
	printf("Enter value of NumTwo: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&Num_Two);
	/*Num_One = Num_One + Num_Two;
	Num_Two = Num_One - Num_Two;
	Num_One = Num_One - Num_Two;*/
	Num_One = Num_One*Num_Two;
	Num_Two = Num_One/Num_Two;
	Num_One = Num_One/Num_Two;
	printf("After swapping, value of NumOne = %0.2f \n",Num_One);
	printf("After swapping, value of NumTwo = %0.2f \n",Num_Two);

	return EXIT_SUCCESS;
}
