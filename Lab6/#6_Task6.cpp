#include<stdio.h>
int main()
{
	int grade, count = 0, count1 = 0, count2 = 0, belowCount = 0, sum = 0;
	printf("Enter student grade ");
	scanf("%d", &grade);
	do {
	printf("The grade is %d\n", grade);
	sum += grade;
	count += 1;
	if (grade>70)
	{
		count1 += 1;
	}
	else if ((grade>=50) and (grade<=70))
	{
		count2 += 1;
	}
	else
	{
		belowCount += 1;
	}
	printf("Enter grade for the next student. Press -1 to exit ");
	scanf("%d", &grade);	
	}
	while (grade!= -1);
	
	printf("The average grade is %d ", (sum/count));
	printf("Grades above 70 have been entered %d times\n", count1);
	printf("Grades above 50 & below 70 have been entered %d times\n", count2);
	printf("Grades below 50 have been entered %d times\n", belowCount);
	return 0;
}
