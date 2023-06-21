/*
 ============================================================================
 Name        : 1.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Know The vowel letters and the consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char letter;
	printf("Enter an alphabet : ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&letter);
	switch(letter)
	{
	case 'a' :
	case 'e' :
	case 'i' :
	case 'o' :
	case 'u' :
	{
		printf("%c : is an vowel letter ",letter);
	}
	break;
	default:
	{
		printf("%c : is an consonant letter ",letter);
	}
	}
	return EXIT_SUCCESS;
}
