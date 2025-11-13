#include<stdio.h>
#include<string.h>
int main()
{
	char name[100], ch;
	int count = 0;
	printf("name: ");
	fgets(name, sizeof(name), stdin);
	printf("String entered is %s", name);
	printf("Character to find ");
	scanf("%c", &ch);
	for (int i = 0; i < strlen(name); i++)
	{
		if (name[i] == ch)
		{
			count += 1;
		}
	}
	if (count == 0)
	{
		printf("This character doesnt occur in this string ");
	}
	else
	{
		printf("Character occured %d times", count);
	}
	return 0;
}

