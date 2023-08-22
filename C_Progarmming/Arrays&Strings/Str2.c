/*
 ============================================================================
 Name        : Str2.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : find length of string
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];

    printf("Enter a string: ");
    fflush(stdin);fflush(stdout);
    scanf("%s", str);

    int len = strlen(str);

    printf("The length of the string is: %d\n", len);
}
