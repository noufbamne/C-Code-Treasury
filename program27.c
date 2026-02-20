#include<stdio.h>
void main()
{
    int n, sum = 0, rightmost_digit;

    printf("Enter in an integer : ");
    scanf("%d",&n);

    do
    {
        rightmost_digit = n % 10;
        sum += rightmost_digit;
        n /= 10;

    }
    while (n > 0);
    
    printf("The sum of the digits is %d.\n", sum);
}