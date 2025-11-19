#include<stdio.h> 
#include<string.h>

int main() {
	char word[100], ch;
	printf("Enter word ");
	scanf(" %s", word);
	printf("Enter char ");
	scanf(" %c", &ch);
	char *final = strchr(word, ch);
	printf("Index = %d ", (final - word ));
	return 0;
}
