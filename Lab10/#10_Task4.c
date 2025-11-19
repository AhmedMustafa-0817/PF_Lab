#include <stdio.h>
#include <string.h>

int main() {
    FILE *fptr;

    fptr = fopen("library.txt", "w");
    if (fptr == NULL) {
        printf("Error in opening the file\n");
        return 1;
    }

    int i;    
    int ids;


    for (i = 0; i < 3; i++) {
        printf("Enter ID : ");
        scanf("%d", &ids);
        fprintf(fptr, "%d\n", ids);
    }

    fclose(fptr);

    fptr = fopen("library.txt", "r");
    if (fptr == NULL) {
        printf("Error in opening the file\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        fscanf(fptr, "%d", &ids);   
        printf("ID : %d\n", ids);
    }

    fclose(fptr);

    return 0;
}

