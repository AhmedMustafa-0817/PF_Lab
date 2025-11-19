#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;
	char names[5][20]; 
	char search[20];
    fptr = fopen("names.txt", "w");
    if (fptr == NULL) {
        printf("Error in opening the file\n");
        return 1;
    }
    int i;    
    for (i = 0; i < 5; i++) {
        printf("Enter Name %d : ", i+1);
        scanf(" %s", names[i]);
        fprintf(fptr, "%s\n", names[i]);
    }
    fclose(fptr);

    fptr = fopen("names.txt", "r");
    if (fptr == NULL) {
        printf("Error in opening the file\n");
        return 1;
    }
	printf("Enter the name you want to search : ");
	scanf(" %s", search);
	char n[20];
    for (i = 0; i < 5; i++) {
    	fscanf(fptr, "%s", n);
    	if (strcmp(n, search) == 0) {
    		printf("Name Found in Directory");
    		return 0;
		}
    }
    fclose(fptr);
    printf("Name Not Found in Directory");
    return 0;
}
