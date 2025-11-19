#include<stdio.h> 
#include<string.h>

int main() {
	char word[100];
	printf("Enter word ");
	fgets(word, sizeof(word), stdin);
	word[strcspn(word, "\n")] = '\0';
	strcat(word, "Falcon");
	int length = strlen(word) - strlen("Falcon");
	printf("The code: %s; has %d characters", word, length);
	return 0;
}
