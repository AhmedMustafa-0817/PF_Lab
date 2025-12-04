#include<stdio.h>
#include<string.h>

int reverse(char msg[100], int len) {
	if (len < 0) {
		return 0;
	}
	else {
		printf(" %c", msg[len]);
		reverse(msg, len-1);
	}
}

int main() {
	char msg[100];
	printf("Enter msg : ");
	fgets(msg, 100, stdin);
	int len = strlen(msg);
	reverse(msg, len-1);
	return 0;
}
