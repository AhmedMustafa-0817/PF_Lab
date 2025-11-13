#include<stdio.h>
int main ()
{
	int ID[10], id, index=0;
	for (int i =0; i<= 9; i++)
	{
		printf("Enter ID ");
		scanf("%d", &ID[i]);
		while (ID[i] < 100 || ID[i] > 999)
		{
			printf("Re-enter ID of 3 digits\n");
			scanf("%d", &ID[i]);
		}
	}
	printf("Enter ID to remove\n");
	scanf("%d", &id);
	char found = 'F';
	while (found != 'T')
	{
		if (ID[index] == id)
		{
			found = 'T';
			ID[index] = 0;
		}
		else {
			index += 1;
		}
	}
	if (index != 9)
	{
		for (int x = index; x<9; x++)
		{
			ID[x] = ID[x+1];
		}
		ID[9] = 0;
	}
	printf("Updated list of IDs\n");
	for (int i = 0 ; i<= 9; i++)
	{
		printf("%d ", ID[i]);
	}
	return 0;
}
