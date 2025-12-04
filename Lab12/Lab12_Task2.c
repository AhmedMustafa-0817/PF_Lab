#include<stdio.h>
#include<stdlib.h>

int main() {
	int *arr = (int *)malloc(5*sizeof(int));
	
	if (arr == NULL) {
		printf("Memory not assigned\n");
	}
	int i;
	for ( i=0; i<5; i++) {
		arr[i] = i+1;
		printf("%d\n", arr[i]);
	}

	free(arr);
	printf("%d\n", arr);
	free(arr);
	printf("%d\n", arr);
}


