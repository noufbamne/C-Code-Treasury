#include<stdio.h>
void main()
{
    int year;

    printf("Please enter a year : ");
    scanf("%d", &year);

    // If the "year" is divisible by 4 AND not divisible by 100, OR is divisible by 400 , it is a leap year

    if(year % 4 == 0)
    if(year % 100 != 0)

    printf("%d is leap year.",year);

    else
    if(year % 400 == 0 )
    printf("%d is a leap year.\n", year);

    else 
    printf("%d is not a leap year.\n", year);

}