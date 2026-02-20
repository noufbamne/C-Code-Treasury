// Write a program to determine whether a number is prime or not.
// A prime number is one which is divisible by only by 1 or itself

#include<stdio.h>
void main()
{
    int num, i;

    printf("Enter a number : ");
    scanf("%d", &num);

    i = 2;
    while (i <= num -1)
    {
       if (num % i == 0)
       {
        printf("Not a prime number.");
        break;
       }
       i++;
    }
    if (i == num)
    printf("Prime number.");
   
}