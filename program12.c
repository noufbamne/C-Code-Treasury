// program to print the real average of three integers

#include<stdio.h>
void main()
{
    int i = 5, j = 8, k = 13;
    double average;

    average = (i + j + k)/3;

    printf("The average of %d, %d and %d is %f\n", i, j, k, average);
    
}