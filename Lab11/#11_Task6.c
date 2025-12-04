#include<stdio.h>
#include <stdbool.h>


int Exp(int num, int exp) {
	if (exp == 0) {
		return 1;
	}
	return num* Exp(num, exp-1);
}


int main() {
	int num, ex;
	printf("Enter number: ");
	scanf("%d", &num);
	bool found = false;
	while (found == false) {
		printf("Enter exponent: ");
		scanf("%d", &ex);
		if (ex>= 0 ) {
			found = true;
		}
	}
	printf("value = %d", Exp(num, ex));
	return 0;
}
