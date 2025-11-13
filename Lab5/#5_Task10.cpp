# include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter number x, y, z \n");
	scanf(" %d", &x);
	scanf(" %d", &y);
	scanf(" %d", &z);
	if (x>y&&x>z) 
	{
	printf("Number x (%d) is largest\n", x);
	}
	else if (y>x && y>z)
	{
		printf("Number y (%d) is largest\n", y);
	}
	else
	{
		printf("Number z (%d) is largest", z);
	}

	return 0;
}
