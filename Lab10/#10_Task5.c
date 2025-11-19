#include <stdio.h>
#include <string.h>

int main() {
	char word[100];
	char backup[100];
	printf("Enter the word ");
	fgets(word, sizeof(word), stdin);
	strcpy(backup, word);
	printf("\nOrgional msg: %s\n", word);
	printf("Backup msg: %s\n", backup);
	
    return 0;
}
