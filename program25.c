#include<stdio.h>
void main()
{
    int n, nsave, counter = 0;

    printf("Enter a positive Integer  : ");
    scanf("%d", &n);

    nsave = n;
    while (n > 1)
    {
        if (n %2)
        n = n * 3 + 1;

        else
        n /= 2;
        counter++;

        printf("Step %4d : n = %4d\n", counter ,n);
    }
    printf("\n\n%d went to 1 in %d steps.\n",nsave ,counter);
}