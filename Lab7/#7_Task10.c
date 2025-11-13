#include<stdio.h>
int main ()
{
	int num, x;
	printf("How many element? ");
	scanf("%d", &num);
	int arr[num];
	for (int i = 0 ; i< num; i++)
	{
		printf("Enter number for element %d of the array\n", (i+1));
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i< num; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\nWhich element do you want ot modify, enter index then the new value\n");
	scanf("%d", &x);
	scanf("%d", &arr[x-1]);
	for (int i = 0; i< num; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}






