# include<stdio.h>
int main()
{
	int a, b;
	printf("Enter number a, b \n");
	scanf("%d", &a);
	scanf(" %d", &b);
	printf("0 means False and 1 means True\n");
	printf("a == b : %d\n", a==b);
	printf("a > b : %d\n", a>b);
	printf("a < b : %d\n", a<b);
	printf("a != b = %d\n", a!=b);
	printf("a >= b : %d\n", a>=b);
	printf("a <= b : %d\n", a<=b);
	return 0;
}
