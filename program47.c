// Generate addition table for a number n

#include<stdio.h>
void main()
{
    int i, j, n;

    printf("What number do you want a table for ?");
    scanf("%d", &n);
    printf("\n");

    j = n;
    for (i = 0; i <= n; i++)
    {
        printf("%3d + %3d = %3d\n", i, j, n);
        j--;
    }
    
}