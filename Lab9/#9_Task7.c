#include<stdio.h>

int main() {
	int *ptr = NULL;
	if (ptr == NULL) {
		printf("it doesnot reference any valid memory");
	}
	return 0;
}
