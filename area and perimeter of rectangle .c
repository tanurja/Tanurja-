#include<stdio.h>
int main()
{
    float l,area,p,b;
    printf("enter leanth of reclangle in meter:");
    scanf("%f",&l);
    printf("enter widthof reclangle in meter:");
    scanf("%f",&b);
    p=2*(l+b);
    printf("perameter of rectangle is:%.2f m\n",p);
    area=l*b;
    printf("area of rectangle is %.2fm^2",area);
    return 0;
}