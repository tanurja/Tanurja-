
#include <stdio.h>

int main() {
    float grossSales, netSales;
    printf("Enter Gross Sales: ");
    scanf("%f", &grossSales);
    netSales = grossSales - (0.10 * grossSales);

    printf("Net Sales = %f\n", netSales);
return 0;
}