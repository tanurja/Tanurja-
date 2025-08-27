#include<stdio.h>

int main()
{   int dollar, rupees;
    printf("enter value to change dollar into rupees\n");
    scanf("%d", &dollar);
    rupees= 48*dollar;
    printf("the %d dollars is equal to %d rupees" ,dollar,rupees);
    return 0;
}