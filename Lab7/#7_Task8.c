//#include<stdio.h>
//#include<string.h>
//int main ()
//{
//	char x[100];
//	printf("Enter string\n");
//	fgets(x, sizeof(x), stdin);
//	for (int i = 0; i<strlen(x); i++)
//	{
//		switch (x[i]) {
//			case 'a':
//				x[i] = 'A';
//				break;
//			case 'e':
//				x[i] = 'E';
//				break;
//			case 'i':
//				x[i] = 'I';
//				break;
//			case 'o':
//				x[i] = 'O';
//				break;
//			case 'u':
//				x[i] = 'U';
//				break;
//		}
//	}
//	printf("Modified String: %s", x);
//	return 0;
//}


#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main ()
{
	char x[100];
	printf("Enter string\n");
	fgets(x, sizeof(x), stdin);
	for (int i = 0; i<strlen(x); i++)
	{
		switch (x[i]) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				x[i] = toupper(x[i]);
				break;
		}
	}
	printf("Modified String: %s", x);
	return 0;
}
