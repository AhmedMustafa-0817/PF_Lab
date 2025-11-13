#include<stdio.h>
int main()
{
	int positive=0, negative=0, zero=0, even=0, odd=0, row, col, temp;
	int matrix[3][3], transpose[3][3];
	char notSame = 'F';
	for (row=0; row<3; row++) {
		for (col=0; col<3; col++) {
			printf("Enter value for [%d][%d] ", row, col);
			scanf(" %d", &matrix[row][col]);
		}
	}	
	for (row=0; row<3;row++) {  // first transpose
		for (col=0; col<3; col++) {
			transpose[col][row] = matrix[row][col];
		}
	}
	for (row=0; row<3;row++) {  // revverse each row
		temp = transpose[row][0];
		transpose[row][0] = transpose[row][2];
		transpose[row][2] = temp;
	}
		
	for (row=0; row<3;row++) {  
		for (col=0; col<3; col++) {
			if (transpose[row][col] != matrix[row][col]) {
				notSame = 'T'; }
		}
	}
	if (notSame == 'F') {
		printf("Rotated matrix is same as the origional one\n");
	}
	else {
		printf("Rotated matrix is not same as the origional one\n");
	}
	printf("Rotated Matrix:\n");
	for (row=0; row<3;row++) {  
		for (col=0; col<3; col++) {
			printf("%3d ", transpose[row][col]);
		}
		printf("\n");
	}
	
	return 0;
}
