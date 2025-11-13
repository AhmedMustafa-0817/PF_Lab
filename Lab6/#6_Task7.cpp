#include<stdio.h>
int main()
{
	int amount, total = 5000, deposits = 0, withdrawl = 0;
	printf("input the amount for transaction (positive for deposits, negative for withdrawals)\n ");
	scanf("%d", &amount);
	do {
		if (amount >= 0)
		{
			total = total + amount;
			deposits += 1;
			printf("Amount in bank: %d\n", total);
		}
		else if (amount < 0)
		{
			total = total + amount;
			withdrawl += 1;
			printf("Amount in bank: %d\n", total);
		}
		
	printf("input the amount for transaction (positive for deposits, negative for withdrawals). To exit press 0 \n");
	scanf("%d", &amount);	
	}
	while (amount != 0);
	
	printf("Final Balance = %d\n", total);
	printf("Number of deposits = %d\n", deposits);
	printf("Number of withdraws = %d", withdrawl);
	return 0;
}




