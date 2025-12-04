#include<stdio.h>

void count() {
	static int count = 0;
	count += 1;
	printf("Function has been executed %d times.\n", count);
}

int main() {
	int i;
	for (i=0 ; i<5; i++) {
		count();
	}
	return 0;
}
