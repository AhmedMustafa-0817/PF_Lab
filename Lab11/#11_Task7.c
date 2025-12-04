#include<stdio.h>
#include<string.h>

struct department {
	char name[20];
	int blockNo;
};

struct student {
	char name[20];
	int id;
	float cgpa;
	struct department dept;
};

int main() {
	struct student std;
	fgets(std.name, 20, stdin);
	std.name[strcspn(std.name, "\n")] = '\0';
	scanf(" %d", &std.id);
	scanf(" %f", &std.cgpa);
	getchar();
	fgets(std.dept.name, 20, stdin);
	std.dept.name[strcspn(std.dept.name, "\n")] = '\0';
	scanf(" %d", &std.dept.blockNo);
	printf("%s is from %s department and has a %f CGPA ", std.name, std.dept.name, std.cgpa);
	return 0;
}
