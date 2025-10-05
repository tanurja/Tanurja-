#include <stdio.h>

int main() {
    float gross, discount, net;

    printf("Enter Gross Sales ");
    scanf("%f", &gross);

    if (gross > 20000)
        discount = gross * 0.15;
    else if (gross > 10000)
        discount = gross * 0.10;
    else
        discount = gross * 0.05;

    net = gross - discount;

    printf("\nGross Sales: %.2f", gross);
    printf("\nDiscount: %.2f", discount);
    printf("\nNet Sales: %.2f\n", net);

    return 0;
}