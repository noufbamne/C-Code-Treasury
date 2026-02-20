// Program to find the sum of integers from 1 to 100 through max_value

#include<stdio.h>
#define max_value 100
void main()
{
    int i, sum = 0;

    for ( i = 1; i <= max_value; i++)
    sum += i;
    
    printf("The sum of integers from 1 to %d is = %d\n",max_value, sum );
    printf("\n\nThis is confirmed by the Gauss method: %d\n",(max_value * (max_value + 1)) / 2);

}