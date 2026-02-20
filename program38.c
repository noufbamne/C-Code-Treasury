// A better-loking program to calculate squares
#include<stdio.h>
void main()
{
    int i;

    printf("Table of Results \n\n");
    printf("   1   1 squared\n");
    printf("   -   ---------\n");

    for ( i = 1; i <= 10; i++)
    {
        printf("%4d%13d\n", i , i * i);
    }
    
}