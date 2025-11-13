#include<stdio.h> 

int main() {
	int arr[5];
	int *p = arr;
	for (int i =0; i< 5; i++) {
		printf("Enter arr[%d] value: ", i);
		scanf(" %d", &arr[i]);
		printf("Address of Array [%d] is %d and value is %d\n", i, (p+i) ,*(p+i));
	}
	return 0;
}


