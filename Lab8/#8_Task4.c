#include<stdio.h>
int main()
{
	int matrix[3][3], row, col;
	for (row=0; row<3;row++) {
		for (col=0; col<3; col++) {
			printf("Enter value for [%d][%d] ", row, col);
			scanf(" %d", &matrix[row][col]);
		}
	}
	if (matrix[1][0]==0 && matrix[2][0] ==0 && matrix[2][1] == 0) {
		printf("Upper triangle\n");
	}
	else if (matrix[0][1]==0 && matrix[0][2] ==0 && matrix[1][2] == 0) {
		printf("Lower triangle\n");
	}
	else {
		printf("neither");
	}
	return 0;
}
