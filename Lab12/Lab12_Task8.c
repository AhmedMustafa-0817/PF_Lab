#include<stdio.h>
#include<stdlib.h>

int main() {
	int *arr = (int *)malloc(10 * sizeof(int));
	if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
	arr[0] = 5;
	arr[1] = 7;
	arr[2] = 10;
	
	arr[1] = 8;
	printf("%d", arr[1]);
	
    return 0;
}
