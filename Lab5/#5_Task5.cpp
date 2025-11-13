# include<stdio.h>
int main()
{
	int num;
	char grade;
	printf("Enter the course number ");
	scanf("%d", &num);
	switch(num)
	{
		case(1):
		printf("Enter the grade ");
		scanf(" %c", &grade);
		switch(grade)
			{
				
			case('A'):
			printf("Excellent performance");
			break;
			
			case('B'):
			printf("Good, you're almost there");
			break;	
			
			case('C'):
			printf("Not bad but you could improve, work harder");
			break;
			
			case('D'):
			printf("Just pass, work harder");
			break;
			
			case('F'):
			printf("You have failed the course");
			break;
			
			default:
			printf("Wrong grade entered");
			break;
			
			}
		break;
		
		case(2):
		printf("Enter the grade ");
		scanf(" %c", &grade);
		switch(grade)
			{
				
			case('A'):
			printf("Excellent performance");
			break;
			
			case('B'):
			printf("Good, you're almost there");
			break;	
			
			case('C'):
			printf("Not bad but you could improve, work harder");
			break;
			
			case('D'):
			printf("Just pass, work harder");
			break;
			
			case('F'):
			printf("You have failed the course");
			break;
			
			default:
			printf("Wrong grade entered");
			break;
		}
		break;
			
		case(3):
		printf("Enter the grade ");
		scanf(" %c", &grade);
		switch(grade)
		{
				
			case('A'):
			printf("Excellent performance");
			break;
			
			case('B'):
			printf("Good, you're almost there");
			break;	
			
			case('C'):
			printf("Not bad but you could improve, work harder");
			break;
			
			case('D'):
			printf("Just pass, work harder");
			break;
			
			case('F'):
			printf("You have failed the course");
			break;
			
			default:
			printf("Wrong grade entered");
			break;
	    }
		break;
	}
	return 0;
}
