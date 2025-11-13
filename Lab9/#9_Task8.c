#include<stdio.h>

int main() {
	int num=5;
	float num2=6.5;
	char answer='Y';
	void *ptr;
	ptr = &num;
	printf("%d\n", *(int *)ptr);
	ptr = &num2;
	printf("%f\n", *(float *)ptr);
	ptr = &answer;
	printf("%c", *(char *)ptr);

	return 0;
}
