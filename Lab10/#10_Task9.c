#include <stdio.h>
#include <string.h>


int main() {
    char names[3][20]; 
    printf("Enter the names of three students:\n");
    int i;
    for ( i = 0; i < 3; i++) {
        printf("Enter name %d: ", i + 1);
        scanf(" %s", names[i]);
    }

    for ( i = 0; i < 3; i++) {
    	printf("\nThe Characters in name %d are:\n", i+1);
    	int j;
    	for (j=0; j< strlen(names[i]); j++) {
    		printf("%c ", names[i][j]);
		}
        printf("\n");
    }

    return 0;
}

