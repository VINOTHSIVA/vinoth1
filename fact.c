#include<stdio.h>
void main()
{
    int n,i,fact=1;
    printf("enter the integer");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    printf("%d",fact);
}
