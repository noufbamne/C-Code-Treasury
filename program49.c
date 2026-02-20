// Program to generate 1000 random integers between 0 and 9999(4 digits)

#include<stdio.h>
void main()
{
    long int random_number= 4321;

    int i;

    for (i = 1; i <= 1000; i++)
    {
        random_number = ((random_number * random_number) / 100L) % 10000L;
        printf("Random number %d is %d",1, random_number);
    }
    
}