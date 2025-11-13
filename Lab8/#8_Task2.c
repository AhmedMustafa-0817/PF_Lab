#include<stdio.h>
int main()
{
	int x,y=0, index;
	printf("Enter row");
	scanf("%d", &x);
	index = x;
	int row, col, blank;
	for ( row = 1 ; row<= x; row++) {
		for ( blank = (index-1) ; blank>0; blank--)
		{
			printf(" ");
		}
		for ( col = 1; col<= row; col++) {
			printf("%d", col);
		}
		printf("\n");
		index -= 1;
	}
	return 0;
}

