#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    
    int *arr = (int *)malloc(n);  

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

	int i;
    for ( i = 0; i < n; i++) {
        arr[i] = i + 1;         
}
    for ( i = 0; i < n; i++) {
        printf("%d ", arr[i]);   
    }
    printf("\n");

    return 0;
}

