#include<stdio.h>
void main()
{
    int n , rightmost_digit;

    printf("Type in an integer : ");
    scanf("%d", &n);

    printf("%d backwords is : ", n);
    do
    {
        rightmost_digit = n % 10;
        printf("%d",rightmost_digit);
        n /= 10;
    } 
    while (n > 0);
    printf("\n");
    
}