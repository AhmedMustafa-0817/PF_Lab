#include<stdio.h>
int main()
{
	int positive=0, negative=0, zero=0, even=0, odd=0, row, col;
	int matrix[3][3];
	for (row=0; row<3; row++) {
		for (col=0; col<3; col++) {
			printf("Enter value for [%d][%d] ", row, col);
			scanf(" %d", &matrix[row][col]);
			if (matrix[row][col] > 0) {
				positive += 1;
			}
			else if (matrix[row][col] < 0) {
				negative += 1;
			}
			else {
				zero += 1;
			}
			if (matrix[row][col] % 2 == 0) {
				even += 1;
			}
			else {
				odd += 1;
			}
		}
	}
	printf("Positive Numbers = %d\n", positive);
	printf("Negative Numbers = %d\n", negative);
	printf("Number of Zeros = %d\n", zero);
	printf("Even Numbers = %d\n", even);
	printf("Odd Numbers = %d\n", odd);	
	return 0;
}
