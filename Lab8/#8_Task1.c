#include<stdio.h>
int main()
{
	int arr1[3][3];
	int arrnew[3][3];
	int row, col;
	for ( row = 0; row <3 ; row++) {
		for ( col = 0; col < 3; col++) {
			printf("input for array ");
			scanf(" %d", &arr1[row][col]);
		}
	}
	for ( col = 0; col <3 ; col++) {
		for ( row = 0; row < 3; row++) {
			arrnew[col][row] = arr1[row][col];
		}
	}
	
	for ( row = 0; row <3 ; row++) {
		for ( col = 0; col < 3; col++) {
			if (arr1[row][col] != arrnew[row][col]) {
				printf("Not symmetric");
				return 0;
			}
		}
	}
	printf("Symmetric");
	return 0;
}

