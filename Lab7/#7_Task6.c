#include<stdio.h>
int main ()
{
	int num[5];
	int num2[5];
	for (int i = 0; i<=4; i++)
	{
		printf("Enter number\n");
		scanf("%d", &num[i]);
		num2[i] = (num[i]+10-5)*2;

	}
	for (int x = 0; x<=4; x++)
	{
		printf("(%d + 10 - 5 ) * 2 = %d\n", num[x], num2[x]);
	}
	return 0;
}
