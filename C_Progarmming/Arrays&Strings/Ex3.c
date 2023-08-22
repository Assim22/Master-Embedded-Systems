/*
 ============================================================================
 Name        : Ex3.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Transpose of matrix with arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int mat[10][10],trans[10][10];
	int r,c,i,j;
	printf("Enter the rows and columns of the matrix : \n");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&r,&c);

	printf("Enter The elements of matrix : \n");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++){
			printf("Enter elements a%d%d : ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&mat[i][j]);
		}

	printf("Entered Matrix :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",mat[i][j]);
		}

		printf("\n");
	}
	for(i=0;i<c;i++)
		for(j=0;j<r;j++){
			trans[i][j] = mat[j][i];
		}


	printf("Transpose of matrix : \n");
	for(i=0;i<c;i++){
		for(j=0;j<r;j++){
			 printf("%d\t", trans[i][j]);
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
