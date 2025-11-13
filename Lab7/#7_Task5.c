#include<stdio.h>
int main()
{
	int grade[10];
	int sum, highest = -1, lowest = 101, Hindex, Lindex;
	for (int i = 0 ; i <= 9 ; i++)
	{
		printf("Enter grade: ");
		scanf("%d", &grade[i]);
		printf("Grade for student %d is %d\n", (i+1), grade[i]);
		sum = sum + grade[i];
		if (grade[i]>highest)
		{
			highest = grade[i];
			Hindex = i;
		}
		if (grade[i]<lowest)
		{
			lowest = grade[i];
			Lindex = i;
		}
	}
	printf("The average grade is %d\n", (sum/10));
	printf("The highest grade is %d, on index %d\n", highest, (Hindex+1));
	printf("The lowest grade is %d, on index %d\n", lowest, (Lindex+1));
	
	printf("What change would you like to make in the lowest grade? Enter grade. \n");
	scanf(" %d", &grade[Lindex]);
	printf("Updated student grades:\n");
	for (int i = 0; i<= 9; i++)
	{
		printf("%d  ", grade[i]);
	}
	return 0;
}
