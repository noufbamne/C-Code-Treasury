#include<stdio.h>
void main()
{
    int a,b;

    printf("Enter an integer : ");
    scanf("%d", &a);

    printf("Enter another integer : ");
    scanf("%d", &b);

    if(a > b)
    printf("%d is greater than %d.\n", a , b);

    else
    printf("%d is smaller than %d.\n", a, b);
}