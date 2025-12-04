#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **ptr;
    ptr = (int **)calloc(3, sizeof(int *));
    if (ptr == NULL)
    {
        printf("Couldnt allocate memory");
    }
	int i, x, y;
    for ( i = 0; i < 3; i++)
    {
        ptr[i] = (int *)calloc(3, sizeof(int));
    }
    printf("Enter values for the matrix\n");
    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            scanf("%d", &ptr[x][y]);
        }
    }
    printf("Matrix: \n");
    for ( x = 0; x < 3; x++)
    {
        for ( y = 0; y < 3; y++)
        {
            printf(" %d ", ptr[x][y]);
        }
        printf("\n");
    }

    for ( i = 0; i < 3; i++)
    {
        free(ptr[i]);
    }
    free(ptr);
}
