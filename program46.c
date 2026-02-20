// Newton-Raphson method for calculating square roots

#include<stdio.h>
#define EPSILON 0.0001
void main()
{
    float n, guess;

    printf("What number you want to take square root of?");
    scanf("%f", &n);
    
    // verify the input

    while (n < 0.0)
    {
       printf("Please enter a non-negative number : ");
       scanf("%f", &n); 
    }

    // calculate the square root

    for (guess = n /2.0;
        guess * guess - n > EPSILON || guess * guess - n < - EPSILON;
        guess = (guess + n / guess) /2.0
        );
    
    printf("I calculate the square root of %f to be %.4f",n,guess);
    
}