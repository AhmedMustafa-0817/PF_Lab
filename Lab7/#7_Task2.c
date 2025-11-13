#include<stdio.h>
int main()
{
	int sumOdd=0, sumEven=0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for (int i = 0; i<=9; i++)
	{
		if (i%2 == 0)  // even
		{
			sumEven += arr[i];
		}
		if (i%2 == 1)  //odd
		{
			sumOdd += arr[i];
		}
	}
	if (sumEven == 0)
	{
		printf("No even numbers\n");
	}
	else 
	{
		printf("Sum of even = %d\n", sumEven);
	}
	
	if (sumOdd == 0)
	{
		printf("No odd numbers");
	}
	else 
	{
		printf("Sum of odd = %d", sumOdd);
	}

	return 0;
}

