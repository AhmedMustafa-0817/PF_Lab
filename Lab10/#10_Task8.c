#include <stdio.h>

int main() {
    char names[3][20]; 
    printf("Enter the names of three students:\n");
    int i;
    for ( i = 0; i < 3; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
    }

    printf("\nThe names you entered are:\n");
    for ( i = 0; i < 3; i++) {
        printf("%s", names[i]);
    }

    return 0;
}

