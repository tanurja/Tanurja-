#include <stdio.h>

int main() {
    int num1, num2;
    int largest, smallest;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    largest = (num1 > num2) ? num1 : num2;
    smallest = (num1 < num2) ? num1 : num2;

    printf("The largest number is: %d\n", largest);
    printf("The smallest number is: %d\n", smallest);

    return 0;
}