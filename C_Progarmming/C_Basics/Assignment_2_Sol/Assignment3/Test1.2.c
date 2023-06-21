/*
 ============================================================================
 Name        : 2.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Enter 3 Numbers to know the largest one
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float Num_One,Num_Two,Num_Three;
	printf("Enter the three Numbers : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f %f",&Num_One,&Num_Two,&Num_Three);
	if (Num_One>Num_Two)
	{
		if (Num_One>Num_Three)
			printf("The largest value is : %f \n",Num_One);
		else
			printf("The largest value is : %f \n",Num_Three);
	}
	if (Num_Two>Num_One)
	{
		if(Num_Two>Num_Three)
			printf("The largest value is : %f \n",Num_Two);
		else
			printf("The largest value is : %f \n",Num_Three);
	}
	return EXIT_SUCCESS;
}
