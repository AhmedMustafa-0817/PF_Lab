#include<stdio.h>
int movieCount=0;

struct Movie {
	char title[20];
	char genre[20];
	char director[20];
	int year;
	float rating;
};

struct Movie movie[10];

void addMovie(int num) {
	int i;
	for (i=0; i<num; i++) {
		movieCount += 1;
		printf("Name: ");
		fgets(movie[i].title, 20, stdin);
		printf("Genre: ");
		fgets(movie[i].genre, 20, stdin);
		movie[i].genre[strcspn(movie[i].genre, "\n")] = '\0';
		printf("Director: ");
		fgets(movie[i].director, 20, stdin);
		printf("Release Year: ");
		scanf(" %d", &movie[i].year);
		printf("Rating: ");
		scanf(" %f", &movie[i].rating);
		getchar();
	}
}

void searchByGenre(char name[20]) {
	int i;
	for (i=0; i<movieCount; i++) {
		if (strcmp(movie[i].genre, name) == 0) {
			printf("%s\n", movie[i].title);
		}
	}
}

void displayMovies() {
	int i;
	printf("Movie names: \n");
	for (i=0; i<movieCount; i++) {
		printf("%d: %s\n", i+1 , movie[i].title);
	}
}


int main() {
	char Gname[20];
	int num=0;
	while (num!= 4) {
		printf("Enter 1 to Add movies\nEnter 2 to search by genre\nEnter 3 to Display all movies\nEnter 4 to End\n");
		scanf("%d", &num);
		switch(num) {
			case 1:
				printf("Enter how many movies you want to add\n");
				scanf(" %d", &num);
				getchar();
				addMovie(num);
				break;
			case 2:
				printf("Genre to search: ");
				scanf(" %s", Gname);
				searchByGenre(Gname);
				break;
			case 3:
				displayMovies();
				break;
			case 4:
				return 0;
				break;
		}
	}
	return 0;
}
