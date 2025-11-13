#include<stdio.h> 

int square(int num) {
	return (num*num);
}

int main() {
	int num;
	scanf("%d", &num);
	printf("Sum is %d ", square(num));
	return 0;
}

