#include<stdio.h> 

void displayMatrix(int arr[2][3]) {
	for (int row=0 ; row<2; row++) {
		for (int col=0; col <3; col++) {
			printf("%d ", arr[row][col]);
		}
		printf("\n");
	}
}

int calculateSum(int arr[2][3]) {
	int sum;
	for (int row=0 ; row<2; row++) {
		for (int col=0; col <3; col++) {
			sum += arr[row][col];
		}
	}
	return sum;
}


float calculateAverage(int arr[2][3]) {

	int sum;
	for (int row=0 ; row<2; row++) {
		for (int col=0; col <3; col++) {
			sum += arr[row][col];
		}
	}
	return (sum/6);
}


int findMax(int arr[2][3]) {
	int max = arr[0][0];
	for (int row=0 ; row<2; row++) {
		for (int col=0; col <3; col++) {
			if (arr[row][col] > max) {
				max = arr[row][col];
			}
		}
	}
	return max;
}


int main() 
{
	int sum = 0;
	int arr[2][3] = {{1,2,3}, {4,5,6}};
	displayMatrix(arr);
	printf("Sum = %d\n", calculateSum(arr));
	printf("Average = %f\n", calculateAverage(arr));
	printf("Max number = %d\n", findMax(arr));
}

