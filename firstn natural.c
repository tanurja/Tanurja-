#include<stdio.h>

int main()
{int n,i;
   
    printf("enter value of n");
    scanf("%d", &n);
    printf("the first n natural numbers\n");
    for (i =1; i<=n; i++)
    {printf("%d\n" ,i);}
    return 0;
}