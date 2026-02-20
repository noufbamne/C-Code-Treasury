#include<stdio.h>
void main()
{
    int n;

    printf("Enter any number : ");
    scanf("%d",&n);

    if(n % 2 != 0)
    printf("%d is an odd number.\n",n);

    else
    printf("%d is a even number.\n", n);
}