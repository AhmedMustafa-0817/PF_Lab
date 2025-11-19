#include <stdio.h>
#include <string.h>

int main() {
	char word1[100];
	char word2[100];
	printf("Enter Password ");
	fgets(word1, sizeof(word1), stdin);
	printf("Re-enter and Confirm Password ");
	fgets(word2, sizeof(word2), stdin);
	if (strcmp(word1, word2) == 0) {
		printf("Passwords Matched\n");
	}
	else {
		printf("Passwords do not match");
	}
	
	
    return 0;
}
