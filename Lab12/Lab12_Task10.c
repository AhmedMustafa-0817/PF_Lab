#include<stdio.h>
#include<stdlib.h>

int main() {
	int *ptr = (int *)malloc(2 * sizeof(int));
	if (ptr == NULL) {
		printf("Memory not assigned");
		return 1;
	}
	ptr[0] = 2;
	ptr = (int *)realloc(ptr, 4*sizeof(int));
    free(ptr);
    
    printf("%d", ptr[0]);
    return 0;
}
