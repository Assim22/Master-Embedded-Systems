/*
 ============================================================================
 Name        : Str3.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description :reverse string
 ============================================================================
 */

#include <stdio.h>
#include <string.h>
int main()
{
  	char Str[100], RevStr[100];
  	int i, j, len;
  	printf("Please Enter any String :  ");
  	fflush(stdin);fflush(stdout);
  	gets(Str);
  	j = 0;
  	len = strlen(Str);
  	for (i = len - 1; i >= 0; i--)
  	{
  		RevStr[j++] = Str[i];
  	}
  	RevStr[i] = '\0';
  	printf("String after Reversing = %s", RevStr);
  	return 0;
}
