/*
 ============================================================================
 Name        : 7.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Make simple calculate to Add,Subtract,Multiply or Divide Using switch case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char operator;
	printf("Enter operator either + or - or * or divide : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&operator);
	float Num_One,Num_Two;
	printf("Enter Two operads : ");
	fflush(stdin);fflush(stdout);
	scanf("%f %f",&Num_One,&Num_Two);
	switch(operator)
	{
	case '+':
	{
		printf("%f + %f = %f",Num_One,Num_Two,Num_One+Num_Two);
	}
	break;
	case '-':
	{
		printf("%f - %f = %f",Num_One,Num_Two,Num_One-Num_Two);
	}
	break;
	case '*':
	{
		printf("%f * %f = %f",Num_One,Num_Two,Num_One*Num_Two);
	}
	break;
	case '/':
	{
		printf("%f / %f = %f",Num_One,Num_Two,Num_One/Num_Two);
	}
	break;
	}
	return EXIT_SUCCESS;
}
