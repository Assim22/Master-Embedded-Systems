/*
 ============================================================================
 Name        : Ex2.c
 Author      : Assim Abnour
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate Average using arrays
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num[100];
	float sum;
	int n,i;

	printf("Enter the number of data : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);
	while(n>100 || n<=0){
		printf("Error !!!!,Number should range of (1 to 100)\n");
		printf("Enter the number again : \n");
		fflush(stdin);fflush(stdout);
		scanf("%f",&n);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter Number : ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&num[i]);
		sum+=num[i];
	}
	float average;
	average = sum/n;
	printf("Average = %.1f",average);



	return EXIT_SUCCESS;
}
