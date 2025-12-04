#include<stdio.h>

struct employee {
	int id;
	char name[20];
	float salary;
	char position[20];
};

int main() {
	int num, i;
	float highest = 0.0;
	struct employee Emp[5];
	for ( i = 0; i <5; i++) {
		printf("\nEnter details for Employee %d\n", i+1);
		printf("Id: ");
		scanf("%d", &Emp[i].id);
		getchar();
		printf("Name: ");
		fgets(Emp[i].name, 20, stdin);
		printf("Salary: ");
		scanf(" %f", &Emp[i].salary);
		getchar();
		if (Emp[i].salary > highest) {
			highest = Emp[i].salary;
			num = i+1;
		}
		printf("Position: ");
		fgets(Emp[i].position, 20, stdin);
	}
	printf("\nEmployee with highest salary has ID %d", num);
	return 0;
}
