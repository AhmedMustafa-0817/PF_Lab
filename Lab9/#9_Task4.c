#include<stdio.h> 

int findMax(int arr[5]) {
	int max = -100;
	for (int row=0 ; row<2; row++) {
		if (arr[row] > max) {
				max = arr[row];
		}
	}
	return max;
}


int main() 
{
	int arr[5] = {1,7,3,4,5};
	printf("Max number = %d\n", findMax(arr));
	return 0;
}

