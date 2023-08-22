/*
 ============================================================================
 Name        : Ex5.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : search in c by arrays
 ============================================================================
 */



#include <stdio.h>

int main()
{
    int arr[60];
    int size, i, toSearch, found;

    printf("Enter size of array: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &size);

    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter element to search: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &toSearch);

    found = 0;

    for(i=0; i<size; i++)
    {
        if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("\n%d is found at position %d", toSearch, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", toSearch);
    }

    return 0;
}
