#include<stdio.h>

int main()
{

int n,i;
printf("enter a value of n\n");
scanf("%d",&n);
    printf("first n even numbers\n");
    for(i=1;i<=n; i++)
    {printf("%d\n", 2*i );}  
     return 0;
}