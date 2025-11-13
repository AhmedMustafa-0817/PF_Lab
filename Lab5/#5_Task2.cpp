#include<stdio.h>
int main()
{
	int a;
	int x;
	int y;
	printf("Enter x ");
	scanf("%d", &x);
	printf("Enter y ");
	scanf(" %d", &y);
	
	a = (x>5) && (y<10);
	printf("First condition is %d \n",a);
	
		
	a = (x==10) || (y==5);
	printf("Second condition is %d \n",a);
	
		
	a = !(x==y);
	printf("Third condition is %d \n",a);
	
	return 0;
	
}

