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
	printf("6th element : %d", arr[5]);
	free(arr);
	arr=NULL;
}






