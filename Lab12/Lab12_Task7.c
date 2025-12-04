#include<stdio.h>
#include<stdlib.h>

int main() {
	int *ptr = (int *)malloc(5 * sizeof(int));
	if (ptr == NULL) {
		printf("Memory not assigned");
		return 1;
	}
	int *newptr = (int *)realloc(NULL, 7*sizeof(int));
	
	printf("realloc returned a pointer: %p\n", (void *)newptr);
    printf("malloc returned a pointer: %p\n", (void *)ptr);
    
    free(ptr);
    free(newptr);
    return 0;
}
