/*
 ============================================================================
 Name        : Str1.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : freq of char in a string
 ============================================================================
 */

#include <stdio.h>
int main()
{
    char str[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to find its frequency: ");
    fflush(stdin);fflush(stdout);
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            ++count;
    }

    printf("Frequency of %c = %d", ch, count);
    return 0;
}
