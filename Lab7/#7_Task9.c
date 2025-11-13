#include<stdio.h>
int main ()
{
	int arr1[5], arr2[5], arr[10], index = 0;
	printf("Start entering response of survey\n");
	for (int i=0; i<=4; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter response of the survey\n");
	for (int i=0; i<=4; i++)
	{
		scanf("%d", &arr2[i]);
	}
	printf("All responses : ");
	for (int i = 0 ; i<=9 ; i++) {
		if (i<5) {
			arr[i] = arr1[i];
		}
		else
		{
			arr[i] = arr2[index];
			index += 1;
		}
		printf("%d ", arr[i]);
	}
	return 0;
}
