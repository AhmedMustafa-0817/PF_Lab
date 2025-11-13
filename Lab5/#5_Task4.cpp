#include<stdio.h>
int main()
{
	int m;
	int n;
	
	printf("Enter number1 ");
	scanf("%d", &m);
	printf("Enter number2 ");
	scanf("%d", &n);
	
	(m > n)? (printf("%d is greater then %d", m, n)) : (printf("%d is greater then %d", n, m));
	
	return 0;
}

