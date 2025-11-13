# include<stdio.h>
int main()
{
	int x,y,z;
	printf("Enter number x, y, z \n");
	scanf(" %d", &x);
	scanf(" %d", &y);
	scanf(" %d", &z);
	(x>y&&x>z)? printf("Number x is largest") : (y>x && y>z)? printf("Number y is largest") : printf("Number z is largest");
	return 0;
}
