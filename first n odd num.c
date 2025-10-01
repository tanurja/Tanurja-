#include<stdio.h>

int main()
{

int n,i;
printf("enter a value of n\n");
scanf("%d",&n);
    printf("first n odd numbers\n");
    for(i=1;i<=n; i++)
    {printf("%d\n", 2*i - 1);}  
     return 0;
}