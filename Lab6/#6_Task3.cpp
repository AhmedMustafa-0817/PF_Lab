#include<stdio.h>
int main()
{
	int limit, first, second;
	int sum = 0;
	printf("Enter limit for fibonacci sequence ");
	scanf("%d", &limit);
	if (limit == 1)
	{
		printf("0");
	}
	else if (limit == 2)
	{
		printf("0 1");
	}
	else {
		first = 0;
		second = 1;
		printf("0  1  ");
		for (int i = 1; i <= (limit-2); i++) 
		{
			sum = first + second;
			printf("%d  ", sum);
			first = second;
			second = sum;
		}
	}
	return 0;
}

