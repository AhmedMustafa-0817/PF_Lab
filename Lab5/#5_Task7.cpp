# include<stdio.h>
int main()
{
	int a, b;
	printf("Enter number a, b \n");
	scanf("%d", &a);
	scanf(" %d", &b);
	printf("a + b = %d\n", a+b);
	printf("a - b = %d\n", a-b);
	printf("a x b = %d\n", a*b);
	printf("quotient for a / b = %d\n", a/b);
	printf("Remainder for a + b = %d", a%b);
	
	return 0;
}
