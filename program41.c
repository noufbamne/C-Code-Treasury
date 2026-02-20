// Calculating the sum of integers 1 through n

#include<stdio.h>
void main()
{
    int i, n, sum = 0 ;

    printf("Please type in a positive integer : ");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    sum += i;
    {
        printf("\nThe sum of the integers from 1 to %d is %d.\n", n , sum);
    }
    
}