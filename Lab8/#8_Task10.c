#include<stdio.h>

int main()
{
	int size;
	printf("Size: ");
	scanf("%d", &size);

	int i, j, spaces = (size-1);
	int arr[100];
	int n[100];
	for (i=0; i<size; i++) {
		if (i==0) {
			n[0] = 1;
		}
		else if (i==1) {
			n[1] = 1;
		}
		else {
			for (j=1 ; j<i; j++) {
				n[j] = arr[j-1] + arr[j];
			}
			n[i] = 1;
		}
		for (j=0; j<=i; j++) {
			arr[j] = n[j];
		}

		for (j=1; j<=spaces; j++) {
			printf("  ");
		}
		spaces -= 1;
		for (j= 0; j<=i; j++) {
			printf("%3d ", arr[j]);
		}
		printf("\n");
	}

	return 0;
}
