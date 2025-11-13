#include<stdio.h>
int main()
{
	char Choice;
	int num;
	int evenCount= 0;
	int oddCount =0;
	do
	{
		printf("Enter number ");
		scanf("%d", &num);
		if (num%2 == 0)
		{
			printf("even number");
			evenCount += 1;
		}
		else
		{
			printf("odd number");
			oddCount += 1;	
		}
		printf("Press Y to continue and N to stop\n");
		scanf(" %c", &Choice);
	}
	while(Choice == 'Y');
	
	printf("The total even numbers are %d ", evenCount);
	printf("The total odd numbers are %d ", oddCount);

	return 0;
}

