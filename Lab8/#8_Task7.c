#include<stdio.h>
int main()
{
	int N;
	printf("Enter 2 for 2x2 matrix and 3 for 3x3 matrix ");
	scanf("%d", &N);
	int one[N][N];
	int row, col, k;
	int two[N][N];
	int ans[N][N];
	printf("Enter values for Matrix One\n");
	for (row=0; row<N; row++) {
		for (col=0; col<N; col++) {
			printf("Enter value for [%d][%d] ", row, col);
			scanf(" %d", &one[row][col]);
		}
	}	
	printf("Enter values for Matrix Two\n");
	for (row=0; row<N; row++) {
		for (col=0; col<N; col++) {
				printf("Enter value for [%d][%d] ", row, col);
				scanf(" %d", &two[row][col]);
		}
	}
	for (row=0; row<N; row++) {
		for (col=0; col<N; col++) {
			for (k=0; k<N; k++) {
				ans[row][col] += one[row][k] * two[k][col];
			}
		}
	}
	
	printf("Product for Matrix One and Two\n");
	for (row=0; row<N; row++) {
		for (col=0; col<N; col++) {
				printf("%4d ", ans[row][col]);
		}
		printf("\n");
	}
	return 0;
}
