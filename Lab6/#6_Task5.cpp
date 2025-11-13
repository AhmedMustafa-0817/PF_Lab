#include<stdio.h>
int main()
{
	int limit, product = 1;
	printf("Enter the factorial value ");
	scanf("%d", &limit);
	for (int i= limit ; i > 0 ; i--)
	{
		product = product * i;
	}
	printf("The value of %d! is %d ", limit, product);
	return 0;
}
