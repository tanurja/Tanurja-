#include <stdio.h>

int main() {
    float x, y, z, total, average;

    
printf("Enter marks of subject 1: ");
scanf("%f", &x);

    printf("Enter marks of subject 2: ");
 scanf("%f", &y);

    printf("Enter marks of subject 3: ");
    scanf("%f", &z);
    total = x + y + z;
    average = total / 3.0;
    printf("\nTotal Marks = %.2f", total);
    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}