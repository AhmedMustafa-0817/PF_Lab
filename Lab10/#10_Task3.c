#include<stdio.h> 
#include<string.h>

int main() {
	char code[2][20];
	int n;
	printf("Enter code 1: ");
	scanf(" %s", code[1]);
	printf("Enter code 2: ");
	scanf(" %s", code[2]);	
	printf("Enter n: ");
	scanf(" %d", &n);
	if (n>strlen(code[0]) || n>strlen(code[1])) {
		printf("Not same\n");
	}
	else {
		if (strncmp(code[0], code[1], n)) {
			printf("Same Category");
		}
	}
	return 0;
}
