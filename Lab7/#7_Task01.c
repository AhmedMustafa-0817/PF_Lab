#include<stdio.h>
int main()
{
	int sum = 0, count = 0, temp;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	for (i = 0; i<=9; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	for (i = 9; i>=5; i--)
	{
		temp = arr[i];
		arr[i] = arr[count];
		arr[count] = temp;
		count += 1;
	}
	for (i = 0; i<=9; i++)
	{
		printf("%d\t", arr[i]);
		sum = sum + arr[i];

	}
	
	
	printf("\n");
	printf("The sum is %d", sum);
	return 0;
}

