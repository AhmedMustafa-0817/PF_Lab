#include<stdio.h>

int main()
{
	int size;
	printf("Size: ");
	scanf("%d", &size);
	if (size%2 == 0) {
		printf("Cant print a diamond as the number of rows are even");
	}
	else {
		int top = (size-1);
		int botton = (size-1);
		int i, j, spaces = top;
		for (i=1; i<=top; i++) {
			for (j=1; j<=spaces; j++) {
				printf(" ");
			}
			spaces -= 1;
			for (j= 1; j<= i; j++) {
				printf("* ");
			}
		printf("\n");
		}
		for (j= 1; j<= size; j++) {
			printf("* "); }
		printf("\n");
		spaces = 1;
		for (i=top; i>=1; i--) {
			for (j=spaces; j>= 1; j--) {
				printf(" ");
			}
			spaces += 1;
			for (j= i; j>=1; j--) {
				printf("* ");
			}
		printf("\n");
		}
	}
	return 0;
}
