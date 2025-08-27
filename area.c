#include<stdio.h>

int main()
{ 
float area,l,p,b;

    printf("enter length");
    scanf("%f",&l);
    printf("enter breath");
    scanf("%f",&b);
    area=l*b;
    p= 2*(l +b);
    printf("area is %f and perimeteris %f",area, p);   
     return 0;
}