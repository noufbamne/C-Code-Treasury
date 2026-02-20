// Program to find the sum of integers from 1 to 100

#include<stdio.h>
void main()
{
    int i, sum = 0, n = 100;

    for ( i = 1; i <= n; i++)
    sum += i;
    
    printf("The sum of integers from 1 to %d is = %d\n",n, sum );
    printf("\n\nThis is confirmed by the Gauss method: %d\n",(n * (n+1)) / 2);

}