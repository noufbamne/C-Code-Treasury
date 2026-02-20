// computing the factorial
#include<stdio.h>
void main()
{
    int n, nsave, factorial;
    printf("Enter a positive integer : ");
    scanf("%d", &n);

    nsave = n;
    factorial = 1;
    while(n > 1)
    {
        factorial = factorial * n;
        n--;
    }
    printf("The Factorial of %d is = %d.\n",nsave , factorial);
}