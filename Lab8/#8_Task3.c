#include<stdio.h>
int main()
{
	int main=0, secondary=0, n, index, total, col, row;
	printf("Enter n ");
	scanf("%d", &n);
	int arr[n][n];
	
	for ( row = 0; row< n; row++) {
		for ( col = 0; col < n; col++) {
			printf("Value: ");
			scanf("%d", &arr[row][col]);
		}
	}
	
	for ( row = 0; row< n; row++) {
		for ( col = 0; col < n; col++) {
			if (row==col)	 {
				main = main + arr[row][col];
			}
		}
	}
	for ( row= 0; row<n; row++) {
		col = n-1-row;
		secondary = secondary + arr[row][col];
		col = col-1;
	}
	if (n%2 == 1) {
		index = n/2;
		main = main- arr[index][index];
	}
	
	total = main + secondary;
	
	printf("Sum of main = %d\n", main);
	printf("Sum of secondary = %d\n", secondary);
	printf("Sum of total = %d\n", total);

	return 0;
}

