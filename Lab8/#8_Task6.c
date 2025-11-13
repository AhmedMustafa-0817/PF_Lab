#include<stdio.h>
int main()
{
	int matrix[3][3], row, col;
	int transpose[3][3];
	for (row=0; row<3;row++) {
		for (col=0; col<3; col++) {
			printf("Enter value for [%d][%d] ", row, col);
			scanf(" %d", &matrix[row][col]);
		}
	}
	for (row=0; row<3;row++) {
		for (col=0; col<3; col++) {
			transpose[col][row] = matrix[row][col];
			printf("%2d ", matrix[row][col]);
		}
		printf("\n");
	}
	printf("\n");
	for (row=0; row<3;row++) {
		for (col=0; col<3; col++) {
			printf("%2d ", transpose[row][col]);
		}
		printf("\n");
	}
	return 0;
}
