#include<stdio.h>

float average(int a, int b, int c) {
    float avg;
    avg = (a + b + c) / 3.0;   
    return avg;
}

int main() {
    int x = 10, y = 12, z = 30;
    float result;

    result = average(x, y, z);
    printf("Average = %.2f", result);

    return 0;
}

