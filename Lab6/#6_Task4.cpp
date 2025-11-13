#include<stdio.h>
int main()
{
	char answer, letter;
	int Tcount=0, Vcount =0;
	do 
	{
		printf("Enter letter ");
		scanf(" %c", &letter);
		Tcount += 1;
		switch (letter) {
			case('a'):
			case('e'):
			case('i'):
			case('o'):
			case('u'):
			case('A'):
			case('E'):
			case('I'):
			case('O'):
			case('U'):
				Vcount += 1;
				break;
		}
		printf("Do you want to continue. y or n\n");
		scanf(" %c", &answer);
	}
	while (answer == 'y');
	
	printf("Total number of vowels entered are %d ", Vcount);
	printf("Total number of consonants entered are %d ", (Tcount-Vcount));

	return 0;
}

