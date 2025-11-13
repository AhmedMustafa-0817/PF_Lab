#include<stdio.h>
int main()
{
	int num, largest, smallest;
	char ans;
	printf("Enter number\n");
	scanf("%d", &num);
	largest = num;
	smallest = num;
	do {
		printf("Enter number\n");
		scanf(" %d", &num);
		if (num>largest) 
		{
			largest = num;
		}
		else if (num< smallest)
		{
			smallest = num;
		}
		printf("The largest number is %d\n", largest);
		printf("The smallest number is %d\n", smallest);
		printf("Do you want to continue enter Y for yes and N for no\n");
		scanf(" %c", &ans);		
	} while(ans == 'Y');
	
	printf("The largest number is %d\n", largest);
	printf("The smallest number is %d\n", smallest);
	return 0;
}
