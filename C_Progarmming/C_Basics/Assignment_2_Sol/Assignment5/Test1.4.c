/*
 ============================================================================
 Name        : 4.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Check whether that charcter is alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letter;
	printf("Enter a character : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&letter);
	if ((letter >= 'a' && letter<='z')||(letter >= 'A'&& letter<= 'Z'))
	{
		printf("%c is an alphabet",letter);
	}
	else
	{
		printf("%c is not an alpabet",letter);
	}
	return EXIT_SUCCESS;
}
