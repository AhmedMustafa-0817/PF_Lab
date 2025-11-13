#include<stdio.h>
int main()
{
	int limit;
	int primeCount = 0;
	int sum = 0;
	printf("Enter limit ");
	scanf("%d", &limit);
	if (limit == 1)
	{
		printf("1 is neither prime nor composite");
	}
	for (int i=2; i<= limit ; i++)
	{
		int count = 0; 
		for (int j= 1; j<= i; j++)
		{
			if (i%j == 0)
			{
				count += 1;
			}
		}
		if (count <= 2)
		{
			printf("%d\n", i);
			primeCount += 1;
			sum = sum + i;
		}
	}
	printf("Total number of prime numbers in this range are %d\n", primeCount);
	printf("Sum of all prime numbers is %d ", sum);
	return 0;
}

