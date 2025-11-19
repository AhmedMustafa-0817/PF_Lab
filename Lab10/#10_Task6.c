#include <stdio.h>
#include <string.h>

int main() {
	char word1[100];
	char word2[100];
	printf("Enter first name ");
	scanf(" %s", word1);
	printf("Enter second name ");
	scanf(" %s", word2);
	strcat(word1, word2);
	printf("\nFull Username: %s\n", word1);
	
    return 0;
}
