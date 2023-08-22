/*
 ============================================================================
 Name        : Ex4.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : insert an element in array
 ============================================================================
 */


#include <stdio.h>

int main()
{
    int arr[10];
    int i, size, num, pos;

    printf("Enter size of the array : ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &size);

    printf("Enter elements in array :\n ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert :\n ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &num);
    printf("Enter the element position : ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &pos);

    if(pos > size+1 || pos <= 0)
    {
        printf("Invalid position! Please enter position between 1 to %d", size);
    }
    else
    {
        for(i=size; i>=pos; i--)
        {
            arr[i] = arr[i-1];
        }

        arr[pos-1] = num;
        size++;

        printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
