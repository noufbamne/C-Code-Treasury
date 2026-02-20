// Function declaration and prototypes
#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b;

    printf("\nEnter any number : ");
    scanf("%f", &a);

    b = square(a);
    printf("\nSquare of %f is %f.",a, b);

}

square (float x)
{
    float y;
    y = x*x;
    return (y);
}