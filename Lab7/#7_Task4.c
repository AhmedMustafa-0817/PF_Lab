#include<stdio.h>
int main ()
{
	int score[10] = {87, 99, 54, 25, 65, 80, 40, 75, 78, 70};
	int n = 10, temp;
	float median;
	printf("Student Scores:\n");
	for (int i =0 ; i<=9 ; i++) {
		printf("%d ", score[i]);
	}
	
	for (int x =1 ; x <= 10 ; x++) {   // bubble sort
		n = n-1;
		for (int y =0; y< n ; y++)
		{
			if (score[y] > score[y+1]) {
				temp = score[y+1];
				score[y+1] = score[y];
				score[y] = temp;
			}
		}
	}
	median = (score[4] + score[5]);
	median = median / 2;
	printf("\nStudent scores in ascending order\n");
	for (int i =0 ; i<=9 ; i++) {
		printf("%d ", score[i]);
	}
	
	printf("\nThe median score is %.1f ", median);
	return 0;
}
