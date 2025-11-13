#include<stdio.h>

int add(int a, int b) {
	return (a+b);
}

int subtract(int a, int b) {
	return (a-b);
}

int mult(int a, int b) {
	return (a*b);
}

float div(int a, int b) {
	float x;
	x = b;
	return (a/x);
}

int main() {
	int ans;
	int (*option)(int, int);
	printf("Enter what to do ");
	scanf("%d", &ans);
	switch(ans) {
		case 1:
			option = &add;
			break;
		case 2:
			option = &subtract;
			break;
		case 3:
			option = &mult;	
			break;
		case 4:
			option = &div;
			break;
	}
	ans = option(10, 5);
	printf("%d", ans);
	return 0;
}
