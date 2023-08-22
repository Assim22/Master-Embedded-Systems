/*
 ============================================================================
 Name        : Ex1.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Multidimensional Array in C
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2],b[2][2];
	int r,c;
	printf("Enter the element of 1st Matrix : \n");
	for(r=0;r<2;r++)
		for(c=0;c<2;c++){
			printf("Enter a%d%d : ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	printf("Enter the element of 2nd Matrix : \n");
	for(r=0;r<2;r++)
		for(c=0;c<2;c++){
			printf("Enter b%d%d : ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[r][c]);
		}
	float sum[2][2];
	printf("Sum of Matrices : \n");
	for(r=0;r<2;r++)
		for(c=0;c<2;c++){
			sum[r][c] = a[r][c]+b[r][c];
		}
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%0.1f\t",sum[r][c]);

		}
	printf("\r\n");
	}
	return EXIT_SUCCESS;
}
