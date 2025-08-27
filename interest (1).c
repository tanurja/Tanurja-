#include<stdio.h>

int main()
{float p,r,n,i;
    printf("calculate the interest enter p");
    scanf ("%f ", &p);
    printf("enter r");
    scanf ("%f ", &r);
    printf("enter n");
    scanf("%f",&n);
       i= p*r*n/100;
    printf("interest is %f ",i);
    return 0;
}