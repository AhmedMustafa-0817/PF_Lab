#include<stdio.h>
int main()
{
	int num, sum=0;
	char ans;

	do {
		printf("Enter number\n");
		scanf("%d", &num);
		sum += num;
		printf("sum = %d\n", sum);
		printf("Do you want to enter another number ? Enter Y for yes and N for no\n");
		scanf(" %c", &ans);		
	} while(ans == 'Y');
	
	printf("final sum = %d\n", sum);
	return 0;
}
